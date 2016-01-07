/*
 * struct Mem
 * Defined in file sqlite3.h @ line 3417
 */

#include "mruby_SQLite.h"

#if BIND_Mem_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Mem::initialize */
/* sha: 1daef27c4d183a30c6bcdc3ff6cf45690493301046b367e1d54dc2b0ae31af51 */
#if BIND_Mem_INITIALIZE
mrb_value
mrb_SQLite_Mem_initialize(mrb_state* mrb, mrb_value self) {
  struct Mem* native_object = (struct Mem*)calloc(1, sizeof(struct Mem));
  mruby_giftwrap_Mem_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Mem::initialize */
/* sha: 737d8020f8c0a238a96a2c02425af69fa9edbf2a19ab71ea14325e248952211e */
mrb_value
mrb_SQLite_Mem_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Mem.disown only accepts objects of type SQLite::Mem");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Mem::belongs_to_ruby */
/* sha: ce48fdfe4a6881b4946072ccdc89fff823dceccf47581b95ebe99fb3a02a98a4 */
mrb_value
mrb_SQLite_Mem_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Mem.belongs_to_ruby only accepts objects of type SQLite::Mem");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_SQLite_Mem_init(mrb_state* mrb) {
/* MRUBY_BINDING: Mem::class_definition */
/* sha: 932ceb1dfcfacee02cd442b8d826878b47541ce8f9583b998a0349daf38f6e0c */
  struct RClass* Mem_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Mem", mrb->object_class);
  MRB_SET_INSTANCE_TT(Mem_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Mem::class_method_definitions */
/* sha: ac38cc644d1ff203126959cd246ae6858cadc01ccb988deec7563580d9fb27e9 */
#if BIND_Mem_INITIALIZE
  mrb_define_method(mrb, Mem_class, "initialize", mrb_SQLite_Mem_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Mem_class, "disown", mrb_SQLite_Mem_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Mem_class, "belongs_to_ruby?", mrb_SQLite_Mem_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Mem::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Mem::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
