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
/* sha: 03e926f26a1c43da38f8a130a63ea7600974100b3cad4924b4c85cba8340667a */
#if BIND_Sqlite3IndexConstraintUsage_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IndexConstraintUsage_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  struct sqlite3_index_constraint_usage* native_object = (struct sqlite3_index_constraint_usage*)calloc(1, sizeof(struct sqlite3_index_constraint_usage));
  mruby_gift_sqlite3_index_raint_usage_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::argvIndex_reader */
/* sha: 3df41bdb9d8b079fc0ddee2b1bdcc2d6499ddcb3cb30a61811dec5ffbfa6a01d */
#if BIND_Sqlite3IndexConstraintUsage_argvIndex_FIELD_READER
/* get_argvIndex
 *
 * Return Type: int
 */
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
/* sha: 30c349098e6552d3770ccb09202010c1e8ee4c2590593e376ff97e307e693f6e */
#if BIND_Sqlite3IndexConstraintUsage_argvIndex_FIELD_WRITER
/* set_argvIndex
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraintUsage_set_argvIndex(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint_usage * native_self = mruby_unbox_sqlite3_index_raint_usage(self);
  mrb_int native_argvIndex;

  mrb_get_args(mrb, "i", &native_argvIndex);

  native_self->argvIndex = native_argvIndex;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::omit_reader */
/* sha: 6752a7a8da6cfc25bad1b1dacb8e731546bbe5e7eb30d1b0ab7379b2bee0b190 */
#if BIND_Sqlite3IndexConstraintUsage_omit_FIELD_READER
/* get_omit
 *
 * Return Type: unsigned char
 */
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
/* sha: 80825d089bc7f49481f8352d5bf50bf3ae5e48e72c4eb9bb5df88b5b0079ade5 */
#if BIND_Sqlite3IndexConstraintUsage_omit_FIELD_WRITER
/* set_omit
 *
 * Parameters:
 * - value: unsigned char
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraintUsage_set_omit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint_usage * native_self = mruby_unbox_sqlite3_index_raint_usage(self);
  mrb_int native_omit;

  mrb_get_args(mrb, "i", &native_omit);

  native_self->omit = native_omit;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3IndexConstraintUsage_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
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

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
