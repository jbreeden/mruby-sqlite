/*
 * sqlite3_rtree_geometry
 * Defined in file sqlite3.h @ line 7738
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3RtreeGeometry_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::initialize */
/* sha: e3975c739ea749ce1d00603cda5d55c3d5b59e493cb8aab1ebaa761a850885d5 */
#if BIND_Sqlite3RtreeGeometry_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  sqlite3_rtree_geometry* native_object = (sqlite3_rtree_geometry*)calloc(1, sizeof(sqlite3_rtree_geometry));
  mruby_gift_sqlite3_rtree_geometry_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::pContext_reader */
/* sha: ae9aafb1f1cc4593692d541caf5b331cd11227618d7ca006d2bd01cda251c85c */
#if BIND_Sqlite3RtreeGeometry_pContext_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_get_pContext(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);

  void * native_pContext = native_self->pContext;

  mrb_value pContext = TODO_mruby_box_void_PTR(mrb, native_pContext);

  return pContext;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::pContext_writer */
/* sha: 41d13cd4efa53df03365dc9f66da3982b7bee43a259f96bb78bdc193b269fea4 */
#if BIND_Sqlite3RtreeGeometry_pContext_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_set_pContext(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);
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

/* MRUBY_BINDING: Sqlite3RtreeGeometry::nParam_reader */
/* sha: 207927b099e5647a3ae8db5a6a084f49237061781a0f16a1a17352cbad48a49b */
#if BIND_Sqlite3RtreeGeometry_nParam_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_get_nParam(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);

  int native_nParam = native_self->nParam;

  mrb_value nParam = mrb_fixnum_value(native_nParam);

  return nParam;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::nParam_writer */
/* sha: ff2c962356b304f3e5f500a022acee0f9a19c438f62301e2733fe5c1b48aad2f */
#if BIND_Sqlite3RtreeGeometry_nParam_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_set_nParam(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);
  mrb_int native_nParam;

  mrb_get_args(mrb, "i", &native_nParam);

  native_self->nParam = native_nParam;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::aParam_reader */
/* sha: 1aaffd9531a6d0fd4b76a0638abfff30295b4ffedc39f1b147161d8e4e73195c */
#if BIND_Sqlite3RtreeGeometry_aParam_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_get_aParam(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);

  sqlite3_rtree_dbl * native_aParam = native_self->aParam;

  mrb_value aParam = TODO_mruby_box_sqlite3_rtree_dbl_PTR(mrb, native_aParam);

  return aParam;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::aParam_writer */
/* sha: d9eb9a0c9c2eb0e9e92134316bd381746d5d33971e16103ab33a9c16ad828a34 */
#if BIND_Sqlite3RtreeGeometry_aParam_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_set_aParam(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);
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

/* MRUBY_BINDING: Sqlite3RtreeGeometry::pUser_reader */
/* sha: 37256b95249b45f2385048b171f9c10d90e11951c6f2de7585c5392a54cfd7fa */
#if BIND_Sqlite3RtreeGeometry_pUser_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_get_pUser(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);

  void * native_pUser = native_self->pUser;

  mrb_value pUser = TODO_mruby_box_void_PTR(mrb, native_pUser);

  return pUser;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::pUser_writer */
/* sha: df1cc673672803fabe13426fa0330caced0d985bf9ed75afd536e6b434ebc01f */
#if BIND_Sqlite3RtreeGeometry_pUser_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_set_pUser(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);
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

/* MRUBY_BINDING: Sqlite3RtreeGeometry::xDelUser_reader */
/* sha: c3fc8ad9bf4c5a62abd16bb12193170b0f36c62536616aae6f05de3dd3614159 */
#if BIND_Sqlite3RtreeGeometry_xDelUser_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_get_xDelUser(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);

  void (*)(void *) native_xDelUser = native_self->xDelUser;

  mrb_value xDelUser = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_xDelUser);

  return xDelUser;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::xDelUser_writer */
/* sha: 6c9e0ddc4d27800a7b26ecb0236f6858aded2b2443ca6a47e6355ef203e7609c */
#if BIND_Sqlite3RtreeGeometry_xDelUser_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_set_xDelUser(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);
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


void mrb_SQLite_Sqlite3RtreeGeometry_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::class_definition */
/* sha: ba881c609ce64fda03749a60e88dfa9656a49b20391fb2ff5ae5d4661670d04e */
  struct RClass* Sqlite3RtreeGeometry_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3RtreeGeometry", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3RtreeGeometry_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::class_method_definitions */
/* sha: 081c271f3035d460a10213417d5d31fa478d4ee87f33d6471bbe7ef5b48da5df */
#if BIND_Sqlite3RtreeGeometry_INITIALIZE
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "initialize", mrb_SQLite_Sqlite3RtreeGeometry_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::attr_definitions */
/* sha: 2285fa6a6ea66bf9d04345ce3e21c5360c2a1a682d42dfa38c4648c7644ac3f1 */
  /*
   * Fields
   */
#if BIND_Sqlite3RtreeGeometry_pContext_FIELD_READER
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "pContext", mrb_SQLite_Sqlite3RtreeGeometry_get_pContext, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3RtreeGeometry_pContext_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "pContext=", mrb_SQLite_Sqlite3RtreeGeometry_set_pContext, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeGeometry_nParam_FIELD_READER
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "nParam", mrb_SQLite_Sqlite3RtreeGeometry_get_nParam, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3RtreeGeometry_nParam_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "nParam=", mrb_SQLite_Sqlite3RtreeGeometry_set_nParam, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeGeometry_aParam_FIELD_READER
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "aParam", mrb_SQLite_Sqlite3RtreeGeometry_get_aParam, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3RtreeGeometry_aParam_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "aParam=", mrb_SQLite_Sqlite3RtreeGeometry_set_aParam, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeGeometry_pUser_FIELD_READER
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "pUser", mrb_SQLite_Sqlite3RtreeGeometry_get_pUser, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3RtreeGeometry_pUser_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "pUser=", mrb_SQLite_Sqlite3RtreeGeometry_set_pUser, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeGeometry_xDelUser_FIELD_READER
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "xDelUser", mrb_SQLite_Sqlite3RtreeGeometry_get_xDelUser, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3RtreeGeometry_xDelUser_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "xDelUser=", mrb_SQLite_Sqlite3RtreeGeometry_set_xDelUser, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: Sqlite3RtreeGeometry::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
