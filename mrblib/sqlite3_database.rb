module SQLite3
  class Database
    attr_accessor :results_as_hash

    class << self
      alias open new

      def quote( string )
        string.gsub("'", "''")
      end
    end

    def initialize(filename, opt = {}, &block)
      @results_as_hash = false
      @closed = false
      @transaction_active = false

      status, db = SQLite.sqlite3_open(filename)
      if status == SQLite::SQLITE_OK
        @native_db = db
      else
        SQLite3.raise_sqlite_error(@native_db, status)
      end
      
      if opt[:results_as_hash]
        self.results_as_hash = opt[:results_as_hash]
      end

      if block_given?
        block[self]
        self.close
      end
    end

    # def authorizer
    # end
    #
    # def authorizer=
    # end
    #
    # def busy_handler
    # end

    def busy_timeout=(ms)
      SQLite.sqlite3_busy_timeout(@native_db, ms)
    end
    alias busy_timeout busy_timeout=

    def changes
      SQLite.sqlite3_changes(@native_db)
    end

    def close
      SQLite.sqlite3_close(@native_db)
      # Use disown to prevent destruction attempt
      # when the object is GC'ed
      SQLite::Sqlite3.disown(@native_db)
      @closed = true
    end

    def closed?
      @closed
    end

    # def collation
    # end
    #
    # def collations
    # end

    def commit
      @transaction_active = false
      self.execute('commit')
    end

    def complete?(sql)
      SQLite.sqlite3_complete(sql) == 1
    end

    # def create_aggregate
    # end
    #
    # def create_aggregate_handler
    # end
    #
    # def create_function
    # end
    #
    # def define_aggregator
    # end
    #
    # def define_function
    # end
    #
    # def encoding
    # end

    def errcode
      SQLite::sqlite3_errcode(@native_db)
    end

    def errmsg
      SQLite.sqlite3_errmsg(@native_db)
    end

    def execute(sql, varbinds=[], &block)
      prepare(sql) do |stmt|
        stmt.bind_params(varbinds)

        if block_given?
          stmt.each(&block)
        else
          return stmt.to_a
        end
      end
    end

    def execute2(sql, varbinds=[], &block)
      prepare(sql) do |stmt|
        result_set = stmt.execute(*varbinds)
        if block_given?
          block[stmt.columns]
          result_set.each { |row| block[row] }
        else
          result = result_set.to_a
          result.unshift(stmt.columns)
          return result
        end
      end
    end

    def execute_batch(sql, varbinds=[])
      sql = sql.strip
      until sql.empty?
        prepare(sql) do |stmt|
          # whitespace/comment only "statements" will be closed
          unless stmt.closed?
            if varbinds.length > 0 && (varbinds.length == stmt.bind_parameter_count)
              stmt.bind_params(varbinds)
            end
            stmt.step
          end
          sql = stmt.remainder.strip
        end
      end
      nil
    end

    def get_first_row(sql, *varbinds)
      execute(sql, varbinds).first
    end

    def get_first_value(sql, *varbinds)
      execute(sql, varbinds) { |row| return row[0] }
      nil
    end

    # def interrupt
    # end
    #
    # def last_insert_row_id
    # end

    def prepare(sql, &block)
      stmt = SQLite3::Statement.new( self, sql )
      return stmt unless block_given?

      begin
        block[stmt]
      ensure
        stmt.close unless stmt.closed?
      end
    end

    def query(sql, varbinds=[])
      result = prepare(sql).execute(varbinds)
      if block_given?
        begin
          yield result
        ensure
          result.close
        end
      else
        return result
      end
    end

    # def readonly?
    # end

    def rollback
      @transaction_active = false
      self.execute('rollback')
    end

    def total_changes
      SQLite.sqlite3_total_changes(@native_db)
    end

    # def trace
    # end

    def transaction(&block)
      @transaction_active = true
      self.execute('begin')
      if block_given?
        begin
          block[self]
        rescue Exception => ex
          self.execute('rollback')
        else
          self.execute('commit')
        ensure
          @transaction_active = false
        end
      end
    end

    def transaction_active?
      @transaction_active
    end

    # def translator
    # end
    #
    # def type_translation
    # end
    #
    # def type_translation=
    # end
    #
  end
end
