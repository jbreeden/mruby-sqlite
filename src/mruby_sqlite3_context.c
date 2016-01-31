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
/* sha: 149de5a752e36bfa41a6d84ac3f689ed72f6be39462cf1eb3f0b8e5cb302be16 */
#if BIND_Sqlite3Context_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Context_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  sqlite3_context* native_object = (sqlite3_context*)calloc(1, sizeof(sqlite3_context));
  mruby_gift_sqlite3_context_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Context_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

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



/* MRUBY_BINDING: Sqlite3Context::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
