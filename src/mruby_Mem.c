/*
 * struct Mem
 * Defined in file sqlite3.h @ line 3417
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SQLite.h"

#if BIND_Mem_TYPE

/*
 * Class Methods
 */

#if BIND_Mem_INITIALIZE
mrb_value
mrb_SQLite_Mem_initialize(mrb_state* mrb, mrb_value self) {
  struct Mem* native_object = (struct Mem*)malloc(sizeof(struct Mem));
  mruby_gift_struct Mem_data_ptr(self, native_object);
  return self;
}
#endif

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


void mrb_SQLite_Mem_init(mrb_state* mrb) {
  struct RClass* Mem_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Mem", mrb->object_class);
  MRB_SET_INSTANCE_TT(Mem_class, MRB_TT_DATA);

#if BIND_Mem_INITIALIZE
  mrb_define_method(mrb, Mem_class, "initialize", mrb_SQLite_Mem_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Mem_class, "disown", mrb_SQLite_Mem_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Mem_class, "belongs_to_ruby?", mrb_SQLite_Mem_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
