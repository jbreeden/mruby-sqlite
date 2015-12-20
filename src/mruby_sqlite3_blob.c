/*
 * struct sqlite3_blob
 * Defined in file sqlite3.h @ line 5767
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Blob_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3Blob_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Blob_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_blob* native_object = (struct sqlite3_blob*)calloc(1, sizeof(struct sqlite3_blob));
  mruby_giftwrap_sqlite3_blob_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SQLite_Sqlite3Blob_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3Blob.disown only accepts objects of type SQLite::Sqlite3Blob");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SQLite_Sqlite3Blob_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3Blob.belongs_to_ruby only accepts objects of type SQLite::Sqlite3Blob");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}


void mrb_SQLite_Sqlite3Blob_init(mrb_state* mrb) {
  struct RClass* Sqlite3Blob_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Blob", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Blob_class, MRB_TT_DATA);

#if BIND_Sqlite3Blob_INITIALIZE
  mrb_define_method(mrb, Sqlite3Blob_class, "initialize", mrb_SQLite_Sqlite3Blob_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3Blob_class, "disown", mrb_SQLite_Sqlite3Blob_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3Blob_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3Blob_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
