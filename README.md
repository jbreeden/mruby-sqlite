mruby-sqlite
============

MRuby bindings to SQLite3. Generate by [mruby-bindings](http://github.com/jbreeden/mruby-bindings).

What's in the Box?
------------------

- [SQLite](https://www.sqlite.org/) itself is included, and will be compiled along with this gem.
- High level, object oriented bindings in the `SQLite3` module.
  + Modeled after the [sqlite3](https://github.com/sparklemotion/sqlite3-ruby/) gem for MRI,
    so you can use [their documentation](http://www.rubydoc.info/gems/sqlite3/frames) for this mrbgem.
  + Any derivation from sqlite3's behavior should be considered a bug, unless
    it's a bug in sqlite3 to begin with, or they have deprecated the behavior.
  + Note that the `Backup` class and `Pragmas` module have not yet been ported,
    and `Database` is still missing a few methods found in sqlite3.
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

### SQLite Module Functions

- `SQLite::sqlite3_bind_blob`
- `SQLite::sqlite3_bind_double`
- `SQLite::sqlite3_bind_int`
- `SQLite::sqlite3_bind_null`
- `SQLite::sqlite3_bind_parameter_count`
- `SQLite::sqlite3_bind_parameter_index`
- `SQLite::sqlite3_bind_parameter_name`
- `SQLite::sqlite3_bind_text`
- `SQLite::sqlite3_busy_timeout`
- `SQLite::sqlite3_changes`
- `SQLite::sqlite3_clear_bindings`
- `SQLite::sqlite3_close`
- `SQLite::sqlite3_column_blob`
- `SQLite::sqlite3_column_bytes`
- `SQLite::sqlite3_column_bytes16`
- `SQLite::sqlite3_column_count`
- `SQLite::sqlite3_column_database_name`
- `SQLite::sqlite3_column_decltype`
- `SQLite::sqlite3_column_double`
- `SQLite::sqlite3_column_int`
- `SQLite::sqlite3_column_name`
- `SQLite::sqlite3_column_origin_name`
- `SQLite::sqlite3_column_table_name`
- `SQLite::sqlite3_column_text`
- `SQLite::sqlite3_column_type`
- `SQLite::sqlite3_complete`
- `SQLite::sqlite3_errcode`
- `SQLite::sqlite3_errmsg`
- `SQLite::sqlite3_finalize`
- `SQLite::sqlite3_open`
- `SQLite::sqlite3_prepare_v2`
- `SQLite::sqlite3_reset`
- `SQLite::sqlite3_step`
- `SQLite::sqlite3_total_changes`
