/*
 * struct sqlite3
 * Defined in file sqlite3.h @ line 232
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Sqlite3::initialize */
/* sha: 8b474074ca777c9078c5c005ba78694945a78acc7d44caeb4ff9c6a879f2a441 */
#if BIND_Sqlite3_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3* native_object = (struct sqlite3*)calloc(1, sizeof(struct sqlite3));
  mruby_giftwrap_sqlite3_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3::initialize */
/* sha: f29726b5af778687bd4d7260d2293e4cb56c1e02a7ee9eff405534dcc5f3a7b1 */
mrb_value
mrb_SQLite_Sqlite3_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3.disown only accepts objects of type SQLite::Sqlite3");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3::belongs_to_ruby */
/* sha: 2cca20d43f8076c6966da8ea850edacc47ff454d1aade28230cc1c5d35ac7fd8 */
mrb_value
mrb_SQLite_Sqlite3_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3.belongs_to_ruby only accepts objects of type SQLite::Sqlite3");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3::class_definition */
/* sha: fd22678c3edf0e3236cbea699f1c24ea6ab93bd4556c7d74f9a533febc35089a */
  struct RClass* Sqlite3_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3::class_method_definitions */
/* sha: ca78b1719bb8920e99f41a4646066d228987ae5943b69a720342b3c51509bc6b */
#if BIND_Sqlite3_INITIALIZE
  mrb_define_method(mrb, Sqlite3_class, "initialize", mrb_SQLite_Sqlite3_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3_class, "disown", mrb_SQLite_Sqlite3_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
