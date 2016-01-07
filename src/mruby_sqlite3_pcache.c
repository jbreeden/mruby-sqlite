/*
 * struct sqlite3_pcache
 * Defined in file sqlite3.h @ line 6710
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Pcache_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Sqlite3Pcache::initialize */
/* sha: a80dc2c344da2e59a7d8d44da54c159efbe7cc643cdd1ba4e659be039b7717f0 */
#if BIND_Sqlite3Pcache_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Pcache_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache* native_object = (struct sqlite3_pcache*)calloc(1, sizeof(struct sqlite3_pcache));
  mruby_giftwrap_sqlite3_pcache_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Pcache::initialize */
/* sha: 1c7c335c4201895b47bc3c159434840497334d41d80e99832586e7dd48773faf */
mrb_value
mrb_SQLite_Sqlite3Pcache_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3Pcache.disown only accepts objects of type SQLite::Sqlite3Pcache");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Pcache::belongs_to_ruby */
/* sha: 6734fed259a783c3064e4f9b7611b9be46709f31a57a69797366c7bfbbfb9d3c */
mrb_value
mrb_SQLite_Sqlite3Pcache_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3Pcache.belongs_to_ruby only accepts objects of type SQLite::Sqlite3Pcache");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Pcache_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3Pcache::class_definition */
/* sha: 34c9384d05bfb609bcb17c83697c1a76d00c8ac5a8f895c2b8c4791e00ee65d7 */
  struct RClass* Sqlite3Pcache_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Pcache", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Pcache_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Pcache::class_method_definitions */
/* sha: 2b06b7475fa9463182abc78d492815085260b42515ed3bb79c238e833c29f965 */
#if BIND_Sqlite3Pcache_INITIALIZE
  mrb_define_method(mrb, Sqlite3Pcache_class, "initialize", mrb_SQLite_Sqlite3Pcache_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3Pcache_class, "disown", mrb_SQLite_Sqlite3Pcache_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3Pcache_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3Pcache_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Pcache::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Pcache::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
