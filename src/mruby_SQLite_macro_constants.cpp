#include "mruby_SQLite.h"

void
mruby_SQLite_define_macro_constants(mrb_state* mrb) {
  /* WARNING
   * Code generator does it's best to determine the type of the macro
   * expansions, but mistakes will be made (as macros are just text,
   * and may contain other macros). So, you'll need to verify the
   * conversions used here are of the correct type.
   */

#ifdef _SQLITE3_H_
  /* Ignoring macro with no expansion: _SQLITE3_H_ */
#endif
#ifdef _SQLITE3RTREE_H_
  /* Ignoring macro with no expansion: _SQLITE3RTREE_H_ */
#endif
#ifdef FULLY_WITHIN
  /* FULLY_WITHIN assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "FULLY_WITHIN", mrb_fixnum_value(FULLY_WITHIN));
#endif
#ifdef NOT_WITHIN
  /* NOT_WITHIN assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "NOT_WITHIN", mrb_fixnum_value(NOT_WITHIN));
#endif
#ifdef PARTLY_WITHIN
  /* PARTLY_WITHIN assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "PARTLY_WITHIN", mrb_fixnum_value(PARTLY_WITHIN));
#endif
#ifdef SQLITE3_TEXT
  /* SQLITE3_TEXT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE3_TEXT", mrb_fixnum_value(SQLITE3_TEXT));
#endif
#ifdef SQLITE_ABORT
  /* SQLITE_ABORT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ABORT", mrb_fixnum_value(SQLITE_ABORT));
#endif
#ifdef SQLITE_ABORT_ROLLBACK
  /* SQLITE_ABORT_ROLLBACK assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ABORT_ROLLBACK", mrb_fixnum_value(SQLITE_ABORT_ROLLBACK));
#endif
#ifdef SQLITE_ACCESS_EXISTS
  /* SQLITE_ACCESS_EXISTS assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ACCESS_EXISTS", mrb_fixnum_value(SQLITE_ACCESS_EXISTS));
#endif
#ifdef SQLITE_ACCESS_READ
  /* SQLITE_ACCESS_READ assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ACCESS_READ", mrb_fixnum_value(SQLITE_ACCESS_READ));
#endif
#ifdef SQLITE_ACCESS_READWRITE
  /* SQLITE_ACCESS_READWRITE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ACCESS_READWRITE", mrb_fixnum_value(SQLITE_ACCESS_READWRITE));
#endif
#ifdef SQLITE_ALTER_TABLE
  /* SQLITE_ALTER_TABLE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ALTER_TABLE", mrb_fixnum_value(SQLITE_ALTER_TABLE));
#endif
#ifdef SQLITE_ANALYZE
  /* SQLITE_ANALYZE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ANALYZE", mrb_fixnum_value(SQLITE_ANALYZE));
#endif
#ifdef SQLITE_ANY
  /* SQLITE_ANY assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ANY", mrb_fixnum_value(SQLITE_ANY));
#endif
#ifdef SQLITE_API
  /* Ignoring macro with no expansion: SQLITE_API */
#endif
#ifdef SQLITE_ATTACH
  /* SQLITE_ATTACH assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ATTACH", mrb_fixnum_value(SQLITE_ATTACH));
#endif
#ifdef SQLITE_AUTH
  /* SQLITE_AUTH assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_AUTH", mrb_fixnum_value(SQLITE_AUTH));
#endif
#ifdef SQLITE_AUTH_USER
  /* SQLITE_AUTH_USER assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_AUTH_USER", mrb_fixnum_value(SQLITE_AUTH_USER));
#endif
#ifdef SQLITE_BLOB
  /* SQLITE_BLOB assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_BLOB", mrb_fixnum_value(SQLITE_BLOB));
#endif
#ifdef SQLITE_BUSY
  /* SQLITE_BUSY assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_BUSY", mrb_fixnum_value(SQLITE_BUSY));
#endif
#ifdef SQLITE_BUSY_RECOVERY
  /* SQLITE_BUSY_RECOVERY assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_BUSY_RECOVERY", mrb_fixnum_value(SQLITE_BUSY_RECOVERY));
#endif
#ifdef SQLITE_BUSY_SNAPSHOT
  /* SQLITE_BUSY_SNAPSHOT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_BUSY_SNAPSHOT", mrb_fixnum_value(SQLITE_BUSY_SNAPSHOT));
#endif
#ifdef SQLITE_CANTOPEN
  /* SQLITE_CANTOPEN assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CANTOPEN", mrb_fixnum_value(SQLITE_CANTOPEN));
#endif
#ifdef SQLITE_CANTOPEN_CONVPATH
  /* SQLITE_CANTOPEN_CONVPATH assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CANTOPEN_CONVPATH", mrb_fixnum_value(SQLITE_CANTOPEN_CONVPATH));
#endif
#ifdef SQLITE_CANTOPEN_FULLPATH
  /* SQLITE_CANTOPEN_FULLPATH assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CANTOPEN_FULLPATH", mrb_fixnum_value(SQLITE_CANTOPEN_FULLPATH));
#endif
#ifdef SQLITE_CANTOPEN_ISDIR
  /* SQLITE_CANTOPEN_ISDIR assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CANTOPEN_ISDIR", mrb_fixnum_value(SQLITE_CANTOPEN_ISDIR));
#endif
#ifdef SQLITE_CANTOPEN_NOTEMPDIR
  /* SQLITE_CANTOPEN_NOTEMPDIR assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CANTOPEN_NOTEMPDIR", mrb_fixnum_value(SQLITE_CANTOPEN_NOTEMPDIR));
#endif
#ifdef SQLITE_CDECL
  /* Ignoring macro with no expansion: SQLITE_CDECL */
#endif
#ifdef SQLITE_CHECKPOINT_FULL
  /* SQLITE_CHECKPOINT_FULL assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CHECKPOINT_FULL", mrb_fixnum_value(SQLITE_CHECKPOINT_FULL));
#endif
#ifdef SQLITE_CHECKPOINT_PASSIVE
  /* SQLITE_CHECKPOINT_PASSIVE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CHECKPOINT_PASSIVE", mrb_fixnum_value(SQLITE_CHECKPOINT_PASSIVE));
#endif
#ifdef SQLITE_CHECKPOINT_RESTART
  /* SQLITE_CHECKPOINT_RESTART assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CHECKPOINT_RESTART", mrb_fixnum_value(SQLITE_CHECKPOINT_RESTART));
#endif
#ifdef SQLITE_CHECKPOINT_TRUNCATE
  /* SQLITE_CHECKPOINT_TRUNCATE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CHECKPOINT_TRUNCATE", mrb_fixnum_value(SQLITE_CHECKPOINT_TRUNCATE));
#endif
#ifdef SQLITE_CONFIG_COVERING_INDEX_SCAN
  /* SQLITE_CONFIG_COVERING_INDEX_SCAN assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_COVERING_INDEX_SCAN", mrb_fixnum_value(SQLITE_CONFIG_COVERING_INDEX_SCAN));
#endif
#ifdef SQLITE_CONFIG_GETMALLOC
  /* SQLITE_CONFIG_GETMALLOC assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_GETMALLOC", mrb_fixnum_value(SQLITE_CONFIG_GETMALLOC));
#endif
#ifdef SQLITE_CONFIG_GETMUTEX
  /* SQLITE_CONFIG_GETMUTEX assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_GETMUTEX", mrb_fixnum_value(SQLITE_CONFIG_GETMUTEX));
#endif
#ifdef SQLITE_CONFIG_GETPCACHE
  /* SQLITE_CONFIG_GETPCACHE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_GETPCACHE", mrb_fixnum_value(SQLITE_CONFIG_GETPCACHE));
#endif
#ifdef SQLITE_CONFIG_GETPCACHE2
  /* SQLITE_CONFIG_GETPCACHE2 assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_GETPCACHE2", mrb_fixnum_value(SQLITE_CONFIG_GETPCACHE2));
#endif
#ifdef SQLITE_CONFIG_HEAP
  /* SQLITE_CONFIG_HEAP assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_HEAP", mrb_fixnum_value(SQLITE_CONFIG_HEAP));
#endif
#ifdef SQLITE_CONFIG_LOG
  /* SQLITE_CONFIG_LOG assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_LOG", mrb_fixnum_value(SQLITE_CONFIG_LOG));
#endif
#ifdef SQLITE_CONFIG_LOOKASIDE
  /* SQLITE_CONFIG_LOOKASIDE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_LOOKASIDE", mrb_fixnum_value(SQLITE_CONFIG_LOOKASIDE));
#endif
#ifdef SQLITE_CONFIG_MALLOC
  /* SQLITE_CONFIG_MALLOC assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_MALLOC", mrb_fixnum_value(SQLITE_CONFIG_MALLOC));
#endif
#ifdef SQLITE_CONFIG_MEMSTATUS
  /* SQLITE_CONFIG_MEMSTATUS assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_MEMSTATUS", mrb_fixnum_value(SQLITE_CONFIG_MEMSTATUS));
#endif
#ifdef SQLITE_CONFIG_MMAP_SIZE
  /* SQLITE_CONFIG_MMAP_SIZE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_MMAP_SIZE", mrb_fixnum_value(SQLITE_CONFIG_MMAP_SIZE));
#endif
#ifdef SQLITE_CONFIG_MULTITHREAD
  /* SQLITE_CONFIG_MULTITHREAD assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_MULTITHREAD", mrb_fixnum_value(SQLITE_CONFIG_MULTITHREAD));
#endif
#ifdef SQLITE_CONFIG_MUTEX
  /* SQLITE_CONFIG_MUTEX assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_MUTEX", mrb_fixnum_value(SQLITE_CONFIG_MUTEX));
#endif
#ifdef SQLITE_CONFIG_PAGECACHE
  /* SQLITE_CONFIG_PAGECACHE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_PAGECACHE", mrb_fixnum_value(SQLITE_CONFIG_PAGECACHE));
#endif
#ifdef SQLITE_CONFIG_PCACHE
  /* SQLITE_CONFIG_PCACHE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_PCACHE", mrb_fixnum_value(SQLITE_CONFIG_PCACHE));
#endif
#ifdef SQLITE_CONFIG_PCACHE2
  /* SQLITE_CONFIG_PCACHE2 assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_PCACHE2", mrb_fixnum_value(SQLITE_CONFIG_PCACHE2));
#endif
#ifdef SQLITE_CONFIG_PCACHE_HDRSZ
  /* SQLITE_CONFIG_PCACHE_HDRSZ assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_PCACHE_HDRSZ", mrb_fixnum_value(SQLITE_CONFIG_PCACHE_HDRSZ));
#endif
#ifdef SQLITE_CONFIG_PMASZ
  /* SQLITE_CONFIG_PMASZ assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_PMASZ", mrb_fixnum_value(SQLITE_CONFIG_PMASZ));
#endif
#ifdef SQLITE_CONFIG_SCRATCH
  /* SQLITE_CONFIG_SCRATCH assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_SCRATCH", mrb_fixnum_value(SQLITE_CONFIG_SCRATCH));
#endif
#ifdef SQLITE_CONFIG_SERIALIZED
  /* SQLITE_CONFIG_SERIALIZED assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_SERIALIZED", mrb_fixnum_value(SQLITE_CONFIG_SERIALIZED));
#endif
#ifdef SQLITE_CONFIG_SINGLETHREAD
  /* SQLITE_CONFIG_SINGLETHREAD assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_SINGLETHREAD", mrb_fixnum_value(SQLITE_CONFIG_SINGLETHREAD));
#endif
#ifdef SQLITE_CONFIG_SQLLOG
  /* SQLITE_CONFIG_SQLLOG assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_SQLLOG", mrb_fixnum_value(SQLITE_CONFIG_SQLLOG));
#endif
#ifdef SQLITE_CONFIG_URI
  /* SQLITE_CONFIG_URI assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_URI", mrb_fixnum_value(SQLITE_CONFIG_URI));
#endif
#ifdef SQLITE_CONFIG_WIN32_HEAPSIZE
  /* SQLITE_CONFIG_WIN32_HEAPSIZE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONFIG_WIN32_HEAPSIZE", mrb_fixnum_value(SQLITE_CONFIG_WIN32_HEAPSIZE));
#endif
#ifdef SQLITE_CONSTRAINT
  /* SQLITE_CONSTRAINT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONSTRAINT", mrb_fixnum_value(SQLITE_CONSTRAINT));
#endif
#ifdef SQLITE_CONSTRAINT_CHECK
  /* SQLITE_CONSTRAINT_CHECK assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONSTRAINT_CHECK", mrb_fixnum_value(SQLITE_CONSTRAINT_CHECK));
#endif
#ifdef SQLITE_CONSTRAINT_COMMITHOOK
  /* SQLITE_CONSTRAINT_COMMITHOOK assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONSTRAINT_COMMITHOOK", mrb_fixnum_value(SQLITE_CONSTRAINT_COMMITHOOK));
#endif
#ifdef SQLITE_CONSTRAINT_FOREIGNKEY
  /* SQLITE_CONSTRAINT_FOREIGNKEY assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONSTRAINT_FOREIGNKEY", mrb_fixnum_value(SQLITE_CONSTRAINT_FOREIGNKEY));
#endif
#ifdef SQLITE_CONSTRAINT_FUNCTION
  /* SQLITE_CONSTRAINT_FUNCTION assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONSTRAINT_FUNCTION", mrb_fixnum_value(SQLITE_CONSTRAINT_FUNCTION));
#endif
#ifdef SQLITE_CONSTRAINT_NOTNULL
  /* SQLITE_CONSTRAINT_NOTNULL assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONSTRAINT_NOTNULL", mrb_fixnum_value(SQLITE_CONSTRAINT_NOTNULL));
#endif
#ifdef SQLITE_CONSTRAINT_PRIMARYKEY
  /* SQLITE_CONSTRAINT_PRIMARYKEY assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONSTRAINT_PRIMARYKEY", mrb_fixnum_value(SQLITE_CONSTRAINT_PRIMARYKEY));
#endif
#ifdef SQLITE_CONSTRAINT_ROWID
  /* SQLITE_CONSTRAINT_ROWID assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONSTRAINT_ROWID", mrb_fixnum_value(SQLITE_CONSTRAINT_ROWID));
#endif
#ifdef SQLITE_CONSTRAINT_TRIGGER
  /* SQLITE_CONSTRAINT_TRIGGER assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONSTRAINT_TRIGGER", mrb_fixnum_value(SQLITE_CONSTRAINT_TRIGGER));
#endif
#ifdef SQLITE_CONSTRAINT_UNIQUE
  /* SQLITE_CONSTRAINT_UNIQUE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONSTRAINT_UNIQUE", mrb_fixnum_value(SQLITE_CONSTRAINT_UNIQUE));
#endif
#ifdef SQLITE_CONSTRAINT_VTAB
  /* SQLITE_CONSTRAINT_VTAB assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CONSTRAINT_VTAB", mrb_fixnum_value(SQLITE_CONSTRAINT_VTAB));
#endif
#ifdef SQLITE_COPY
  /* SQLITE_COPY assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_COPY", mrb_fixnum_value(SQLITE_COPY));
#endif
#ifdef SQLITE_CORRUPT
  /* SQLITE_CORRUPT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CORRUPT", mrb_fixnum_value(SQLITE_CORRUPT));
#endif
#ifdef SQLITE_CORRUPT_VTAB
  /* SQLITE_CORRUPT_VTAB assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CORRUPT_VTAB", mrb_fixnum_value(SQLITE_CORRUPT_VTAB));
#endif
#ifdef SQLITE_CREATE_INDEX
  /* SQLITE_CREATE_INDEX assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CREATE_INDEX", mrb_fixnum_value(SQLITE_CREATE_INDEX));
#endif
#ifdef SQLITE_CREATE_TABLE
  /* SQLITE_CREATE_TABLE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CREATE_TABLE", mrb_fixnum_value(SQLITE_CREATE_TABLE));
#endif
#ifdef SQLITE_CREATE_TEMP_INDEX
  /* SQLITE_CREATE_TEMP_INDEX assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CREATE_TEMP_INDEX", mrb_fixnum_value(SQLITE_CREATE_TEMP_INDEX));
#endif
#ifdef SQLITE_CREATE_TEMP_TABLE
  /* SQLITE_CREATE_TEMP_TABLE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CREATE_TEMP_TABLE", mrb_fixnum_value(SQLITE_CREATE_TEMP_TABLE));
#endif
#ifdef SQLITE_CREATE_TEMP_TRIGGER
  /* SQLITE_CREATE_TEMP_TRIGGER assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CREATE_TEMP_TRIGGER", mrb_fixnum_value(SQLITE_CREATE_TEMP_TRIGGER));
#endif
#ifdef SQLITE_CREATE_TEMP_VIEW
  /* SQLITE_CREATE_TEMP_VIEW assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CREATE_TEMP_VIEW", mrb_fixnum_value(SQLITE_CREATE_TEMP_VIEW));
#endif
#ifdef SQLITE_CREATE_TRIGGER
  /* SQLITE_CREATE_TRIGGER assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CREATE_TRIGGER", mrb_fixnum_value(SQLITE_CREATE_TRIGGER));
#endif
#ifdef SQLITE_CREATE_VIEW
  /* SQLITE_CREATE_VIEW assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CREATE_VIEW", mrb_fixnum_value(SQLITE_CREATE_VIEW));
#endif
#ifdef SQLITE_CREATE_VTABLE
  /* SQLITE_CREATE_VTABLE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_CREATE_VTABLE", mrb_fixnum_value(SQLITE_CREATE_VTABLE));
#endif
#ifdef SQLITE_DBCONFIG_ENABLE_FKEY
  /* SQLITE_DBCONFIG_ENABLE_FKEY assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBCONFIG_ENABLE_FKEY", mrb_fixnum_value(SQLITE_DBCONFIG_ENABLE_FKEY));
#endif
#ifdef SQLITE_DBCONFIG_ENABLE_TRIGGER
  /* SQLITE_DBCONFIG_ENABLE_TRIGGER assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBCONFIG_ENABLE_TRIGGER", mrb_fixnum_value(SQLITE_DBCONFIG_ENABLE_TRIGGER));
#endif
#ifdef SQLITE_DBCONFIG_LOOKASIDE
  /* SQLITE_DBCONFIG_LOOKASIDE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBCONFIG_LOOKASIDE", mrb_fixnum_value(SQLITE_DBCONFIG_LOOKASIDE));
#endif
#ifdef SQLITE_DBSTATUS_CACHE_HIT
  /* SQLITE_DBSTATUS_CACHE_HIT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_CACHE_HIT", mrb_fixnum_value(SQLITE_DBSTATUS_CACHE_HIT));
#endif
#ifdef SQLITE_DBSTATUS_CACHE_MISS
  /* SQLITE_DBSTATUS_CACHE_MISS assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_CACHE_MISS", mrb_fixnum_value(SQLITE_DBSTATUS_CACHE_MISS));
#endif
#ifdef SQLITE_DBSTATUS_CACHE_USED
  /* SQLITE_DBSTATUS_CACHE_USED assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_CACHE_USED", mrb_fixnum_value(SQLITE_DBSTATUS_CACHE_USED));
#endif
#ifdef SQLITE_DBSTATUS_CACHE_WRITE
  /* SQLITE_DBSTATUS_CACHE_WRITE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_CACHE_WRITE", mrb_fixnum_value(SQLITE_DBSTATUS_CACHE_WRITE));
#endif
#ifdef SQLITE_DBSTATUS_DEFERRED_FKS
  /* SQLITE_DBSTATUS_DEFERRED_FKS assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_DEFERRED_FKS", mrb_fixnum_value(SQLITE_DBSTATUS_DEFERRED_FKS));
#endif
#ifdef SQLITE_DBSTATUS_LOOKASIDE_HIT
  /* SQLITE_DBSTATUS_LOOKASIDE_HIT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_LOOKASIDE_HIT", mrb_fixnum_value(SQLITE_DBSTATUS_LOOKASIDE_HIT));
#endif
#ifdef SQLITE_DBSTATUS_LOOKASIDE_MISS_FULL
  /* SQLITE_DBSTATUS_LOOKASIDE_MISS_FULL assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_LOOKASIDE_MISS_FULL", mrb_fixnum_value(SQLITE_DBSTATUS_LOOKASIDE_MISS_FULL));
#endif
#ifdef SQLITE_DBSTATUS_LOOKASIDE_MISS_SIZE
  /* SQLITE_DBSTATUS_LOOKASIDE_MISS_SIZE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_LOOKASIDE_MISS_SIZE", mrb_fixnum_value(SQLITE_DBSTATUS_LOOKASIDE_MISS_SIZE));
#endif
#ifdef SQLITE_DBSTATUS_LOOKASIDE_USED
  /* SQLITE_DBSTATUS_LOOKASIDE_USED assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_LOOKASIDE_USED", mrb_fixnum_value(SQLITE_DBSTATUS_LOOKASIDE_USED));
#endif
#ifdef SQLITE_DBSTATUS_MAX
  /* SQLITE_DBSTATUS_MAX assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_MAX", mrb_fixnum_value(SQLITE_DBSTATUS_MAX));
#endif
#ifdef SQLITE_DBSTATUS_SCHEMA_USED
  /* SQLITE_DBSTATUS_SCHEMA_USED assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_SCHEMA_USED", mrb_fixnum_value(SQLITE_DBSTATUS_SCHEMA_USED));
#endif
#ifdef SQLITE_DBSTATUS_STMT_USED
  /* SQLITE_DBSTATUS_STMT_USED assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DBSTATUS_STMT_USED", mrb_fixnum_value(SQLITE_DBSTATUS_STMT_USED));
#endif
#ifdef SQLITE_DELETE
  /* SQLITE_DELETE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DELETE", mrb_fixnum_value(SQLITE_DELETE));
#endif
#ifdef SQLITE_DENY
  /* SQLITE_DENY assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DENY", mrb_fixnum_value(SQLITE_DENY));
#endif
#ifdef SQLITE_DEPRECATED
  /* Ignoring macro with no expansion: SQLITE_DEPRECATED */
#endif
#ifdef SQLITE_DETACH
  /* SQLITE_DETACH assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DETACH", mrb_fixnum_value(SQLITE_DETACH));
#endif
#ifdef SQLITE_DETERMINISTIC
  /* SQLITE_DETERMINISTIC assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DETERMINISTIC", mrb_fixnum_value(SQLITE_DETERMINISTIC));
#endif
#ifdef SQLITE_DONE
  /* SQLITE_DONE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DONE", mrb_fixnum_value(SQLITE_DONE));
#endif
#ifdef SQLITE_DROP_INDEX
  /* SQLITE_DROP_INDEX assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DROP_INDEX", mrb_fixnum_value(SQLITE_DROP_INDEX));
#endif
#ifdef SQLITE_DROP_TABLE
  /* SQLITE_DROP_TABLE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DROP_TABLE", mrb_fixnum_value(SQLITE_DROP_TABLE));
#endif
#ifdef SQLITE_DROP_TEMP_INDEX
  /* SQLITE_DROP_TEMP_INDEX assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DROP_TEMP_INDEX", mrb_fixnum_value(SQLITE_DROP_TEMP_INDEX));
#endif
#ifdef SQLITE_DROP_TEMP_TABLE
  /* SQLITE_DROP_TEMP_TABLE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DROP_TEMP_TABLE", mrb_fixnum_value(SQLITE_DROP_TEMP_TABLE));
#endif
#ifdef SQLITE_DROP_TEMP_TRIGGER
  /* SQLITE_DROP_TEMP_TRIGGER assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DROP_TEMP_TRIGGER", mrb_fixnum_value(SQLITE_DROP_TEMP_TRIGGER));
#endif
#ifdef SQLITE_DROP_TEMP_VIEW
  /* SQLITE_DROP_TEMP_VIEW assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DROP_TEMP_VIEW", mrb_fixnum_value(SQLITE_DROP_TEMP_VIEW));
#endif
#ifdef SQLITE_DROP_TRIGGER
  /* SQLITE_DROP_TRIGGER assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DROP_TRIGGER", mrb_fixnum_value(SQLITE_DROP_TRIGGER));
#endif
#ifdef SQLITE_DROP_VIEW
  /* SQLITE_DROP_VIEW assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DROP_VIEW", mrb_fixnum_value(SQLITE_DROP_VIEW));
#endif
#ifdef SQLITE_DROP_VTABLE
  /* SQLITE_DROP_VTABLE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_DROP_VTABLE", mrb_fixnum_value(SQLITE_DROP_VTABLE));
#endif
#ifdef SQLITE_EMPTY
  /* SQLITE_EMPTY assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_EMPTY", mrb_fixnum_value(SQLITE_EMPTY));
#endif
#ifdef SQLITE_ERROR
  /* SQLITE_ERROR assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ERROR", mrb_fixnum_value(SQLITE_ERROR));
#endif
#ifdef SQLITE_EXPERIMENTAL
  /* Ignoring macro with no expansion: SQLITE_EXPERIMENTAL */
#endif
#ifdef SQLITE_EXTERN
  /* SQLITE_EXTERN assumed to be an integer value */
  // mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_EXTERN", mrb_fixnum_value(SQLITE_EXTERN));
#endif
#ifdef SQLITE_FAIL
  /* SQLITE_FAIL assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FAIL", mrb_fixnum_value(SQLITE_FAIL));
#endif
#ifdef SQLITE_FCNTL_BUSYHANDLER
  /* SQLITE_FCNTL_BUSYHANDLER assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_BUSYHANDLER", mrb_fixnum_value(SQLITE_FCNTL_BUSYHANDLER));
#endif
#ifdef SQLITE_FCNTL_CHUNK_SIZE
  /* SQLITE_FCNTL_CHUNK_SIZE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_CHUNK_SIZE", mrb_fixnum_value(SQLITE_FCNTL_CHUNK_SIZE));
#endif
#ifdef SQLITE_FCNTL_COMMIT_PHASETWO
  /* SQLITE_FCNTL_COMMIT_PHASETWO assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_COMMIT_PHASETWO", mrb_fixnum_value(SQLITE_FCNTL_COMMIT_PHASETWO));
#endif
#ifdef SQLITE_FCNTL_FILE_POINTER
  /* SQLITE_FCNTL_FILE_POINTER assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_FILE_POINTER", mrb_fixnum_value(SQLITE_FCNTL_FILE_POINTER));
#endif
#ifdef SQLITE_FCNTL_GET_LOCKPROXYFILE
  /* SQLITE_FCNTL_GET_LOCKPROXYFILE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_GET_LOCKPROXYFILE", mrb_fixnum_value(SQLITE_FCNTL_GET_LOCKPROXYFILE));
#endif
#ifdef SQLITE_FCNTL_HAS_MOVED
  /* SQLITE_FCNTL_HAS_MOVED assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_HAS_MOVED", mrb_fixnum_value(SQLITE_FCNTL_HAS_MOVED));
#endif
#ifdef SQLITE_FCNTL_LAST_ERRNO
  /* SQLITE_FCNTL_LAST_ERRNO assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_LAST_ERRNO", mrb_fixnum_value(SQLITE_FCNTL_LAST_ERRNO));
#endif
#ifdef SQLITE_FCNTL_LOCKSTATE
  /* SQLITE_FCNTL_LOCKSTATE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_LOCKSTATE", mrb_fixnum_value(SQLITE_FCNTL_LOCKSTATE));
#endif
#ifdef SQLITE_FCNTL_MMAP_SIZE
  /* SQLITE_FCNTL_MMAP_SIZE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_MMAP_SIZE", mrb_fixnum_value(SQLITE_FCNTL_MMAP_SIZE));
#endif
#ifdef SQLITE_FCNTL_OVERWRITE
  /* SQLITE_FCNTL_OVERWRITE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_OVERWRITE", mrb_fixnum_value(SQLITE_FCNTL_OVERWRITE));
#endif
#ifdef SQLITE_FCNTL_PERSIST_WAL
  /* SQLITE_FCNTL_PERSIST_WAL assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_PERSIST_WAL", mrb_fixnum_value(SQLITE_FCNTL_PERSIST_WAL));
#endif
#ifdef SQLITE_FCNTL_POWERSAFE_OVERWRITE
  /* SQLITE_FCNTL_POWERSAFE_OVERWRITE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_POWERSAFE_OVERWRITE", mrb_fixnum_value(SQLITE_FCNTL_POWERSAFE_OVERWRITE));
#endif
#ifdef SQLITE_FCNTL_PRAGMA
  /* SQLITE_FCNTL_PRAGMA assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_PRAGMA", mrb_fixnum_value(SQLITE_FCNTL_PRAGMA));
#endif
#ifdef SQLITE_FCNTL_SET_LOCKPROXYFILE
  /* SQLITE_FCNTL_SET_LOCKPROXYFILE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_SET_LOCKPROXYFILE", mrb_fixnum_value(SQLITE_FCNTL_SET_LOCKPROXYFILE));
#endif
#ifdef SQLITE_FCNTL_SIZE_HINT
  /* SQLITE_FCNTL_SIZE_HINT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_SIZE_HINT", mrb_fixnum_value(SQLITE_FCNTL_SIZE_HINT));
#endif
#ifdef SQLITE_FCNTL_SYNC
  /* SQLITE_FCNTL_SYNC assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_SYNC", mrb_fixnum_value(SQLITE_FCNTL_SYNC));
#endif
#ifdef SQLITE_FCNTL_SYNC_OMITTED
  /* SQLITE_FCNTL_SYNC_OMITTED assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_SYNC_OMITTED", mrb_fixnum_value(SQLITE_FCNTL_SYNC_OMITTED));
#endif
#ifdef SQLITE_FCNTL_TEMPFILENAME
  /* SQLITE_FCNTL_TEMPFILENAME assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_TEMPFILENAME", mrb_fixnum_value(SQLITE_FCNTL_TEMPFILENAME));
#endif
#ifdef SQLITE_FCNTL_TRACE
  /* SQLITE_FCNTL_TRACE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_TRACE", mrb_fixnum_value(SQLITE_FCNTL_TRACE));
#endif
#ifdef SQLITE_FCNTL_VFSNAME
  /* SQLITE_FCNTL_VFSNAME assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_VFSNAME", mrb_fixnum_value(SQLITE_FCNTL_VFSNAME));
#endif
#ifdef SQLITE_FCNTL_WAL_BLOCK
  /* SQLITE_FCNTL_WAL_BLOCK assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_WAL_BLOCK", mrb_fixnum_value(SQLITE_FCNTL_WAL_BLOCK));
#endif
#ifdef SQLITE_FCNTL_WIN32_AV_RETRY
  /* SQLITE_FCNTL_WIN32_AV_RETRY assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_WIN32_AV_RETRY", mrb_fixnum_value(SQLITE_FCNTL_WIN32_AV_RETRY));
#endif
#ifdef SQLITE_FCNTL_WIN32_SET_HANDLE
  /* SQLITE_FCNTL_WIN32_SET_HANDLE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FCNTL_WIN32_SET_HANDLE", mrb_fixnum_value(SQLITE_FCNTL_WIN32_SET_HANDLE));
#endif
#ifdef SQLITE_FLOAT
  /* SQLITE_FLOAT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FLOAT", mrb_fixnum_value(SQLITE_FLOAT));
#endif
#ifdef SQLITE_FORMAT
  /* SQLITE_FORMAT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FORMAT", mrb_fixnum_value(SQLITE_FORMAT));
#endif
#ifdef SQLITE_FULL
  /* SQLITE_FULL assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FULL", mrb_fixnum_value(SQLITE_FULL));
#endif
#ifdef SQLITE_FUNCTION
  /* SQLITE_FUNCTION assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_FUNCTION", mrb_fixnum_value(SQLITE_FUNCTION));
#endif
#ifdef SQLITE_GET_LOCKPROXYFILE
  /* SQLITE_GET_LOCKPROXYFILE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_GET_LOCKPROXYFILE", mrb_fixnum_value(SQLITE_GET_LOCKPROXYFILE));
#endif
#ifdef SQLITE_IGNORE
  /* SQLITE_IGNORE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IGNORE", mrb_fixnum_value(SQLITE_IGNORE));
#endif
#ifdef SQLITE_INDEX_CONSTRAINT_EQ
  /* SQLITE_INDEX_CONSTRAINT_EQ assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_INDEX_CONSTRAINT_EQ", mrb_fixnum_value(SQLITE_INDEX_CONSTRAINT_EQ));
#endif
#ifdef SQLITE_INDEX_CONSTRAINT_GE
  /* SQLITE_INDEX_CONSTRAINT_GE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_INDEX_CONSTRAINT_GE", mrb_fixnum_value(SQLITE_INDEX_CONSTRAINT_GE));
#endif
#ifdef SQLITE_INDEX_CONSTRAINT_GT
  /* SQLITE_INDEX_CONSTRAINT_GT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_INDEX_CONSTRAINT_GT", mrb_fixnum_value(SQLITE_INDEX_CONSTRAINT_GT));
#endif
#ifdef SQLITE_INDEX_CONSTRAINT_LE
  /* SQLITE_INDEX_CONSTRAINT_LE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_INDEX_CONSTRAINT_LE", mrb_fixnum_value(SQLITE_INDEX_CONSTRAINT_LE));
#endif
#ifdef SQLITE_INDEX_CONSTRAINT_LT
  /* SQLITE_INDEX_CONSTRAINT_LT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_INDEX_CONSTRAINT_LT", mrb_fixnum_value(SQLITE_INDEX_CONSTRAINT_LT));
#endif
#ifdef SQLITE_INDEX_CONSTRAINT_MATCH
  /* SQLITE_INDEX_CONSTRAINT_MATCH assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_INDEX_CONSTRAINT_MATCH", mrb_fixnum_value(SQLITE_INDEX_CONSTRAINT_MATCH));
#endif
#ifdef SQLITE_INSERT
  /* SQLITE_INSERT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_INSERT", mrb_fixnum_value(SQLITE_INSERT));
#endif
#ifdef SQLITE_INTEGER
  /* SQLITE_INTEGER assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_INTEGER", mrb_fixnum_value(SQLITE_INTEGER));
#endif
#ifdef SQLITE_INTERNAL
  /* SQLITE_INTERNAL assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_INTERNAL", mrb_fixnum_value(SQLITE_INTERNAL));
#endif
#ifdef SQLITE_INTERRUPT
  /* SQLITE_INTERRUPT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_INTERRUPT", mrb_fixnum_value(SQLITE_INTERRUPT));
#endif
#ifdef SQLITE_IOCAP_ATOMIC
  /* SQLITE_IOCAP_ATOMIC assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_ATOMIC", mrb_fixnum_value(SQLITE_IOCAP_ATOMIC));
#endif
#ifdef SQLITE_IOCAP_ATOMIC16K
  /* SQLITE_IOCAP_ATOMIC16K assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_ATOMIC16K", mrb_fixnum_value(SQLITE_IOCAP_ATOMIC16K));
#endif
#ifdef SQLITE_IOCAP_ATOMIC1K
  /* SQLITE_IOCAP_ATOMIC1K assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_ATOMIC1K", mrb_fixnum_value(SQLITE_IOCAP_ATOMIC1K));
#endif
#ifdef SQLITE_IOCAP_ATOMIC2K
  /* SQLITE_IOCAP_ATOMIC2K assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_ATOMIC2K", mrb_fixnum_value(SQLITE_IOCAP_ATOMIC2K));
#endif
#ifdef SQLITE_IOCAP_ATOMIC32K
  /* SQLITE_IOCAP_ATOMIC32K assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_ATOMIC32K", mrb_fixnum_value(SQLITE_IOCAP_ATOMIC32K));
#endif
#ifdef SQLITE_IOCAP_ATOMIC4K
  /* SQLITE_IOCAP_ATOMIC4K assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_ATOMIC4K", mrb_fixnum_value(SQLITE_IOCAP_ATOMIC4K));
#endif
#ifdef SQLITE_IOCAP_ATOMIC512
  /* SQLITE_IOCAP_ATOMIC512 assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_ATOMIC512", mrb_fixnum_value(SQLITE_IOCAP_ATOMIC512));
#endif
#ifdef SQLITE_IOCAP_ATOMIC64K
  /* SQLITE_IOCAP_ATOMIC64K assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_ATOMIC64K", mrb_fixnum_value(SQLITE_IOCAP_ATOMIC64K));
#endif
#ifdef SQLITE_IOCAP_ATOMIC8K
  /* SQLITE_IOCAP_ATOMIC8K assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_ATOMIC8K", mrb_fixnum_value(SQLITE_IOCAP_ATOMIC8K));
#endif
#ifdef SQLITE_IOCAP_IMMUTABLE
  /* SQLITE_IOCAP_IMMUTABLE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_IMMUTABLE", mrb_fixnum_value(SQLITE_IOCAP_IMMUTABLE));
#endif
#ifdef SQLITE_IOCAP_POWERSAFE_OVERWRITE
  /* SQLITE_IOCAP_POWERSAFE_OVERWRITE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_POWERSAFE_OVERWRITE", mrb_fixnum_value(SQLITE_IOCAP_POWERSAFE_OVERWRITE));
#endif
#ifdef SQLITE_IOCAP_SAFE_APPEND
  /* SQLITE_IOCAP_SAFE_APPEND assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_SAFE_APPEND", mrb_fixnum_value(SQLITE_IOCAP_SAFE_APPEND));
#endif
#ifdef SQLITE_IOCAP_SEQUENTIAL
  /* SQLITE_IOCAP_SEQUENTIAL assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_SEQUENTIAL", mrb_fixnum_value(SQLITE_IOCAP_SEQUENTIAL));
#endif
#ifdef SQLITE_IOCAP_UNDELETABLE_WHEN_OPEN
  /* SQLITE_IOCAP_UNDELETABLE_WHEN_OPEN assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOCAP_UNDELETABLE_WHEN_OPEN", mrb_fixnum_value(SQLITE_IOCAP_UNDELETABLE_WHEN_OPEN));
#endif
#ifdef SQLITE_IOERR
  /* SQLITE_IOERR assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR", mrb_fixnum_value(SQLITE_IOERR));
#endif
#ifdef SQLITE_IOERR_ACCESS
  /* SQLITE_IOERR_ACCESS assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_ACCESS", mrb_fixnum_value(SQLITE_IOERR_ACCESS));
#endif
#ifdef SQLITE_IOERR_BLOCKED
  /* SQLITE_IOERR_BLOCKED assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_BLOCKED", mrb_fixnum_value(SQLITE_IOERR_BLOCKED));
#endif
#ifdef SQLITE_IOERR_CHECKRESERVEDLOCK
  /* SQLITE_IOERR_CHECKRESERVEDLOCK assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_CHECKRESERVEDLOCK", mrb_fixnum_value(SQLITE_IOERR_CHECKRESERVEDLOCK));
#endif
#ifdef SQLITE_IOERR_CLOSE
  /* SQLITE_IOERR_CLOSE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_CLOSE", mrb_fixnum_value(SQLITE_IOERR_CLOSE));
#endif
#ifdef SQLITE_IOERR_CONVPATH
  /* SQLITE_IOERR_CONVPATH assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_CONVPATH", mrb_fixnum_value(SQLITE_IOERR_CONVPATH));
#endif
#ifdef SQLITE_IOERR_DELETE
  /* SQLITE_IOERR_DELETE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_DELETE", mrb_fixnum_value(SQLITE_IOERR_DELETE));
#endif
#ifdef SQLITE_IOERR_DELETE_NOENT
  /* SQLITE_IOERR_DELETE_NOENT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_DELETE_NOENT", mrb_fixnum_value(SQLITE_IOERR_DELETE_NOENT));
#endif
#ifdef SQLITE_IOERR_DIR_CLOSE
  /* SQLITE_IOERR_DIR_CLOSE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_DIR_CLOSE", mrb_fixnum_value(SQLITE_IOERR_DIR_CLOSE));
#endif
#ifdef SQLITE_IOERR_DIR_FSYNC
  /* SQLITE_IOERR_DIR_FSYNC assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_DIR_FSYNC", mrb_fixnum_value(SQLITE_IOERR_DIR_FSYNC));
#endif
#ifdef SQLITE_IOERR_FSTAT
  /* SQLITE_IOERR_FSTAT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_FSTAT", mrb_fixnum_value(SQLITE_IOERR_FSTAT));
#endif
#ifdef SQLITE_IOERR_FSYNC
  /* SQLITE_IOERR_FSYNC assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_FSYNC", mrb_fixnum_value(SQLITE_IOERR_FSYNC));
#endif
#ifdef SQLITE_IOERR_GETTEMPPATH
  /* SQLITE_IOERR_GETTEMPPATH assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_GETTEMPPATH", mrb_fixnum_value(SQLITE_IOERR_GETTEMPPATH));
#endif
#ifdef SQLITE_IOERR_LOCK
  /* SQLITE_IOERR_LOCK assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_LOCK", mrb_fixnum_value(SQLITE_IOERR_LOCK));
#endif
#ifdef SQLITE_IOERR_MMAP
  /* SQLITE_IOERR_MMAP assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_MMAP", mrb_fixnum_value(SQLITE_IOERR_MMAP));
#endif
#ifdef SQLITE_IOERR_NOMEM
  /* SQLITE_IOERR_NOMEM assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_NOMEM", mrb_fixnum_value(SQLITE_IOERR_NOMEM));
#endif
#ifdef SQLITE_IOERR_RDLOCK
  /* SQLITE_IOERR_RDLOCK assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_RDLOCK", mrb_fixnum_value(SQLITE_IOERR_RDLOCK));
#endif
#ifdef SQLITE_IOERR_READ
  /* SQLITE_IOERR_READ assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_READ", mrb_fixnum_value(SQLITE_IOERR_READ));
#endif
#ifdef SQLITE_IOERR_SEEK
  /* SQLITE_IOERR_SEEK assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_SEEK", mrb_fixnum_value(SQLITE_IOERR_SEEK));
#endif
#ifdef SQLITE_IOERR_SHMLOCK
  /* SQLITE_IOERR_SHMLOCK assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_SHMLOCK", mrb_fixnum_value(SQLITE_IOERR_SHMLOCK));
#endif
#ifdef SQLITE_IOERR_SHMMAP
  /* SQLITE_IOERR_SHMMAP assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_SHMMAP", mrb_fixnum_value(SQLITE_IOERR_SHMMAP));
#endif
#ifdef SQLITE_IOERR_SHMOPEN
  /* SQLITE_IOERR_SHMOPEN assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_SHMOPEN", mrb_fixnum_value(SQLITE_IOERR_SHMOPEN));
#endif
#ifdef SQLITE_IOERR_SHMSIZE
  /* SQLITE_IOERR_SHMSIZE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_SHMSIZE", mrb_fixnum_value(SQLITE_IOERR_SHMSIZE));
#endif
#ifdef SQLITE_IOERR_SHORT_READ
  /* SQLITE_IOERR_SHORT_READ assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_SHORT_READ", mrb_fixnum_value(SQLITE_IOERR_SHORT_READ));
#endif
#ifdef SQLITE_IOERR_TRUNCATE
  /* SQLITE_IOERR_TRUNCATE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_TRUNCATE", mrb_fixnum_value(SQLITE_IOERR_TRUNCATE));
#endif
#ifdef SQLITE_IOERR_UNLOCK
  /* SQLITE_IOERR_UNLOCK assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_UNLOCK", mrb_fixnum_value(SQLITE_IOERR_UNLOCK));
#endif
#ifdef SQLITE_IOERR_WRITE
  /* SQLITE_IOERR_WRITE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_IOERR_WRITE", mrb_fixnum_value(SQLITE_IOERR_WRITE));
#endif
#ifdef SQLITE_LAST_ERRNO
  /* SQLITE_LAST_ERRNO assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LAST_ERRNO", mrb_fixnum_value(SQLITE_LAST_ERRNO));
#endif
#ifdef SQLITE_LIMIT_ATTACHED
  /* SQLITE_LIMIT_ATTACHED assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_ATTACHED", mrb_fixnum_value(SQLITE_LIMIT_ATTACHED));
#endif
#ifdef SQLITE_LIMIT_COLUMN
  /* SQLITE_LIMIT_COLUMN assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_COLUMN", mrb_fixnum_value(SQLITE_LIMIT_COLUMN));
#endif
#ifdef SQLITE_LIMIT_COMPOUND_SELECT
  /* SQLITE_LIMIT_COMPOUND_SELECT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_COMPOUND_SELECT", mrb_fixnum_value(SQLITE_LIMIT_COMPOUND_SELECT));
#endif
#ifdef SQLITE_LIMIT_EXPR_DEPTH
  /* SQLITE_LIMIT_EXPR_DEPTH assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_EXPR_DEPTH", mrb_fixnum_value(SQLITE_LIMIT_EXPR_DEPTH));
#endif
#ifdef SQLITE_LIMIT_FUNCTION_ARG
  /* SQLITE_LIMIT_FUNCTION_ARG assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_FUNCTION_ARG", mrb_fixnum_value(SQLITE_LIMIT_FUNCTION_ARG));
#endif
#ifdef SQLITE_LIMIT_LENGTH
  /* SQLITE_LIMIT_LENGTH assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_LENGTH", mrb_fixnum_value(SQLITE_LIMIT_LENGTH));
#endif
#ifdef SQLITE_LIMIT_LIKE_PATTERN_LENGTH
  /* SQLITE_LIMIT_LIKE_PATTERN_LENGTH assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_LIKE_PATTERN_LENGTH", mrb_fixnum_value(SQLITE_LIMIT_LIKE_PATTERN_LENGTH));
#endif
#ifdef SQLITE_LIMIT_SQL_LENGTH
  /* SQLITE_LIMIT_SQL_LENGTH assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_SQL_LENGTH", mrb_fixnum_value(SQLITE_LIMIT_SQL_LENGTH));
#endif
#ifdef SQLITE_LIMIT_TRIGGER_DEPTH
  /* SQLITE_LIMIT_TRIGGER_DEPTH assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_TRIGGER_DEPTH", mrb_fixnum_value(SQLITE_LIMIT_TRIGGER_DEPTH));
#endif
#ifdef SQLITE_LIMIT_VARIABLE_NUMBER
  /* SQLITE_LIMIT_VARIABLE_NUMBER assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_VARIABLE_NUMBER", mrb_fixnum_value(SQLITE_LIMIT_VARIABLE_NUMBER));
#endif
#ifdef SQLITE_LIMIT_VDBE_OP
  /* SQLITE_LIMIT_VDBE_OP assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_VDBE_OP", mrb_fixnum_value(SQLITE_LIMIT_VDBE_OP));
#endif
#ifdef SQLITE_LIMIT_WORKER_THREADS
  /* SQLITE_LIMIT_WORKER_THREADS assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LIMIT_WORKER_THREADS", mrb_fixnum_value(SQLITE_LIMIT_WORKER_THREADS));
#endif
#ifdef SQLITE_LOCK_EXCLUSIVE
  /* SQLITE_LOCK_EXCLUSIVE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LOCK_EXCLUSIVE", mrb_fixnum_value(SQLITE_LOCK_EXCLUSIVE));
#endif
#ifdef SQLITE_LOCK_NONE
  /* SQLITE_LOCK_NONE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LOCK_NONE", mrb_fixnum_value(SQLITE_LOCK_NONE));
#endif
#ifdef SQLITE_LOCK_PENDING
  /* SQLITE_LOCK_PENDING assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LOCK_PENDING", mrb_fixnum_value(SQLITE_LOCK_PENDING));
#endif
#ifdef SQLITE_LOCK_RESERVED
  /* SQLITE_LOCK_RESERVED assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LOCK_RESERVED", mrb_fixnum_value(SQLITE_LOCK_RESERVED));
#endif
#ifdef SQLITE_LOCK_SHARED
  /* SQLITE_LOCK_SHARED assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LOCK_SHARED", mrb_fixnum_value(SQLITE_LOCK_SHARED));
#endif
#ifdef SQLITE_LOCKED
  /* SQLITE_LOCKED assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LOCKED", mrb_fixnum_value(SQLITE_LOCKED));
#endif
#ifdef SQLITE_LOCKED_SHAREDCACHE
  /* SQLITE_LOCKED_SHAREDCACHE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_LOCKED_SHAREDCACHE", mrb_fixnum_value(SQLITE_LOCKED_SHAREDCACHE));
#endif
#ifdef SQLITE_MISMATCH
  /* SQLITE_MISMATCH assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MISMATCH", mrb_fixnum_value(SQLITE_MISMATCH));
#endif
#ifdef SQLITE_MISUSE
  /* SQLITE_MISUSE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MISUSE", mrb_fixnum_value(SQLITE_MISUSE));
#endif
#ifdef SQLITE_MUTEX_FAST
  /* SQLITE_MUTEX_FAST assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_FAST", mrb_fixnum_value(SQLITE_MUTEX_FAST));
#endif
#ifdef SQLITE_MUTEX_RECURSIVE
  /* SQLITE_MUTEX_RECURSIVE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_RECURSIVE", mrb_fixnum_value(SQLITE_MUTEX_RECURSIVE));
#endif
#ifdef SQLITE_MUTEX_STATIC_APP1
  /* SQLITE_MUTEX_STATIC_APP1 assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_STATIC_APP1", mrb_fixnum_value(SQLITE_MUTEX_STATIC_APP1));
#endif
#ifdef SQLITE_MUTEX_STATIC_APP2
  /* SQLITE_MUTEX_STATIC_APP2 assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_STATIC_APP2", mrb_fixnum_value(SQLITE_MUTEX_STATIC_APP2));
#endif
#ifdef SQLITE_MUTEX_STATIC_APP3
  /* SQLITE_MUTEX_STATIC_APP3 assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_STATIC_APP3", mrb_fixnum_value(SQLITE_MUTEX_STATIC_APP3));
#endif
#ifdef SQLITE_MUTEX_STATIC_LRU
  /* SQLITE_MUTEX_STATIC_LRU assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_STATIC_LRU", mrb_fixnum_value(SQLITE_MUTEX_STATIC_LRU));
#endif
#ifdef SQLITE_MUTEX_STATIC_LRU2
  /* SQLITE_MUTEX_STATIC_LRU2 assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_STATIC_LRU2", mrb_fixnum_value(SQLITE_MUTEX_STATIC_LRU2));
#endif
#ifdef SQLITE_MUTEX_STATIC_MASTER
  /* SQLITE_MUTEX_STATIC_MASTER assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_STATIC_MASTER", mrb_fixnum_value(SQLITE_MUTEX_STATIC_MASTER));
#endif
#ifdef SQLITE_MUTEX_STATIC_MEM
  /* SQLITE_MUTEX_STATIC_MEM assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_STATIC_MEM", mrb_fixnum_value(SQLITE_MUTEX_STATIC_MEM));
#endif
#ifdef SQLITE_MUTEX_STATIC_MEM2
  /* SQLITE_MUTEX_STATIC_MEM2 assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_STATIC_MEM2", mrb_fixnum_value(SQLITE_MUTEX_STATIC_MEM2));
#endif
#ifdef SQLITE_MUTEX_STATIC_OPEN
  /* SQLITE_MUTEX_STATIC_OPEN assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_STATIC_OPEN", mrb_fixnum_value(SQLITE_MUTEX_STATIC_OPEN));
#endif
#ifdef SQLITE_MUTEX_STATIC_PMEM
  /* SQLITE_MUTEX_STATIC_PMEM assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_STATIC_PMEM", mrb_fixnum_value(SQLITE_MUTEX_STATIC_PMEM));
#endif
#ifdef SQLITE_MUTEX_STATIC_PRNG
  /* SQLITE_MUTEX_STATIC_PRNG assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_MUTEX_STATIC_PRNG", mrb_fixnum_value(SQLITE_MUTEX_STATIC_PRNG));
#endif
#ifdef SQLITE_NOLFS
  /* SQLITE_NOLFS assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_NOLFS", mrb_fixnum_value(SQLITE_NOLFS));
#endif
#ifdef SQLITE_NOMEM
  /* SQLITE_NOMEM assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_NOMEM", mrb_fixnum_value(SQLITE_NOMEM));
#endif
#ifdef SQLITE_NOTADB
  /* SQLITE_NOTADB assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_NOTADB", mrb_fixnum_value(SQLITE_NOTADB));
#endif
#ifdef SQLITE_NOTFOUND
  /* SQLITE_NOTFOUND assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_NOTFOUND", mrb_fixnum_value(SQLITE_NOTFOUND));
#endif
#ifdef SQLITE_NOTICE
  /* SQLITE_NOTICE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_NOTICE", mrb_fixnum_value(SQLITE_NOTICE));
#endif
#ifdef SQLITE_NOTICE_RECOVER_ROLLBACK
  /* SQLITE_NOTICE_RECOVER_ROLLBACK assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_NOTICE_RECOVER_ROLLBACK", mrb_fixnum_value(SQLITE_NOTICE_RECOVER_ROLLBACK));
#endif
#ifdef SQLITE_NOTICE_RECOVER_WAL
  /* SQLITE_NOTICE_RECOVER_WAL assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_NOTICE_RECOVER_WAL", mrb_fixnum_value(SQLITE_NOTICE_RECOVER_WAL));
#endif
#ifdef SQLITE_NULL
  /* SQLITE_NULL assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_NULL", mrb_fixnum_value(SQLITE_NULL));
#endif
#ifdef SQLITE_OK
  /* SQLITE_OK assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OK", mrb_fixnum_value(SQLITE_OK));
#endif
#ifdef SQLITE_OPEN_AUTOPROXY
  /* SQLITE_OPEN_AUTOPROXY assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_AUTOPROXY", mrb_fixnum_value(SQLITE_OPEN_AUTOPROXY));
#endif
#ifdef SQLITE_OPEN_CREATE
  /* SQLITE_OPEN_CREATE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_CREATE", mrb_fixnum_value(SQLITE_OPEN_CREATE));
#endif
#ifdef SQLITE_OPEN_DELETEONCLOSE
  /* SQLITE_OPEN_DELETEONCLOSE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_DELETEONCLOSE", mrb_fixnum_value(SQLITE_OPEN_DELETEONCLOSE));
#endif
#ifdef SQLITE_OPEN_EXCLUSIVE
  /* SQLITE_OPEN_EXCLUSIVE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_EXCLUSIVE", mrb_fixnum_value(SQLITE_OPEN_EXCLUSIVE));
#endif
#ifdef SQLITE_OPEN_FULLMUTEX
  /* SQLITE_OPEN_FULLMUTEX assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_FULLMUTEX", mrb_fixnum_value(SQLITE_OPEN_FULLMUTEX));
#endif
#ifdef SQLITE_OPEN_MAIN_DB
  /* SQLITE_OPEN_MAIN_DB assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_MAIN_DB", mrb_fixnum_value(SQLITE_OPEN_MAIN_DB));
#endif
#ifdef SQLITE_OPEN_MAIN_JOURNAL
  /* SQLITE_OPEN_MAIN_JOURNAL assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_MAIN_JOURNAL", mrb_fixnum_value(SQLITE_OPEN_MAIN_JOURNAL));
#endif
#ifdef SQLITE_OPEN_MASTER_JOURNAL
  /* SQLITE_OPEN_MASTER_JOURNAL assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_MASTER_JOURNAL", mrb_fixnum_value(SQLITE_OPEN_MASTER_JOURNAL));
#endif
#ifdef SQLITE_OPEN_MEMORY
  /* SQLITE_OPEN_MEMORY assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_MEMORY", mrb_fixnum_value(SQLITE_OPEN_MEMORY));
#endif
#ifdef SQLITE_OPEN_NOMUTEX
  /* SQLITE_OPEN_NOMUTEX assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_NOMUTEX", mrb_fixnum_value(SQLITE_OPEN_NOMUTEX));
#endif
#ifdef SQLITE_OPEN_PRIVATECACHE
  /* SQLITE_OPEN_PRIVATECACHE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_PRIVATECACHE", mrb_fixnum_value(SQLITE_OPEN_PRIVATECACHE));
#endif
#ifdef SQLITE_OPEN_READONLY
  /* SQLITE_OPEN_READONLY assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_READONLY", mrb_fixnum_value(SQLITE_OPEN_READONLY));
#endif
#ifdef SQLITE_OPEN_READWRITE
  /* SQLITE_OPEN_READWRITE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_READWRITE", mrb_fixnum_value(SQLITE_OPEN_READWRITE));
#endif
#ifdef SQLITE_OPEN_SHAREDCACHE
  /* SQLITE_OPEN_SHAREDCACHE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_SHAREDCACHE", mrb_fixnum_value(SQLITE_OPEN_SHAREDCACHE));
#endif
#ifdef SQLITE_OPEN_SUBJOURNAL
  /* SQLITE_OPEN_SUBJOURNAL assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_SUBJOURNAL", mrb_fixnum_value(SQLITE_OPEN_SUBJOURNAL));
#endif
#ifdef SQLITE_OPEN_TEMP_DB
  /* SQLITE_OPEN_TEMP_DB assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_TEMP_DB", mrb_fixnum_value(SQLITE_OPEN_TEMP_DB));
#endif
#ifdef SQLITE_OPEN_TEMP_JOURNAL
  /* SQLITE_OPEN_TEMP_JOURNAL assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_TEMP_JOURNAL", mrb_fixnum_value(SQLITE_OPEN_TEMP_JOURNAL));
#endif
#ifdef SQLITE_OPEN_TRANSIENT_DB
  /* SQLITE_OPEN_TRANSIENT_DB assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_TRANSIENT_DB", mrb_fixnum_value(SQLITE_OPEN_TRANSIENT_DB));
#endif
#ifdef SQLITE_OPEN_URI
  /* SQLITE_OPEN_URI assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_URI", mrb_fixnum_value(SQLITE_OPEN_URI));
#endif
#ifdef SQLITE_OPEN_WAL
  /* SQLITE_OPEN_WAL assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_OPEN_WAL", mrb_fixnum_value(SQLITE_OPEN_WAL));
#endif
#ifdef SQLITE_PERM
  /* SQLITE_PERM assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_PERM", mrb_fixnum_value(SQLITE_PERM));
#endif
#ifdef SQLITE_PRAGMA
  /* SQLITE_PRAGMA assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_PRAGMA", mrb_fixnum_value(SQLITE_PRAGMA));
#endif
#ifdef SQLITE_PROTOCOL
  /* SQLITE_PROTOCOL assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_PROTOCOL", mrb_fixnum_value(SQLITE_PROTOCOL));
#endif
#ifdef SQLITE_RANGE
  /* SQLITE_RANGE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_RANGE", mrb_fixnum_value(SQLITE_RANGE));
#endif
#ifdef SQLITE_READ
  /* SQLITE_READ assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_READ", mrb_fixnum_value(SQLITE_READ));
#endif
#ifdef SQLITE_READONLY
  /* SQLITE_READONLY assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_READONLY", mrb_fixnum_value(SQLITE_READONLY));
#endif
#ifdef SQLITE_READONLY_CANTLOCK
  /* SQLITE_READONLY_CANTLOCK assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_READONLY_CANTLOCK", mrb_fixnum_value(SQLITE_READONLY_CANTLOCK));
#endif
#ifdef SQLITE_READONLY_DBMOVED
  /* SQLITE_READONLY_DBMOVED assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_READONLY_DBMOVED", mrb_fixnum_value(SQLITE_READONLY_DBMOVED));
#endif
#ifdef SQLITE_READONLY_RECOVERY
  /* SQLITE_READONLY_RECOVERY assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_READONLY_RECOVERY", mrb_fixnum_value(SQLITE_READONLY_RECOVERY));
#endif
#ifdef SQLITE_READONLY_ROLLBACK
  /* SQLITE_READONLY_ROLLBACK assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_READONLY_ROLLBACK", mrb_fixnum_value(SQLITE_READONLY_ROLLBACK));
#endif
#ifdef SQLITE_RECURSIVE
  /* SQLITE_RECURSIVE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_RECURSIVE", mrb_fixnum_value(SQLITE_RECURSIVE));
#endif
#ifdef SQLITE_REINDEX
  /* SQLITE_REINDEX assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_REINDEX", mrb_fixnum_value(SQLITE_REINDEX));
#endif
#ifdef SQLITE_REPLACE
  /* SQLITE_REPLACE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_REPLACE", mrb_fixnum_value(SQLITE_REPLACE));
#endif
#ifdef SQLITE_ROLLBACK
  /* SQLITE_ROLLBACK assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ROLLBACK", mrb_fixnum_value(SQLITE_ROLLBACK));
#endif
#ifdef SQLITE_ROW
  /* SQLITE_ROW assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_ROW", mrb_fixnum_value(SQLITE_ROW));
#endif
#ifdef SQLITE_SAVEPOINT
  /* SQLITE_SAVEPOINT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SAVEPOINT", mrb_fixnum_value(SQLITE_SAVEPOINT));
#endif
#ifdef SQLITE_SCANSTAT_EST
  /* SQLITE_SCANSTAT_EST assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SCANSTAT_EST", mrb_fixnum_value(SQLITE_SCANSTAT_EST));
#endif
#ifdef SQLITE_SCANSTAT_EXPLAIN
  /* SQLITE_SCANSTAT_EXPLAIN assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SCANSTAT_EXPLAIN", mrb_fixnum_value(SQLITE_SCANSTAT_EXPLAIN));
#endif
#ifdef SQLITE_SCANSTAT_NAME
  /* SQLITE_SCANSTAT_NAME assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SCANSTAT_NAME", mrb_fixnum_value(SQLITE_SCANSTAT_NAME));
#endif
#ifdef SQLITE_SCANSTAT_NLOOP
  /* SQLITE_SCANSTAT_NLOOP assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SCANSTAT_NLOOP", mrb_fixnum_value(SQLITE_SCANSTAT_NLOOP));
#endif
#ifdef SQLITE_SCANSTAT_NVISIT
  /* SQLITE_SCANSTAT_NVISIT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SCANSTAT_NVISIT", mrb_fixnum_value(SQLITE_SCANSTAT_NVISIT));
#endif
#ifdef SQLITE_SCANSTAT_SELECTID
  /* SQLITE_SCANSTAT_SELECTID assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SCANSTAT_SELECTID", mrb_fixnum_value(SQLITE_SCANSTAT_SELECTID));
#endif
#ifdef SQLITE_SCHEMA
  /* SQLITE_SCHEMA assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SCHEMA", mrb_fixnum_value(SQLITE_SCHEMA));
#endif
#ifdef SQLITE_SELECT
  /* SQLITE_SELECT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SELECT", mrb_fixnum_value(SQLITE_SELECT));
#endif
#ifdef SQLITE_SET_LOCKPROXYFILE
  /* SQLITE_SET_LOCKPROXYFILE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SET_LOCKPROXYFILE", mrb_fixnum_value(SQLITE_SET_LOCKPROXYFILE));
#endif
#ifdef SQLITE_SHM_EXCLUSIVE
  /* SQLITE_SHM_EXCLUSIVE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SHM_EXCLUSIVE", mrb_fixnum_value(SQLITE_SHM_EXCLUSIVE));
#endif
#ifdef SQLITE_SHM_LOCK
  /* SQLITE_SHM_LOCK assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SHM_LOCK", mrb_fixnum_value(SQLITE_SHM_LOCK));
#endif
#ifdef SQLITE_SHM_NLOCK
  /* SQLITE_SHM_NLOCK assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SHM_NLOCK", mrb_fixnum_value(SQLITE_SHM_NLOCK));
#endif
#ifdef SQLITE_SHM_SHARED
  /* SQLITE_SHM_SHARED assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SHM_SHARED", mrb_fixnum_value(SQLITE_SHM_SHARED));
#endif
#ifdef SQLITE_SHM_UNLOCK
  /* SQLITE_SHM_UNLOCK assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SHM_UNLOCK", mrb_fixnum_value(SQLITE_SHM_UNLOCK));
#endif
#ifdef SQLITE_SOURCE_ID
  /* SQLITE_SOURCE_ID appears to be a string */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SOURCE_ID", mrb_str_new_cstr(mrb, SQLITE_SOURCE_ID));
#endif
#ifdef SQLITE_STATIC
  /* SQLITE_STATIC assumed to be an integer value */
  // mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STATIC", mrb_fixnum_value(SQLITE_STATIC));
#endif
#ifdef SQLITE_STATUS_MALLOC_COUNT
  /* SQLITE_STATUS_MALLOC_COUNT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STATUS_MALLOC_COUNT", mrb_fixnum_value(SQLITE_STATUS_MALLOC_COUNT));
#endif
#ifdef SQLITE_STATUS_MALLOC_SIZE
  /* SQLITE_STATUS_MALLOC_SIZE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STATUS_MALLOC_SIZE", mrb_fixnum_value(SQLITE_STATUS_MALLOC_SIZE));
#endif
#ifdef SQLITE_STATUS_MEMORY_USED
  /* SQLITE_STATUS_MEMORY_USED assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STATUS_MEMORY_USED", mrb_fixnum_value(SQLITE_STATUS_MEMORY_USED));
#endif
#ifdef SQLITE_STATUS_PAGECACHE_OVERFLOW
  /* SQLITE_STATUS_PAGECACHE_OVERFLOW assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STATUS_PAGECACHE_OVERFLOW", mrb_fixnum_value(SQLITE_STATUS_PAGECACHE_OVERFLOW));
#endif
#ifdef SQLITE_STATUS_PAGECACHE_SIZE
  /* SQLITE_STATUS_PAGECACHE_SIZE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STATUS_PAGECACHE_SIZE", mrb_fixnum_value(SQLITE_STATUS_PAGECACHE_SIZE));
#endif
#ifdef SQLITE_STATUS_PAGECACHE_USED
  /* SQLITE_STATUS_PAGECACHE_USED assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STATUS_PAGECACHE_USED", mrb_fixnum_value(SQLITE_STATUS_PAGECACHE_USED));
#endif
#ifdef SQLITE_STATUS_PARSER_STACK
  /* SQLITE_STATUS_PARSER_STACK assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STATUS_PARSER_STACK", mrb_fixnum_value(SQLITE_STATUS_PARSER_STACK));
#endif
#ifdef SQLITE_STATUS_SCRATCH_OVERFLOW
  /* SQLITE_STATUS_SCRATCH_OVERFLOW assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STATUS_SCRATCH_OVERFLOW", mrb_fixnum_value(SQLITE_STATUS_SCRATCH_OVERFLOW));
#endif
#ifdef SQLITE_STATUS_SCRATCH_SIZE
  /* SQLITE_STATUS_SCRATCH_SIZE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STATUS_SCRATCH_SIZE", mrb_fixnum_value(SQLITE_STATUS_SCRATCH_SIZE));
#endif
#ifdef SQLITE_STATUS_SCRATCH_USED
  /* SQLITE_STATUS_SCRATCH_USED assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STATUS_SCRATCH_USED", mrb_fixnum_value(SQLITE_STATUS_SCRATCH_USED));
#endif
#ifdef SQLITE_STDCALL
  /* Ignoring macro with no expansion: SQLITE_STDCALL */
#endif
#ifdef SQLITE_STMTSTATUS_AUTOINDEX
  /* SQLITE_STMTSTATUS_AUTOINDEX assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STMTSTATUS_AUTOINDEX", mrb_fixnum_value(SQLITE_STMTSTATUS_AUTOINDEX));
#endif
#ifdef SQLITE_STMTSTATUS_FULLSCAN_STEP
  /* SQLITE_STMTSTATUS_FULLSCAN_STEP assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STMTSTATUS_FULLSCAN_STEP", mrb_fixnum_value(SQLITE_STMTSTATUS_FULLSCAN_STEP));
#endif
#ifdef SQLITE_STMTSTATUS_SORT
  /* SQLITE_STMTSTATUS_SORT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STMTSTATUS_SORT", mrb_fixnum_value(SQLITE_STMTSTATUS_SORT));
#endif
#ifdef SQLITE_STMTSTATUS_VM_STEP
  /* SQLITE_STMTSTATUS_VM_STEP assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_STMTSTATUS_VM_STEP", mrb_fixnum_value(SQLITE_STMTSTATUS_VM_STEP));
#endif
#ifdef SQLITE_SYNC_DATAONLY
  /* SQLITE_SYNC_DATAONLY assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SYNC_DATAONLY", mrb_fixnum_value(SQLITE_SYNC_DATAONLY));
#endif
#ifdef SQLITE_SYNC_FULL
  /* SQLITE_SYNC_FULL assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SYNC_FULL", mrb_fixnum_value(SQLITE_SYNC_FULL));
#endif
#ifdef SQLITE_SYNC_NORMAL
  /* SQLITE_SYNC_NORMAL assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_SYNC_NORMAL", mrb_fixnum_value(SQLITE_SYNC_NORMAL));
#endif
#ifdef SQLITE_TESTCTRL_ALWAYS
  /* SQLITE_TESTCTRL_ALWAYS assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_ALWAYS", mrb_fixnum_value(SQLITE_TESTCTRL_ALWAYS));
#endif
#ifdef SQLITE_TESTCTRL_ASSERT
  /* SQLITE_TESTCTRL_ASSERT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_ASSERT", mrb_fixnum_value(SQLITE_TESTCTRL_ASSERT));
#endif
#ifdef SQLITE_TESTCTRL_BENIGN_MALLOC_HOOKS
  /* SQLITE_TESTCTRL_BENIGN_MALLOC_HOOKS assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_BENIGN_MALLOC_HOOKS", mrb_fixnum_value(SQLITE_TESTCTRL_BENIGN_MALLOC_HOOKS));
#endif
#ifdef SQLITE_TESTCTRL_BITVEC_TEST
  /* SQLITE_TESTCTRL_BITVEC_TEST assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_BITVEC_TEST", mrb_fixnum_value(SQLITE_TESTCTRL_BITVEC_TEST));
#endif
#ifdef SQLITE_TESTCTRL_BYTEORDER
  /* SQLITE_TESTCTRL_BYTEORDER assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_BYTEORDER", mrb_fixnum_value(SQLITE_TESTCTRL_BYTEORDER));
#endif
#ifdef SQLITE_TESTCTRL_EXPLAIN_STMT
  /* SQLITE_TESTCTRL_EXPLAIN_STMT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_EXPLAIN_STMT", mrb_fixnum_value(SQLITE_TESTCTRL_EXPLAIN_STMT));
#endif
#ifdef SQLITE_TESTCTRL_FAULT_INSTALL
  /* SQLITE_TESTCTRL_FAULT_INSTALL assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_FAULT_INSTALL", mrb_fixnum_value(SQLITE_TESTCTRL_FAULT_INSTALL));
#endif
#ifdef SQLITE_TESTCTRL_FIRST
  /* SQLITE_TESTCTRL_FIRST assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_FIRST", mrb_fixnum_value(SQLITE_TESTCTRL_FIRST));
#endif
#ifdef SQLITE_TESTCTRL_IMPOSTER
  /* SQLITE_TESTCTRL_IMPOSTER assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_IMPOSTER", mrb_fixnum_value(SQLITE_TESTCTRL_IMPOSTER));
#endif
#ifdef SQLITE_TESTCTRL_ISINIT
  /* SQLITE_TESTCTRL_ISINIT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_ISINIT", mrb_fixnum_value(SQLITE_TESTCTRL_ISINIT));
#endif
#ifdef SQLITE_TESTCTRL_ISKEYWORD
  /* SQLITE_TESTCTRL_ISKEYWORD assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_ISKEYWORD", mrb_fixnum_value(SQLITE_TESTCTRL_ISKEYWORD));
#endif
#ifdef SQLITE_TESTCTRL_LAST
  /* SQLITE_TESTCTRL_LAST assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_LAST", mrb_fixnum_value(SQLITE_TESTCTRL_LAST));
#endif
#ifdef SQLITE_TESTCTRL_LOCALTIME_FAULT
  /* SQLITE_TESTCTRL_LOCALTIME_FAULT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_LOCALTIME_FAULT", mrb_fixnum_value(SQLITE_TESTCTRL_LOCALTIME_FAULT));
#endif
#ifdef SQLITE_TESTCTRL_NEVER_CORRUPT
  /* SQLITE_TESTCTRL_NEVER_CORRUPT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_NEVER_CORRUPT", mrb_fixnum_value(SQLITE_TESTCTRL_NEVER_CORRUPT));
#endif
#ifdef SQLITE_TESTCTRL_OPTIMIZATIONS
  /* SQLITE_TESTCTRL_OPTIMIZATIONS assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_OPTIMIZATIONS", mrb_fixnum_value(SQLITE_TESTCTRL_OPTIMIZATIONS));
#endif
#ifdef SQLITE_TESTCTRL_PENDING_BYTE
  /* SQLITE_TESTCTRL_PENDING_BYTE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_PENDING_BYTE", mrb_fixnum_value(SQLITE_TESTCTRL_PENDING_BYTE));
#endif
#ifdef SQLITE_TESTCTRL_PRNG_RESET
  /* SQLITE_TESTCTRL_PRNG_RESET assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_PRNG_RESET", mrb_fixnum_value(SQLITE_TESTCTRL_PRNG_RESET));
#endif
#ifdef SQLITE_TESTCTRL_PRNG_RESTORE
  /* SQLITE_TESTCTRL_PRNG_RESTORE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_PRNG_RESTORE", mrb_fixnum_value(SQLITE_TESTCTRL_PRNG_RESTORE));
#endif
#ifdef SQLITE_TESTCTRL_PRNG_SAVE
  /* SQLITE_TESTCTRL_PRNG_SAVE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_PRNG_SAVE", mrb_fixnum_value(SQLITE_TESTCTRL_PRNG_SAVE));
#endif
#ifdef SQLITE_TESTCTRL_RESERVE
  /* SQLITE_TESTCTRL_RESERVE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_RESERVE", mrb_fixnum_value(SQLITE_TESTCTRL_RESERVE));
#endif
#ifdef SQLITE_TESTCTRL_SCRATCHMALLOC
  /* SQLITE_TESTCTRL_SCRATCHMALLOC assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_SCRATCHMALLOC", mrb_fixnum_value(SQLITE_TESTCTRL_SCRATCHMALLOC));
#endif
#ifdef SQLITE_TESTCTRL_SORTER_MMAP
  /* SQLITE_TESTCTRL_SORTER_MMAP assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_SORTER_MMAP", mrb_fixnum_value(SQLITE_TESTCTRL_SORTER_MMAP));
#endif
#ifdef SQLITE_TESTCTRL_VDBE_COVERAGE
  /* SQLITE_TESTCTRL_VDBE_COVERAGE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TESTCTRL_VDBE_COVERAGE", mrb_fixnum_value(SQLITE_TESTCTRL_VDBE_COVERAGE));
#endif
#ifdef SQLITE_TEXT
  /* SQLITE_TEXT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TEXT", mrb_fixnum_value(SQLITE_TEXT));
#endif
#ifdef SQLITE_TOOBIG
  /* SQLITE_TOOBIG assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TOOBIG", mrb_fixnum_value(SQLITE_TOOBIG));
#endif
#ifdef SQLITE_TRANSACTION
  /* SQLITE_TRANSACTION assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TRANSACTION", mrb_fixnum_value(SQLITE_TRANSACTION));
#endif
#ifdef SQLITE_TRANSIENT
  /* SQLITE_TRANSIENT assumed to be an integer value */
  // mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_TRANSIENT", mrb_fixnum_value(SQLITE_TRANSIENT));
#endif
#ifdef SQLITE_UPDATE
  /* SQLITE_UPDATE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_UPDATE", mrb_fixnum_value(SQLITE_UPDATE));
#endif
#ifdef SQLITE_UTF16
  /* SQLITE_UTF16 assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_UTF16", mrb_fixnum_value(SQLITE_UTF16));
#endif
#ifdef SQLITE_UTF16_ALIGNED
  /* SQLITE_UTF16_ALIGNED assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_UTF16_ALIGNED", mrb_fixnum_value(SQLITE_UTF16_ALIGNED));
#endif
#ifdef SQLITE_UTF16BE
  /* SQLITE_UTF16BE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_UTF16BE", mrb_fixnum_value(SQLITE_UTF16BE));
#endif
#ifdef SQLITE_UTF16LE
  /* SQLITE_UTF16LE assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_UTF16LE", mrb_fixnum_value(SQLITE_UTF16LE));
#endif
#ifdef SQLITE_UTF8
  /* SQLITE_UTF8 assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_UTF8", mrb_fixnum_value(SQLITE_UTF8));
#endif
#ifdef SQLITE_VERSION
  /* SQLITE_VERSION appears to be a string */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_VERSION", mrb_str_new_cstr(mrb, SQLITE_VERSION));
#endif
#ifdef SQLITE_VERSION_NUMBER
  /* SQLITE_VERSION_NUMBER assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_VERSION_NUMBER", mrb_fixnum_value(SQLITE_VERSION_NUMBER));
#endif
#ifdef SQLITE_VTAB_CONSTRAINT_SUPPORT
  /* SQLITE_VTAB_CONSTRAINT_SUPPORT assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_VTAB_CONSTRAINT_SUPPORT", mrb_fixnum_value(SQLITE_VTAB_CONSTRAINT_SUPPORT));
#endif
#ifdef SQLITE_WARNING
  /* SQLITE_WARNING assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_WARNING", mrb_fixnum_value(SQLITE_WARNING));
#endif
#ifdef SQLITE_WARNING_AUTOINDEX
  /* SQLITE_WARNING_AUTOINDEX assumed to be an integer value */
  mrb_define_const(mrb, SQLite_module(mrb), "SQLITE_WARNING_AUTOINDEX", mrb_fixnum_value(SQLITE_WARNING_AUTOINDEX));
#endif
}
