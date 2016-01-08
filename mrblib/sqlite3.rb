module SQLite3
  # Same as string, but gets saved as a blob in SQLite,
  # rather than as TEXT
  class Blob < String; end

  module ColumnType
    INTEGER = SQLite::SQLITE_INTEGER
    FLOAT = SQLite::SQLITE_FLOAT
    BLOB = SQLite::SQLITE_BLOB
    NULL = SQLite::SQLITE_NULL
    TEXT = SQLite::SQLITE_TEXT
  end

  class Exception < StandardError; end
  class SQLException < Exception; end
  class InternalException < Exception; end
  class PermissionException < Exception; end
  class AbortException < Exception; end
  class BusyException < Exception; end
  class LockedException < Exception; end
  class MemoryException < Exception; end
  class ReadOnlyException < Exception; end
  class InterruptException < Exception; end
  class IOException < Exception; end
  class CorruptException < Exception; end
  class NotFoundException < Exception; end
  class FullException < Exception; end
  class CantOpenException < Exception; end
  class ProtocolException < Exception; end
  class EmptyException < Exception; end
  class SchemaChangedException < Exception; end
  class TooBigException < Exception; end
  class ConstraintException < Exception; end
  class MismatchException < Exception; end
  class MisuseException < Exception; end
  class UnsupportedException < Exception; end
  class AuthorizationException < Exception; end
  class FormatException < Exception; end
  class RangeException < Exception; end
  class NotADatabaseException < Exception; end

  def self.raise_sqlite_error(db, errno)
    return nil if errno == SQLite::SQLITE_OK
    klass = SQLite3::Exception
    db = db.instance_variable_get(:@native_db) if db.kind_of?(SQLite3::Database)

    case errno
    when SQLite::SQLITE_OK
      return
    when SQLite::SQLITE_ERROR
      klass =  SQLite3::SQLException
    when SQLite::SQLITE_INTERNAL
      klass =  SQLite3::InternalException
    when SQLite::SQLITE_PERM
      klass =  SQLite3::PermissionException
    when SQLite::SQLITE_ABORT
      klass =  SQLite3::AbortException
    when SQLite::SQLITE_BUSY
      klass =  SQLite3::BusyException
    when SQLite::SQLITE_LOCKED
      klass =  SQLite3::LockedException
    when SQLite::SQLITE_NOMEM
      klass =  SQLite3::MemoryException
    when SQLite::SQLITE_READONLY
      klass =  SQLite3::ReadOnlyException
    when SQLite::SQLITE_INTERRUPT
      klass =  SQLite3::InterruptException
    when SQLite::SQLITE_IOERR
      klass =  SQLite3::IOException
    when SQLite::SQLITE_CORRUPT
      klass =  SQLite3::CorruptException
    when SQLite::SQLITE_NOTFOUND
      klass =  SQLite3::NotFoundException
    when SQLite::SQLITE_FULL
      klass =  SQLite3::FullException
    when SQLite::SQLITE_CANTOPEN
      klass =  SQLite3::CantOpenException
    when SQLite::SQLITE_PROTOCOL
      klass =  SQLite3::ProtocolException
    when SQLite::SQLITE_EMPTY
      klass =  SQLite3::EmptyException
    when SQLite::SQLITE_SCHEMA
      klass =  SQLite3::SchemaChangedException
    when SQLite::SQLITE_TOOBIG
      klass =  SQLite3::TooBigException
    when SQLite::SQLITE_CONSTRAINT
      klass =  SQLite3::ConstraintException
    when SQLite::SQLITE_MISMATCH
      klass =  SQLite3::MismatchException
    when SQLite::SQLITE_MISUSE
      klass =  SQLite3::MisuseException
    when SQLite::SQLITE_NOLFS
      klass =  SQLite3::UnsupportedException
    when SQLite::SQLITE_AUTH
      klass =  SQLite3::AuthorizationException
    when SQLite::SQLITE_FORMAT
      klass =  SQLite3::FormatException
    when SQLite::SQLITE_RANGE
      klass =  SQLite3::RangeException
    when SQLite::SQLITE_NOTADB
      klass =  SQLite3::NotADatabaseException
    end

    raise klass.new(SQLite.sqlite3_errmsg(db))
  end
end
