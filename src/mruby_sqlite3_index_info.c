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
/* sha: e3e6b0c75138f34303032cbf9d78187d13c056aaefcb56742fc3795817bab940 */
#if BIND_Sqlite3IndexInfo_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IndexInfo_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  sqlite3_index_info* native_object = (sqlite3_index_info*)calloc(1, sizeof(sqlite3_index_info));
  mruby_gift_sqlite3_index_info_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3IndexInfo::nConstraint_reader */
/* sha: 46635d8373e785c0076e03626d1c58188d28b0b1d10c32cbb3775d5ae0a1fb80 */
#if BIND_Sqlite3IndexInfo_nConstraint_FIELD_READER
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
/* sha: e9405461144adc0cd40e17bdc56b4b809aa1213661b8e6193b8243688bd44dae */
#if BIND_Sqlite3IndexInfo_nConstraint_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_nConstraint(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
  mrb_int native_nConstraint;

  mrb_get_args(mrb, "i", &native_nConstraint);

  native_self->nConstraint = native_nConstraint;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::aConstraint_reader */
/* sha: 1a1b90d3c5893c11e7ed179df13bb9fb73fdb04b8ec2934f77eb3d2bd20ecad3 */
#if BIND_Sqlite3IndexInfo_aConstraint_FIELD_READER
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
/* sha: 35c5d9679e22cbc37c733cd99ca65be234a9b9d6cae6a1abb1cd21957a388dff */
#if BIND_Sqlite3IndexInfo_aConstraint_FIELD_WRITER
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
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::nOrderBy_reader */
/* sha: 65bb3bc72b4c461a83259c9a915dd14e3b7a339e8a677d81c7c670897b8a7858 */
#if BIND_Sqlite3IndexInfo_nOrderBy_FIELD_READER
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
/* sha: 135a121eda3a37b43c1311b00575a96841a92e60931994e6b3025110c3aab213 */
#if BIND_Sqlite3IndexInfo_nOrderBy_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_nOrderBy(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
  mrb_int native_nOrderBy;

  mrb_get_args(mrb, "i", &native_nOrderBy);

  native_self->nOrderBy = native_nOrderBy;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::aOrderBy_reader */
/* sha: 5672b39d9588bb9757ee8c58289274c5a69774e6e607cab1a29ec9b55b32a73c */
#if BIND_Sqlite3IndexInfo_aOrderBy_FIELD_READER
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
/* sha: 041e86a4a2b1f00e2c7ebec4c268744d2b57a35e322c722ce9304769adce06c0 */
#if BIND_Sqlite3IndexInfo_aOrderBy_FIELD_WRITER
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
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::aConstraintUsage_reader */
/* sha: e797de461511c1af1043102f62b58ecb50fd0388ff457f3bb241fcc5ec232eb1 */
#if BIND_Sqlite3IndexInfo_aConstraintUsage_FIELD_READER
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
/* sha: c4d2d6e9f6089a572f6ea19d79c069cda58d0a476b50e6fa1281e04704f28397 */
#if BIND_Sqlite3IndexInfo_aConstraintUsage_FIELD_WRITER
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
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::idxNum_reader */
/* sha: 7bf215e3f66b59b32f39ac2e0b1e444f6f8284d27da73f2a8338d5eca0c27d70 */
#if BIND_Sqlite3IndexInfo_idxNum_FIELD_READER
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
/* sha: 444c64da06694e93656010c6e6d975a191f659a552fc8e0d900de78a8e1da67a */
#if BIND_Sqlite3IndexInfo_idxNum_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_idxNum(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
  mrb_int native_idxNum;

  mrb_get_args(mrb, "i", &native_idxNum);

  native_self->idxNum = native_idxNum;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::idxStr_reader */
/* sha: c4885be34f3449c588884d6353146b079852994d5482a8a813961930d2596ab5 */
#if BIND_Sqlite3IndexInfo_idxStr_FIELD_READER
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
/* sha: a30a208874ab1b0ee4d27d448183059a243a471a149bb3b863d6226ef16f6007 */
#if BIND_Sqlite3IndexInfo_idxStr_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_idxStr(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
  mrb_value idxStr;

  mrb_get_args(mrb, "o", &idxStr);

  /* type checking */
  TODO_type_check_char_PTR(idxStr);

  char * native_idxStr = TODO_mruby_unbox_char_PTR(idxStr);

  native_self->idxStr = native_idxStr;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::needToFreeIdxStr_reader */
/* sha: f2d0b5078cc6bb668a5c1dc6315a6595fb5e82639e7e7fb3e0ae96709531a713 */
#if BIND_Sqlite3IndexInfo_needToFreeIdxStr_FIELD_READER
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
/* sha: ecc110ea30a789f74e543db5340957ac93d78dde91e6ea33fd282f15d945763c */
#if BIND_Sqlite3IndexInfo_needToFreeIdxStr_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_needToFreeIdxStr(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
  mrb_int native_needToFreeIdxStr;

  mrb_get_args(mrb, "i", &native_needToFreeIdxStr);

  native_self->needToFreeIdxStr = native_needToFreeIdxStr;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::orderByConsumed_reader */
/* sha: d4f2216be5f47cc9e0072a2c41dcc75f77811cb7c3a334e68a857fd316d9f273 */
#if BIND_Sqlite3IndexInfo_orderByConsumed_FIELD_READER
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
/* sha: c6e90d93242dcc37dbe568adf6b533de546b7ab07c37787d2fbfd1fa4903d2d5 */
#if BIND_Sqlite3IndexInfo_orderByConsumed_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_orderByConsumed(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
  mrb_int native_orderByConsumed;

  mrb_get_args(mrb, "i", &native_orderByConsumed);

  native_self->orderByConsumed = native_orderByConsumed;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::estimatedCost_reader */
/* sha: 4e8b24993a375a53c7afa0ee4964e95e655d0c5dae9c53369572fed22daca1c6 */
#if BIND_Sqlite3IndexInfo_estimatedCost_FIELD_READER
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
/* sha: a6510e1971bb3d35902b6701e9cf3a0515a84eb0b284f116ed9179b40f8aeed0 */
#if BIND_Sqlite3IndexInfo_estimatedCost_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_estimatedCost(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
  mrb_float native_estimatedCost;

  mrb_get_args(mrb, "f", &native_estimatedCost);

  native_self->estimatedCost = native_estimatedCost;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::estimatedRows_reader */
/* sha: f442770d9dad26ae133a82293578023f070f262a893099559ba9d86ce78d780c */
#if BIND_Sqlite3IndexInfo_estimatedRows_FIELD_READER
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
/* sha: 3e4691a61cc720d7253dbd9eb5002540248361b39476e5625b2a45afd28ce8b9 */
#if BIND_Sqlite3IndexInfo_estimatedRows_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_estimatedRows(mrb_state* mrb, mrb_value self) {
  sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
  mrb_int native_estimatedRows;

  mrb_get_args(mrb, "i", &native_estimatedRows);

  native_self->estimatedRows = native_estimatedRows;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3IndexInfo_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

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


/* MRUBY_BINDING: Sqlite3IndexInfo::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
