#ifndef SQLite_HEADER
#define SQLite_HEADER

/*
 * Header Files
 * ------------
 *
 * These are the header files that defined the
 * classes and functions for which bindings have
 * been generated. If any of these are not needed
 * they should be commented out.
 *
 * TODO: ONLY the filename is inserted here automatically.
 *       If the file is not directly on the include path,
 *       you will need to prepend the relative path.
 */

/* MRUBY_BINDING: pre_includes */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: includes */
/* sha: e61c13d4a6ca34d78b0bd8f83fc52026e07cfe840d6c7a3d6c4becc318cd525e */
#include <stdlib.h>
#include "mruby.h"
#include "mruby/array.h"
#include "mruby/class.h"
#include "mruby/compile.h"
#include "mruby/data.h"
#include "mruby/string.h"
#include "mruby/value.h"
#include "mruby/variable.h"

#include "sqlite3.h"

#include "mruby_SQLite_functions.h"
#include "mruby_SQLite_classes.h"
#include "mruby_SQLite_boxing.h"
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_includes */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * RClass Macros
 * -------------
 *
 * Macros for retrieving the RClass*'s defined by this gem.
 */

/* MRUBY_BINDING: pre_class_macros */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: class_macros */
/* sha: 1bf14cd6b875585ff3d529d04fefd30813c18cb0d326d1efb9f0f241bf30f9df */
#define SQLite_module(mrb) mrb_module_get(mrb, "SQLite")
#define Sqlite3_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3")
#define Sqlite3Backup_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3Backup")
#define Sqlite3Blob_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3Blob")
#define Sqlite3Context_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3Context")
#define Sqlite3File_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3File")
#define Sqlite3IndexConstraint_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3IndexConstraint")
#define Sqlite3IndexConstraintUsage_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3IndexConstraintUsage")
#define Sqlite3IndexInfo_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3IndexInfo")
#define Sqlite3IndexOrderby_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3IndexOrderby")
#define Sqlite3IoMethods_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3IoMethods")
#define Sqlite3MemMethods_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3MemMethods")
#define Sqlite3Module_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3Module")
#define Sqlite3Pcache_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3Pcache")
#define Sqlite3PcacheMethods_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3PcacheMethods")
#define Sqlite3PcacheMethods2_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3PcacheMethods2")
#define Sqlite3PcachePage_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3PcachePage")
#define Sqlite3RtreeGeometry_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3RtreeGeometry")
#define Sqlite3RtreeQueryInfo_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3RtreeQueryInfo")
#define Sqlite3Stmt_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3Stmt")
#define Sqlite3Value_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3Value")
#define Sqlite3Vfs_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3Vfs")
#define Sqlite3Vtab_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3Vtab")
#define Sqlite3VtabCursor_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3VtabCursor")
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_class_macros */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class initialization function declarations
 * ------------------------------------------
 */

/* MRUBY_BINDING: pre_class_init_decls */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: pre_class_init_decls */
/* sha: 09d2702af0fa4609ea3c2354e85898918ccdb6b2d13615ea0e7518e8cc49393d */
#if BIND_Sqlite3_TYPE
void mrb_SQLite_Sqlite3_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3Backup_TYPE
void mrb_SQLite_Sqlite3Backup_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3Blob_TYPE
void mrb_SQLite_Sqlite3Blob_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3Context_TYPE
void mrb_SQLite_Sqlite3Context_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3File_TYPE
void mrb_SQLite_Sqlite3File_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3IndexConstraint_TYPE
void mrb_SQLite_Sqlite3IndexConstraint_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3IndexConstraintUsage_TYPE
void mrb_SQLite_Sqlite3IndexConstraintUsage_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3IndexInfo_TYPE
void mrb_SQLite_Sqlite3IndexInfo_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3IndexOrderby_TYPE
void mrb_SQLite_Sqlite3IndexOrderby_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3IoMethods_TYPE
void mrb_SQLite_Sqlite3IoMethods_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3MemMethods_TYPE
void mrb_SQLite_Sqlite3MemMethods_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3Module_TYPE
void mrb_SQLite_Sqlite3Module_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3Pcache_TYPE
void mrb_SQLite_Sqlite3Pcache_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3PcacheMethods_TYPE
void mrb_SQLite_Sqlite3PcacheMethods_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3PcacheMethods2_TYPE
void mrb_SQLite_Sqlite3PcacheMethods2_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3PcachePage_TYPE
void mrb_SQLite_Sqlite3PcachePage_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3RtreeGeometry_TYPE
void mrb_SQLite_Sqlite3RtreeGeometry_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3RtreeQueryInfo_TYPE
void mrb_SQLite_Sqlite3RtreeQueryInfo_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3Stmt_TYPE
void mrb_SQLite_Sqlite3Stmt_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3Value_TYPE
void mrb_SQLite_Sqlite3Value_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3Vfs_TYPE
void mrb_SQLite_Sqlite3Vfs_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3Vtab_TYPE
void mrb_SQLite_Sqlite3Vtab_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3VtabCursor_TYPE
void mrb_SQLite_Sqlite3VtabCursor_init(mrb_state* mrb);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_class_init_decls */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Macro & Enum definition function declarations
 * ---------------------------------------------
 */
void mruby_SQLite_define_macro_constants(mrb_state* mrb);
void mruby_SQLite_define_enum_constants(mrb_state* mrb);

#endif
