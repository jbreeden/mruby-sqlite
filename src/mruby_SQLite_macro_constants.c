#include "mruby_SQLite.h"

void
mruby_SQLite_define_macro_constants(mrb_state* mrb) {
#ifdef FULLY_WITHIN
  do {
    mrb_value macro = mrb_fixnum_value(FULLY_WITHIN);
    mrb_define_const(mrb, SQLite_module(mrb), "FULLY_WITHIN", macro);
  } while (0);
#endif
#ifdef NOT_WITHIN
  do {
    mrb_value macro = mrb_fixnum_value(NOT_WITHIN);
    mrb_define_const(mrb, SQLite_module(mrb), "NOT_WITHIN", macro);
  } while (0);
#endif
#ifdef PARTLY_WITHIN
  do {
    mrb_value macro = mrb_fixnum_value(PARTLY_WITHIN);
    mrb_define_const(mrb, SQLite_module(mrb), "PARTLY_WITHIN", macro);
  } while (0);
#endif
#ifdef SQLITE3_TEXT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE3_TEXT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE3_TEXT", macro);
  } while (0);
#endif
#ifdef SQLITE_ABORT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_ABORT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ABORT", macro);
  } while (0);
#endif
#ifdef SQLITE_ABORT_ROLLBACK
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_ABORT_ROLLBACK);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ABORT_ROLLBACK", macro);
  } while (0);
#endif
#ifdef SQLITE_ACCESS_EXISTS
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_ACCESS_EXISTS);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ACCESS_EXISTS", macro);
  } while (0);
#endif
#ifdef SQLITE_ACCESS_READ
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_ACCESS_READ);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ACCESS_READ", macro);
  } while (0);
#endif
#ifdef SQLITE_ACCESS_READWRITE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_ACCESS_READWRITE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ACCESS_READWRITE", macro);
  } while (0);
#endif
#ifdef SQLITE_ALTER_TABLE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_ALTER_TABLE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ALTER_TABLE", macro);
  } while (0);
#endif
#ifdef SQLITE_ANALYZE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_ANALYZE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ANALYZE", macro);
  } while (0);
#endif
#ifdef SQLITE_ANY
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_ANY);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ANY", macro);
  } while (0);
#endif
#ifdef SQLITE_ATTACH
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_ATTACH);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ATTACH", macro);
  } while (0);
#endif
#ifdef SQLITE_AUTH
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_AUTH);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_AUTH", macro);
  } while (0);
#endif
#ifdef SQLITE_AUTH_USER
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_AUTH_USER);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_AUTH_USER", macro);
  } while (0);
#endif
#ifdef SQLITE_BLOB
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_BLOB);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_BLOB", macro);
  } while (0);
#endif
#ifdef SQLITE_BUSY
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_BUSY);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_BUSY", macro);
  } while (0);
#endif
#ifdef SQLITE_BUSY_RECOVERY
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_BUSY_RECOVERY);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_BUSY_RECOVERY", macro);
  } while (0);
#endif
#ifdef SQLITE_BUSY_SNAPSHOT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_BUSY_SNAPSHOT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_BUSY_SNAPSHOT", macro);
  } while (0);
#endif
#ifdef SQLITE_CANTOPEN
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CANTOPEN);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CANTOPEN", macro);
  } while (0);
#endif
#ifdef SQLITE_CANTOPEN_CONVPATH
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CANTOPEN_CONVPATH);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CANTOPEN_CONVPATH", macro);
  } while (0);
#endif
#ifdef SQLITE_CANTOPEN_FULLPATH
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CANTOPEN_FULLPATH);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CANTOPEN_FULLPATH", macro);
  } while (0);
#endif
#ifdef SQLITE_CANTOPEN_ISDIR
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CANTOPEN_ISDIR);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CANTOPEN_ISDIR", macro);
  } while (0);
#endif
#ifdef SQLITE_CANTOPEN_NOTEMPDIR
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CANTOPEN_NOTEMPDIR);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CANTOPEN_NOTEMPDIR", macro);
  } while (0);
#endif
#ifdef SQLITE_CHECKPOINT_FULL
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CHECKPOINT_FULL);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CHECKPOINT_FULL", macro);
  } while (0);
#endif
#ifdef SQLITE_CHECKPOINT_PASSIVE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CHECKPOINT_PASSIVE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CHECKPOINT_PASSIVE", macro);
  } while (0);
#endif
#ifdef SQLITE_CHECKPOINT_RESTART
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CHECKPOINT_RESTART);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CHECKPOINT_RESTART", macro);
  } while (0);
#endif
#ifdef SQLITE_CHECKPOINT_TRUNCATE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CHECKPOINT_TRUNCATE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CHECKPOINT_TRUNCATE", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_COVERING_INDEX_SCAN
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_COVERING_INDEX_SCAN);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_COVERING_INDEX_SCAN", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_GETMALLOC
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_GETMALLOC);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_GETMALLOC", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_GETMUTEX
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_GETMUTEX);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_GETMUTEX", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_GETPCACHE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_GETPCACHE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_GETPCACHE", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_GETPCACHE2
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_GETPCACHE2);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_GETPCACHE2", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_HEAP
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_HEAP);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_HEAP", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_LOG
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_LOG);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_LOG", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_LOOKASIDE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_LOOKASIDE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_LOOKASIDE", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_MALLOC
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_MALLOC);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_MALLOC", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_MEMSTATUS
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_MEMSTATUS);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_MEMSTATUS", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_MMAP_SIZE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_MMAP_SIZE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_MMAP_SIZE", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_MULTITHREAD
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_MULTITHREAD);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_MULTITHREAD", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_MUTEX
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_MUTEX);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_MUTEX", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_PAGECACHE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_PAGECACHE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_PAGECACHE", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_PCACHE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_PCACHE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_PCACHE", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_PCACHE2
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_PCACHE2);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_PCACHE2", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_PCACHE_HDRSZ
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_PCACHE_HDRSZ);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_PCACHE_HDRSZ", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_PMASZ
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_PMASZ);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_PMASZ", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_SCRATCH
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_SCRATCH);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_SCRATCH", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_SERIALIZED
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_SERIALIZED);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_SERIALIZED", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_SINGLETHREAD
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_SINGLETHREAD);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_SINGLETHREAD", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_SQLLOG
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_SQLLOG);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_SQLLOG", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_URI
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_URI);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_URI", macro);
  } while (0);
#endif
#ifdef SQLITE_CONFIG_WIN32_HEAPSIZE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONFIG_WIN32_HEAPSIZE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_WIN32_HEAPSIZE", macro);
  } while (0);
#endif
#ifdef SQLITE_CONSTRAINT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONSTRAINT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONSTRAINT", macro);
  } while (0);
#endif
#ifdef SQLITE_CONSTRAINT_CHECK
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONSTRAINT_CHECK);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONSTRAINT_CHECK", macro);
  } while (0);
#endif
#ifdef SQLITE_CONSTRAINT_COMMITHOOK
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONSTRAINT_COMMITHOOK);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONSTRAINT_COMMITHOOK", macro);
  } while (0);
#endif
#ifdef SQLITE_CONSTRAINT_FOREIGNKEY
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONSTRAINT_FOREIGNKEY);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONSTRAINT_FOREIGNKEY", macro);
  } while (0);
#endif
#ifdef SQLITE_CONSTRAINT_FUNCTION
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONSTRAINT_FUNCTION);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONSTRAINT_FUNCTION", macro);
  } while (0);
#endif
#ifdef SQLITE_CONSTRAINT_NOTNULL
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONSTRAINT_NOTNULL);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONSTRAINT_NOTNULL", macro);
  } while (0);
#endif
#ifdef SQLITE_CONSTRAINT_PRIMARYKEY
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONSTRAINT_PRIMARYKEY);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONSTRAINT_PRIMARYKEY", macro);
  } while (0);
#endif
#ifdef SQLITE_CONSTRAINT_ROWID
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONSTRAINT_ROWID);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONSTRAINT_ROWID", macro);
  } while (0);
#endif
#ifdef SQLITE_CONSTRAINT_TRIGGER
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONSTRAINT_TRIGGER);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONSTRAINT_TRIGGER", macro);
  } while (0);
#endif
#ifdef SQLITE_CONSTRAINT_UNIQUE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONSTRAINT_UNIQUE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONSTRAINT_UNIQUE", macro);
  } while (0);
#endif
#ifdef SQLITE_CONSTRAINT_VTAB
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CONSTRAINT_VTAB);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONSTRAINT_VTAB", macro);
  } while (0);
#endif
#ifdef SQLITE_COPY
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_COPY);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_COPY", macro);
  } while (0);
#endif
#ifdef SQLITE_CORRUPT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CORRUPT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CORRUPT", macro);
  } while (0);
#endif
#ifdef SQLITE_CORRUPT_VTAB
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CORRUPT_VTAB);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CORRUPT_VTAB", macro);
  } while (0);
#endif
#ifdef SQLITE_CREATE_INDEX
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CREATE_INDEX);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CREATE_INDEX", macro);
  } while (0);
#endif
#ifdef SQLITE_CREATE_TABLE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CREATE_TABLE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CREATE_TABLE", macro);
  } while (0);
#endif
#ifdef SQLITE_CREATE_TEMP_INDEX
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CREATE_TEMP_INDEX);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CREATE_TEMP_INDEX", macro);
  } while (0);
#endif
#ifdef SQLITE_CREATE_TEMP_TABLE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CREATE_TEMP_TABLE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CREATE_TEMP_TABLE", macro);
  } while (0);
#endif
#ifdef SQLITE_CREATE_TEMP_TRIGGER
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CREATE_TEMP_TRIGGER);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CREATE_TEMP_TRIGGER", macro);
  } while (0);
#endif
#ifdef SQLITE_CREATE_TEMP_VIEW
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CREATE_TEMP_VIEW);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CREATE_TEMP_VIEW", macro);
  } while (0);
#endif
#ifdef SQLITE_CREATE_TRIGGER
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CREATE_TRIGGER);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CREATE_TRIGGER", macro);
  } while (0);
#endif
#ifdef SQLITE_CREATE_VIEW
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CREATE_VIEW);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CREATE_VIEW", macro);
  } while (0);
#endif
#ifdef SQLITE_CREATE_VTABLE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_CREATE_VTABLE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CREATE_VTABLE", macro);
  } while (0);
#endif
#ifdef SQLITE_DBCONFIG_ENABLE_FKEY
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DBCONFIG_ENABLE_FKEY);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBCONFIG_ENABLE_FKEY", macro);
  } while (0);
#endif
#ifdef SQLITE_DBCONFIG_ENABLE_TRIGGER
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DBCONFIG_ENABLE_TRIGGER);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBCONFIG_ENABLE_TRIGGER", macro);
  } while (0);
#endif
#ifdef SQLITE_DBCONFIG_LOOKASIDE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DBCONFIG_LOOKASIDE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBCONFIG_LOOKASIDE", macro);
  } while (0);
#endif
#ifdef SQLITE_DBSTATUS_CACHE_HIT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DBSTATUS_CACHE_HIT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_CACHE_HIT", macro);
  } while (0);
#endif
#ifdef SQLITE_DBSTATUS_CACHE_MISS
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DBSTATUS_CACHE_MISS);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_CACHE_MISS", macro);
  } while (0);
#endif
#ifdef SQLITE_DBSTATUS_CACHE_USED
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DBSTATUS_CACHE_USED);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_CACHE_USED", macro);
  } while (0);
#endif
#ifdef SQLITE_DBSTATUS_CACHE_WRITE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DBSTATUS_CACHE_WRITE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_CACHE_WRITE", macro);
  } while (0);
#endif
#ifdef SQLITE_DBSTATUS_DEFERRED_FKS
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DBSTATUS_DEFERRED_FKS);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_DEFERRED_FKS", macro);
  } while (0);
#endif
#ifdef SQLITE_DBSTATUS_LOOKASIDE_HIT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DBSTATUS_LOOKASIDE_HIT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_LOOKASIDE_HIT", macro);
  } while (0);
#endif
#ifdef SQLITE_DBSTATUS_LOOKASIDE_MISS_FULL
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DBSTATUS_LOOKASIDE_MISS_FULL);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_LOOKASIDE_MISS_FULL", macro);
  } while (0);
#endif
#ifdef SQLITE_DBSTATUS_LOOKASIDE_MISS_SIZE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DBSTATUS_LOOKASIDE_MISS_SIZE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_LOOKASIDE_MISS_SIZE", macro);
  } while (0);
#endif
#ifdef SQLITE_DBSTATUS_LOOKASIDE_USED
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DBSTATUS_LOOKASIDE_USED);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_LOOKASIDE_USED", macro);
  } while (0);
#endif
#ifdef SQLITE_DBSTATUS_MAX
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DBSTATUS_MAX);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_MAX", macro);
  } while (0);
#endif
#ifdef SQLITE_DBSTATUS_SCHEMA_USED
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DBSTATUS_SCHEMA_USED);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_SCHEMA_USED", macro);
  } while (0);
#endif
#ifdef SQLITE_DBSTATUS_STMT_USED
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DBSTATUS_STMT_USED);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_STMT_USED", macro);
  } while (0);
#endif
#ifdef SQLITE_DELETE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DELETE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DELETE", macro);
  } while (0);
#endif
#ifdef SQLITE_DENY
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DENY);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DENY", macro);
  } while (0);
#endif
#ifdef SQLITE_DETACH
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DETACH);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DETACH", macro);
  } while (0);
#endif
#ifdef SQLITE_DETERMINISTIC
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DETERMINISTIC);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DETERMINISTIC", macro);
  } while (0);
#endif
#ifdef SQLITE_DONE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DONE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DONE", macro);
  } while (0);
#endif
#ifdef SQLITE_DROP_INDEX
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DROP_INDEX);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DROP_INDEX", macro);
  } while (0);
#endif
#ifdef SQLITE_DROP_TABLE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DROP_TABLE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DROP_TABLE", macro);
  } while (0);
#endif
#ifdef SQLITE_DROP_TEMP_INDEX
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DROP_TEMP_INDEX);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DROP_TEMP_INDEX", macro);
  } while (0);
#endif
#ifdef SQLITE_DROP_TEMP_TABLE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DROP_TEMP_TABLE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DROP_TEMP_TABLE", macro);
  } while (0);
#endif
#ifdef SQLITE_DROP_TEMP_TRIGGER
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DROP_TEMP_TRIGGER);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DROP_TEMP_TRIGGER", macro);
  } while (0);
#endif
#ifdef SQLITE_DROP_TEMP_VIEW
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DROP_TEMP_VIEW);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DROP_TEMP_VIEW", macro);
  } while (0);
#endif
#ifdef SQLITE_DROP_TRIGGER
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DROP_TRIGGER);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DROP_TRIGGER", macro);
  } while (0);
#endif
#ifdef SQLITE_DROP_VIEW
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DROP_VIEW);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DROP_VIEW", macro);
  } while (0);
#endif
#ifdef SQLITE_DROP_VTABLE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_DROP_VTABLE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DROP_VTABLE", macro);
  } while (0);
#endif
#ifdef SQLITE_EMPTY
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_EMPTY);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_EMPTY", macro);
  } while (0);
#endif
#ifdef SQLITE_ERROR
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_ERROR);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ERROR", macro);
  } while (0);
#endif
#ifdef SQLITE_FAIL
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FAIL);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FAIL", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_BUSYHANDLER
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_BUSYHANDLER);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_BUSYHANDLER", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_CHUNK_SIZE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_CHUNK_SIZE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_CHUNK_SIZE", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_COMMIT_PHASETWO
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_COMMIT_PHASETWO);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_COMMIT_PHASETWO", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_FILE_POINTER
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_FILE_POINTER);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_FILE_POINTER", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_GET_LOCKPROXYFILE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_GET_LOCKPROXYFILE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_GET_LOCKPROXYFILE", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_HAS_MOVED
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_HAS_MOVED);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_HAS_MOVED", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_LAST_ERRNO
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_LAST_ERRNO);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_LAST_ERRNO", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_LOCKSTATE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_LOCKSTATE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_LOCKSTATE", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_MMAP_SIZE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_MMAP_SIZE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_MMAP_SIZE", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_OVERWRITE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_OVERWRITE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_OVERWRITE", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_PERSIST_WAL
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_PERSIST_WAL);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_PERSIST_WAL", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_POWERSAFE_OVERWRITE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_POWERSAFE_OVERWRITE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_POWERSAFE_OVERWRITE", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_PRAGMA
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_PRAGMA);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_PRAGMA", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_SET_LOCKPROXYFILE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_SET_LOCKPROXYFILE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_SET_LOCKPROXYFILE", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_SIZE_HINT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_SIZE_HINT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_SIZE_HINT", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_SYNC
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_SYNC);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_SYNC", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_SYNC_OMITTED
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_SYNC_OMITTED);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_SYNC_OMITTED", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_TEMPFILENAME
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_TEMPFILENAME);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_TEMPFILENAME", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_TRACE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_TRACE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_TRACE", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_VFSNAME
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_VFSNAME);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_VFSNAME", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_WAL_BLOCK
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_WAL_BLOCK);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_WAL_BLOCK", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_WIN32_AV_RETRY
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_WIN32_AV_RETRY);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_WIN32_AV_RETRY", macro);
  } while (0);
#endif
#ifdef SQLITE_FCNTL_WIN32_SET_HANDLE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FCNTL_WIN32_SET_HANDLE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_WIN32_SET_HANDLE", macro);
  } while (0);
#endif
#ifdef SQLITE_FLOAT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FLOAT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FLOAT", macro);
  } while (0);
#endif
#ifdef SQLITE_FORMAT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FORMAT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FORMAT", macro);
  } while (0);
#endif
#ifdef SQLITE_FULL
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FULL);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FULL", macro);
  } while (0);
#endif
#ifdef SQLITE_FUNCTION
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_FUNCTION);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FUNCTION", macro);
  } while (0);
#endif
#ifdef SQLITE_GET_LOCKPROXYFILE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_GET_LOCKPROXYFILE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_GET_LOCKPROXYFILE", macro);
  } while (0);
#endif
#ifdef SQLITE_IGNORE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IGNORE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IGNORE", macro);
  } while (0);
#endif
#ifdef SQLITE_INDEX_CONSTRAINT_EQ
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_INDEX_CONSTRAINT_EQ);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_INDEX_CONSTRAINT_EQ", macro);
  } while (0);
#endif
#ifdef SQLITE_INDEX_CONSTRAINT_GE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_INDEX_CONSTRAINT_GE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_INDEX_CONSTRAINT_GE", macro);
  } while (0);
#endif
#ifdef SQLITE_INDEX_CONSTRAINT_GT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_INDEX_CONSTRAINT_GT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_INDEX_CONSTRAINT_GT", macro);
  } while (0);
#endif
#ifdef SQLITE_INDEX_CONSTRAINT_LE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_INDEX_CONSTRAINT_LE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_INDEX_CONSTRAINT_LE", macro);
  } while (0);
#endif
#ifdef SQLITE_INDEX_CONSTRAINT_LT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_INDEX_CONSTRAINT_LT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_INDEX_CONSTRAINT_LT", macro);
  } while (0);
#endif
#ifdef SQLITE_INDEX_CONSTRAINT_MATCH
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_INDEX_CONSTRAINT_MATCH);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_INDEX_CONSTRAINT_MATCH", macro);
  } while (0);
#endif
#ifdef SQLITE_INSERT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_INSERT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_INSERT", macro);
  } while (0);
#endif
#ifdef SQLITE_INTEGER
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_INTEGER);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_INTEGER", macro);
  } while (0);
#endif
#ifdef SQLITE_INTERNAL
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_INTERNAL);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_INTERNAL", macro);
  } while (0);
#endif
#ifdef SQLITE_INTERRUPT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_INTERRUPT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_INTERRUPT", macro);
  } while (0);
#endif
#ifdef SQLITE_IOCAP_ATOMIC
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOCAP_ATOMIC);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_ATOMIC", macro);
  } while (0);
#endif
#ifdef SQLITE_IOCAP_ATOMIC16K
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOCAP_ATOMIC16K);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_ATOMIC16K", macro);
  } while (0);
#endif
#ifdef SQLITE_IOCAP_ATOMIC1K
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOCAP_ATOMIC1K);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_ATOMIC1K", macro);
  } while (0);
#endif
#ifdef SQLITE_IOCAP_ATOMIC2K
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOCAP_ATOMIC2K);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_ATOMIC2K", macro);
  } while (0);
#endif
#ifdef SQLITE_IOCAP_ATOMIC32K
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOCAP_ATOMIC32K);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_ATOMIC32K", macro);
  } while (0);
#endif
#ifdef SQLITE_IOCAP_ATOMIC4K
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOCAP_ATOMIC4K);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_ATOMIC4K", macro);
  } while (0);
#endif
#ifdef SQLITE_IOCAP_ATOMIC512
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOCAP_ATOMIC512);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_ATOMIC512", macro);
  } while (0);
#endif
#ifdef SQLITE_IOCAP_ATOMIC64K
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOCAP_ATOMIC64K);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_ATOMIC64K", macro);
  } while (0);
#endif
#ifdef SQLITE_IOCAP_ATOMIC8K
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOCAP_ATOMIC8K);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_ATOMIC8K", macro);
  } while (0);
#endif
#ifdef SQLITE_IOCAP_IMMUTABLE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOCAP_IMMUTABLE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_IMMUTABLE", macro);
  } while (0);
#endif
#ifdef SQLITE_IOCAP_POWERSAFE_OVERWRITE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOCAP_POWERSAFE_OVERWRITE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_POWERSAFE_OVERWRITE", macro);
  } while (0);
#endif
#ifdef SQLITE_IOCAP_SAFE_APPEND
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOCAP_SAFE_APPEND);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_SAFE_APPEND", macro);
  } while (0);
#endif
#ifdef SQLITE_IOCAP_SEQUENTIAL
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOCAP_SEQUENTIAL);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_SEQUENTIAL", macro);
  } while (0);
#endif
#ifdef SQLITE_IOCAP_UNDELETABLE_WHEN_OPEN
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOCAP_UNDELETABLE_WHEN_OPEN);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_UNDELETABLE_WHEN_OPEN", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_ACCESS
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_ACCESS);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_ACCESS", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_BLOCKED
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_BLOCKED);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_BLOCKED", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_CHECKRESERVEDLOCK
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_CHECKRESERVEDLOCK);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_CHECKRESERVEDLOCK", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_CLOSE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_CLOSE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_CLOSE", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_CONVPATH
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_CONVPATH);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_CONVPATH", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_DELETE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_DELETE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_DELETE", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_DELETE_NOENT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_DELETE_NOENT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_DELETE_NOENT", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_DIR_CLOSE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_DIR_CLOSE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_DIR_CLOSE", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_DIR_FSYNC
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_DIR_FSYNC);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_DIR_FSYNC", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_FSTAT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_FSTAT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_FSTAT", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_FSYNC
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_FSYNC);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_FSYNC", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_GETTEMPPATH
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_GETTEMPPATH);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_GETTEMPPATH", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_LOCK
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_LOCK);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_LOCK", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_MMAP
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_MMAP);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_MMAP", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_NOMEM
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_NOMEM);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_NOMEM", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_RDLOCK
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_RDLOCK);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_RDLOCK", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_READ
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_READ);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_READ", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_SEEK
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_SEEK);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_SEEK", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_SHMLOCK
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_SHMLOCK);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_SHMLOCK", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_SHMMAP
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_SHMMAP);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_SHMMAP", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_SHMOPEN
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_SHMOPEN);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_SHMOPEN", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_SHMSIZE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_SHMSIZE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_SHMSIZE", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_SHORT_READ
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_SHORT_READ);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_SHORT_READ", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_TRUNCATE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_TRUNCATE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_TRUNCATE", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_UNLOCK
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_UNLOCK);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_UNLOCK", macro);
  } while (0);
#endif
#ifdef SQLITE_IOERR_WRITE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_IOERR_WRITE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_WRITE", macro);
  } while (0);
#endif
#ifdef SQLITE_LAST_ERRNO
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_LAST_ERRNO);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LAST_ERRNO", macro);
  } while (0);
#endif
#ifdef SQLITE_LIMIT_ATTACHED
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_LIMIT_ATTACHED);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_ATTACHED", macro);
  } while (0);
#endif
#ifdef SQLITE_LIMIT_COLUMN
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_LIMIT_COLUMN);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_COLUMN", macro);
  } while (0);
#endif
#ifdef SQLITE_LIMIT_COMPOUND_SELECT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_LIMIT_COMPOUND_SELECT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_COMPOUND_SELECT", macro);
  } while (0);
#endif
#ifdef SQLITE_LIMIT_EXPR_DEPTH
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_LIMIT_EXPR_DEPTH);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_EXPR_DEPTH", macro);
  } while (0);
#endif
#ifdef SQLITE_LIMIT_FUNCTION_ARG
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_LIMIT_FUNCTION_ARG);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_FUNCTION_ARG", macro);
  } while (0);
#endif
#ifdef SQLITE_LIMIT_LENGTH
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_LIMIT_LENGTH);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_LENGTH", macro);
  } while (0);
#endif
#ifdef SQLITE_LIMIT_LIKE_PATTERN_LENGTH
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_LIMIT_LIKE_PATTERN_LENGTH);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_LIKE_PATTERN_LENGTH", macro);
  } while (0);
#endif
#ifdef SQLITE_LIMIT_SQL_LENGTH
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_LIMIT_SQL_LENGTH);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_SQL_LENGTH", macro);
  } while (0);
#endif
#ifdef SQLITE_LIMIT_TRIGGER_DEPTH
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_LIMIT_TRIGGER_DEPTH);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_TRIGGER_DEPTH", macro);
  } while (0);
#endif
#ifdef SQLITE_LIMIT_VARIABLE_NUMBER
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_LIMIT_VARIABLE_NUMBER);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_VARIABLE_NUMBER", macro);
  } while (0);
#endif
#ifdef SQLITE_LIMIT_VDBE_OP
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_LIMIT_VDBE_OP);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_VDBE_OP", macro);
  } while (0);
#endif
#ifdef SQLITE_LIMIT_WORKER_THREADS
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_LIMIT_WORKER_THREADS);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_WORKER_THREADS", macro);
  } while (0);
#endif
#ifdef SQLITE_LOCK_EXCLUSIVE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_LOCK_EXCLUSIVE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LOCK_EXCLUSIVE", macro);
  } while (0);
#endif
#ifdef SQLITE_LOCK_NONE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_LOCK_NONE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LOCK_NONE", macro);
  } while (0);
#endif
#ifdef SQLITE_LOCK_PENDING
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_LOCK_PENDING);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LOCK_PENDING", macro);
  } while (0);
#endif
#ifdef SQLITE_LOCK_RESERVED
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_LOCK_RESERVED);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LOCK_RESERVED", macro);
  } while (0);
#endif
#ifdef SQLITE_LOCK_SHARED
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_LOCK_SHARED);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LOCK_SHARED", macro);
  } while (0);
#endif
#ifdef SQLITE_LOCKED
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_LOCKED);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LOCKED", macro);
  } while (0);
#endif
#ifdef SQLITE_LOCKED_SHAREDCACHE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_LOCKED_SHAREDCACHE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LOCKED_SHAREDCACHE", macro);
  } while (0);
#endif
#ifdef SQLITE_MISMATCH
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_MISMATCH);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MISMATCH", macro);
  } while (0);
#endif
#ifdef SQLITE_MISUSE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_MISUSE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MISUSE", macro);
  } while (0);
#endif
#ifdef SQLITE_MUTEX_FAST
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_MUTEX_FAST);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_FAST", macro);
  } while (0);
#endif
#ifdef SQLITE_MUTEX_RECURSIVE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_MUTEX_RECURSIVE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_RECURSIVE", macro);
  } while (0);
#endif
#ifdef SQLITE_MUTEX_STATIC_APP1
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_MUTEX_STATIC_APP1);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_STATIC_APP1", macro);
  } while (0);
#endif
#ifdef SQLITE_MUTEX_STATIC_APP2
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_MUTEX_STATIC_APP2);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_STATIC_APP2", macro);
  } while (0);
#endif
#ifdef SQLITE_MUTEX_STATIC_APP3
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_MUTEX_STATIC_APP3);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_STATIC_APP3", macro);
  } while (0);
#endif
#ifdef SQLITE_MUTEX_STATIC_LRU
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_MUTEX_STATIC_LRU);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_STATIC_LRU", macro);
  } while (0);
#endif
#ifdef SQLITE_MUTEX_STATIC_LRU2
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_MUTEX_STATIC_LRU2);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_STATIC_LRU2", macro);
  } while (0);
#endif
#ifdef SQLITE_MUTEX_STATIC_MASTER
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_MUTEX_STATIC_MASTER);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_STATIC_MASTER", macro);
  } while (0);
#endif
#ifdef SQLITE_MUTEX_STATIC_MEM
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_MUTEX_STATIC_MEM);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_STATIC_MEM", macro);
  } while (0);
#endif
#ifdef SQLITE_MUTEX_STATIC_MEM2
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_MUTEX_STATIC_MEM2);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_STATIC_MEM2", macro);
  } while (0);
#endif
#ifdef SQLITE_MUTEX_STATIC_OPEN
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_MUTEX_STATIC_OPEN);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_STATIC_OPEN", macro);
  } while (0);
#endif
#ifdef SQLITE_MUTEX_STATIC_PMEM
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_MUTEX_STATIC_PMEM);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_STATIC_PMEM", macro);
  } while (0);
#endif
#ifdef SQLITE_MUTEX_STATIC_PRNG
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_MUTEX_STATIC_PRNG);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_STATIC_PRNG", macro);
  } while (0);
#endif
#ifdef SQLITE_NOLFS
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_NOLFS);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_NOLFS", macro);
  } while (0);
#endif
#ifdef SQLITE_NOMEM
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_NOMEM);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_NOMEM", macro);
  } while (0);
#endif
#ifdef SQLITE_NOTADB
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_NOTADB);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_NOTADB", macro);
  } while (0);
#endif
#ifdef SQLITE_NOTFOUND
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_NOTFOUND);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_NOTFOUND", macro);
  } while (0);
#endif
#ifdef SQLITE_NOTICE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_NOTICE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_NOTICE", macro);
  } while (0);
#endif
#ifdef SQLITE_NOTICE_RECOVER_ROLLBACK
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_NOTICE_RECOVER_ROLLBACK);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_NOTICE_RECOVER_ROLLBACK", macro);
  } while (0);
#endif
#ifdef SQLITE_NOTICE_RECOVER_WAL
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_NOTICE_RECOVER_WAL);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_NOTICE_RECOVER_WAL", macro);
  } while (0);
#endif
#ifdef SQLITE_NULL
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_NULL);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_NULL", macro);
  } while (0);
#endif
#ifdef SQLITE_OK
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_OK);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OK", macro);
  } while (0);
#endif
#ifdef SQLITE_OPEN_AUTOPROXY
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_OPEN_AUTOPROXY);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_AUTOPROXY", macro);
  } while (0);
#endif
#ifdef SQLITE_OPEN_CREATE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_OPEN_CREATE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_CREATE", macro);
  } while (0);
#endif
#ifdef SQLITE_OPEN_DELETEONCLOSE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_OPEN_DELETEONCLOSE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_DELETEONCLOSE", macro);
  } while (0);
#endif
#ifdef SQLITE_OPEN_EXCLUSIVE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_OPEN_EXCLUSIVE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_EXCLUSIVE", macro);
  } while (0);
#endif
#ifdef SQLITE_OPEN_FULLMUTEX
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_OPEN_FULLMUTEX);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_FULLMUTEX", macro);
  } while (0);
#endif
#ifdef SQLITE_OPEN_MAIN_DB
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_OPEN_MAIN_DB);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_MAIN_DB", macro);
  } while (0);
#endif
#ifdef SQLITE_OPEN_MAIN_JOURNAL
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_OPEN_MAIN_JOURNAL);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_MAIN_JOURNAL", macro);
  } while (0);
#endif
#ifdef SQLITE_OPEN_MASTER_JOURNAL
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_OPEN_MASTER_JOURNAL);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_MASTER_JOURNAL", macro);
  } while (0);
#endif
#ifdef SQLITE_OPEN_MEMORY
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_OPEN_MEMORY);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_MEMORY", macro);
  } while (0);
#endif
#ifdef SQLITE_OPEN_NOMUTEX
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_OPEN_NOMUTEX);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_NOMUTEX", macro);
  } while (0);
#endif
#ifdef SQLITE_OPEN_PRIVATECACHE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_OPEN_PRIVATECACHE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_PRIVATECACHE", macro);
  } while (0);
#endif
#ifdef SQLITE_OPEN_READONLY
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_OPEN_READONLY);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_READONLY", macro);
  } while (0);
#endif
#ifdef SQLITE_OPEN_READWRITE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_OPEN_READWRITE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_READWRITE", macro);
  } while (0);
#endif
#ifdef SQLITE_OPEN_SHAREDCACHE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_OPEN_SHAREDCACHE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_SHAREDCACHE", macro);
  } while (0);
#endif
#ifdef SQLITE_OPEN_SUBJOURNAL
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_OPEN_SUBJOURNAL);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_SUBJOURNAL", macro);
  } while (0);
#endif
#ifdef SQLITE_OPEN_TEMP_DB
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_OPEN_TEMP_DB);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_TEMP_DB", macro);
  } while (0);
#endif
#ifdef SQLITE_OPEN_TEMP_JOURNAL
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_OPEN_TEMP_JOURNAL);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_TEMP_JOURNAL", macro);
  } while (0);
#endif
#ifdef SQLITE_OPEN_TRANSIENT_DB
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_OPEN_TRANSIENT_DB);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_TRANSIENT_DB", macro);
  } while (0);
#endif
#ifdef SQLITE_OPEN_URI
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_OPEN_URI);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_URI", macro);
  } while (0);
#endif
#ifdef SQLITE_OPEN_WAL
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_OPEN_WAL);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_WAL", macro);
  } while (0);
#endif
#ifdef SQLITE_PERM
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_PERM);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_PERM", macro);
  } while (0);
#endif
#ifdef SQLITE_PRAGMA
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_PRAGMA);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_PRAGMA", macro);
  } while (0);
#endif
#ifdef SQLITE_PROTOCOL
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_PROTOCOL);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_PROTOCOL", macro);
  } while (0);
#endif
#ifdef SQLITE_RANGE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_RANGE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_RANGE", macro);
  } while (0);
#endif
#ifdef SQLITE_READ
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_READ);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_READ", macro);
  } while (0);
#endif
#ifdef SQLITE_READONLY
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_READONLY);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_READONLY", macro);
  } while (0);
#endif
#ifdef SQLITE_READONLY_CANTLOCK
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_READONLY_CANTLOCK);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_READONLY_CANTLOCK", macro);
  } while (0);
#endif
#ifdef SQLITE_READONLY_DBMOVED
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_READONLY_DBMOVED);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_READONLY_DBMOVED", macro);
  } while (0);
#endif
#ifdef SQLITE_READONLY_RECOVERY
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_READONLY_RECOVERY);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_READONLY_RECOVERY", macro);
  } while (0);
#endif
#ifdef SQLITE_READONLY_ROLLBACK
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_READONLY_ROLLBACK);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_READONLY_ROLLBACK", macro);
  } while (0);
#endif
#ifdef SQLITE_RECURSIVE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_RECURSIVE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_RECURSIVE", macro);
  } while (0);
#endif
#ifdef SQLITE_REINDEX
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_REINDEX);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_REINDEX", macro);
  } while (0);
#endif
#ifdef SQLITE_REPLACE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_REPLACE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_REPLACE", macro);
  } while (0);
#endif
#ifdef SQLITE_ROLLBACK
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_ROLLBACK);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ROLLBACK", macro);
  } while (0);
#endif
#ifdef SQLITE_ROW
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_ROW);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ROW", macro);
  } while (0);
#endif
#ifdef SQLITE_SAVEPOINT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_SAVEPOINT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SAVEPOINT", macro);
  } while (0);
#endif
#ifdef SQLITE_SCANSTAT_EST
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_SCANSTAT_EST);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SCANSTAT_EST", macro);
  } while (0);
#endif
#ifdef SQLITE_SCANSTAT_EXPLAIN
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_SCANSTAT_EXPLAIN);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SCANSTAT_EXPLAIN", macro);
  } while (0);
#endif
#ifdef SQLITE_SCANSTAT_NAME
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_SCANSTAT_NAME);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SCANSTAT_NAME", macro);
  } while (0);
#endif
#ifdef SQLITE_SCANSTAT_NLOOP
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_SCANSTAT_NLOOP);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SCANSTAT_NLOOP", macro);
  } while (0);
#endif
#ifdef SQLITE_SCANSTAT_NVISIT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_SCANSTAT_NVISIT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SCANSTAT_NVISIT", macro);
  } while (0);
#endif
#ifdef SQLITE_SCANSTAT_SELECTID
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_SCANSTAT_SELECTID);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SCANSTAT_SELECTID", macro);
  } while (0);
#endif
#ifdef SQLITE_SCHEMA
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_SCHEMA);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SCHEMA", macro);
  } while (0);
#endif
#ifdef SQLITE_SELECT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_SELECT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SELECT", macro);
  } while (0);
#endif
#ifdef SQLITE_SET_LOCKPROXYFILE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_SET_LOCKPROXYFILE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SET_LOCKPROXYFILE", macro);
  } while (0);
#endif
#ifdef SQLITE_SHM_EXCLUSIVE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_SHM_EXCLUSIVE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SHM_EXCLUSIVE", macro);
  } while (0);
#endif
#ifdef SQLITE_SHM_LOCK
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_SHM_LOCK);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SHM_LOCK", macro);
  } while (0);
#endif
#ifdef SQLITE_SHM_NLOCK
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_SHM_NLOCK);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SHM_NLOCK", macro);
  } while (0);
#endif
#ifdef SQLITE_SHM_SHARED
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_SHM_SHARED);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SHM_SHARED", macro);
  } while (0);
#endif
#ifdef SQLITE_SHM_UNLOCK
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_SHM_UNLOCK);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SHM_UNLOCK", macro);
  } while (0);
#endif
#ifdef SQLITE_SOURCE_ID
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_SOURCE_ID);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SOURCE_ID", macro);
  } while (0);
#endif
#ifdef SQLITE_STATIC
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_STATIC);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STATIC", macro);
  } while (0);
#endif
#ifdef SQLITE_STATUS_MALLOC_COUNT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_STATUS_MALLOC_COUNT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STATUS_MALLOC_COUNT", macro);
  } while (0);
#endif
#ifdef SQLITE_STATUS_MALLOC_SIZE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_STATUS_MALLOC_SIZE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STATUS_MALLOC_SIZE", macro);
  } while (0);
#endif
#ifdef SQLITE_STATUS_MEMORY_USED
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_STATUS_MEMORY_USED);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STATUS_MEMORY_USED", macro);
  } while (0);
#endif
#ifdef SQLITE_STATUS_PAGECACHE_OVERFLOW
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_STATUS_PAGECACHE_OVERFLOW);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STATUS_PAGECACHE_OVERFLOW", macro);
  } while (0);
#endif
#ifdef SQLITE_STATUS_PAGECACHE_SIZE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_STATUS_PAGECACHE_SIZE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STATUS_PAGECACHE_SIZE", macro);
  } while (0);
#endif
#ifdef SQLITE_STATUS_PAGECACHE_USED
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_STATUS_PAGECACHE_USED);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STATUS_PAGECACHE_USED", macro);
  } while (0);
#endif
#ifdef SQLITE_STATUS_PARSER_STACK
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_STATUS_PARSER_STACK);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STATUS_PARSER_STACK", macro);
  } while (0);
#endif
#ifdef SQLITE_STATUS_SCRATCH_OVERFLOW
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_STATUS_SCRATCH_OVERFLOW);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STATUS_SCRATCH_OVERFLOW", macro);
  } while (0);
#endif
#ifdef SQLITE_STATUS_SCRATCH_SIZE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_STATUS_SCRATCH_SIZE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STATUS_SCRATCH_SIZE", macro);
  } while (0);
#endif
#ifdef SQLITE_STATUS_SCRATCH_USED
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_STATUS_SCRATCH_USED);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STATUS_SCRATCH_USED", macro);
  } while (0);
#endif
#ifdef SQLITE_STMTSTATUS_AUTOINDEX
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_STMTSTATUS_AUTOINDEX);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STMTSTATUS_AUTOINDEX", macro);
  } while (0);
#endif
#ifdef SQLITE_STMTSTATUS_FULLSCAN_STEP
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_STMTSTATUS_FULLSCAN_STEP);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STMTSTATUS_FULLSCAN_STEP", macro);
  } while (0);
#endif
#ifdef SQLITE_STMTSTATUS_SORT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_STMTSTATUS_SORT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STMTSTATUS_SORT", macro);
  } while (0);
#endif
#ifdef SQLITE_STMTSTATUS_VM_STEP
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_STMTSTATUS_VM_STEP);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STMTSTATUS_VM_STEP", macro);
  } while (0);
#endif
#ifdef SQLITE_SYNC_DATAONLY
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_SYNC_DATAONLY);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SYNC_DATAONLY", macro);
  } while (0);
#endif
#ifdef SQLITE_SYNC_FULL
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_SYNC_FULL);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SYNC_FULL", macro);
  } while (0);
#endif
#ifdef SQLITE_SYNC_NORMAL
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_SYNC_NORMAL);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SYNC_NORMAL", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_ALWAYS
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_ALWAYS);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_ALWAYS", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_ASSERT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_ASSERT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_ASSERT", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_BENIGN_MALLOC_HOOKS
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_BENIGN_MALLOC_HOOKS);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_BENIGN_MALLOC_HOOKS", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_BITVEC_TEST
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_BITVEC_TEST);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_BITVEC_TEST", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_BYTEORDER
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_BYTEORDER);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_BYTEORDER", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_EXPLAIN_STMT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_EXPLAIN_STMT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_EXPLAIN_STMT", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_FAULT_INSTALL
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_FAULT_INSTALL);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_FAULT_INSTALL", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_FIRST
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_FIRST);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_FIRST", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_IMPOSTER
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_IMPOSTER);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_IMPOSTER", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_ISINIT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_ISINIT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_ISINIT", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_ISKEYWORD
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_ISKEYWORD);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_ISKEYWORD", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_LAST
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_LAST);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_LAST", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_LOCALTIME_FAULT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_LOCALTIME_FAULT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_LOCALTIME_FAULT", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_NEVER_CORRUPT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_NEVER_CORRUPT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_NEVER_CORRUPT", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_OPTIMIZATIONS
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_OPTIMIZATIONS);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_OPTIMIZATIONS", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_PENDING_BYTE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_PENDING_BYTE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_PENDING_BYTE", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_PRNG_RESET
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_PRNG_RESET);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_PRNG_RESET", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_PRNG_RESTORE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_PRNG_RESTORE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_PRNG_RESTORE", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_PRNG_SAVE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_PRNG_SAVE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_PRNG_SAVE", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_RESERVE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_RESERVE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_RESERVE", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_SCRATCHMALLOC
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_SCRATCHMALLOC);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_SCRATCHMALLOC", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_SORTER_MMAP
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_SORTER_MMAP);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_SORTER_MMAP", macro);
  } while (0);
#endif
#ifdef SQLITE_TESTCTRL_VDBE_COVERAGE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TESTCTRL_VDBE_COVERAGE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_VDBE_COVERAGE", macro);
  } while (0);
#endif
#ifdef SQLITE_TEXT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TEXT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TEXT", macro);
  } while (0);
#endif
#ifdef SQLITE_TOOBIG
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TOOBIG);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TOOBIG", macro);
  } while (0);
#endif
#ifdef SQLITE_TRANSACTION
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TRANSACTION);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TRANSACTION", macro);
  } while (0);
#endif
#ifdef SQLITE_TRANSIENT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_TRANSIENT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TRANSIENT", macro);
  } while (0);
#endif
#ifdef SQLITE_UPDATE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_UPDATE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_UPDATE", macro);
  } while (0);
#endif
#ifdef SQLITE_UTF16
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_UTF16);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_UTF16", macro);
  } while (0);
#endif
#ifdef SQLITE_UTF16_ALIGNED
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_UTF16_ALIGNED);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_UTF16_ALIGNED", macro);
  } while (0);
#endif
#ifdef SQLITE_UTF16BE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_UTF16BE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_UTF16BE", macro);
  } while (0);
#endif
#ifdef SQLITE_UTF16LE
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_UTF16LE);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_UTF16LE", macro);
  } while (0);
#endif
#ifdef SQLITE_UTF8
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_UTF8);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_UTF8", macro);
  } while (0);
#endif
#ifdef SQLITE_VERSION
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_VERSION);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_VERSION", macro);
  } while (0);
#endif
#ifdef SQLITE_VERSION_NUMBER
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_VERSION_NUMBER);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_VERSION_NUMBER", macro);
  } while (0);
#endif
#ifdef SQLITE_VTAB_CONSTRAINT_SUPPORT
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_VTAB_CONSTRAINT_SUPPORT);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_VTAB_CONSTRAINT_SUPPORT", macro);
  } while (0);
#endif
#ifdef SQLITE_WARNING
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_WARNING);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_WARNING", macro);
  } while (0);
#endif
#ifdef SQLITE_WARNING_AUTOINDEX
  do {
    mrb_value macro = mrb_fixnum_value(SQLITE_WARNING_AUTOINDEX);
    mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_WARNING_AUTOINDEX", macro);
  } while (0);
#endif
}
