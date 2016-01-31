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
/* sha: cb7baf6ee60fe5dc225ca0ad8c6986c69740566db2bedc5e909aebbfbf5482eb */
#if BIND_Sqlite3RtreeQueryInfo_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  sqlite3_rtree_query_info* native_object = (sqlite3_rtree_query_info*)calloc(1, sizeof(sqlite3_rtree_query_info));
  mruby_gift_sqlite3_rtree_query_info_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::pContext_reader */
/* sha: 0cbdeefd0a86998282ba0c97cdbbfe66886bd6663b901be2cfbe1aa7f78114ef */
#if BIND_Sqlite3RtreeQueryInfo_pContext_FIELD_READER
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
/* sha: fd3e5599547da3a1c59330532bc9d86297126427e5b20f28e761c1335b69b41c */
#if BIND_Sqlite3RtreeQueryInfo_pContext_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_pContext(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
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
/* sha: 02ea3ef1b06da5fc1f01549b0f86134caf5f6123d05227b6652b5d69ca25aa68 */
#if BIND_Sqlite3RtreeQueryInfo_nParam_FIELD_READER
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
/* sha: 5b081b37c51bbe2d8f6bfb378151025772bc4b0aa6084f0242488b18c82b6974 */
#if BIND_Sqlite3RtreeQueryInfo_nParam_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_nParam(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
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
/* sha: f07426768c57e31f034449ceaa9991afd51e19c2ed9bb74509a5317c803c1a3e */
#if BIND_Sqlite3RtreeQueryInfo_aParam_FIELD_READER
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
/* sha: 762d903b0288ee3a4ea68bb54ce9742062d42ebc999ad24ae0ebf838085bda13 */
#if BIND_Sqlite3RtreeQueryInfo_aParam_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_aParam(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
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
/* sha: 4504075a938f90e7705191479cf35cf5701362e856b46613b4a268db5584ef9d */
#if BIND_Sqlite3RtreeQueryInfo_pUser_FIELD_READER
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
/* sha: 618a2ab635703d75320ec2c7f3da83de1c4dd83992a36fe4c65eac9aee5eb65a */
#if BIND_Sqlite3RtreeQueryInfo_pUser_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_pUser(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
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
/* sha: 75c047cb3b97c929844ed4020b554cfc5ac149534611fc3f1e5273b2f0189e7b */
#if BIND_Sqlite3RtreeQueryInfo_xDelUser_FIELD_READER
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
/* sha: e2c2be08e63dea86559772422f6c642a94ea2c2bbc871ce65d0f21fa6f999faf */
#if BIND_Sqlite3RtreeQueryInfo_xDelUser_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_xDelUser(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
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
/* sha: d972eb9929c3e7c64576f8eb2dd0eac38321b3845188985f9e28ae986b0776bf */
#if BIND_Sqlite3RtreeQueryInfo_aCoord_FIELD_READER
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
/* sha: be8c42ae589c1e47aa112f677eb754ebb7778ac1f84758b817ec7b7b1fb9a5da */
#if BIND_Sqlite3RtreeQueryInfo_aCoord_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_aCoord(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
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
/* sha: 335e58838982ed4b23ca09827475f024346293b3c3cffb0dc36f241ec10e0273 */
#if BIND_Sqlite3RtreeQueryInfo_anQueue_FIELD_READER
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
/* sha: 1a7adb5a80769f433c313c645e05eee002bb63cbbeb02c2c5c97fa8d1ef06283 */
#if BIND_Sqlite3RtreeQueryInfo_anQueue_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_anQueue(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
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
/* sha: a27af232b16cd30470a13a376573e3094f9e3f13ef40a531510fda305dcbafaf */
#if BIND_Sqlite3RtreeQueryInfo_nCoord_FIELD_READER
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
/* sha: 22041b92e35459b4690a9e258fcede8cec5a8ffb37fa04aba04d936f41f26c98 */
#if BIND_Sqlite3RtreeQueryInfo_nCoord_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_nCoord(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
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
/* sha: 35771b51a5a12d48db870cee1ff9c244cd616b553391fbfdefbbb09ec6f475f6 */
#if BIND_Sqlite3RtreeQueryInfo_iLevel_FIELD_READER
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
/* sha: aaf05cd8534b9a73eb90aa62f363d37342942bc537caaa3caaeb814adbffce16 */
#if BIND_Sqlite3RtreeQueryInfo_iLevel_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_iLevel(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
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
/* sha: 927c8677084b1afabf37120acd7ed4f787d8e674eaf18754818804b1f155f84c */
#if BIND_Sqlite3RtreeQueryInfo_mxLevel_FIELD_READER
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
/* sha: 8b9b62930b5edad4288634a4c03bbbe22b624d402125250cd5a3b2fbb17c1dab */
#if BIND_Sqlite3RtreeQueryInfo_mxLevel_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_mxLevel(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
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
/* sha: 6004ff0b7277a1a9027582479b1c45f6e41a2ccf839fd2d2f5856d010e980668 */
#if BIND_Sqlite3RtreeQueryInfo_iRowid_FIELD_READER
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
/* sha: ea8b1a64515b10964b8e167a7f3a699b945e8683a947cb5387330c1886a4e130 */
#if BIND_Sqlite3RtreeQueryInfo_iRowid_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_iRowid(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
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
/* sha: 1c9b348310fdf25e0211ac4e3325a43f88b775b721ecf94894db33c5f53e33db */
#if BIND_Sqlite3RtreeQueryInfo_rParentScore_FIELD_READER
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
/* sha: d03df33f571a64ab93d5756a14ed70277e541c77cdd92acfaeeab7e55078ee46 */
#if BIND_Sqlite3RtreeQueryInfo_rParentScore_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_rParentScore(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
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
/* sha: 58c366e4d5bc16a354ee0a83ac00009a09cc1e1f87a29d95b5249deda4266d73 */
#if BIND_Sqlite3RtreeQueryInfo_eParentWithin_FIELD_READER
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
/* sha: 2017c9a577b86f86a16caea96a364c7211015f951006dc5217bc3a01f49969f3 */
#if BIND_Sqlite3RtreeQueryInfo_eParentWithin_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_eParentWithin(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
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
/* sha: 6b3dcddccc1a3422e907c3c10239600457dce5ed7a846649d6f69ee544600cf5 */
#if BIND_Sqlite3RtreeQueryInfo_eWithin_FIELD_READER
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
/* sha: 84bff7c061d3afe44922f9b05b36372cba8bcbbe66a2fa2176aab2bfd589fe68 */
#if BIND_Sqlite3RtreeQueryInfo_eWithin_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_eWithin(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
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
/* sha: b0a3348465b107f2e8730d875fe3e83b7a0ce427887abd3664868c51fac7a752 */
#if BIND_Sqlite3RtreeQueryInfo_rScore_FIELD_READER
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
/* sha: 43447bd8098a3f4d096002bc291cc4eb2ee4e5b704159a88b93410d582779133 */
#if BIND_Sqlite3RtreeQueryInfo_rScore_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3RtreeQueryInfo_set_rScore(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_query_info * native_self = mruby_unbox_sqlite3_rtree_query_info(self);
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
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

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


/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
