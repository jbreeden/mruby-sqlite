/*
 * struct Mem
 * Defined in file sqlite3.h @ line 3417
 */

#include "mruby_SQLite.h"

#if BIND_Mem_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Mem::initialize */
/* sha: 9ba8624af12a786aa584aedf4bb04a98ff725d10c1c3c3340f53ce44c0e185b6 */
#if BIND_Mem_INITIALIZE
mrb_value
mrb_SQLite_Mem_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  struct Mem* native_object = (struct Mem*)calloc(1, sizeof(struct Mem));
  mruby_gift_Mem_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Mem_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Mem::class_definition */
/* sha: 932ceb1dfcfacee02cd442b8d826878b47541ce8f9583b998a0349daf38f6e0c */
  struct RClass* Mem_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Mem", mrb->object_class);
  MRB_SET_INSTANCE_TT(Mem_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Mem::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Mem::class_method_definitions */
/* sha: 28841d1be5ab9e992df2d7cae904799a93d83ffddb97e1ea4535b09cd6c5ce0f */
#if BIND_Mem_INITIALIZE
  mrb_define_method(mrb, Mem_class, "initialize", mrb_SQLite_Mem_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Mem::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
