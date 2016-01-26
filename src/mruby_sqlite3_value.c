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
/* sha: 4f47eb044dace5708e06c921d98c033a969148cda032dbe87934379e50fd40e2 */
#if BIND_Sqlite3Value_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Value_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  sqlite3_value* native_object = (sqlite3_value*)calloc(1, sizeof(sqlite3_value));
  mruby_gift_sqlite3_value_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Value_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3Value::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
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

/* MRUBY_BINDING: Sqlite3Value::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Value::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Value::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Value::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Value::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
