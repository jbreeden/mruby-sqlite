/*
 * struct sqlite3_rtree_query_info
 * Defined in file sqlite3.h @ line 7739
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3RtreeQueryInfo_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3RtreeQueryInfo_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info* native_object = (struct sqlite3_rtree_query_info*)malloc(sizeof(struct sqlite3_rtree_query_info));
  mruby_gift_struct sqlite3_rtree_query_info_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3RtreeQueryInfo.disown only accepts objects of type SQLite::Sqlite3RtreeQueryInfo");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3RtreeQueryInfo.belongs_to_ruby only accepts objects of type SQLite::Sqlite3RtreeQueryInfo");
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

#if BIND_Sqlite3RtreeQueryInfo_pContext_FIELD
/* get_pContext
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_pContext(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);

  void * native_field = native_self->pContext;

  mrb_value ruby_field = TODO_mruby_box_void_PTR(mrb, native_field);

  return ruby_field;
}

/* set_pContext
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_pContext(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_PTR(ruby_field);

  void * native_field = TODO_mruby_unbox_void_PTR(ruby_field);

  native_self->pContext = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_nParam_FIELD
/* get_nParam
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_nParam(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);

  int native_field = native_self->nParam;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_nParam
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_nParam(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->nParam = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_aParam_FIELD
/* get_aParam
 *
 * Return Type: sqlite3_rtree_dbl *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_aParam(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);

  sqlite3_rtree_dbl * native_field = native_self->aParam;

  mrb_value ruby_field = TODO_mruby_box_sqlite3_rtree_dbl_PTR(mrb, native_field);

  return ruby_field;
}

/* set_aParam
 *
 * Parameters:
 * - value: sqlite3_rtree_dbl *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_aParam(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_sqlite3_rtree_dbl_PTR(ruby_field);

  sqlite3_rtree_dbl * native_field = TODO_mruby_unbox_sqlite3_rtree_dbl_PTR(ruby_field);

  native_self->aParam = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_pUser_FIELD
/* get_pUser
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_pUser(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);

  void * native_field = native_self->pUser;

  mrb_value ruby_field = TODO_mruby_box_void_PTR(mrb, native_field);

  return ruby_field;
}

/* set_pUser
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_pUser(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_PTR(ruby_field);

  void * native_field = TODO_mruby_unbox_void_PTR(ruby_field);

  native_self->pUser = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_xDelUser_FIELD
/* get_xDelUser
 *
 * Return Type: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_xDelUser(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);

  void (*)(void *) native_field = native_self->xDelUser;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xDelUser
 *
 * Parameters:
 * - value: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_xDelUser(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  void (*native_field)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  native_self->xDelUser = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_aCoord_FIELD
/* get_aCoord
 *
 * Return Type: sqlite3_rtree_dbl *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_aCoord(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);

  sqlite3_rtree_dbl * native_field = native_self->aCoord;

  mrb_value ruby_field = TODO_mruby_box_sqlite3_rtree_dbl_PTR(mrb, native_field);

  return ruby_field;
}

/* set_aCoord
 *
 * Parameters:
 * - value: sqlite3_rtree_dbl *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_aCoord(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_sqlite3_rtree_dbl_PTR(ruby_field);

  sqlite3_rtree_dbl * native_field = TODO_mruby_unbox_sqlite3_rtree_dbl_PTR(ruby_field);

  native_self->aCoord = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_anQueue_FIELD
/* get_anQueue
 *
 * Return Type: unsigned int *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_anQueue(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);

  unsigned int * native_field = native_self->anQueue;

  mrb_value ruby_field = TODO_mruby_box_unsigned_int_PTR(mrb, native_field);

  return ruby_field;
}

/* set_anQueue
 *
 * Parameters:
 * - value: unsigned int *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_anQueue(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_unsigned_int_PTR(ruby_field);

  unsigned int * native_field = TODO_mruby_unbox_unsigned_int_PTR(ruby_field);

  native_self->anQueue = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_nCoord_FIELD
/* get_nCoord
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_nCoord(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);

  int native_field = native_self->nCoord;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_nCoord
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_nCoord(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->nCoord = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_iLevel_FIELD
/* get_iLevel
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_iLevel(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);

  int native_field = native_self->iLevel;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_iLevel
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_iLevel(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->iLevel = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_mxLevel_FIELD
/* get_mxLevel
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_mxLevel(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);

  int native_field = native_self->mxLevel;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_mxLevel
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_mxLevel(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->mxLevel = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_iRowid_FIELD
/* get_iRowid
 *
 * Return Type: sqlite3_int64
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_iRowid(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);

  sqlite3_int64 native_field = native_self->iRowid;

  mrb_value ruby_field = TODO_mruby_box_sqlite3_int64(mrb, native_field);

  return ruby_field;
}

/* set_iRowid
 *
 * Parameters:
 * - value: sqlite3_int64
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_iRowid(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_sqlite3_int64(ruby_field);

  sqlite3_int64 native_field = TODO_mruby_unbox_sqlite3_int64(ruby_field);

  native_self->iRowid = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_rParentScore_FIELD
/* get_rParentScore
 *
 * Return Type: sqlite3_rtree_dbl
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_rParentScore(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);

  sqlite3_rtree_dbl native_field = native_self->rParentScore;

  mrb_value ruby_field = mrb_float_value(native_field);

  return ruby_field;
}

/* set_rParentScore
 *
 * Parameters:
 * - value: sqlite3_rtree_dbl
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_rParentScore(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }

  double native_field = mrb_float(ruby_field);

  native_self->rParentScore = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_eParentWithin_FIELD
/* get_eParentWithin
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_eParentWithin(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);

  int native_field = native_self->eParentWithin;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_eParentWithin
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_eParentWithin(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->eParentWithin = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_eWithin_FIELD
/* get_eWithin
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_eWithin(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);

  int native_field = native_self->eWithin;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_eWithin
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_eWithin(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->eWithin = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_rScore_FIELD
/* get_rScore
 *
 * Return Type: sqlite3_rtree_dbl
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_rScore(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);

  sqlite3_rtree_dbl native_field = native_self->rScore;

  mrb_value ruby_field = mrb_float_value(native_field);

  return ruby_field;
}

/* set_rScore
 *
 * Parameters:
 * - value: sqlite3_rtree_dbl
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_rScore(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_struct sqlite3_rtree_query_info(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }

  double native_field = mrb_float(ruby_field);

  native_self->rScore = native_field;

  return ruby_field;
}
#endif


void mrb_SQLite_Sqlite3RtreeQueryInfo_init(mrb_state* mrb) {
  RClass* Sqlite3RtreeQueryInfo_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3RtreeQueryInfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3RtreeQueryInfo_class, MRB_TT_DATA);

#if BIND_Sqlite3RtreeQueryInfo_INITIALIZE
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "initialize", mrb_SQLite_Sqlite3RtreeQueryInfo_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3RtreeQueryInfo_class, "disown", mrb_SQLite_Sqlite3RtreeQueryInfo_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3RtreeQueryInfo_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3RtreeQueryInfo_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Sqlite3RtreeQueryInfo_pContext_FIELD
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "pContext", mrb_SQLite_Sqlite3RtreeQueryInfo_get_pContext, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "pContext=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_pContext, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_nParam_FIELD
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "nParam", mrb_SQLite_Sqlite3RtreeQueryInfo_get_nParam, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "nParam=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_nParam, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_aParam_FIELD
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "aParam", mrb_SQLite_Sqlite3RtreeQueryInfo_get_aParam, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "aParam=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_aParam, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_pUser_FIELD
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "pUser", mrb_SQLite_Sqlite3RtreeQueryInfo_get_pUser, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "pUser=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_pUser, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_xDelUser_FIELD
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "xDelUser", mrb_SQLite_Sqlite3RtreeQueryInfo_get_xDelUser, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "xDelUser=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_xDelUser, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_aCoord_FIELD
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "aCoord", mrb_SQLite_Sqlite3RtreeQueryInfo_get_aCoord, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "aCoord=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_aCoord, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_anQueue_FIELD
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "anQueue", mrb_SQLite_Sqlite3RtreeQueryInfo_get_anQueue, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "anQueue=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_anQueue, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_nCoord_FIELD
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "nCoord", mrb_SQLite_Sqlite3RtreeQueryInfo_get_nCoord, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "nCoord=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_nCoord, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_iLevel_FIELD
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "iLevel", mrb_SQLite_Sqlite3RtreeQueryInfo_get_iLevel, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "iLevel=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_iLevel, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_mxLevel_FIELD
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "mxLevel", mrb_SQLite_Sqlite3RtreeQueryInfo_get_mxLevel, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "mxLevel=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_mxLevel, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_iRowid_FIELD
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "iRowid", mrb_SQLite_Sqlite3RtreeQueryInfo_get_iRowid, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "iRowid=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_iRowid, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_rParentScore_FIELD
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "rParentScore", mrb_SQLite_Sqlite3RtreeQueryInfo_get_rParentScore, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "rParentScore=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_rParentScore, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_eParentWithin_FIELD
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "eParentWithin", mrb_SQLite_Sqlite3RtreeQueryInfo_get_eParentWithin, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "eParentWithin=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_eParentWithin, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_eWithin_FIELD
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "eWithin", mrb_SQLite_Sqlite3RtreeQueryInfo_get_eWithin, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "eWithin=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_eWithin, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_rScore_FIELD
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "rScore", mrb_SQLite_Sqlite3RtreeQueryInfo_get_rScore, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "rScore=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_rScore, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
