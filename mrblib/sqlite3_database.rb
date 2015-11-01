module SQLite3
  class Database
    ## TODO: Implement results_as_hash
    attr_accessor :results_as_hash

    class << self
      alias open new

      def quote( string )
        string.gsub("'", "''")
      end
    end

    def initialize(filename, &block)
      @results_as_hash = false
      @closed = false
      @transaction_active = false

      status, db = SQLite.sqlite3_open(filename)
      if status == SQLite::SQLITE_OK
        @native_db = db
      else
        SQLite3.raise_sqlite_error(@native_db, status)
      end

      if block_given?
        block[self]
        SQLite.sqlite3_close(@native_db)
      end
    end

    def execute(sql, &block)
      stmt = SQLite3::Statement.new(self, sql)

      stmt.step
      if stmt.done?
        return block_given? ? stmt : []
      end

      rows = []
      if block_given?
        stmt.each(&block)
      else
        stmt.each do |row|
          rows.push(row)
        end
      end

      if block_given?
        stmt
      else
        rows
      end
    end

    def changes
      SQLite.sqlite3_changes(@native_db)
    end

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

    def rollback
      @transaction_active = false
      self.execute('rollback')
    end

    def commit
      @transaction_active = false
      self.execute('commit')
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

    def complete?(sql)
      SQLite.sqlite3_complete(sql) == 0
    end

    def prepare(sql)
      SQLite3::Statement.new(self, sql)
    end
  end
end
