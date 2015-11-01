mruby-sqlite
============

MRuby bindings to SQLite3. Generate by [mruby-bindings](http://github.com/jbreeden/mruby-bindings)

What's in the Box?
------------------

- SQLite itself is included, and will be compiled along with this gem.
- Low level bindings to the sqlite3 c functions in the `SQLite` module
- Hight level bindings in the `SQLite3` module, which should be compatible with the sqlite3-ruby gem for MRI
  + `SQLite3::Database::new(path_to_db, &block)`, `SQLite3::Database::open(path_to_file, &block)`, `SQLite3::Database#close`
  + `SQLite3::Database#execute(sqlString, &block)`
