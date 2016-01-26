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
/* sha: 707494dcc353cf6611fe3636613532fd6bb8b2714a0b77c65c50f4706de0d93d */
#if BIND_Sqlite3Stmt_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Stmt_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  sqlite3_stmt* native_object = (sqlite3_stmt*)calloc(1, sizeof(sqlite3_stmt));
  mruby_gift_sqlite3_stmt_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Stmt_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3Stmt::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
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

/* MRUBY_BINDING: Sqlite3Stmt::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Stmt::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Stmt::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Stmt::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Stmt::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
