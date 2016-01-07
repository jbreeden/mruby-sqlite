/*
 * struct sqlite3_index_constraint
 * Defined in file sqlite3.h @ line 5589
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3IndexConstraint_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Sqlite3IndexConstraint::initialize */
/* sha: c68104765e2d2c0d4601fe7e73318092a814aa039bd78bf4e3e9fee258532e06 */
#if BIND_Sqlite3IndexConstraint_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IndexConstraint_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint* native_object = (struct sqlite3_index_constraint*)calloc(1, sizeof(struct sqlite3_index_constraint));
  mruby_giftwrap_sqlite3_index_raint_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::initialize */
/* sha: aa7d711f98f3deabbe0edf5b3e6d97430575ec883cb4879b9fd5e6c81002f4ef */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::belongs_to_ruby */
/* sha: ec612b2fd6e2c0ffdf72124829528ff0e66b4b6c96ccbdc6ce7fc7176af210f3 */
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
/* sha: 8e8d589bdca6ac5e7279c680e60897022ae53e6a37069a7ffc113d1391a95ac9 */
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
/* sha: 8b68219c9291bfdb8fb80dab32806b34d8d2cdf56146f7385bd06007fc512849 */
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
/* sha: cb8b607e32d8306e84a05a5265024ee7fd5e4e73c33ad16126791a27a982b9a3 */
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
/* sha: 5ebe28246db852e462055c7886fab51840a1e8d3ecf5e9bb233aba1870ebcfa6 */
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
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3IndexConstraint_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3IndexConstraint::class_definition */
/* sha: ffed649d509ab91c57341e90f24c1ff62def8fac43c1460a03a04b69a754bbfb */
  struct RClass* Sqlite3IndexConstraint_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3IndexConstraint", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3IndexConstraint_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::class_method_definitions */
/* sha: bb4e434d66f1792e08c817968a6b7d27a9a8bc515d7aadb7aeaa97cf90e60250 */
#if BIND_Sqlite3IndexConstraint_INITIALIZE
  mrb_define_method(mrb, Sqlite3IndexConstraint_class, "initialize", mrb_SQLite_Sqlite3IndexConstraint_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3IndexConstraint_class, "disown", mrb_SQLite_Sqlite3IndexConstraint_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3IndexConstraint_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3IndexConstraint_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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

/* MRUBY_BINDING: Sqlite3IndexConstraint::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
