load 'fixture.rb'

TestFixture.new("SQLite3::Database") do
  def self.db
    @db
  end

  def self.setup
    @db = SQLite3::Database.new(':memory:')
  end

  describe 'segv' do
    it 'works' do
      assert_raises(TypeError) { SQLite3::Database.new 1 }
    end
  end

  describe 'bignum' do
    it 'is not supported on MRuby' do
      # num = 4907021672125087844
      # db.execute 'CREATE TABLE "employees" ("token" integer(8), "name" varchar(20) NOT NULL)'
      # db.execute "INSERT INTO employees(name, token) VALUES('employee-1', ?)", [num]
      # rows = db.execute 'select token from employees'
      # assert_equal num, rows.first.first
    end
  end

  describe 'blob' do
    it 'works' do
      @db.execute("CREATE TABLE blobs ( id INTEGER, hash BLOB(10) )")
      blob = SQLite3::Blob.new("foo\0bar")
      @db.execute("INSERT INTO blobs VALUES (0, ?)", [blob])
      assert_equal [[0, blob, blob.length, blob.length*2]], @db.execute("SELECT id, hash, length(hash), length(hex(hash)) FROM blobs")
    end
  end
  
  describe 'get_first_row' do
    it 'works' do
      assert_equal [1], @db.get_first_row('SELECT 1')
    end
  end
  
  describe 'get_first_row_with_type_translation_and_hash_results' do
    it 'works' do
      @db.results_as_hash = true
      assert_equal({0=>1, "1"=>1}, @db.get_first_row('SELECT 1'))
    end
  end
  
  describe 'execute_with_type_translation_and_hash' do
    it 'works' do
      @db.results_as_hash = true
      rows = []
      @db.execute('SELECT 1') { |row| rows << row }
  
      assert_equal({0=>1, "1"=>1}, rows.first)
    end
  end
  
  describe 'encoding' do
    it 'is not supported on MRuby' do
      # assert @db.encoding, 'database has encoding'
    end
  end
  
  describe 'changes' do
    it 'works' do
      @db.execute("CREATE TABLE items (id integer PRIMARY KEY AUTOINCREMENT, number integer)")
      assert_equal 0, @db.changes
      @db.execute("INSERT INTO items (number) VALUES (10)")
      assert_equal 1, @db.changes
      @db.execute_batch(
        "UPDATE items SET number = (number + :nn) WHERE (number = :n)",
        {"nn" => 20, "n" => 10})
      assert_equal 1, @db.changes
      assert_equal [[30]], @db.execute("select number from items")
    end
  end
  
  describe 'batch_last_comment_is_processed' do
    it 'works' do
      # FIXME: nil as a successful return value is kinda dumb
      assert_nil @db.execute_batch <<-eosql
        CREATE TABLE items (id integer PRIMARY KEY AUTOINCREMENT);
        -- omg
      eosql
    end
  end
  
  describe 'new' do
    it 'works' do
      db = SQLite3::Database.new(':memory:')
      assert db
    end
  end
  
  describe 'new_yields_self' do
    it 'works' do
      thing = nil
      SQLite3::Database.new(':memory:') do |db|
        thing = db
      end
      assert_instance_of(SQLite3::Database, thing)
    end
  end
  
  describe 'new_with_options' do
    it 'Not supported' do
      # determine if Ruby is running on Big Endian platform
      # utf16 = ([1].pack("I") == [1].pack("N")) ? "UTF-16BE" : "UTF-16LE"
      # 
      # if RUBY_VERSION >= "1.9"
      #   db = SQLite3::Database.new(':memory:'.encode(utf16), :utf16 => true)
      # else
      #   db = SQLite3::Database.new(Iconv.conv(utf16, 'UTF-8', ':memory:'),
      #                              :utf16 => true)
      # end
      # assert db
    end
  end
  
  describe 'close' do
    it 'works' do
      db = SQLite3::Database.new(':memory:')
      db.close
      assert db.closed?
    end
  end
  
  describe 'block_closes_self' do
    it 'works' do
      thing = nil
      SQLite3::Database.new(':memory:') do |db|
        thing = db
        assert !thing.closed?
      end
      assert thing.closed?
    end
  end
  
  describe 'prepare' do
    it 'works' do
      db = SQLite3::Database.new(':memory:')
      stmt = db.prepare('select "hello world"')
      assert_instance_of(SQLite3::Statement, stmt)
    end
  end
  
  describe 'block_prepare_does_not_double_close' do
    it 'works' do
      db = SQLite3::Database.new(':memory:')
      r = db.prepare('select "hello world"') do |stmt|
        stmt.close
        :foo
      end
      assert_equal :foo, r
    end
  end
  
  describe 'total_changes' do
    it 'works' do
      db = SQLite3::Database.new(':memory:')
      db.execute("create table foo ( a integer primary key, b text )")
      db.execute("insert into foo (b) values ('hello')")
      assert_equal 1, db.total_changes
    end
  end
  
  describe 'execute_returns_list_of_hash' do
    it 'works' do
      db = SQLite3::Database.new(':memory:', :results_as_hash => true)
      db.execute("create table foo ( a integer primary key, b text )")
      db.execute("insert into foo (b) values ('hello')")
      rows = db.execute("select * from foo")
      assert_equal [{0=>1, "a"=>1, "b"=>"hello", 1=>"hello"}], rows
    end
  end
  
  describe 'execute_yields_hash' do
    it 'works' do
      db = SQLite3::Database.new(':memory:', :results_as_hash => true)
      db.execute("create table foo ( a integer primary key, b text )")
      db.execute("insert into foo (b) values ('hello')")
      db.execute("select * from foo") do |row|
        assert_equal({0=>1, "a"=>1, "b"=>"hello", 1=>"hello"}, row)
      end
    end
  end
  
  describe 'table_info' do
    it 'works' do
      pending
      db = SQLite3::Database.new(':memory:', :results_as_hash => true)
      db.execute("create table foo ( a integer primary key, b text )")
      info = [{
        "name"       => "a",
        "pk"         => 1,
        "notnull"    => 0,
        "type"       => "integer",
        "dflt_value" => nil,
        "cid"        => 0
      },
      {
        "name"       => "b",
        "pk"         => 0,
        "notnull"    => 0,
        "type"       => "text",
        "dflt_value" => nil,
        "cid"        => 1
      }]
      assert_equal info, db.table_info('foo')
    end
  end
  
  describe 'total_changes_closed' do
    it 'works' do
      db = SQLite3::Database.new(':memory:')
      db.close
      assert_raise(SQLite3::Exception) do
        db.total_changes
      end
    end
  end
  
  describe 'trace_requires_opendb' do
    it 'works' do
      pending
      @db.close
      assert_raise(SQLite3::Exception) do
        @db.trace { |x| }
      end
    end
  end
  
  describe 'trace_with_block' do
    it 'works' do
      pending
      result = nil
      @db.trace { |sql| result = sql }
      @db.execute "select 'foo'"
      assert_equal "select 'foo'", result
    end
  end
  
  describe 'trace_with_object' do
    it 'works' do
      pending
      obj = Class.new {
        attr_accessor :result
        def call sql; @result = sql end
      }.new
  
      @db.trace(obj)
      @db.execute "select 'foo'"
      assert_equal "select 'foo'", obj.result
    end
  end
  
  describe 'trace_takes_nil' do
    it 'works' do
      pending
      @db.trace(nil)
      @db.execute "select 'foo'"
    end
  end
  
  describe 'last_insert_row_id_closed' do
    it 'works' do
      pending
      @db.close
      assert_raise(SQLite3::Exception) do
        @db.last_insert_row_id
      end
    end
  end
  
  describe 'define_function' do
    it 'works' do
      pending
      called_with = nil
      @db.define_function("hello") do |value|
        called_with = value
      end
      @db.execute("select hello(10)")
      assert_equal 10, called_with
    end
  end
  
  describe 'call_func_arg_type' do
    it 'works' do
      pending
      called_with = nil
      @db.define_function("hello") do |b, c, d|
        called_with = [b, c, d]
        nil
      end
      @db.execute("select hello(2.2, 'foo', NULL)")
      assert_equal [2.2, 'foo', nil], called_with
    end
  end
  
  describe 'define_varargs' do
    it 'works' do
      pending
      called_with = nil
      @db.define_function("hello") do |*args|
        called_with = args
        nil
      end
      @db.execute("select hello(2.2, 'foo', NULL)")
      assert_equal [2.2, 'foo', nil], called_with
    end
  end
  
  describe 'call_func_blob' do
    it 'works' do
      pending
      called_with = nil
      @db.define_function("hello") do |a, b|
        called_with = [a, b, a.length]
        nil
      end
      blob = Blob.new("a\0fine\0kettle\0of\0fish")
      @db.execute("select hello(?, length(?))", [blob, blob])
      assert_equal [blob, blob.length, 21], called_with
    end
  end
  
  describe 'function_return' do
    it 'works' do
      pending
      @db.define_function("hello") { |a| 10 }
      assert_equal [10], @db.execute("select hello('world')").first
    end
  end
  
  describe 'function_return_types' do
    it 'works' do
      pending
      [10, 2.2, nil, "foo"].each do |thing|
        @db.define_function("hello") { |a| thing }
        assert_equal [thing], @db.execute("select hello('world')").first
      end
    end
  end
  
  describe 'define_function_closed' do
    it 'works' do
      pending
      @db.close
      assert_raise(SQLite3::Exception) do
        @db.define_function('foo') {  }
      end
    end
  end
  
  describe 'inerrupt_closed' do
    it 'works' do
      @db.close
      assert_raise(SQLite3::Exception) do
        @db.interrupt
      end
    end
  end
  
  describe 'define_aggregate' do
    it 'works' do
      pending
      @db.execute "create table foo ( a integer primary key, b text )"
      @db.execute "insert into foo ( b ) values ( 'foo' )"
      @db.execute "insert into foo ( b ) values ( 'bar' )"
      @db.execute "insert into foo ( b ) values ( 'baz' )"
  
      acc = Class.new {
        attr_reader :sum
        alias :finalize :sum
        def initialize
          @sum = 0
        end
  
        def step a
          @sum += a
        end
      }.new
  
      @db.define_aggregator("accumulate", acc)
      value = @db.get_first_value( "select accumulate(a) from foo" )
      assert_equal 6, value
    end
  end
  
  describe 'authorizer_ok' do
    it 'works' do
      pending
      @db.authorizer = Class.new {
        def call action, a, b, c, d; true end
      }.new
      @db.prepare("select 'fooooo'")
  
      @db.authorizer = Class.new {
        def call action, a, b, c, d; 0 end
      }.new
      @db.prepare("select 'fooooo'")
    end
  end
  
  describe 'authorizer_ignore' do
    it 'works' do
      pending
      @db.authorizer = Class.new {
        def call action, a, b, c, d; nil end
      }.new
      stmt = @db.prepare("select 'fooooo'")
      assert_equal nil, stmt.step
    end
  end
  
  describe 'authorizer_fail' do
    it 'works' do
      pending
      @db.authorizer = Class.new {
        def call action, a, b, c, d; false end
      }.new
      assert_raises(SQLite3::AuthorizationException) do
        @db.prepare("select 'fooooo'")
      end
    end
  end
  
  describe 'remove_auth' do
    it 'works' do
      pending
      @db.authorizer = Class.new {
        def call action, a, b, c, d; false end
      }.new
      assert_raises(SQLite3::AuthorizationException) do
        @db.prepare("select 'fooooo'")
      end
  
      @db.authorizer = nil
      @db.prepare("select 'fooooo'")
    end
  end
  
  describe 'close_with_open_statements' do
    it 'works' do
      @db.prepare("select 'foo'")
      assert_raises(SQLite3::BusyException) do
        @db.close
      end
    end
  end
  
  describe 'execute_with_empty_bind_params' do
    it 'works' do
      assert_equal [['foo']], @db.execute("select 'foo'", [])
    end
  end
  
  describe 'query_with_named_bind_params' do
    it 'works' do
      assert_equal [['foo']], @db.query("select :n", {'n' => 'foo'}).to_a
    end
  end
  
  describe 'execute_with_named_bind_params' do
    it 'works' do
      assert_equal [['foo']], @db.execute("select :n", {'n' => 'foo'})
    end
  end
end
