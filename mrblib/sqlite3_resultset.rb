module SQLite3
class ResultSet
  include Enumerable

  # Create a new ResultSet attached to the given database, using the given sql text.
  def initialize(db, stmt)
    @db = db
    @stmt = stmt
  end

  # Closes the statement that spawned this result set.
  def close
    @stmt.close
  end

  # Queries whether the underlying statement has been closed or not.
  def closed?
    @stmt.closed?
  end

  # Returns the names of the columns returned by this result set.
  def columns
    @stmt.columns
  end

  # Required by the Enumerable mixin.
  def each(*args, &block)
    @stmt.each(*args, &block)
  end

  # Provides an internal iterator over the rows of the result set where each row is yielded as a hash.
  def each_hash
    if block_given?
      while row = next_hash
        yield row
      end
    else
      self.enum_for(:each_hash)
    end
  end

  # Query whether the cursor has reached the end of the result set or not.
  def eof?
    @stmt.done?
  end

  # Obtain the next row from the cursor.
  def next
    @stmt.step
  end

  # Return the next row as a hash.
  def next_hash
    result = @stmt.step
    return nil if result.nil?
    unless result.kind_of?(Hash)
      result_ary = result
      result = {}
      result_ary.each_with_index do |el, i|
        result[@stmt.column_name(i)] = el
      end
    end
    result
  end

  # Reset the cursor, so that a result set which has reached end-of-file can be rewound and reiterated.
  def reset(*bind_params)
    @stmt.reset!
    @stmt.bind_params(*bind_params)
  end

  # Returns the types of the columns returned by this result set.
  def types
    @stmt.types
  end
end
end
