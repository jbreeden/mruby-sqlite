/*
 * struct sqlite3_blob
 * Defined in file sqlite3.h @ line 5767
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Blob_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Sqlite3Blob::initialize */
/* sha: 8c0ca4b4b9a4f32b28eca11644cccc7f56638ed54d0a79fe7e88eeca32667e27 */
#if BIND_Sqlite3Blob_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Blob_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_blob* native_object = (struct sqlite3_blob*)calloc(1, sizeof(struct sqlite3_blob));
  mruby_giftwrap_sqlite3_blob_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Blob::initialize */
/* sha: 53fb8a1f3b64ebd3b8a3f890475b573972db0e5ba34d0d7681b307cbf245f039 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Blob::belongs_to_ruby */
/* sha: cdfcbf8a53799189ba57f761ce3a88dcbb419933c9192db47db97d9ecf37ea99 */
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
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Blob_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3Blob::class_definition */
/* sha: 07e3a964c870da0c48e5402aa55b419812adc98f910fb9c765a99bc3d44985a7 */
  struct RClass* Sqlite3Blob_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Blob", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Blob_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Blob::class_method_definitions */
/* sha: d4adf0ae780dd88e2e1d6aab6491c0844b11754f4135ec7e2cfdbb38d685ab0d */
#if BIND_Sqlite3Blob_INITIALIZE
  mrb_define_method(mrb, Sqlite3Blob_class, "initialize", mrb_SQLite_Sqlite3Blob_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3Blob_class, "disown", mrb_SQLite_Sqlite3Blob_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3Blob_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3Blob_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Blob::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Blob::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
