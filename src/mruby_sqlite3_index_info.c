/*
 * sqlite3_index_info
 * Defined in file sqlite3.h @ line 5466
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3IndexInfo_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::initialize */
/* sha: fe1e655592fcb6f8fbd509dd4d430bb5809dbf1860a157ef931b1cef4b4415a2 */
#if BIND_Sqlite3IndexInfo_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IndexInfo_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  sqlite3_index_info* native_object = (sqlite3_index_info*)calloc(1, sizeof(sqlite3_index_info));
  mruby_gift_sqlite3_index_info_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3IndexInfo::nConstraint_reader */
/* sha: 2111d59d8ebffb996a6badcd26e54346af6eb27ec951741642c5dd7b6070e0bf */
#if BIND_Sqlite3IndexInfo_nConstraint_FIELD_READER
/* get_nConstraint
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_nConstraint(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  int native_nConstraint = native_self->nConstraint;

  mrb_value nConstraint = mrb_fixnum_value(native_nConstraint);

  return nConstraint;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::nConstraint_writer */
/* sha: 3866388e259dd5f87edaa605a02a2a599c1b23e0d4517b20974dd361159eb772 */
#if BIND_Sqlite3IndexInfo_nConstraint_FIELD_WRITER
/* set_nConstraint
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_nConstraint(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
  mrb_int native_nConstraint;

  mrb_get_args(mrb, "i", &native_nConstraint);

  native_self->nConstraint = native_nConstraint;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::aConstraint_reader */
/* sha: 1bb62fb7f65a9e6ad7396715db9a19ec0aa64c29c5f3ba1b4088e0031ebfc3b0 */
#if BIND_Sqlite3IndexInfo_aConstraint_FIELD_READER
/* get_aConstraint
 *
 * Return Type: struct sqlite3_index_constraint *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_aConstraint(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  struct sqlite3_index_constraint * native_aConstraint = native_self->aConstraint;

  mrb_value aConstraint = (native_aConstraint == NULL ? mrb_nil_value() : mruby_box_sqlite3_index_raint(mrb, native_aConstraint));

  return aConstraint;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::aConstraint_writer */
/* sha: 353bdc305e34bdabc9a9748b54ea37a94fe8979b02da2e4a42c1d9b579006a0e */
#if BIND_Sqlite3IndexInfo_aConstraint_FIELD_WRITER
/* set_aConstraint
 *
 * Parameters:
 * - value: struct sqlite3_index_constraint *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_aConstraint(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
  mrb_value aConstraint;

  mrb_get_args(mrb, "o", &aConstraint);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, aConstraint, Sqlite3IndexConstraint_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3IndexConstraint expected");
    return mrb_nil_value();
  }

  struct sqlite3_index_constraint * native_aConstraint = (mrb_nil_p(aConstraint) ? NULL : mruby_unbox_sqlite3_index_raint(aConstraint));

  native_self->aConstraint = native_aConstraint;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::nOrderBy_reader */
/* sha: bd37c0253160d192cac358dba4e66cb0609e1107d84d6a3c968124dabbc80c49 */
#if BIND_Sqlite3IndexInfo_nOrderBy_FIELD_READER
/* get_nOrderBy
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_nOrderBy(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  int native_nOrderBy = native_self->nOrderBy;

  mrb_value nOrderBy = mrb_fixnum_value(native_nOrderBy);

  return nOrderBy;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::nOrderBy_writer */
/* sha: 40694d365418f805a1ddcab5d708c81ed2b269b948fd66e77715de697974d46d */
#if BIND_Sqlite3IndexInfo_nOrderBy_FIELD_WRITER
/* set_nOrderBy
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_nOrderBy(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
  mrb_int native_nOrderBy;

  mrb_get_args(mrb, "i", &native_nOrderBy);

  native_self->nOrderBy = native_nOrderBy;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::aOrderBy_reader */
/* sha: dbc47c387c4dd4467cca114bc09991464dd670a4c7b334e0cf2b0dab5f3cfa88 */
#if BIND_Sqlite3IndexInfo_aOrderBy_FIELD_READER
/* get_aOrderBy
 *
 * Return Type: struct sqlite3_index_orderby *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_aOrderBy(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  struct sqlite3_index_orderby * native_aOrderBy = native_self->aOrderBy;

  mrb_value aOrderBy = (native_aOrderBy == NULL ? mrb_nil_value() : mruby_box_sqlite3_index_orderby(mrb, native_aOrderBy));

  return aOrderBy;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::aOrderBy_writer */
/* sha: 15e1574cdb2fd468d205df1c27d117a66dd2e5b4b3d351ad4d1bbb71e991f5e4 */
#if BIND_Sqlite3IndexInfo_aOrderBy_FIELD_WRITER
/* set_aOrderBy
 *
 * Parameters:
 * - value: struct sqlite3_index_orderby *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_aOrderBy(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
  mrb_value aOrderBy;

  mrb_get_args(mrb, "o", &aOrderBy);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, aOrderBy, Sqlite3IndexOrderby_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3IndexOrderby expected");
    return mrb_nil_value();
  }

  struct sqlite3_index_orderby * native_aOrderBy = (mrb_nil_p(aOrderBy) ? NULL : mruby_unbox_sqlite3_index_orderby(aOrderBy));

  native_self->aOrderBy = native_aOrderBy;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::aConstraintUsage_reader */
/* sha: 6f3e002b973c5a10dce0f41460bffa3cafc1df0e4f96e746ba404b6dc4714f65 */
#if BIND_Sqlite3IndexInfo_aConstraintUsage_FIELD_READER
/* get_aConstraintUsage
 *
 * Return Type: struct sqlite3_index_constraint_usage *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_aConstraintUsage(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  struct sqlite3_index_constraint_usage * native_aConstraintUsage = native_self->aConstraintUsage;

  mrb_value aConstraintUsage = (native_aConstraintUsage == NULL ? mrb_nil_value() : mruby_box_sqlite3_index_raint_usage(mrb, native_aConstraintUsage));

  return aConstraintUsage;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::aConstraintUsage_writer */
/* sha: 01d2c3b34f08bc94a0ce8fbe5e8361870e660c0749215df1ba3e0eec2467a358 */
#if BIND_Sqlite3IndexInfo_aConstraintUsage_FIELD_WRITER
/* set_aConstraintUsage
 *
 * Parameters:
 * - value: struct sqlite3_index_constraint_usage *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_aConstraintUsage(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
  mrb_value aConstraintUsage;

  mrb_get_args(mrb, "o", &aConstraintUsage);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, aConstraintUsage, Sqlite3IndexConstraintUsage_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3IndexConstraintUsage expected");
    return mrb_nil_value();
  }

  struct sqlite3_index_constraint_usage * native_aConstraintUsage = (mrb_nil_p(aConstraintUsage) ? NULL : mruby_unbox_sqlite3_index_raint_usage(aConstraintUsage));

  native_self->aConstraintUsage = native_aConstraintUsage;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::idxNum_reader */
/* sha: 7f14190fed258bfd91e618964f38e09003dd135614061ef2e0140eab6c9adeff */
#if BIND_Sqlite3IndexInfo_idxNum_FIELD_READER
/* get_idxNum
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_idxNum(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  int native_idxNum = native_self->idxNum;

  mrb_value idxNum = mrb_fixnum_value(native_idxNum);

  return idxNum;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::idxNum_writer */
/* sha: 33e6395322105df7c761e4bb44f3ce8bb52be271c3dca319dafd83d4a05907c1 */
#if BIND_Sqlite3IndexInfo_idxNum_FIELD_WRITER
/* set_idxNum
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_idxNum(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
  mrb_int native_idxNum;

  mrb_get_args(mrb, "i", &native_idxNum);

  native_self->idxNum = native_idxNum;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::idxStr_reader */
/* sha: ebef6688bbb30874c98618f086c6d60feb2110d8710b68116dd4523ffe8ff9c4 */
#if BIND_Sqlite3IndexInfo_idxStr_FIELD_READER
/* get_idxStr
 *
 * Return Type: char *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_idxStr(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  char * native_idxStr = native_self->idxStr;

  mrb_value idxStr = TODO_mruby_box_char_PTR(mrb, native_idxStr);

  return idxStr;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::idxStr_writer */
/* sha: 1a95da23b2ce51f0a6c778e83744c45fa382163a1f446990c76b2a686125ef0f */
#if BIND_Sqlite3IndexInfo_idxStr_FIELD_WRITER
/* set_idxStr
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_idxStr(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
  mrb_value idxStr;

  mrb_get_args(mrb, "o", &idxStr);

  /* type checking */
  TODO_type_check_char_PTR(idxStr);

  char * native_idxStr = TODO_mruby_unbox_char_PTR(idxStr);

  native_self->idxStr = native_idxStr;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::needToFreeIdxStr_reader */
/* sha: 868fc8c0b94b97710a56d94cfd180eb8cc8404eee93fef6a8808446d9ad79414 */
#if BIND_Sqlite3IndexInfo_needToFreeIdxStr_FIELD_READER
/* get_needToFreeIdxStr
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_needToFreeIdxStr(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  int native_needToFreeIdxStr = native_self->needToFreeIdxStr;

  mrb_value needToFreeIdxStr = mrb_fixnum_value(native_needToFreeIdxStr);

  return needToFreeIdxStr;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::needToFreeIdxStr_writer */
/* sha: 9843dfa6ba5a01b80c59375e3e670e79dceeaa003e29c18f65ecf6bd37a5760e */
#if BIND_Sqlite3IndexInfo_needToFreeIdxStr_FIELD_WRITER
/* set_needToFreeIdxStr
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_needToFreeIdxStr(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
  mrb_int native_needToFreeIdxStr;

  mrb_get_args(mrb, "i", &native_needToFreeIdxStr);

  native_self->needToFreeIdxStr = native_needToFreeIdxStr;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::orderByConsumed_reader */
/* sha: 8cc69c055c41e9513e6cfe2f83e00bff2c8aeb65d050a220af03e90fcab58b20 */
#if BIND_Sqlite3IndexInfo_orderByConsumed_FIELD_READER
/* get_orderByConsumed
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_orderByConsumed(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  int native_orderByConsumed = native_self->orderByConsumed;

  mrb_value orderByConsumed = mrb_fixnum_value(native_orderByConsumed);

  return orderByConsumed;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::orderByConsumed_writer */
/* sha: 454eef8d838b05ed51a4028fd6719afa6881e7f61ae03d03f75a069570ba141b */
#if BIND_Sqlite3IndexInfo_orderByConsumed_FIELD_WRITER
/* set_orderByConsumed
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_orderByConsumed(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
  mrb_int native_orderByConsumed;

  mrb_get_args(mrb, "i", &native_orderByConsumed);

  native_self->orderByConsumed = native_orderByConsumed;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::estimatedCost_reader */
/* sha: 44716aedb479b5b8a37f0e8e48f5703861e2ffa52bd3e03d58f1688e4bf6fd2b */
#if BIND_Sqlite3IndexInfo_estimatedCost_FIELD_READER
/* get_estimatedCost
 *
 * Return Type: double
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_estimatedCost(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  double native_estimatedCost = native_self->estimatedCost;

  mrb_value estimatedCost = mrb_float_value(mrb, native_estimatedCost);

  return estimatedCost;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::estimatedCost_writer */
/* sha: 5b5ba7f22c68a198f883e3d0af435e577b49164db1781fe5e76e2d49fd764581 */
#if BIND_Sqlite3IndexInfo_estimatedCost_FIELD_WRITER
/* set_estimatedCost
 *
 * Parameters:
 * - value: double
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_estimatedCost(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
  mrb_float native_estimatedCost;

  mrb_get_args(mrb, "f", &native_estimatedCost);

  native_self->estimatedCost = native_estimatedCost;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::estimatedRows_reader */
/* sha: ca8499840810e8c831e9836964d21051484e0ac0cd1795ad9791b7abb2ca2950 */
#if BIND_Sqlite3IndexInfo_estimatedRows_FIELD_READER
/* get_estimatedRows
 *
 * Return Type: sqlite3_int64
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_estimatedRows(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  sqlite3_int64 native_estimatedRows = native_self->estimatedRows;

  mrb_value estimatedRows = mrb_fixnum_value(native_estimatedRows);

  return estimatedRows;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::estimatedRows_writer */
/* sha: 75835d1f61c5ec84b565d8ac7ca6e7b94cc484f1e5d02d985ffeb3934584ca5c */
#if BIND_Sqlite3IndexInfo_estimatedRows_FIELD_WRITER
/* set_estimatedRows
 *
 * Parameters:
 * - value: sqlite3_int64
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_estimatedRows(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
  mrb_int native_estimatedRows;

  mrb_get_args(mrb, "i", &native_estimatedRows);

  native_self->estimatedRows = native_estimatedRows;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3IndexInfo_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3IndexInfo::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::class_definition */
/* sha: bb4bf046a610873e709a540b25367b8ac049eb94380c98a39c651ce7f60ab824 */
  struct RClass* Sqlite3IndexInfo_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3IndexInfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3IndexInfo_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::class_method_definitions */
/* sha: cea5fdd3819c79de36d084d46f034a6fc3624ab58afd3e0361f78d00ca788c69 */
#if BIND_Sqlite3IndexInfo_INITIALIZE
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "initialize", mrb_SQLite_Sqlite3IndexInfo_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::attr_definitions */
/* sha: a375d098876af62ae52998ef927bd9e9a8350e9164a94ff547a962d40411e358 */
  /*
   * Fields
   */
#if BIND_Sqlite3IndexInfo_nConstraint_FIELD_READER
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "nConstraint", mrb_SQLite_Sqlite3IndexInfo_get_nConstraint, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IndexInfo_nConstraint_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "nConstraint=", mrb_SQLite_Sqlite3IndexInfo_set_nConstraint, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexInfo_aConstraint_FIELD_READER
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "aConstraint", mrb_SQLite_Sqlite3IndexInfo_get_aConstraint, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IndexInfo_aConstraint_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "aConstraint=", mrb_SQLite_Sqlite3IndexInfo_set_aConstraint, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexInfo_nOrderBy_FIELD_READER
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "nOrderBy", mrb_SQLite_Sqlite3IndexInfo_get_nOrderBy, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IndexInfo_nOrderBy_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "nOrderBy=", mrb_SQLite_Sqlite3IndexInfo_set_nOrderBy, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexInfo_aOrderBy_FIELD_READER
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "aOrderBy", mrb_SQLite_Sqlite3IndexInfo_get_aOrderBy, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IndexInfo_aOrderBy_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "aOrderBy=", mrb_SQLite_Sqlite3IndexInfo_set_aOrderBy, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexInfo_aConstraintUsage_FIELD_READER
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "aConstraintUsage", mrb_SQLite_Sqlite3IndexInfo_get_aConstraintUsage, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IndexInfo_aConstraintUsage_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "aConstraintUsage=", mrb_SQLite_Sqlite3IndexInfo_set_aConstraintUsage, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexInfo_idxNum_FIELD_READER
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "idxNum", mrb_SQLite_Sqlite3IndexInfo_get_idxNum, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IndexInfo_idxNum_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "idxNum=", mrb_SQLite_Sqlite3IndexInfo_set_idxNum, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexInfo_idxStr_FIELD_READER
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "idxStr", mrb_SQLite_Sqlite3IndexInfo_get_idxStr, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IndexInfo_idxStr_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "idxStr=", mrb_SQLite_Sqlite3IndexInfo_set_idxStr, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexInfo_needToFreeIdxStr_FIELD_READER
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "needToFreeIdxStr", mrb_SQLite_Sqlite3IndexInfo_get_needToFreeIdxStr, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IndexInfo_needToFreeIdxStr_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "needToFreeIdxStr=", mrb_SQLite_Sqlite3IndexInfo_set_needToFreeIdxStr, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexInfo_orderByConsumed_FIELD_READER
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "orderByConsumed", mrb_SQLite_Sqlite3IndexInfo_get_orderByConsumed, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IndexInfo_orderByConsumed_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "orderByConsumed=", mrb_SQLite_Sqlite3IndexInfo_set_orderByConsumed, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexInfo_estimatedCost_FIELD_READER
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "estimatedCost", mrb_SQLite_Sqlite3IndexInfo_get_estimatedCost, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IndexInfo_estimatedCost_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "estimatedCost=", mrb_SQLite_Sqlite3IndexInfo_set_estimatedCost, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexInfo_estimatedRows_FIELD_READER
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "estimatedRows", mrb_SQLite_Sqlite3IndexInfo_get_estimatedRows, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IndexInfo_estimatedRows_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "estimatedRows=", mrb_SQLite_Sqlite3IndexInfo_set_estimatedRows, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
