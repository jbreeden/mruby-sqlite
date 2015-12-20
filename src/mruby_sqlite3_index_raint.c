/*
 * struct sqlite3_index_constraint
 * Defined in file sqlite3.h @ line 5589
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3IndexConstraint_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3IndexConstraint_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint* native_object = (struct sqlite3_index_constraint*)calloc(1, sizeof(struct sqlite3_index_constraint));
  mruby_giftwrap_sqlite3_index_raint_data_ptr(self, native_object);
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

#if BIND_Sqlite3IndexConstraint_iColumn_FIELD_READER
/* get_iColumn
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_get_iColumn(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint * native_self = mruby_unbox_sqlite3_index_raint(self);

  int native_iColumn = native_self->iColumn;

  mrb_value iColumn = mrb_fixnum_value(native_iColumn);

  return iColumn;
}
#endif

#if BIND_Sqlite3IndexConstraint_iColumn_FIELD_WRITER
/* set_iColumn
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_set_iColumn(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint * native_self = mruby_unbox_sqlite3_index_raint(self);
  mrb_int native_iColumn;

  mrb_get_args(mrb, "i", &native_iColumn);

  native_self->iColumn = native_iColumn;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3IndexConstraint_op_FIELD_READER
/* get_op
 *
 * Return Type: unsigned char
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_get_op(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint * native_self = mruby_unbox_sqlite3_index_raint(self);

  unsigned char native_op = native_self->op;

  mrb_value op = mrb_fixnum_value(native_op);

  return op;
}
#endif

#if BIND_Sqlite3IndexConstraint_op_FIELD_WRITER
/* set_op
 *
 * Parameters:
 * - value: unsigned char
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_set_op(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint * native_self = mruby_unbox_sqlite3_index_raint(self);
  mrb_int native_op;

  mrb_get_args(mrb, "i", &native_op);

  native_self->op = native_op;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3IndexConstraint_usable_FIELD_READER
/* get_usable
 *
 * Return Type: unsigned char
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_get_usable(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint * native_self = mruby_unbox_sqlite3_index_raint(self);

  unsigned char native_usable = native_self->usable;

  mrb_value usable = mrb_fixnum_value(native_usable);

  return usable;
}
#endif

#if BIND_Sqlite3IndexConstraint_usable_FIELD_WRITER
/* set_usable
 *
 * Parameters:
 * - value: unsigned char
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_set_usable(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint * native_self = mruby_unbox_sqlite3_index_raint(self);
  mrb_int native_usable;

  mrb_get_args(mrb, "i", &native_usable);

  native_self->usable = native_usable;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3IndexConstraint_iTermOffset_FIELD_READER
/* get_iTermOffset
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_get_iTermOffset(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint * native_self = mruby_unbox_sqlite3_index_raint(self);

  int native_iTermOffset = native_self->iTermOffset;

  mrb_value iTermOffset = mrb_fixnum_value(native_iTermOffset);

  return iTermOffset;
}
#endif

#if BIND_Sqlite3IndexConstraint_iTermOffset_FIELD_WRITER
/* set_iTermOffset
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_set_iTermOffset(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint * native_self = mruby_unbox_sqlite3_index_raint(self);
  mrb_int native_iTermOffset;

  mrb_get_args(mrb, "i", &native_iTermOffset);

  native_self->iTermOffset = native_iTermOffset;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif


void mrb_SQLite_Sqlite3IndexConstraint_init(mrb_state* mrb) {
  struct RClass* Sqlite3IndexConstraint_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3IndexConstraint", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3IndexConstraint_class, MRB_TT_DATA);

#if BIND_Sqlite3IndexConstraint_INITIALIZE
  mrb_define_method(mrb, Sqlite3IndexConstraint_class, "initialize", mrb_SQLite_Sqlite3IndexConstraint_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3IndexConstraint_class, "disown", mrb_SQLite_Sqlite3IndexConstraint_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3IndexConstraint_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3IndexConstraint_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Sqlite3IndexConstraint_iColumn_FIELD_READER
  mrb_define_method(mrb, Sqlite3IndexConstraint_class, "iColumn", mrb_SQLite_Sqlite3IndexConstraint_get_iColumn, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IndexConstraint_iColumn_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IndexConstraint_class, "iColumn=", mrb_SQLite_Sqlite3IndexConstraint_set_iColumn, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexConstraint_op_FIELD_READER
  mrb_define_method(mrb, Sqlite3IndexConstraint_class, "op", mrb_SQLite_Sqlite3IndexConstraint_get_op, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IndexConstraint_op_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IndexConstraint_class, "op=", mrb_SQLite_Sqlite3IndexConstraint_set_op, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexConstraint_usable_FIELD_READER
  mrb_define_method(mrb, Sqlite3IndexConstraint_class, "usable", mrb_SQLite_Sqlite3IndexConstraint_get_usable, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IndexConstraint_usable_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IndexConstraint_class, "usable=", mrb_SQLite_Sqlite3IndexConstraint_set_usable, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexConstraint_iTermOffset_FIELD_READER
  mrb_define_method(mrb, Sqlite3IndexConstraint_class, "iTermOffset", mrb_SQLite_Sqlite3IndexConstraint_get_iTermOffset, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IndexConstraint_iTermOffset_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IndexConstraint_class, "iTermOffset=", mrb_SQLite_Sqlite3IndexConstraint_set_iTermOffset, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
