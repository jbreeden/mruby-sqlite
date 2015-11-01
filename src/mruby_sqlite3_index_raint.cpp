/*
 * struct sqlite3_index_constraint
 * Defined in file sqlite3.h @ line 5589
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3IndexConstraint_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3IndexConstraint_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint* native_object = (struct sqlite3_index_constraint*)malloc(sizeof(struct sqlite3_index_constraint));
  mruby_gift_struct sqlite3_index_constraint_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SQLite_Sqlite3IndexConstraint_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3IndexConstraint.disown only accepts objects of type SQLite::Sqlite3IndexConstraint");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SQLite_Sqlite3IndexConstraint_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3IndexConstraint.belongs_to_ruby only accepts objects of type SQLite::Sqlite3IndexConstraint");
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

#if BIND_Sqlite3IndexConstraint_iColumn_FIELD
/* get_iColumn
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_get_iColumn(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint * native_self = mruby_unbox_struct sqlite3_index_constraint(self);

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
mrb_SQLite_Sqlite3IndexConstraint_set_iColumn(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint * native_self = mruby_unbox_struct sqlite3_index_constraint(self);
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

#if BIND_Sqlite3IndexConstraint_op_FIELD
/* get_op
 *
 * Return Type: unsigned char
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_get_op(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint * native_self = mruby_unbox_struct sqlite3_index_constraint(self);

  unsigned char native_field = native_self->op;

  mrb_value ruby_field = TODO_mruby_box_unsigned_char(mrb, native_field);

  return ruby_field;
}

/* set_op
 *
 * Parameters:
 * - value: unsigned char
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_set_op(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint * native_self = mruby_unbox_struct sqlite3_index_constraint(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_unsigned_char(ruby_field);

  unsigned char native_field = TODO_mruby_unbox_unsigned_char(ruby_field);

  native_self->op = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IndexConstraint_usable_FIELD
/* get_usable
 *
 * Return Type: unsigned char
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_get_usable(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint * native_self = mruby_unbox_struct sqlite3_index_constraint(self);

  unsigned char native_field = native_self->usable;

  mrb_value ruby_field = TODO_mruby_box_unsigned_char(mrb, native_field);

  return ruby_field;
}

/* set_usable
 *
 * Parameters:
 * - value: unsigned char
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_set_usable(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint * native_self = mruby_unbox_struct sqlite3_index_constraint(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_unsigned_char(ruby_field);

  unsigned char native_field = TODO_mruby_unbox_unsigned_char(ruby_field);

  native_self->usable = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IndexConstraint_iTermOffset_FIELD
/* get_iTermOffset
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_get_iTermOffset(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint * native_self = mruby_unbox_struct sqlite3_index_constraint(self);

  int native_field = native_self->iTermOffset;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_iTermOffset
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_set_iTermOffset(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint * native_self = mruby_unbox_struct sqlite3_index_constraint(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->iTermOffset = native_field;

  return ruby_field;
}
#endif


void mrb_SQLite_Sqlite3IndexConstraint_init(mrb_state* mrb) {
  RClass* Sqlite3IndexConstraint_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3IndexConstraint", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3IndexConstraint_class, MRB_TT_DATA);

#if BIND_Sqlite3IndexConstraint_INITIALIZE
  mrb_define_method(mrb, Sqlite3IndexConstraint_class, "initialize", mrb_SQLite_Sqlite3IndexConstraint_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3IndexConstraint_class, "disown", mrb_SQLite_Sqlite3IndexConstraint_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3IndexConstraint_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3IndexConstraint_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Sqlite3IndexConstraint_iColumn_FIELD
  mrb_define_method(mrb, Sqlite3IndexConstraint_class, "iColumn", mrb_SQLite_Sqlite3IndexConstraint_get_iColumn, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IndexConstraint_class, "iColumn=", mrb_SQLite_Sqlite3IndexConstraint_set_iColumn, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexConstraint_op_FIELD
  mrb_define_method(mrb, Sqlite3IndexConstraint_class, "op", mrb_SQLite_Sqlite3IndexConstraint_get_op, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IndexConstraint_class, "op=", mrb_SQLite_Sqlite3IndexConstraint_set_op, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexConstraint_usable_FIELD
  mrb_define_method(mrb, Sqlite3IndexConstraint_class, "usable", mrb_SQLite_Sqlite3IndexConstraint_get_usable, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IndexConstraint_class, "usable=", mrb_SQLite_Sqlite3IndexConstraint_set_usable, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexConstraint_iTermOffset_FIELD
  mrb_define_method(mrb, Sqlite3IndexConstraint_class, "iTermOffset", mrb_SQLite_Sqlite3IndexConstraint_get_iTermOffset, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IndexConstraint_class, "iTermOffset=", mrb_SQLite_Sqlite3IndexConstraint_set_iTermOffset, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
