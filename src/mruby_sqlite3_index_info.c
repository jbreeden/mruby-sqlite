/*
 * struct sqlite3_index_info
 * Defined in file sqlite3.h @ line 5466
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3IndexInfo_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Sqlite3IndexInfo::initialize */
/* sha: 12c92d6a7a0e58cafd0f268e132b8a46462c004ecea9f710ed36d7483a41f728 */
#if BIND_Sqlite3IndexInfo_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IndexInfo_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info* native_object = (struct sqlite3_index_info*)calloc(1, sizeof(struct sqlite3_index_info));
  mruby_giftwrap_sqlite3_index_info_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::initialize */
/* sha: ed06528a605c02a6cf840d26e24f17d04c10b733d51c2a04f8cbe82e45cbad89 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3IndexInfo.disown only accepts objects of type SQLite::Sqlite3IndexInfo");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::belongs_to_ruby */
/* sha: 527ed2d2cda8a3de00de68ebb5f53e01a8ea9c8f2a3eb17ff2f4cb6b9ab9e547 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3IndexInfo.belongs_to_ruby only accepts objects of type SQLite::Sqlite3IndexInfo");
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

/* MRUBY_BINDING: Sqlite3IndexInfo::nConstraint_reader */
/* sha: 776cf42a3deb267321ecf488896f42595c680423d5a52fcb8a30db0f559f500f */
#if BIND_Sqlite3IndexInfo_nConstraint_FIELD_READER
/* get_nConstraint
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_nConstraint(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  int native_nConstraint = native_self->nConstraint;

  mrb_value nConstraint = mrb_fixnum_value(native_nConstraint);

  return nConstraint;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::nConstraint_writer */
/* sha: 0483c34809701efbb16cc6c41c10bae6b35c21d0f89f2bdc33c73193bfb8e4a0 */
#if BIND_Sqlite3IndexInfo_nConstraint_FIELD_WRITER
/* set_nConstraint
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_nConstraint(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
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
/* sha: 5fe27be0630261e4534a2c1588a61fba3c695f42e3781ff5c14d9beb711c712f */
#if BIND_Sqlite3IndexInfo_aConstraint_FIELD_READER
/* get_aConstraint
 *
 * Return Type: struct sqlite3_index_constraint *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_aConstraint(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  struct sqlite3_index_constraint * native_aConstraint = native_self->aConstraint;

  mrb_value aConstraint = (native_aConstraint == NULL ? mrb_nil_value() : mruby_box_sqlite3_index_raint(mrb, native_aConstraint));

  return aConstraint;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::aConstraint_writer */
/* sha: 319489949b103bf11a7f243336ad2c6a491791d5ff62c5a43a98ec036e9397c2 */
#if BIND_Sqlite3IndexInfo_aConstraint_FIELD_WRITER
/* set_aConstraint
 *
 * Parameters:
 * - value: struct sqlite3_index_constraint *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_aConstraint(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
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
/* sha: 73aa4379ced7816834e70a0561507f9486b772d3bf394da1fcba5a0f7d9215b6 */
#if BIND_Sqlite3IndexInfo_nOrderBy_FIELD_READER
/* get_nOrderBy
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_nOrderBy(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  int native_nOrderBy = native_self->nOrderBy;

  mrb_value nOrderBy = mrb_fixnum_value(native_nOrderBy);

  return nOrderBy;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::nOrderBy_writer */
/* sha: 11cf28b08f2437b88eab518c16fe8703a59c794b8cb9f0d4998dacf21ada1764 */
#if BIND_Sqlite3IndexInfo_nOrderBy_FIELD_WRITER
/* set_nOrderBy
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_nOrderBy(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
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
/* sha: c15928876b997b5632babb253466184e2f7a37afc89a1233270f8e6abab116d0 */
#if BIND_Sqlite3IndexInfo_aOrderBy_FIELD_READER
/* get_aOrderBy
 *
 * Return Type: struct sqlite3_index_orderby *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_aOrderBy(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  struct sqlite3_index_orderby * native_aOrderBy = native_self->aOrderBy;

  mrb_value aOrderBy = (native_aOrderBy == NULL ? mrb_nil_value() : mruby_box_sqlite3_index_orderby(mrb, native_aOrderBy));

  return aOrderBy;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::aOrderBy_writer */
/* sha: d4ab376fbe7dc267e105879e51fd29f5d6623783e19150b457ec17a6a6cc4f47 */
#if BIND_Sqlite3IndexInfo_aOrderBy_FIELD_WRITER
/* set_aOrderBy
 *
 * Parameters:
 * - value: struct sqlite3_index_orderby *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_aOrderBy(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
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
/* sha: 769133e381f8be3b1f701b0234b9f57cbf165df4f2543b3f4b631ccad5c65042 */
#if BIND_Sqlite3IndexInfo_aConstraintUsage_FIELD_READER
/* get_aConstraintUsage
 *
 * Return Type: struct sqlite3_index_constraint_usage *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_aConstraintUsage(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  struct sqlite3_index_constraint_usage * native_aConstraintUsage = native_self->aConstraintUsage;

  mrb_value aConstraintUsage = (native_aConstraintUsage == NULL ? mrb_nil_value() : mruby_box_sqlite3_index_raint_usage(mrb, native_aConstraintUsage));

  return aConstraintUsage;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::aConstraintUsage_writer */
/* sha: 0226d788999d4f987cbd63731ee36ccf489f0c9c31a0f491920cf1e0a9753bd7 */
#if BIND_Sqlite3IndexInfo_aConstraintUsage_FIELD_WRITER
/* set_aConstraintUsage
 *
 * Parameters:
 * - value: struct sqlite3_index_constraint_usage *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_aConstraintUsage(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
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
/* sha: 25daa4c7f293929795b15398ed49d07b52b0c8947b4b749fdc41810785c4278d */
#if BIND_Sqlite3IndexInfo_idxNum_FIELD_READER
/* get_idxNum
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_idxNum(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  int native_idxNum = native_self->idxNum;

  mrb_value idxNum = mrb_fixnum_value(native_idxNum);

  return idxNum;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::idxNum_writer */
/* sha: ae5d56dd10e19875238e69b0533024a0ed9225b37714291d88685facc235b603 */
#if BIND_Sqlite3IndexInfo_idxNum_FIELD_WRITER
/* set_idxNum
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_idxNum(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
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
/* sha: 9346f7c30f6de80a12e41bc1a4bd46530c48ba0de0579692d42e0bdf710bfb0c */
#if BIND_Sqlite3IndexInfo_idxStr_FIELD_READER
/* get_idxStr
 *
 * Return Type: char *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_idxStr(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  char * native_idxStr = native_self->idxStr;

  mrb_value idxStr = TODO_mruby_box_char_PTR(mrb, native_idxStr);

  return idxStr;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::idxStr_writer */
/* sha: 6f5aed9ce9665d220f6fe16f6577c7c232377b45163feb4f1d1ae718c0294d22 */
#if BIND_Sqlite3IndexInfo_idxStr_FIELD_WRITER
/* set_idxStr
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_idxStr(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
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
/* sha: 193bb863fd13d325e1068206d20cd6ce1fce70ab0b1e1e0113132af948695043 */
#if BIND_Sqlite3IndexInfo_needToFreeIdxStr_FIELD_READER
/* get_needToFreeIdxStr
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_needToFreeIdxStr(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  int native_needToFreeIdxStr = native_self->needToFreeIdxStr;

  mrb_value needToFreeIdxStr = mrb_fixnum_value(native_needToFreeIdxStr);

  return needToFreeIdxStr;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::needToFreeIdxStr_writer */
/* sha: d6f088fb6bb134d5b69d9ad9a830245396c57949e0a4a0d93a87f1a86fdc7fb6 */
#if BIND_Sqlite3IndexInfo_needToFreeIdxStr_FIELD_WRITER
/* set_needToFreeIdxStr
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_needToFreeIdxStr(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
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
/* sha: 69e1c4e60bd19db51928cfca71b846bc1ef47d88e527347e922d314e4c87ed55 */
#if BIND_Sqlite3IndexInfo_orderByConsumed_FIELD_READER
/* get_orderByConsumed
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_orderByConsumed(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  int native_orderByConsumed = native_self->orderByConsumed;

  mrb_value orderByConsumed = mrb_fixnum_value(native_orderByConsumed);

  return orderByConsumed;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::orderByConsumed_writer */
/* sha: 38c55182fb87c506242791e8d4019f9096c569e886ad8f0de0c640e6fd9bcb80 */
#if BIND_Sqlite3IndexInfo_orderByConsumed_FIELD_WRITER
/* set_orderByConsumed
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_orderByConsumed(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
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
/* sha: 417ea258b13f90b7372bfedd43452f56d33ebdb1f61cd3cc921f94c8d4300ba7 */
#if BIND_Sqlite3IndexInfo_estimatedCost_FIELD_READER
/* get_estimatedCost
 *
 * Return Type: double
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_estimatedCost(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  double native_estimatedCost = native_self->estimatedCost;

  mrb_value estimatedCost = mrb_float_value(mrb, native_estimatedCost);

  return estimatedCost;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::estimatedCost_writer */
/* sha: 8d6f4d86ac47fa4d966ccbac97341eacf8667c7f88ec92427e5c631482cb24b2 */
#if BIND_Sqlite3IndexInfo_estimatedCost_FIELD_WRITER
/* set_estimatedCost
 *
 * Parameters:
 * - value: double
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_estimatedCost(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
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
/* sha: 3883ac2fc2747ab27221896fab70c9fc7568877cdfba17e79259d00db8ff225e */
#if BIND_Sqlite3IndexInfo_estimatedRows_FIELD_READER
/* get_estimatedRows
 *
 * Return Type: sqlite3_int64
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_estimatedRows(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  sqlite3_int64 native_estimatedRows = native_self->estimatedRows;

  mrb_value estimatedRows = mrb_fixnum_value(native_estimatedRows);

  return estimatedRows;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::estimatedRows_writer */
/* sha: 36775dc2e65b5e48e9282c7b3ae309f68aa959c7a02199165a20b38510d3b02d */
#if BIND_Sqlite3IndexInfo_estimatedRows_FIELD_WRITER
/* set_estimatedRows
 *
 * Parameters:
 * - value: sqlite3_int64
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_estimatedRows(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
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
/* MRUBY_BINDING: Sqlite3IndexInfo::class_definition */
/* sha: bb4bf046a610873e709a540b25367b8ac049eb94380c98a39c651ce7f60ab824 */
  struct RClass* Sqlite3IndexInfo_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3IndexInfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3IndexInfo_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::class_method_definitions */
/* sha: 84186d1ab1c7bdb9fd2c86df6af37a1fc99caeffb545d8187f2195ce8c2d6df9 */
#if BIND_Sqlite3IndexInfo_INITIALIZE
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "initialize", mrb_SQLite_Sqlite3IndexInfo_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3IndexInfo_class, "disown", mrb_SQLite_Sqlite3IndexInfo_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3IndexInfo_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3IndexInfo_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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

/* MRUBY_BINDING: Sqlite3IndexInfo::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
