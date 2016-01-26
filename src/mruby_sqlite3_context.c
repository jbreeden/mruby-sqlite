/*
 * sqlite3_context
 * Defined in file sqlite3.h @ line 3431
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Context_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Context::initialize */
/* sha: 4919cab9ef6d2eb0b3a126e76a284be760091ee667d5d31332d01ad48b59eb48 */
#if BIND_Sqlite3Context_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Context_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  sqlite3_context* native_object = (sqlite3_context*)calloc(1, sizeof(sqlite3_context));
  mruby_gift_sqlite3_context_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Context_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3Context::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Context::class_definition */
/* sha: 928b5f23e2bf714e656d6a536c89099098e41c7f5dd167e3acee29e7eb920d7b */
  struct RClass* Sqlite3Context_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Context", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Context_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Context::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Context::class_method_definitions */
/* sha: 4f9b865727d5035d391d88ededfb875cdae800908485348884b36a262239cd77 */
#if BIND_Sqlite3Context_INITIALIZE
  mrb_define_method(mrb, Sqlite3Context_class, "initialize", mrb_SQLite_Sqlite3Context_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Context::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Context::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Context::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Context::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Context::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
