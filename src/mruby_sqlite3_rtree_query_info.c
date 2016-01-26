/*
 * sqlite3_rtree_query_info
 * Defined in file sqlite3.h @ line 7739
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3RtreeQueryInfo_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::initialize */
/* sha: 9e20f0da6609a0bd2fa48db138560083f50c22a17904e3005db93ba5dcf97bc9 */
#if BIND_Sqlite3RtreeQueryInfo_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  sqlite3_rtree_query_info* native_object = (sqlite3_rtree_query_info*)calloc(1, sizeof(sqlite3_rtree_query_info));
  mruby_gift_sqlite3_rtree_query_info_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::pContext_reader */
/* sha: 24d8808cfe6630ce22fb81bc4cfa424cb4627963ccd021948b2a5f922ddceb81 */
#if BIND_Sqlite3RtreeQueryInfo_pContext_FIELD_READER
/* get_pContext
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_pContext(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  void * native_pContext = native_self->pContext;

  mrb_value pContext = TODO_mruby_box_void_PTR(mrb, native_pContext);

  return pContext;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::pContext_writer */
/* sha: cc0c49db6036f6dd0afc7f3b9af37ae6cbe60e21e40f08417bfa983a3bdb5b68 */
#if BIND_Sqlite3RtreeQueryInfo_pContext_FIELD_WRITER
/* set_pContext
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_pContext(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_value pContext;

  mrb_get_args(mrb, "o", &pContext);

  /* type checking */
  TODO_type_check_void_PTR(pContext);

  void * native_pContext = TODO_mruby_unbox_void_PTR(pContext);

  native_self->pContext = native_pContext;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::nParam_reader */
/* sha: 936f0154ef6d8272687751e84933adf45912041a1d469680ff71ecc002d0f6e9 */
#if BIND_Sqlite3RtreeQueryInfo_nParam_FIELD_READER
/* get_nParam
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_nParam(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  int native_nParam = native_self->nParam;

  mrb_value nParam = mrb_fixnum_value(native_nParam);

  return nParam;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::nParam_writer */
/* sha: be7eca3d44e0780d2453a2238d2c70e95e1a4e66dcd5e0ec4fa3c489d3def2ce */
#if BIND_Sqlite3RtreeQueryInfo_nParam_FIELD_WRITER
/* set_nParam
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_nParam(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_int native_nParam;

  mrb_get_args(mrb, "i", &native_nParam);

  native_self->nParam = native_nParam;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::aParam_reader */
/* sha: 9b2bcea6350208f8e5c7abc9a7bb3ed199eeb54b2d57a876228fd123dc632190 */
#if BIND_Sqlite3RtreeQueryInfo_aParam_FIELD_READER
/* get_aParam
 *
 * Return Type: sqlite3_rtree_dbl *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_aParam(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  sqlite3_rtree_dbl * native_aParam = native_self->aParam;

  mrb_value aParam = TODO_mruby_box_sqlite3_rtree_dbl_PTR(mrb, native_aParam);

  return aParam;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::aParam_writer */
/* sha: 2c342d349e9c0454d676d5b8f80a8360b7b67d8897da994d155b5337a5c58f1a */
#if BIND_Sqlite3RtreeQueryInfo_aParam_FIELD_WRITER
/* set_aParam
 *
 * Parameters:
 * - value: sqlite3_rtree_dbl *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_aParam(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_value aParam;

  mrb_get_args(mrb, "o", &aParam);

  /* type checking */
  TODO_type_check_sqlite3_rtree_dbl_PTR(aParam);

  sqlite3_rtree_dbl * native_aParam = TODO_mruby_unbox_sqlite3_rtree_dbl_PTR(aParam);

  native_self->aParam = native_aParam;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::pUser_reader */
/* sha: b2f4677a3cba648fdb7728a908ce3d8e33787406dce92f013f25e17ced6c6232 */
#if BIND_Sqlite3RtreeQueryInfo_pUser_FIELD_READER
/* get_pUser
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_pUser(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  void * native_pUser = native_self->pUser;

  mrb_value pUser = TODO_mruby_box_void_PTR(mrb, native_pUser);

  return pUser;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::pUser_writer */
/* sha: 458d6e6f84a9c6a019ed1e3a0a2037739eca43a769f6ec23d60886582d187b3c */
#if BIND_Sqlite3RtreeQueryInfo_pUser_FIELD_WRITER
/* set_pUser
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_pUser(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_value pUser;

  mrb_get_args(mrb, "o", &pUser);

  /* type checking */
  TODO_type_check_void_PTR(pUser);

  void * native_pUser = TODO_mruby_unbox_void_PTR(pUser);

  native_self->pUser = native_pUser;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::xDelUser_reader */
/* sha: ddf3228a3e3a0493f5e5471c53d4fb85a1a8671d3eaf14a99723f225ed23f226 */
#if BIND_Sqlite3RtreeQueryInfo_xDelUser_FIELD_READER
/* get_xDelUser
 *
 * Return Type: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_xDelUser(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  void (*)(void *) native_xDelUser = native_self->xDelUser;

  mrb_value xDelUser = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_xDelUser);

  return xDelUser;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::xDelUser_writer */
/* sha: dbcdb77c158e4d89368bee135570d81a4774ae4f713f3f1515cf374178291b95 */
#if BIND_Sqlite3RtreeQueryInfo_xDelUser_FIELD_WRITER
/* set_xDelUser
 *
 * Parameters:
 * - value: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_xDelUser(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_value xDelUser;

  mrb_get_args(mrb, "o", &xDelUser);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xDelUser);

  void (*native_xDelUser)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xDelUser);

  native_self->xDelUser = native_xDelUser;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::aCoord_reader */
/* sha: 547286b0a5bdd7eb492da63af8d8caebd72e2e1f650dfb772fcf05f82ddd49df */
#if BIND_Sqlite3RtreeQueryInfo_aCoord_FIELD_READER
/* get_aCoord
 *
 * Return Type: sqlite3_rtree_dbl *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_aCoord(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  sqlite3_rtree_dbl * native_aCoord = native_self->aCoord;

  mrb_value aCoord = TODO_mruby_box_sqlite3_rtree_dbl_PTR(mrb, native_aCoord);

  return aCoord;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::aCoord_writer */
/* sha: 91d8ebf2215e1500507dacbe441d6ccc54be60c5a0c40816a3ed04e9203d1ba8 */
#if BIND_Sqlite3RtreeQueryInfo_aCoord_FIELD_WRITER
/* set_aCoord
 *
 * Parameters:
 * - value: sqlite3_rtree_dbl *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_aCoord(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_value aCoord;

  mrb_get_args(mrb, "o", &aCoord);

  /* type checking */
  TODO_type_check_sqlite3_rtree_dbl_PTR(aCoord);

  sqlite3_rtree_dbl * native_aCoord = TODO_mruby_unbox_sqlite3_rtree_dbl_PTR(aCoord);

  native_self->aCoord = native_aCoord;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::anQueue_reader */
/* sha: 31e61dbdb1b5178897b574a374268ea3b6c9e14d7bcf32c336326c93a8ddcae3 */
#if BIND_Sqlite3RtreeQueryInfo_anQueue_FIELD_READER
/* get_anQueue
 *
 * Return Type: unsigned int *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_anQueue(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  unsigned int * native_anQueue = native_self->anQueue;

  mrb_value anQueue = TODO_mruby_box_unsigned_int_PTR(mrb, native_anQueue);

  return anQueue;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::anQueue_writer */
/* sha: 6cf0657a64d52e7d038d0c3fa0eb28fa6f49f0eddf39f9c55bb3ca0253ed8d27 */
#if BIND_Sqlite3RtreeQueryInfo_anQueue_FIELD_WRITER
/* set_anQueue
 *
 * Parameters:
 * - value: unsigned int *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_anQueue(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_value anQueue;

  mrb_get_args(mrb, "o", &anQueue);

  /* type checking */
  TODO_type_check_unsigned_int_PTR(anQueue);

  unsigned int * native_anQueue = TODO_mruby_unbox_unsigned_int_PTR(anQueue);

  native_self->anQueue = native_anQueue;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::nCoord_reader */
/* sha: 6a42a3a2194f5afa8e97e60b0a5a473d40e8621929f970557458de6472538d33 */
#if BIND_Sqlite3RtreeQueryInfo_nCoord_FIELD_READER
/* get_nCoord
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_nCoord(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  int native_nCoord = native_self->nCoord;

  mrb_value nCoord = mrb_fixnum_value(native_nCoord);

  return nCoord;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::nCoord_writer */
/* sha: 5a1c64aae804468bb0363954db55f08fc208ca1c4635126a1d461f0c3789be2a */
#if BIND_Sqlite3RtreeQueryInfo_nCoord_FIELD_WRITER
/* set_nCoord
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_nCoord(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_int native_nCoord;

  mrb_get_args(mrb, "i", &native_nCoord);

  native_self->nCoord = native_nCoord;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::iLevel_reader */
/* sha: b2f1b3f397619d09274388686778a279cfc167e3669efa0b637c32127722072f */
#if BIND_Sqlite3RtreeQueryInfo_iLevel_FIELD_READER
/* get_iLevel
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_iLevel(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  int native_iLevel = native_self->iLevel;

  mrb_value iLevel = mrb_fixnum_value(native_iLevel);

  return iLevel;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::iLevel_writer */
/* sha: 125d728eb80376e95695bc4518ebbf2a7fe861893e41de7fa7a979b324e846eb */
#if BIND_Sqlite3RtreeQueryInfo_iLevel_FIELD_WRITER
/* set_iLevel
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_iLevel(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_int native_iLevel;

  mrb_get_args(mrb, "i", &native_iLevel);

  native_self->iLevel = native_iLevel;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::mxLevel_reader */
/* sha: 02c73e8d11d59a097f6993c29692bc455fb035b584ffdadee0a20587e9e87b38 */
#if BIND_Sqlite3RtreeQueryInfo_mxLevel_FIELD_READER
/* get_mxLevel
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_mxLevel(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  int native_mxLevel = native_self->mxLevel;

  mrb_value mxLevel = mrb_fixnum_value(native_mxLevel);

  return mxLevel;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::mxLevel_writer */
/* sha: 466669b7f7b927547cdd76ecdb399a0d470d3c89ddaa45484ccbe4a435f14836 */
#if BIND_Sqlite3RtreeQueryInfo_mxLevel_FIELD_WRITER
/* set_mxLevel
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_mxLevel(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_int native_mxLevel;

  mrb_get_args(mrb, "i", &native_mxLevel);

  native_self->mxLevel = native_mxLevel;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::iRowid_reader */
/* sha: 58509425f6a6597ad50421b8f23d8dbc9e0324ec52c05ace9fb2d3a90f6cacb9 */
#if BIND_Sqlite3RtreeQueryInfo_iRowid_FIELD_READER
/* get_iRowid
 *
 * Return Type: sqlite3_int64
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_iRowid(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  sqlite3_int64 native_iRowid = native_self->iRowid;

  mrb_value iRowid = mrb_fixnum_value(native_iRowid);

  return iRowid;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::iRowid_writer */
/* sha: 2231ea023634351c2edac4714c192cb5294430824cac6297b64e68a1146f8e0f */
#if BIND_Sqlite3RtreeQueryInfo_iRowid_FIELD_WRITER
/* set_iRowid
 *
 * Parameters:
 * - value: sqlite3_int64
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_iRowid(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_int native_iRowid;

  mrb_get_args(mrb, "i", &native_iRowid);

  native_self->iRowid = native_iRowid;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::rParentScore_reader */
/* sha: 6e1bdc2e5cd50ca8156d502280749c129dfd30af0ff49382a907fe5ed041959f */
#if BIND_Sqlite3RtreeQueryInfo_rParentScore_FIELD_READER
/* get_rParentScore
 *
 * Return Type: sqlite3_rtree_dbl
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_rParentScore(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  sqlite3_rtree_dbl native_rParentScore = native_self->rParentScore;

  mrb_value rParentScore = mrb_float_value(mrb, native_rParentScore);

  return rParentScore;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::rParentScore_writer */
/* sha: 4df914b90d550f3c0885aca9012f219da461d5ea21deb4e01ebd900c1bc7a83e */
#if BIND_Sqlite3RtreeQueryInfo_rParentScore_FIELD_WRITER
/* set_rParentScore
 *
 * Parameters:
 * - value: sqlite3_rtree_dbl
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_rParentScore(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_float native_rParentScore;

  mrb_get_args(mrb, "f", &native_rParentScore);

  native_self->rParentScore = native_rParentScore;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::eParentWithin_reader */
/* sha: 3a16d30b1a3c3e92d80e8aa076fb7896a3c26f3e1f5b184cc2a7c32c0b9591d9 */
#if BIND_Sqlite3RtreeQueryInfo_eParentWithin_FIELD_READER
/* get_eParentWithin
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_eParentWithin(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  int native_eParentWithin = native_self->eParentWithin;

  mrb_value eParentWithin = mrb_fixnum_value(native_eParentWithin);

  return eParentWithin;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::eParentWithin_writer */
/* sha: 648e3119dc69ec4831d5fbbbb65012b01aba8831c4301373c789a761a029b8ab */
#if BIND_Sqlite3RtreeQueryInfo_eParentWithin_FIELD_WRITER
/* set_eParentWithin
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_eParentWithin(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_int native_eParentWithin;

  mrb_get_args(mrb, "i", &native_eParentWithin);

  native_self->eParentWithin = native_eParentWithin;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::eWithin_reader */
/* sha: 0edd0f01a4f65f0d54a16446c500b9df1ae4881a5ef5ca1422cbfb86f47cbb37 */
#if BIND_Sqlite3RtreeQueryInfo_eWithin_FIELD_READER
/* get_eWithin
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_eWithin(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  int native_eWithin = native_self->eWithin;

  mrb_value eWithin = mrb_fixnum_value(native_eWithin);

  return eWithin;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::eWithin_writer */
/* sha: b701319db295c7b6859a1a87c728ea7d2dbd17a159ef549d828766e5d3bff3c3 */
#if BIND_Sqlite3RtreeQueryInfo_eWithin_FIELD_WRITER
/* set_eWithin
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_eWithin(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_int native_eWithin;

  mrb_get_args(mrb, "i", &native_eWithin);

  native_self->eWithin = native_eWithin;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::rScore_reader */
/* sha: afb6f3c028f74bbda09f6d3cbd2a5d54959e4fef3c1b22fc659046de7a7d8f76 */
#if BIND_Sqlite3RtreeQueryInfo_rScore_FIELD_READER
/* get_rScore
 *
 * Return Type: sqlite3_rtree_dbl
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_get_rScore(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);

  sqlite3_rtree_dbl native_rScore = native_self->rScore;

  mrb_value rScore = mrb_float_value(mrb, native_rScore);

  return rScore;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::rScore_writer */
/* sha: 164ab79a4970dc8a194087669b0cc2e471853501c7bc1b043c1fa28e6068f453 */
#if BIND_Sqlite3RtreeQueryInfo_rScore_FIELD_WRITER
/* set_rScore
 *
 * Parameters:
 * - value: sqlite3_rtree_dbl
 */
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_rScore(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
  mrb_float native_rScore;

  mrb_get_args(mrb, "f", &native_rScore);

  native_self->rScore = native_rScore;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3RtreeQueryInfo_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::class_definition */
/* sha: 59db23f23f396e646e769a7e045e64ec17b1fdb2270d87d2eafa7efa0cde1628 */
  struct RClass* Sqlite3RtreeQueryInfo_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3RtreeQueryInfo", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3RtreeQueryInfo_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::class_method_definitions */
/* sha: 97a107b7245f0a1a92af56dee29046ad2cf58d35b12d855893fa4d5a25941a10 */
#if BIND_Sqlite3RtreeQueryInfo_INITIALIZE
  mrb_define_method(mrb, Sqlite3RtreeQueryInfo_class, "initialize", mrb_SQLite_Sqlite3RtreeQueryInfo_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::pre_attr_definitions */
/* sha: user_defined */

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

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
