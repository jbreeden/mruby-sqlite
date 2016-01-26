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
/* sha: fd02e0a942456a9b716c0142817b778e0e2f7b02289de5776400e741da6c909f */
#if BIND_Sqlite3IndexConstraint_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  struct sqlite3_index_constraint* native_object = (struct sqlite3_index_constraint*)calloc(1, sizeof(struct sqlite3_index_constraint));
  mruby_gift_sqlite3_index_raint_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3IndexConstraint::iColumn_reader */
/* sha: 285c19b27823d24d1e36648d5311b9a6289b1cd0ad7d8db2a58f042d0e4c7221 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::iColumn_writer */
/* sha: a6f8b241c289a3e05ea99aa1e87da98f0c2f20690d06c89f2bc532f9bf5f80cb */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::op_reader */
/* sha: dcd3974a8169c8ab95ecb90f1ca347085f37e000ef48b40cb0e5673e37c16d97 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::op_writer */
/* sha: 56275f2e696cef438f2993ac67970a644b8ef4e3a4e41dc7ffcf68381327e964 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::usable_reader */
/* sha: 064c9d2e53bea3fc904fce692df80f1e2cf6b412b039f00b85a14647d3da61db */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::usable_writer */
/* sha: 06778ab2a7aaee4cfe1c34d96bfcd76682f0cb4053c974a54ea02282f9b8f6f3 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::iTermOffset_reader */
/* sha: 23d47b7611ff0a8b6914731cf49d95a5e243769bc7881f3f3f032fac33585a76 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::iTermOffset_writer */
/* sha: c560e9ddb67ef6acad97a4399079e0766befca2f2cb1d6d4960f2adac32eface */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3IndexConstraint_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3IndexConstraint::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
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

/* MRUBY_BINDING: Sqlite3IndexConstraint::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
