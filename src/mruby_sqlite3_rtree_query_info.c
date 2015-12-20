/*
 * struct sqlite3_rtree_query_info
 * Defined in file sqlite3.h @ line 7739
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3RtreeQueryInfo_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3RtreeQueryInfo_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info* native_object = (struct sqlite3_rtree_query_info*)calloc(1, sizeof(struct sqlite3_rtree_query_info));
  mruby_giftwrap_sqlite3_rtree_query_info_data_ptr(self, native_object);
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

#if BIND_Sqlite3RtreeQueryInfo_pContext_FIELD_READER
/* get_pContext
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_pContext(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  void * native_pContext = native_self->pContext;

  mrb_value pContext = TODO_mruby_box_void_PTR(mrb, native_pContext);

  return pContext;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_pContext_FIELD_WRITER
/* set_pContext
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_pContext(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_value pContext;

  mrb_get_args(mrb, "o", &pContext);

  /* type checking */
  TODO_type_check_void_PTR(pContext);

  void * native_pContext = TODO_mruby_unbox_void_PTR(pContext);

  native_self->pContext = native_pContext;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_nParam_FIELD_READER
/* get_nParam
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_nParam(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  int native_nParam = native_self->nParam;

  mrb_value nParam = mrb_fixnum_value(native_nParam);

  return nParam;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_nParam_FIELD_WRITER
/* set_nParam
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_nParam(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_int native_nParam;

  mrb_get_args(mrb, "i", &native_nParam);

  native_self->nParam = native_nParam;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_aParam_FIELD_READER
/* get_aParam
 *
 * Return Type: sqlite3_rtree_dbl *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_aParam(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  sqlite3_rtree_dbl * native_aParam = native_self->aParam;

  mrb_value aParam = TODO_mruby_box_sqlite3_rtree_dbl_PTR(mrb, native_aParam);

  return aParam;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_aParam_FIELD_WRITER
/* set_aParam
 *
 * Parameters:
 * - value: sqlite3_rtree_dbl *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_aParam(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_value aParam;

  mrb_get_args(mrb, "o", &aParam);

  /* type checking */
  TODO_type_check_sqlite3_rtree_dbl_PTR(aParam);

  sqlite3_rtree_dbl * native_aParam = TODO_mruby_unbox_sqlite3_rtree_dbl_PTR(aParam);

  native_self->aParam = native_aParam;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_pUser_FIELD_READER
/* get_pUser
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_pUser(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  void * native_pUser = native_self->pUser;

  mrb_value pUser = TODO_mruby_box_void_PTR(mrb, native_pUser);

  return pUser;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_pUser_FIELD_WRITER
/* set_pUser
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_pUser(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_value pUser;

  mrb_get_args(mrb, "o", &pUser);

  /* type checking */
  TODO_type_check_void_PTR(pUser);

  void * native_pUser = TODO_mruby_unbox_void_PTR(pUser);

  native_self->pUser = native_pUser;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_xDelUser_FIELD_READER
/* get_xDelUser
 *
 * Return Type: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_xDelUser(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  void (*)(void *) native_xDelUser = native_self->xDelUser;

  mrb_value xDelUser = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_xDelUser);

  return xDelUser;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_xDelUser_FIELD_WRITER
/* set_xDelUser
 *
 * Parameters:
 * - value: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_xDelUser(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_value xDelUser;

  mrb_get_args(mrb, "o", &xDelUser);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xDelUser);

  void (*native_xDelUser)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xDelUser);

  native_self->xDelUser = native_xDelUser;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_aCoord_FIELD_READER
/* get_aCoord
 *
 * Return Type: sqlite3_rtree_dbl *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_aCoord(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  sqlite3_rtree_dbl * native_aCoord = native_self->aCoord;

  mrb_value aCoord = TODO_mruby_box_sqlite3_rtree_dbl_PTR(mrb, native_aCoord);

  return aCoord;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_aCoord_FIELD_WRITER
/* set_aCoord
 *
 * Parameters:
 * - value: sqlite3_rtree_dbl *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_aCoord(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_value aCoord;

  mrb_get_args(mrb, "o", &aCoord);

  /* type checking */
  TODO_type_check_sqlite3_rtree_dbl_PTR(aCoord);

  sqlite3_rtree_dbl * native_aCoord = TODO_mruby_unbox_sqlite3_rtree_dbl_PTR(aCoord);

  native_self->aCoord = native_aCoord;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_anQueue_FIELD_READER
/* get_anQueue
 *
 * Return Type: unsigned int *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_anQueue(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  unsigned int * native_anQueue = native_self->anQueue;

  mrb_value anQueue = TODO_mruby_box_unsigned_int_PTR(mrb, native_anQueue);

  return anQueue;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_anQueue_FIELD_WRITER
/* set_anQueue
 *
 * Parameters:
 * - value: unsigned int *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_anQueue(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_value anQueue;

  mrb_get_args(mrb, "o", &anQueue);

  /* type checking */
  TODO_type_check_unsigned_int_PTR(anQueue);

  unsigned int * native_anQueue = TODO_mruby_unbox_unsigned_int_PTR(anQueue);

  native_self->anQueue = native_anQueue;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_nCoord_FIELD_READER
/* get_nCoord
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_nCoord(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  int native_nCoord = native_self->nCoord;

  mrb_value nCoord = mrb_fixnum_value(native_nCoord);

  return nCoord;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_nCoord_FIELD_WRITER
/* set_nCoord
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_nCoord(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_int native_nCoord;

  mrb_get_args(mrb, "i", &native_nCoord);

  native_self->nCoord = native_nCoord;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_iLevel_FIELD_READER
/* get_iLevel
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_iLevel(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  int native_iLevel = native_self->iLevel;

  mrb_value iLevel = mrb_fixnum_value(native_iLevel);

  return iLevel;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_iLevel_FIELD_WRITER
/* set_iLevel
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_iLevel(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_int native_iLevel;

  mrb_get_args(mrb, "i", &native_iLevel);

  native_self->iLevel = native_iLevel;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_mxLevel_FIELD_READER
/* get_mxLevel
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_mxLevel(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  int native_mxLevel = native_self->mxLevel;

  mrb_value mxLevel = mrb_fixnum_value(native_mxLevel);

  return mxLevel;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_mxLevel_FIELD_WRITER
/* set_mxLevel
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_mxLevel(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_int native_mxLevel;

  mrb_get_args(mrb, "i", &native_mxLevel);

  native_self->mxLevel = native_mxLevel;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_iRowid_FIELD_READER
/* get_iRowid
 *
 * Return Type: sqlite3_int64
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_iRowid(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  sqlite3_int64 native_iRowid = native_self->iRowid;

  mrb_value iRowid = mrb_fixnum_value(native_iRowid);

  return iRowid;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_iRowid_FIELD_WRITER
/* set_iRowid
 *
 * Parameters:
 * - value: sqlite3_int64
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_iRowid(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_int native_iRowid;

  mrb_get_args(mrb, "i", &native_iRowid);

  native_self->iRowid = native_iRowid;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_rParentScore_FIELD_READER
/* get_rParentScore
 *
 * Return Type: sqlite3_rtree_dbl
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_rParentScore(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  sqlite3_rtree_dbl native_rParentScore = native_self->rParentScore;

  mrb_value rParentScore = mrb_float_value(mrb, native_rParentScore);

  return rParentScore;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_rParentScore_FIELD_WRITER
/* set_rParentScore
 *
 * Parameters:
 * - value: sqlite3_rtree_dbl
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_rParentScore(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_float native_rParentScore;

  mrb_get_args(mrb, "f", &native_rParentScore);

  native_self->rParentScore = native_rParentScore;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_eParentWithin_FIELD_READER
/* get_eParentWithin
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_eParentWithin(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  int native_eParentWithin = native_self->eParentWithin;

  mrb_value eParentWithin = mrb_fixnum_value(native_eParentWithin);

  return eParentWithin;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_eParentWithin_FIELD_WRITER
/* set_eParentWithin
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_eParentWithin(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_int native_eParentWithin;

  mrb_get_args(mrb, "i", &native_eParentWithin);

  native_self->eParentWithin = native_eParentWithin;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_eWithin_FIELD_READER
/* get_eWithin
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_eWithin(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  int native_eWithin = native_self->eWithin;

  mrb_value eWithin = mrb_fixnum_value(native_eWithin);

  return eWithin;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_eWithin_FIELD_WRITER
/* set_eWithin
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_eWithin(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_int native_eWithin;

  mrb_get_args(mrb, "i", &native_eWithin);

  native_self->eWithin = native_eWithin;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_rScore_FIELD_READER
/* get_rScore
 *
 * Return Type: sqlite3_rtree_dbl
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_rScore(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  sqlite3_rtree_dbl native_rScore = native_self->rScore;

  mrb_value rScore = mrb_float_value(mrb, native_rScore);

  return rScore;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_rScore_FIELD_WRITER
/* set_rScore
 *
 * Parameters:
 * - value: sqlite3_rtree_dbl
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_rScore(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_float native_rScore;

  mrb_get_args(mrb, "f", &native_rScore);

  native_self->rScore = native_rScore;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif


void mrb_SQLite_Sqlite3RtreeQueryInfo_init(mrb_state* mrb) {
  struct RClass* Sqlite3RtreeQueryInfo_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3RtreeQueryInfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3RtreeQueryInfo_class, MRB_TT_DATA);

#if BIND_Sqlite3RtreeQueryInfo_INITIALIZE
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "initialize", mrb_SQLite_Sqlite3RtreeQueryInfo_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3RtreeQueryInfo_class, "disown", mrb_SQLite_Sqlite3RtreeQueryInfo_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3RtreeQueryInfo_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3RtreeQueryInfo_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Sqlite3RtreeQueryInfo_pContext_FIELD_READER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "pContext", mrb_SQLite_Sqlite3RtreeQueryInfo_get_pContext, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_pContext_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "pContext=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_pContext, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_nParam_FIELD_READER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "nParam", mrb_SQLite_Sqlite3RtreeQueryInfo_get_nParam, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_nParam_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "nParam=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_nParam, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_aParam_FIELD_READER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "aParam", mrb_SQLite_Sqlite3RtreeQueryInfo_get_aParam, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_aParam_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "aParam=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_aParam, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_pUser_FIELD_READER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "pUser", mrb_SQLite_Sqlite3RtreeQueryInfo_get_pUser, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_pUser_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "pUser=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_pUser, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_xDelUser_FIELD_READER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "xDelUser", mrb_SQLite_Sqlite3RtreeQueryInfo_get_xDelUser, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_xDelUser_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "xDelUser=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_xDelUser, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_aCoord_FIELD_READER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "aCoord", mrb_SQLite_Sqlite3RtreeQueryInfo_get_aCoord, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_aCoord_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "aCoord=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_aCoord, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_anQueue_FIELD_READER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "anQueue", mrb_SQLite_Sqlite3RtreeQueryInfo_get_anQueue, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_anQueue_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "anQueue=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_anQueue, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_nCoord_FIELD_READER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "nCoord", mrb_SQLite_Sqlite3RtreeQueryInfo_get_nCoord, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_nCoord_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "nCoord=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_nCoord, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_iLevel_FIELD_READER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "iLevel", mrb_SQLite_Sqlite3RtreeQueryInfo_get_iLevel, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_iLevel_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "iLevel=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_iLevel, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_mxLevel_FIELD_READER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "mxLevel", mrb_SQLite_Sqlite3RtreeQueryInfo_get_mxLevel, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_mxLevel_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "mxLevel=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_mxLevel, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_iRowid_FIELD_READER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "iRowid", mrb_SQLite_Sqlite3RtreeQueryInfo_get_iRowid, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_iRowid_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "iRowid=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_iRowid, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_rParentScore_FIELD_READER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "rParentScore", mrb_SQLite_Sqlite3RtreeQueryInfo_get_rParentScore, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_rParentScore_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "rParentScore=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_rParentScore, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_eParentWithin_FIELD_READER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "eParentWithin", mrb_SQLite_Sqlite3RtreeQueryInfo_get_eParentWithin, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_eParentWithin_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "eParentWithin=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_eParentWithin, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_eWithin_FIELD_READER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "eWithin", mrb_SQLite_Sqlite3RtreeQueryInfo_get_eWithin, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_eWithin_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "eWithin=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_eWithin, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_rScore_FIELD_READER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "rScore", mrb_SQLite_Sqlite3RtreeQueryInfo_get_rScore, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3RtreeQueryInfo_rScore_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "rScore=", mrb_SQLite_Sqlite3RtreeQueryInfo_set_rScore, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
