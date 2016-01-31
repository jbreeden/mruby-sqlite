/*
 * sqlite3_value
 * Defined in file sqlite3.h @ line 3417
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Value_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Value::initialize */
/* sha: be1abc0f0f116981a6d57293844d34db02a82d82ec5b4e21f913f75ef8fd8595 */
#if BIND_Sqlite3Value_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Value_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  sqlite3_value* native_object = (sqlite3_value*)calloc(1, sizeof(sqlite3_value));
  mruby_gift_sqlite3_value_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Value_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Value::class_definition */
/* sha: 69af61214cfac28f04cf32e87fc7a62a3893f35b28827e269cd5265d35d85d1f */
  struct RClass* Sqlite3Value_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Value", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Value_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Value::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Value::class_method_definitions */
/* sha: a44dd7d6b51546a6ba06802683fc27a0bb6a1ba4d4c501104d74d121bc76936d */
#if BIND_Sqlite3Value_INITIALIZE
  mrb_define_method(mrb, Sqlite3Value_class, "initialize", mrb_SQLite_Sqlite3Value_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Sqlite3Value::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
