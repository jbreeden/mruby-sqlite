mruby-sqlite
============

MRuby bindings to SQLite3. Generate by [mruby-bindings](http://github.com/jbreeden/mruby-bindings).

Building
--------

Building `mruby-sqlite` with MRuby is the same whether you're on Windows, MacOS,
or Linux:

1. Download or clone [MRuby](https://github.com/mruby/mruby)
2. Add the `mruby-sqlite` gem declaration to MRuby's build_config.rb file.
   - Use `conf.gem :github => 'jbreeden/mruby-sqlite'`
     to have MRuby checkout the lasest version automatically before building.
   - Use `conf.gem 'PATH/TO/mruby-sqlite'` if you've already downloaded
     this repo.
3. Run `rake` in MRuby's root directory.

What's in the Box?
------------------

- [SQLite](https://www.sqlite.org/) itself is included, and will be compiled along with this gem.
- High level, object oriented bindings in the `SQLite3` module.
  + Modeled after the [sqlite3](https://github.com/sparklemotion/sqlite3-ruby/) gem for MRI,
    so you can use [their documentation](http://www.rubydoc.info/gems/sqlite3/frames) for this mrbgem.
  + Any deviation from sqlite3's behavior should be considered a bug, unless
    it's a bug in sqlite3 to begin with, or they have deprecated the behavior.
  + Note that the `Backup` class and `Pragmas` module have not yet been ported,
    and `Database` is still missing a few methods found in sqlite3.
  + In the process of porting the CRuby unit tests for this gem. See [test_results.md](test_results.md)
- Low level bindings to the sqlite3 C functions in the `SQLite` module.


### SQLite3 Module Classes & Methods

- Class: `AbortException`
- Class: `AuthorizationException`
- Class: `Blob`
- Class: `BusyException`
- Class: `CantOpenException`
- Class: `ColumnType`
- Class: `ConstraintException`
- Class: `CorruptException`
- Class: `Database`
  + `::open`
  + `::quote`
  + `#busy_timeout`
  + `#busy_timeout=`
  + `#changes`
  + `#close`
  + `#closed?`
  + `#commit`
  + `#complete?`
  + `#errcode`
  + `#errmsg`
  + `#execute`
  + `#execute2`
  + `#execute_batch`
  + `#initialize`
  + `#prepare`
  + `#query`
  + `#results_as_hash`
  + `#results_as_hash=`
  + `#rollback`
  + `#total_changes`
  + `#transaction`
  + `#transaction_active?`
- Class: `EmptyException`
- Class: `Exception`
- Class: `FormatException`
- Class: `FullException`
- Class: `IOException`
- Class: `InternalException`
- Class: `InterruptException`
- Class: `LockedException`
- Class: `MemoryException`
- Class: `MismatchException`
- Class: `MisuseException`
- Class: `NotADatabaseException`
- Class: `NotFoundException`
- Class: `PermissionException`
- Class: `ProtocolException`
- Class: `RangeException`
- Class: `ReadOnlyException`
- Class: `ResultSet`
  + `#close`
  + `#closed?`
  + `#columns`
  + `#each`
  + `#each_hash`
  + `#eof?`
  + `#initialize`
  + `#next`
  + `#next_hash`
  + `#reset`
  + `#types`
- Class: `SQLException`
- Class: `SchemaChangedException`
- Class: `Statement`
  + `#active?`
  + `#assert_open`
  + `#bind_param`
  + `#bind_parameter_count`
  + `#bind_params`
  + `#clear_bindings!`
  + `#close`
  + `#closed?`
  + `#column_count`
  + `#column_decltype`
  + `#column_name`
  + `#columns`
  + `#done?`
  + `#each`
  + `#execute`
  + `#execute!`
  + `#initialize`
  + `#remainder`
  + `#reset!`
  + `#step`
  + `#types`
- Class: `TooBigException`
- Class: `UnsupportedException`
