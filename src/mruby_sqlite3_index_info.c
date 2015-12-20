/*
 * struct sqlite3_index_info
 * Defined in file sqlite3.h @ line 5466
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3IndexInfo_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3IndexInfo_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IndexInfo_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info* native_object = (struct sqlite3_index_info*)calloc(1, sizeof(struct sqlite3_index_info));
  mruby_giftwrap_sqlite3_index_info_data_ptr(self, native_object);
  return self;
}
#endif

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

/*
 * Fields
 */

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

#if BIND_Sqlite3IndexInfo_idxStr_FIELD_READER
/* get_idxStr
 *
 * Return Type: char *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_idxStr(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);

  char * native_idxStr = native_self->idxStr;

  mrb_value idxStr = mrb_str_new_cstr(mrb, native_idxStr);

  return idxStr;
}
#endif

#if BIND_Sqlite3IndexInfo_idxStr_FIELD_WRITER
/* set_idxStr
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_idxStr(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_sqlite3_index_info(self);
  char * idxStr = NULL;

  mrb_get_args(mrb, "z!", &idxStr);

  /* WARNING: String is strdup'ed to avoid mutable reference to internal MRuby memory */
  char * native_idxStr = strdup(idxStr);

  if (NULL != native_self->idxStr) free(native_self->idxStr);
  native_self->idxStr = native_idxStr;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

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


void mrb_SQLite_Sqlite3IndexInfo_init(mrb_state* mrb) {
  struct RClass* Sqlite3IndexInfo_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3IndexInfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3IndexInfo_class, MRB_TT_DATA);

#if BIND_Sqlite3IndexInfo_INITIALIZE
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "initialize", mrb_SQLite_Sqlite3IndexInfo_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3IndexInfo_class, "disown", mrb_SQLite_Sqlite3IndexInfo_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3IndexInfo_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3IndexInfo_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

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

}

#endif
