/*
 * struct sqlite3_backup
 * Defined in file sqlite3.h @ line 6936
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Backup_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Sqlite3Backup::initialize */
/* sha: 0da9f71ec3ac3b4645f6dc9da17ae20bc9c6c6f96a895616001a89bb41373ba7 */
#if BIND_Sqlite3Backup_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Backup_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_backup* native_object = (struct sqlite3_backup*)calloc(1, sizeof(struct sqlite3_backup));
  mruby_giftwrap_sqlite3_backup_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Backup::initialize */
/* sha: f2008b69e2c47eb019944df2d89e41684c0a0a09cfea5e7fa14ff73b48ae2724 */
mrb_value
mrb_SQLite_Sqlite3Backup_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3Backup.disown only accepts objects of type SQLite::Sqlite3Backup");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Backup::belongs_to_ruby */
/* sha: 80aa06c6219579ac9be0e800c2612c1dada907fd34a3ce45df8713f7f8d6418a */
mrb_value
mrb_SQLite_Sqlite3Backup_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3Backup.belongs_to_ruby only accepts objects of type SQLite::Sqlite3Backup");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Backup_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3Backup::class_definition */
/* sha: 3c0666d9bed53ee1263d8348635d5da28ee80a9a33ad1c56436e0345cec7b68b */
  struct RClass* Sqlite3Backup_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Backup", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Backup_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Backup::class_method_definitions */
/* sha: bbb9d363ec22aa7340a21521e0a26a66fcd8292c0599f97e45c8a7c776f96fd0 */
#if BIND_Sqlite3Backup_INITIALIZE
  mrb_define_method(mrb, Sqlite3Backup_class, "initialize", mrb_SQLite_Sqlite3Backup_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3Backup_class, "disown", mrb_SQLite_Sqlite3Backup_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3Backup_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3Backup_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Backup::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Backup::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
