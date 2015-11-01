module SQLite3
  class Database
    ## TODO: Implement results_as_hash
    # attr_accessor :results_as_hash

    class << self
      alias open new

      def quote( string )
        string.gsub("'", "''")
      end
    end

    def initialize(filename, &block)
      status, db = SQLite.sqlite3_open(filename)
      if status == SQLite::SQLITE_OK
        @native_db = db
      else
        raise SQLite3::Exception.new("Error opening database #{filename}")
      end

      if block_given?
        block[self]
        SQLite.sqlite3_close(@native_db)
      end
    end

    def execute(sql, &block)
      status, stmt, rest = SQLite.sqlite3_prepare_v2(@native_db, sql, -1)
      SQLite3.raise_sqlite_error(@native_db, status)

      status = SQLite.sqlite3_step(stmt)
      if status == SQLite::SQLITE_DONE
        return nil
      end

      col_count = SQLite.sqlite3_column_count(stmt)
      rows = []
      while SQLite::SQLITE_ROW == status
        row = []
        (0...col_count).each do |index|
          row.push SQLite.sqlite3_column_text(stmt, index)
        end

        if block_given?
          block[row]
        else
          rows.push row
        end

        status = SQLite.sqlite3_step(stmt)
      end

      unless status == SQLite::SQLITE_DONE
        SQLite3.raise_sqlite_error(@native_db, status)
      end

      if block_given?
        nil
      else
        rows
      end
    ensure
      SQLite.sqlite3_finalize(stmt)
      SQLite::Sqlite3Stmt.disown(stmt)
    end

    def close
      SQLite.sqlite3_close(@native_db)
      # Use disown to prevent destruction attempt
      # when the object is GC'ed
      SQLite::Sqlite3.disown(@native_db)
    end
  end
end
