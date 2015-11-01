module SQLite3
  class Statement
    include Enumerable

    def initialize(db, sql)
      @db = db
      status, @native_stmt, @remainder = SQLite.sqlite3_prepare_v2(@db.instance_variable_get(:@native_db), sql, -1)
      SQLite3.raise_sqlite_error(@db, status)
      @done = false
      @closed = false
      @results_as_hash = @db.results_as_hash
    end

    def assert_open
      raise SQLite3::Exception.new('Attempted to use a closed statement')
    end

    # Returns true if the statement is currently active, meaning it has an open result set
    def active?
      !done?
    end

    def bind_param(which, value)
      status = SQLite::SQLITE_OK

      unless which.kind_of?(Fixnum)
        which = SQLite.sqlite3_bind_parameter_index(@native_stmt, which.to_s)
        if which == 0
          raise SQLite3::Exception.new("No such bind parameter #{which}")
        end
      end

      case value
      when Fixnum
        status = SQLite.sqlite3_bind_int(@native_stmt, which, value)
      when Float
        status = SQLite.sqlite3_bind_double(@native_stmt, which, value)
      when TrueClass
        status = SQLite.sqlite3_bind_int(@native_stmt, which, 1)
      when FalseClass
        status = SQLite.sqlite3_bind_int(@native_stmt, which, 0)
      when SQLite3::Blob
        status = SQLite.sqlite3_bind_blob(@native_stmt, which, value, value.length)
      when String
        status = SQLite.sqlite3_bind_text(@native_stmt, which, value, value.length)
      when NilClass
        status = SQLite.sqlite3_bind_null(@native_stmt, which)
      else
        raise SQLite3::Exception.new("Can't prepare #{value.type}")
      end

      SQLite3.raise_sqlite_error(@db, status)
    end

    def bind_parameter_count
      SQLite.sqlite3_bind_parameter_count(@native_stmt)
    end

    def bind_params(*varbinds)
      index = 1
      varbinds.flatten.each do |var|
        if var.kind_of?(Hash)
          var.each { |key, val| bind_param key, val }
        else
          bind_param index, var
          index += 1
        end
      end
    end

    def clear_bindings!
      SQLite.sqlite3_clear_bindings(@native_stmt)
    end

    def close
      unless closed?
        @closed = true
        # Ignore the status returned. Step would have raised it already.
        SQLite::sqlite3_finalize(@native_stmt)
      end
    end

    def closed?
      @closed
    end

    def column_count
      SQLite.sqlite3_column_count(@native_stmt)
    end

    def column_decltype(index)
      SQLite::sqlite3_column_decltype(@native_stmt, index)
    end

    def column_name(index)
      SQLite::sqlite3_column_origin_name(@native_stmt, index)
    end

    def columns
      unless @columns
        @columns = []
        (0...(self.column_count)).each do |index|
          @columns.push(self.column_name(index))
        end
      end
      @columns
    end

    def done?
      @done
    end

    def each(&block)
      if block_given?
        until self.done?
          row = self.step
          block[row] unless row.nil?
        end
      else
        self.enum_for(:each)
      end
    end

    # def execute
    # end
    #
    # def execute!
    # end

    def remainder
      @remainder
    end

    def reset!
      @closed = false
      @columns = nil
      @types = nil
      @done = false
      status = SQLite::sqlite3_reset(@native_stmt)
    end

    def step
      status = SQLite.sqlite3_step(@native_stmt)

      @done = (status == SQLite::SQLITE_DONE)
      return nil if @done

      if !@done && status != SQLite::SQLITE_ROW
        SQLite3.raise_sqlite_error(@db, status)
      end

      row = @results_as_hash ? {} : []
      (0...(self.column_count)).each do |index|
        val = nil
        case SQLite.sqlite3_column_type(@native_stmt, index)
        when SQLite3::ColumnType::INTEGER
          # TODO: Use 64-bit integers?
          val = SQLite.sqlite3_column_int(@native_stmt, index)
        when SQLite3::ColumnType::FLOAT
          val = SQLite.sqlite3_column_double(@native_stmt, index)
        when SQLite3::ColumnType::BLOB
          val = SQLite.sqlite3_column_blob(@native_stmt, index)
        when SQLite3::ColumnType::NULL
          val = nil
        when SQLite3::ColumnType::TEXT
          val = SQLite.sqlite3_column_text(@native_stmt, index)
        else
          val = SQLite.sqlite3_column_text(@native_stmt, index)
        end

        if @results_as_hash
          row[self.column_name(index)] = val
        else
          row.push(val)
        end
      end
      row
    end

    def types
      unless @types
        @types = []
        (0...(self.column_count)).each do |index|
          @types.push(self.column_decltype(index))
        end
      end
      @types
    end

  end
end
