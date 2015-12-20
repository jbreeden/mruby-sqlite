/*
 * struct sqlite3_stmt
 * Defined in file sqlite3.h @ line 3095
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Stmt_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3Stmt_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Stmt_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_stmt* native_object = (struct sqlite3_stmt*)calloc(1, sizeof(struct sqlite3_stmt));
  mruby_giftwrap_sqlite3_stmt_data_ptr(self, native_object);
  return self;
}
#endif

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


void mrb_SQLite_Sqlite3Stmt_init(mrb_state* mrb) {
  struct RClass* Sqlite3Stmt_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Stmt", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Stmt_class, MRB_TT_DATA);

#if BIND_Sqlite3Stmt_INITIALIZE
  mrb_define_method(mrb, Sqlite3Stmt_class, "initialize", mrb_SQLite_Sqlite3Stmt_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3Stmt_class, "disown", mrb_SQLite_Sqlite3Stmt_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3Stmt_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3Stmt_belongs_to_ruby, MRB_ARGS_ARG(1, 0));


}

#endif
