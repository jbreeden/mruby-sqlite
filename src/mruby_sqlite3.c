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
/* sha: 542df52d007afe816e95331d383e00efa8156f4950b0299661d09bc28f038d03 */
#if BIND_Sqlite3_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  sqlite3* native_object = (sqlite3*)calloc(1, sizeof(sqlite3));
  mruby_gift_sqlite3_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

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



/* MRUBY_BINDING: Sqlite3::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
