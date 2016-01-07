/*
 * struct sqlite3_stmt
 * Defined in file sqlite3.h @ line 3095
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Stmt_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Sqlite3Stmt::initialize */
/* sha: c542d54768d5b2f47354c42d54de161bdb984cae5fcbbcb91e72b0baece9f1e1 */
#if BIND_Sqlite3Stmt_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Stmt_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_stmt* native_object = (struct sqlite3_stmt*)calloc(1, sizeof(struct sqlite3_stmt));
  mruby_giftwrap_sqlite3_stmt_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Stmt::initialize */
/* sha: 2371e5a75fdfd10dcad05539ccb32c8681dec6f1019a6d886da13657db9d460c */
mrb_value
mrb_SQLite_Sqlite3Stmt_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3Stmt.disown only accepts objects of type SQLite::Sqlite3Stmt");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Stmt::belongs_to_ruby */
/* sha: b57382b7b0790a58ffaafce35d98dfd2bd3a032a95b81643e08e8140e5c1b528 */
mrb_value
mrb_SQLite_Sqlite3Stmt_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3Stmt.belongs_to_ruby only accepts objects of type SQLite::Sqlite3Stmt");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Stmt_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3Stmt::class_definition */
/* sha: d6f24b46597c81a6abbafccde28af0018f1ea6874811438d21b3ce7d80e84bab */
  struct RClass* Sqlite3Stmt_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Stmt", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Stmt_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Stmt::class_method_definitions */
/* sha: bbed0bf828713d8c0efe9a1db5d745e7b476266bf9a608ad49580ce0c8e72aed */
#if BIND_Sqlite3Stmt_INITIALIZE
  mrb_define_method(mrb, Sqlite3Stmt_class, "initialize", mrb_SQLite_Sqlite3Stmt_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3Stmt_class, "disown", mrb_SQLite_Sqlite3Stmt_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3Stmt_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3Stmt_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Stmt::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Stmt::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
