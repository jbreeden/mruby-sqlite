/*
 * struct sqlite3_index_info
 * Defined in file sqlite3.h @ line 5466
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3IndexInfo_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3IndexInfo_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IndexInfo_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info* native_object = (struct sqlite3_index_info*)malloc(sizeof(struct sqlite3_index_info));
  mruby_gift_struct sqlite3_index_info_data_ptr(self, native_object);
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

#if BIND_Sqlite3IndexInfo_nConstraint_FIELD
/* get_nConstraint
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_nConstraint(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_struct sqlite3_index_info(self);

  int native_field = native_self->nConstraint;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_nConstraint
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_nConstraint(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_struct sqlite3_index_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->nConstraint = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IndexInfo_aConstraint_FIELD
/* get_aConstraint
 *
 * Return Type: struct sqlite3_index_constraint *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_aConstraint(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_struct sqlite3_index_info(self);

  struct sqlite3_index_constraint * native_field = native_self->aConstraint;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_sqlite3_index_raint(mrb, native_field));

  return ruby_field;
}

/* set_aConstraint
 *
 * Parameters:
 * - value: struct sqlite3_index_constraint *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_aConstraint(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_struct sqlite3_index_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, Sqlite3IndexConstraint_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3IndexConstraint expected");
    return mrb_nil_value();
  }

  struct sqlite3_index_constraint * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_sqlite3_index_raint(ruby_field));

  native_self->aConstraint = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IndexInfo_nOrderBy_FIELD
/* get_nOrderBy
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_nOrderBy(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_struct sqlite3_index_info(self);

  int native_field = native_self->nOrderBy;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_nOrderBy
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_nOrderBy(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_struct sqlite3_index_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->nOrderBy = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IndexInfo_aOrderBy_FIELD
/* get_aOrderBy
 *
 * Return Type: struct sqlite3_index_orderby *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_aOrderBy(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_struct sqlite3_index_info(self);

  struct sqlite3_index_orderby * native_field = native_self->aOrderBy;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_sqlite3_index_orderby(mrb, native_field));

  return ruby_field;
}

/* set_aOrderBy
 *
 * Parameters:
 * - value: struct sqlite3_index_orderby *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_aOrderBy(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_struct sqlite3_index_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, Sqlite3IndexOrderby_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3IndexOrderby expected");
    return mrb_nil_value();
  }

  struct sqlite3_index_orderby * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_sqlite3_index_orderby(ruby_field));

  native_self->aOrderBy = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IndexInfo_aConstraintUsage_FIELD
/* get_aConstraintUsage
 *
 * Return Type: struct sqlite3_index_constraint_usage *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_aConstraintUsage(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_struct sqlite3_index_info(self);

  struct sqlite3_index_constraint_usage * native_field = native_self->aConstraintUsage;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_sqlite3_index_raint_usage(mrb, native_field));

  return ruby_field;
}

/* set_aConstraintUsage
 *
 * Parameters:
 * - value: struct sqlite3_index_constraint_usage *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_aConstraintUsage(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_struct sqlite3_index_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, Sqlite3IndexConstraintUsage_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3IndexConstraintUsage expected");
    return mrb_nil_value();
  }

  struct sqlite3_index_constraint_usage * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_sqlite3_index_raint_usage(ruby_field));

  native_self->aConstraintUsage = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IndexInfo_idxNum_FIELD
/* get_idxNum
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_idxNum(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_struct sqlite3_index_info(self);

  int native_field = native_self->idxNum;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_idxNum
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_idxNum(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_struct sqlite3_index_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->idxNum = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IndexInfo_idxStr_FIELD
/* get_idxStr
 *
 * Return Type: char *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_idxStr(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_struct sqlite3_index_info(self);

  char * native_field = native_self->idxStr;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}

/* set_idxStr
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_idxStr(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_struct sqlite3_index_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_field = strdup(mrb_string_value_cstr(mrb, &ruby_field));

  native_self->idxStr = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IndexInfo_needToFreeIdxStr_FIELD
/* get_needToFreeIdxStr
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_needToFreeIdxStr(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_struct sqlite3_index_info(self);

  int native_field = native_self->needToFreeIdxStr;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_needToFreeIdxStr
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_needToFreeIdxStr(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_struct sqlite3_index_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->needToFreeIdxStr = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IndexInfo_orderByConsumed_FIELD
/* get_orderByConsumed
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_orderByConsumed(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_struct sqlite3_index_info(self);

  int native_field = native_self->orderByConsumed;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_orderByConsumed
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_orderByConsumed(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_struct sqlite3_index_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->orderByConsumed = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IndexInfo_estimatedCost_FIELD
/* get_estimatedCost
 *
 * Return Type: double
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_estimatedCost(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_struct sqlite3_index_info(self);

  double native_field = native_self->estimatedCost;

  mrb_value ruby_field = mrb_float_value(native_field);

  return ruby_field;
}

/* set_estimatedCost
 *
 * Parameters:
 * - value: double
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_estimatedCost(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_struct sqlite3_index_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }

  double native_field = mrb_float(ruby_field);

  native_self->estimatedCost = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IndexInfo_estimatedRows_FIELD
/* get_estimatedRows
 *
 * Return Type: sqlite3_int64
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_get_estimatedRows(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_struct sqlite3_index_info(self);

  sqlite3_int64 native_field = native_self->estimatedRows;

  mrb_value ruby_field = TODO_mruby_box_sqlite3_int64(mrb, native_field);

  return ruby_field;
}

/* set_estimatedRows
 *
 * Parameters:
 * - value: sqlite3_int64
 */
mrb_value
mrb_SQLite_Sqlite3IndexInfo_set_estimatedRows(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_info * native_self = mruby_unbox_struct sqlite3_index_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_sqlite3_int64(ruby_field);

  sqlite3_int64 native_field = TODO_mruby_unbox_sqlite3_int64(ruby_field);

  native_self->estimatedRows = native_field;

  return ruby_field;
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
#if BIND_Sqlite3IndexInfo_nConstraint_FIELD
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "nConstraint", mrb_SQLite_Sqlite3IndexInfo_get_nConstraint, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "nConstraint=", mrb_SQLite_Sqlite3IndexInfo_set_nConstraint, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexInfo_aConstraint_FIELD
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "aConstraint", mrb_SQLite_Sqlite3IndexInfo_get_aConstraint, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "aConstraint=", mrb_SQLite_Sqlite3IndexInfo_set_aConstraint, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexInfo_nOrderBy_FIELD
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "nOrderBy", mrb_SQLite_Sqlite3IndexInfo_get_nOrderBy, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "nOrderBy=", mrb_SQLite_Sqlite3IndexInfo_set_nOrderBy, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexInfo_aOrderBy_FIELD
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "aOrderBy", mrb_SQLite_Sqlite3IndexInfo_get_aOrderBy, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "aOrderBy=", mrb_SQLite_Sqlite3IndexInfo_set_aOrderBy, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexInfo_aConstraintUsage_FIELD
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "aConstraintUsage", mrb_SQLite_Sqlite3IndexInfo_get_aConstraintUsage, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "aConstraintUsage=", mrb_SQLite_Sqlite3IndexInfo_set_aConstraintUsage, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexInfo_idxNum_FIELD
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "idxNum", mrb_SQLite_Sqlite3IndexInfo_get_idxNum, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "idxNum=", mrb_SQLite_Sqlite3IndexInfo_set_idxNum, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexInfo_idxStr_FIELD
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "idxStr", mrb_SQLite_Sqlite3IndexInfo_get_idxStr, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "idxStr=", mrb_SQLite_Sqlite3IndexInfo_set_idxStr, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexInfo_needToFreeIdxStr_FIELD
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "needToFreeIdxStr", mrb_SQLite_Sqlite3IndexInfo_get_needToFreeIdxStr, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "needToFreeIdxStr=", mrb_SQLite_Sqlite3IndexInfo_set_needToFreeIdxStr, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexInfo_orderByConsumed_FIELD
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "orderByConsumed", mrb_SQLite_Sqlite3IndexInfo_get_orderByConsumed, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "orderByConsumed=", mrb_SQLite_Sqlite3IndexInfo_set_orderByConsumed, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexInfo_estimatedCost_FIELD
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "estimatedCost", mrb_SQLite_Sqlite3IndexInfo_get_estimatedCost, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "estimatedCost=", mrb_SQLite_Sqlite3IndexInfo_set_estimatedCost, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexInfo_estimatedRows_FIELD
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "estimatedRows", mrb_SQLite_Sqlite3IndexInfo_get_estimatedRows, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IndexInfo_class, "estimatedRows=", mrb_SQLite_Sqlite3IndexInfo_set_estimatedRows, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
