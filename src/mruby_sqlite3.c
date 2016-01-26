/*
 * sqlite3
 * Defined in file sqlite3.h @ line 232
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3::initialize */
/* sha: bf061825bf951c895b48108e2a382cefa3d4011f14018a8d48fee616fd959398 */
#if BIND_Sqlite3_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  sqlite3* native_object = (sqlite3*)calloc(1, sizeof(sqlite3));
  mruby_gift_sqlite3_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3::class_definition */
/* sha: fd22678c3edf0e3236cbea699f1c24ea6ab93bd4556c7d74f9a533febc35089a */
  struct RClass* Sqlite3_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3::class_method_definitions */
/* sha: bf7e4f2299e60848b1abd86d024c21474e97dc7863fd5aef3fbd1c5377345046 */
#if BIND_Sqlite3_INITIALIZE
  mrb_define_method(mrb, Sqlite3_class, "initialize", mrb_SQLite_Sqlite3_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
