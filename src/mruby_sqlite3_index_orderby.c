/*
 * struct sqlite3_index_orderby
 * Defined in file sqlite3.h @ line 5596
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3IndexOrderby_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3IndexOrderby_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IndexOrderby_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_orderby* native_object = (struct sqlite3_index_orderby*)malloc(sizeof(struct sqlite3_index_orderby));
  mruby_gift_struct sqlite3_index_orderby_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SQLite_Sqlite3IndexOrderby_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3IndexOrderby.disown only accepts objects of type SQLite::Sqlite3IndexOrderby");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SQLite_Sqlite3IndexOrderby_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3IndexOrderby.belongs_to_ruby only accepts objects of type SQLite::Sqlite3IndexOrderby");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}

/*
 * Fields
 */

#if BIND_Sqlite3IndexOrderby_iColumn_FIELD
/* get_iColumn
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexOrderby_get_iColumn(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_orderby * native_self = mruby_unbox_struct sqlite3_index_orderby(self);

  int native_field = native_self->iColumn;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_iColumn
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexOrderby_set_iColumn(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_orderby * native_self = mruby_unbox_struct sqlite3_index_orderby(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->iColumn = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IndexOrderby_desc_FIELD
/* get_desc
 *
 * Return Type: unsigned char
 */
mrb_value
mrb_SQLite_Sqlite3IndexOrderby_get_desc(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_orderby * native_self = mruby_unbox_struct sqlite3_index_orderby(self);

  unsigned char native_field = native_self->desc;

  mrb_value ruby_field = TODO_mruby_box_unsigned_char(mrb, native_field);

  return ruby_field;
}

/* set_desc
 *
 * Parameters:
 * - value: unsigned char
 */
mrb_value
mrb_SQLite_Sqlite3IndexOrderby_set_desc(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_orderby * native_self = mruby_unbox_struct sqlite3_index_orderby(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_unsigned_char(ruby_field);

  unsigned char native_field = TODO_mruby_unbox_unsigned_char(ruby_field);

  native_self->desc = native_field;

  return ruby_field;
}
#endif


void mrb_SQLite_Sqlite3IndexOrderby_init(mrb_state* mrb) {
  struct RClass* Sqlite3IndexOrderby_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3IndexOrderby", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3IndexOrderby_class, MRB_TT_DATA);

#if BIND_Sqlite3IndexOrderby_INITIALIZE
  mrb_define_method(mrb, Sqlite3IndexOrderby_class, "initialize", mrb_SQLite_Sqlite3IndexOrderby_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3IndexOrderby_class, "disown", mrb_SQLite_Sqlite3IndexOrderby_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3IndexOrderby_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3IndexOrderby_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Sqlite3IndexOrderby_iColumn_FIELD
  mrb_define_method(mrb, Sqlite3IndexOrderby_class, "iColumn", mrb_SQLite_Sqlite3IndexOrderby_get_iColumn, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IndexOrderby_class, "iColumn=", mrb_SQLite_Sqlite3IndexOrderby_set_iColumn, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexOrderby_desc_FIELD
  mrb_define_method(mrb, Sqlite3IndexOrderby_class, "desc", mrb_SQLite_Sqlite3IndexOrderby_get_desc, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IndexOrderby_class, "desc=", mrb_SQLite_Sqlite3IndexOrderby_set_desc, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
