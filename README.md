mruby-sqlite
============

MRuby bindings to SQLite3. Generate by [mruby-bindings](http://github.com/jbreeden/mruby-bindings)

What's in the Box?
------------------

- SQLite itself is included, and will be compiled along with this gem.
- Low level bindings to the sqlite3 C functions in the `SQLite` module.
- High level, object oriented bindings in the `SQLite3` module, which should be compatible with the [sqlite3](http://www.rubydoc.info/gems/sqlite3/frames) gem for MRI.

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
  + `#changes`
  + `#close`
  + `#closed?`
  + `#commit`
  + `#complete?`
  + `#execute`
  + `#initialize`
  + `#prepare`
  + `#results_as_hash`
  + `#results_as_hash=`
  + `#rollback`
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
- `SQLite::sqlite3_errmsg`
- `SQLite::sqlite3_finalize`
- `SQLite::sqlite3_open`
- `SQLite::sqlite3_prepare_v2`
- `SQLite::sqlite3_reset`
- `SQLite::sqlite3_step`
