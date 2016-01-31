/*
 * sqlite3_stmt
 * Defined in file sqlite3.h @ line 3095
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Stmt_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Stmt::initialize */
/* sha: a3daf4c642554856cebdea6b2ecae32fb78004d85c26278bf3971ed4a00b7de3 */
#if BIND_Sqlite3Stmt_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Stmt_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  sqlite3_stmt* native_object = (sqlite3_stmt*)calloc(1, sizeof(sqlite3_stmt));
  mruby_gift_sqlite3_stmt_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Stmt_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Stmt::class_definition */
/* sha: d6f24b46597c81a6abbafccde28af0018f1ea6874811438d21b3ce7d80e84bab */
  struct RClass* Sqlite3Stmt_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Stmt", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Stmt_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Stmt::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Stmt::class_method_definitions */
/* sha: f5b01f97182108e71058fb3ca42d5c6c30af0014600b6d8a4fa903789b7863e3 */
#if BIND_Sqlite3Stmt_INITIALIZE
  mrb_define_method(mrb, Sqlite3Stmt_class, "initialize", mrb_SQLite_Sqlite3Stmt_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Sqlite3Stmt::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
