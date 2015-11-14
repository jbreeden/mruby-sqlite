/*
 * struct sqlite3_context
 * Defined in file sqlite3.h @ line 3431
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Context_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3Context_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Context_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_context* native_object = (struct sqlite3_context*)malloc(sizeof(struct sqlite3_context));
  mruby_gift_struct sqlite3_context_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SQLite_Sqlite3Context_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3Context.disown only accepts objects of type SQLite::Sqlite3Context");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SQLite_Sqlite3Context_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3Context.belongs_to_ruby only accepts objects of type SQLite::Sqlite3Context");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}


void mrb_SQLite_Sqlite3Context_init(mrb_state* mrb) {
  struct RClass* Sqlite3Context_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Context", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Context_class, MRB_TT_DATA);

#if BIND_Sqlite3Context_INITIALIZE
  mrb_define_method(mrb, Sqlite3Context_class, "initialize", mrb_SQLite_Sqlite3Context_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3Context_class, "disown", mrb_SQLite_Sqlite3Context_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3Context_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3Context_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
