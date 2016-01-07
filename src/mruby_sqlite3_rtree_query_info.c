/*
 * struct sqlite3_rtree_query_info
 * Defined in file sqlite3.h @ line 7739
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3RtreeQueryInfo_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::initialize */
/* sha: 07a51e2bac385698bbff181d662c8f652ef2f65a131180cff5ab51ccd1fb23e7 */
#if BIND_Sqlite3RtreeQueryInfo_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_query_info* native_object = (struct sqlite3_rtree_query_info*)calloc(1, sizeof(struct sqlite3_rtree_query_info));
  mruby_giftwrap_sqlite3_rtree_query_info_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::initialize */
/* sha: 38f42eb423b1100e60db7bcc5c860007b4adf5e3f062e0e6f5670942b56d0d15 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::belongs_to_ruby */
/* sha: 77daa8fdb656d709e1371549f6744285c655c6af5de841dba0f76b2f0bf24fd6 */
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
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::pContext_reader */
/* sha: 5cf13fb0b938a1a4ec741b1c9970bdaf8b07dd4b3b7df7101caf6b1cd5561c50 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::pContext_writer */
/* sha: 09c0e877d106890ae49d7ce559ebcd5e099d932b83ac04e4b74cf60385123524 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::nParam_reader */
/* sha: a6d8620e677da7c19453d45949b568fb7157b1da77848527a5795c90b7418c14 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::nParam_writer */
/* sha: 9f111a102f8342b492ebbd14ec03415bf0cfcaebe50620572e90e911819f2bfe */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::aParam_reader */
/* sha: 35dfd4783da0f1de8993d9fe0f0fab60ece13ca161a7f3a0ddfb57c8fcaa9880 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::aParam_writer */
/* sha: d76a472221be3b2f2625b13cc3f847e0d3150679768fad3623cd334e0952b8cf */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::pUser_reader */
/* sha: c33b3c42f2a6f02a1bc814880e5470c44d82b877992e19aa45a077e78ec5665b */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::pUser_writer */
/* sha: 1ed9889019be006d79bb3d7a859fb9758ab79751dd43560e4f17dd95f64c10cb */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::xDelUser_reader */
/* sha: d489907d026fac8200eafd8c4fc3c7d3eea0c1faef8f50acdfaaee88966206c6 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::xDelUser_writer */
/* sha: 3ff8e7d23de903f1d1cad50b5ec779f4932c1266fd31b8b0283325896b219885 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::aCoord_reader */
/* sha: f26f445c00158dd795ebd64ed959cef7ed481d5c07aefcfdf6b4f6019206b740 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::aCoord_writer */
/* sha: 9b20be4305a4478e52e3a1d3f7cc4551734899bb3adec939294e297b4d387440 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::anQueue_reader */
/* sha: b4451c7b7b215aaa11d6e445af1a27626fc74fac17fd09d5bb3c42f1e809c680 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::anQueue_writer */
/* sha: c8f053d74d807d4e9c60965943a4026c1c165c9079c2ae0583a08a07768c6b08 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::nCoord_reader */
/* sha: dcd6c5c2fe17815e12ec15202d5c461ca1466b81a756e2066e80b93cb069653a */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::nCoord_writer */
/* sha: cb96c2ccc2fd2a583bc4c5de9f240f8212f6af9f750ed7522148cb082ea6a945 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::iLevel_reader */
/* sha: a6a49d8bbe3cba92bdc65f98ce5cff15652c6a6cd390f1d61c5e122a473eed90 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::iLevel_writer */
/* sha: c5b0a10a27964cdc29e65b8427eac939ad878d33b5d02164d69a148dce82bec5 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::mxLevel_reader */
/* sha: c3f49bb3ace264a24a286de2df7e9b9be6dee23f0f991c31aa57cdf76301af00 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::mxLevel_writer */
/* sha: ec2c37c3d91ac1bdce7c6854def9eaf5d6f878a5a14bbbbb5477e4fe7ba36eb9 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::iRowid_reader */
/* sha: 4b053b112173db1b49b943e5007f83f10c83d0076a4aec911f6e877e7eee8a3c */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::iRowid_writer */
/* sha: 6514f1ef345a997c9a933a0c11ef1e2cafa76758a747479bc7ce56f5a0b38acb */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::rParentScore_reader */
/* sha: 11a4b0f8e6686b13eb0c0e2521665e3af2ce91bc15b51968f0440c73e5d23e12 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::rParentScore_writer */
/* sha: 232e49531386b47b958bc4ed603e0cadad4f4f04498605f363aa9c16d668929d */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::eParentWithin_reader */
/* sha: 3e61307c805b32ba20a26857c7abea8610856e1c2f3205f985d041a7c67990d0 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::eParentWithin_writer */
/* sha: a1024a9a08065a13cd1f96f3c70c1553a6f15f653ee70ad5c638e0f9ad2542cf */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::eWithin_reader */
/* sha: 89adb5b7f83d7cc7804af19477c72d23358b36076a75f4bc7854a8b2fcd44c51 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::eWithin_writer */
/* sha: e1af25f93d9a7c8145fab162b085f77c729a4027cf28054426448b989869fc29 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::rScore_reader */
/* sha: 3c4df4667e299e4dc0c902c30b78a4e58f907a61e2725c4c34a2d97d724d41a7 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::rScore_writer */
/* sha: 1e406eaf8cae5d58a6d4aad3f6d3dcf7edf156acbfecb9741303f5478af64abb */
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
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3RtreeQueryInfo_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::class_definition */
/* sha: 59db23f23f396e646e769a7e045e64ec17b1fdb2270d87d2eafa7efa0cde1628 */
  struct RClass* Sqlite3RtreeQueryInfo_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3RtreeQueryInfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3RtreeQueryInfo_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::class_method_definitions */
/* sha: ba0c962e4351f650ea69af35104c691090181df64a8cfba1a78d150fb508cfcd */
#if BIND_Sqlite3RtreeQueryInfo_INITIALIZE
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "initialize", mrb_SQLite_Sqlite3RtreeQueryInfo_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3RtreeQueryInfo_class, "disown", mrb_SQLite_Sqlite3RtreeQueryInfo_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3RtreeQueryInfo_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3RtreeQueryInfo_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::attr_definitions */
/* sha: dd89659e297814eae53ceb6498a6e5712e9befc0e045cd7e4247c609cf9c395e */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
