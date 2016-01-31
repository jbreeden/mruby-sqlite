/*
 * struct sqlite3_index_constraint
 * Defined in file sqlite3.h @ line 5589
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3IndexConstraint_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::initialize */
/* sha: 5fb88e110e0be6144465ee13b2e7dfff2b9b4042892cfb80287b2230cdef67ef */
#if BIND_Sqlite3IndexConstraint_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  struct sqlite3_index_constraint* native_object = (struct sqlite3_index_constraint*)calloc(1, sizeof(struct sqlite3_index_constraint));
  mruby_gift_sqlite3_index_raint_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3IndexConstraint::iColumn_reader */
/* sha: d44d6e72526b3e61a15c369c1344ba5df3d0e70c99dfb6dcf457e9cb9b7edfdc */
#if BIND_Sqlite3IndexConstraint_iColumn_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_get_iColumn(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint * native_self = mruby_unbox_sqlite3_index_raint(self);

  int native_iColumn = native_self->iColumn;

  mrb_value iColumn = mrb_fixnum_value(native_iColumn);

  return iColumn;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::iColumn_writer */
/* sha: d195bbae5f92c61c53c4e62c5649b67939e5f63c9e5c29c0ed3e238d96c36a8b */
#if BIND_Sqlite3IndexConstraint_iColumn_FIELD_WRITER
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::op_reader */
/* sha: 0714140205867e8af653c42b83747d52439912b5823b68335777c9e667f40531 */
#if BIND_Sqlite3IndexConstraint_op_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_get_op(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint * native_self = mruby_unbox_sqlite3_index_raint(self);

  unsigned char native_op = native_self->op;

  mrb_value op = mrb_fixnum_value(native_op);

  return op;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::op_writer */
/* sha: 0bee1c1a85f091813114475e912d691224e51f629a3938c3542f74bba15f6b16 */
#if BIND_Sqlite3IndexConstraint_op_FIELD_WRITER
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::usable_reader */
/* sha: f92cfd897a4ccd8ab30ba397b26edd17b216087e17663361b03611a7c56cf43c */
#if BIND_Sqlite3IndexConstraint_usable_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_get_usable(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint * native_self = mruby_unbox_sqlite3_index_raint(self);

  unsigned char native_usable = native_self->usable;

  mrb_value usable = mrb_fixnum_value(native_usable);

  return usable;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::usable_writer */
/* sha: 799be1b0717021f4029bf09afadc82cd4ac69193eb90ae110beb9fa873be11f6 */
#if BIND_Sqlite3IndexConstraint_usable_FIELD_WRITER
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::iTermOffset_reader */
/* sha: 1769b0951b0148fa27d91682df543eea751c54028ad8fff1f539ec364878fa05 */
#if BIND_Sqlite3IndexConstraint_iTermOffset_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_get_iTermOffset(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint * native_self = mruby_unbox_sqlite3_index_raint(self);

  int native_iTermOffset = native_self->iTermOffset;

  mrb_value iTermOffset = mrb_fixnum_value(native_iTermOffset);

  return iTermOffset;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::iTermOffset_writer */
/* sha: e13e490ddd33bb9ea23d10d0308aa6ff681f624bd6820d9ad99c1bc51b1b0916 */
#if BIND_Sqlite3IndexConstraint_iTermOffset_FIELD_WRITER
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
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3IndexConstraint_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::class_definition */
/* sha: ffed649d509ab91c57341e90f24c1ff62def8fac43c1460a03a04b69a754bbfb */
  struct RClass* Sqlite3IndexConstraint_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3IndexConstraint", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3IndexConstraint_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::class_method_definitions */
/* sha: 532133c8c77bd9e8dfa1633da40979fa540ff547bd825febc5c7a26543597c77 */
#if BIND_Sqlite3IndexConstraint_INITIALIZE
  mrb_define_method(mrb, Sqlite3IndexConstraint_class, "initialize", mrb_SQLite_Sqlite3IndexConstraint_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::attr_definitions */
/* sha: 2e4e2bf2c479c53ed16ef7b7d1dd8ba144db1ce00622d1dd6e2b81906c6253f9 */
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
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: Sqlite3IndexConstraint::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
