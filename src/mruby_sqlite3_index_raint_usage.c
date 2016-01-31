/*
 * struct sqlite3_index_constraint_usage
 * Defined in file sqlite3.h @ line 5601
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3IndexConstraintUsage_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::initialize */
/* sha: 86d0bbdb9b0855a75fa4b257a6ef7557133a201a9752954147b7c56b2781381f */
#if BIND_Sqlite3IndexConstraintUsage_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IndexConstraintUsage_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  struct sqlite3_index_constraint_usage* native_object = (struct sqlite3_index_constraint_usage*)calloc(1, sizeof(struct sqlite3_index_constraint_usage));
  mruby_gift_sqlite3_index_raint_usage_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::argvIndex_reader */
/* sha: 0663ab47ca021ef801aba6a97cccfa01a3d8d4cc0b80bbcbebffb0f670c16a80 */
#if BIND_Sqlite3IndexConstraintUsage_argvIndex_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IndexConstraintUsage_get_argvIndex(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint_usage * native_self = mruby_unbox_sqlite3_index_raint_usage(self);

  int native_argvIndex = native_self->argvIndex;

  mrb_value argvIndex = mrb_fixnum_value(native_argvIndex);

  return argvIndex;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::argvIndex_writer */
/* sha: 6aa3a6e7a5ca67a99c388ec31e85c51293a72839f2c7dfd52f5f14c1668edeb6 */
#if BIND_Sqlite3IndexConstraintUsage_argvIndex_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IndexConstraintUsage_set_argvIndex(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint_usage * native_self = mruby_unbox_sqlite3_index_raint_usage(self);
  mrb_int native_argvIndex;

  mrb_get_args(mrb, "i", &native_argvIndex);

  native_self->argvIndex = native_argvIndex;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::omit_reader */
/* sha: 81374490593e799e7232c6e93656e9a9adcab85970de82e35342a5004b95bef1 */
#if BIND_Sqlite3IndexConstraintUsage_omit_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IndexConstraintUsage_get_omit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint_usage * native_self = mruby_unbox_sqlite3_index_raint_usage(self);

  unsigned char native_omit = native_self->omit;

  mrb_value omit = mrb_fixnum_value(native_omit);

  return omit;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::omit_writer */
/* sha: 0e4fad23a6c9891e1f243c351be394ff001fdec821939f3acc4fc915014e9e96 */
#if BIND_Sqlite3IndexConstraintUsage_omit_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IndexConstraintUsage_set_omit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint_usage * native_self = mruby_unbox_sqlite3_index_raint_usage(self);
  mrb_int native_omit;

  mrb_get_args(mrb, "i", &native_omit);

  native_self->omit = native_omit;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3IndexConstraintUsage_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::class_definition */
/* sha: 8c5395fad461f065273076fc369eb6ba684bd3b7932d911fbb994ca4fc998a47 */
  struct RClass* Sqlite3IndexConstraintUsage_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3IndexConstraintUsage", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3IndexConstraintUsage_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::class_method_definitions */
/* sha: 1443d2d4d60bc15ee1d6358b6ea4cdebee0f56dde40140d614dacb1f669bd04d */
#if BIND_Sqlite3IndexConstraintUsage_INITIALIZE
  mrb_define_method(mrb, Sqlite3IndexConstraintUsage_class, "initialize", mrb_SQLite_Sqlite3IndexConstraintUsage_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::attr_definitions */
/* sha: 10f315babeb9af35cc587d0b57d8a652db44756a3717bb3effe10dbb567ab6fb */
  /*
   * Fields
   */
#if BIND_Sqlite3IndexConstraintUsage_argvIndex_FIELD_READER
  mrb_define_method(mrb, Sqlite3IndexConstraintUsage_class, "argvIndex", mrb_SQLite_Sqlite3IndexConstraintUsage_get_argvIndex, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IndexConstraintUsage_argvIndex_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IndexConstraintUsage_class, "argvIndex=", mrb_SQLite_Sqlite3IndexConstraintUsage_set_argvIndex, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexConstraintUsage_omit_FIELD_READER
  mrb_define_method(mrb, Sqlite3IndexConstraintUsage_class, "omit", mrb_SQLite_Sqlite3IndexConstraintUsage_get_omit, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IndexConstraintUsage_omit_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IndexConstraintUsage_class, "omit=", mrb_SQLite_Sqlite3IndexConstraintUsage_set_omit, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
