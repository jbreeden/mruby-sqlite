/*
 * struct sqlite3_file
 * Defined in file sqlite3.h @ line 635
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3File_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Sqlite3File::initialize */
/* sha: 9d69d635cddaa524ebc1c934655a6ffb4e5a63107d227b02252881c040686def */
#if BIND_Sqlite3File_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3File_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_file* native_object = (struct sqlite3_file*)calloc(1, sizeof(struct sqlite3_file));
  mruby_giftwrap_sqlite3_file_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3File::initialize */
/* sha: 6a0da6b331a80c7269dc63f74210ed6bfcf038843f386b85b857426129b51866 */
mrb_value
mrb_SQLite_Sqlite3File_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3File.disown only accepts objects of type SQLite::Sqlite3File");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3File::belongs_to_ruby */
/* sha: e436fd4c8e7844dbf977ff8ce60ef931f7d25735e913c62ace3ea311aa2fbe11 */
mrb_value
mrb_SQLite_Sqlite3File_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3File.belongs_to_ruby only accepts objects of type SQLite::Sqlite3File");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3File::pMethods_reader */
/* sha: 65967412cbd7ed32badd587071965201e00cc6eefac96dc1767fbcdde7982f7c */
#if BIND_Sqlite3File_pMethods_FIELD_READER
/* get_pMethods
 *
 * Return Type: const struct sqlite3_io_methods *
 */
mrb_value
mrb_SQLite_Sqlite3File_get_pMethods(mrb_state* mrb, mrb_value self) {
  struct sqlite3_file * native_self = mruby_unbox_sqlite3_file(self);

  const struct sqlite3_io_methods * native_pMethods = native_self->pMethods;

  mrb_value pMethods = (native_pMethods == NULL ? mrb_nil_value() : mruby_box_sqlite3_io_methods(mrb, native_pMethods));

  return pMethods;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3File::pMethods_writer */
/* sha: 4117b130959d32efde610ee7644258e9b525e193677e2011d48ce507885a61bb */
#if BIND_Sqlite3File_pMethods_FIELD_WRITER
/* set_pMethods
 *
 * Parameters:
 * - value: const struct sqlite3_io_methods *
 */
mrb_value
mrb_SQLite_Sqlite3File_set_pMethods(mrb_state* mrb, mrb_value self) {
  struct sqlite3_file * native_self = mruby_unbox_sqlite3_file(self);
  mrb_value pMethods;

  mrb_get_args(mrb, "o", &pMethods);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, pMethods, Sqlite3IoMethods_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3IoMethods expected");
    return mrb_nil_value();
  }

  const struct sqlite3_io_methods * native_pMethods = (mrb_nil_p(pMethods) ? NULL : mruby_unbox_sqlite3_io_methods(pMethods));

  native_self->pMethods = native_pMethods;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3File_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3File::class_definition */
/* sha: d367bfea7a0601ac5e58b10bafc0c729ef460a7eed461fa2db119e4be7a37886 */
  struct RClass* Sqlite3File_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3File", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3File_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3File::class_method_definitions */
/* sha: 3e0ed755da467586f83b666ba6329778c5ee0d77358214ae10ecd927c076b946 */
#if BIND_Sqlite3File_INITIALIZE
  mrb_define_method(mrb, Sqlite3File_class, "initialize", mrb_SQLite_Sqlite3File_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3File_class, "disown", mrb_SQLite_Sqlite3File_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3File_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3File_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3File::attr_definitions */
/* sha: a28c8930f5909cf9d10a0919caa4cfb49541cfe4ac3cdf571c96eca311bdf0bd */
  /*
   * Fields
   */
#if BIND_Sqlite3File_pMethods_FIELD_READER
  mrb_define_method(mrb, Sqlite3File_class, "pMethods", mrb_SQLite_Sqlite3File_get_pMethods, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3File_pMethods_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3File_class, "pMethods=", mrb_SQLite_Sqlite3File_set_pMethods, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3File::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
