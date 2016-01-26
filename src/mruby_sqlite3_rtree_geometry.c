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
/* sha: aea82eb57b3f7c8143f6617fb54894476771874c3d12d5737a61890e6bdb346c */
#if BIND_Sqlite3RtreeGeometry_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  sqlite3_rtree_geometry* native_object = (sqlite3_rtree_geometry*)calloc(1, sizeof(sqlite3_rtree_geometry));
  mruby_gift_sqlite3_rtree_geometry_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::pContext_reader */
/* sha: 6bb8d7203989c0a491283ceb1bd2399339d0a11d97c49f0a6f39de2fd54f7d0e */
#if BIND_Sqlite3RtreeGeometry_pContext_FIELD_READER
/* get_pContext
 *
 * Return Type: void *
 */
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
/* sha: 7858628adcd68916825eca71418e8c1d1f9aaceea7d9fc52442ab23ff5164d09 */
#if BIND_Sqlite3RtreeGeometry_pContext_FIELD_WRITER
/* set_pContext
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_set_pContext(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);
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

/* MRUBY_BINDING: Sqlite3RtreeGeometry::nParam_reader */
/* sha: 7342b1c62b7f55f0427448a7632c653f4a793ee3f3bbce5e880b6030ccf78cf6 */
#if BIND_Sqlite3RtreeGeometry_nParam_FIELD_READER
/* get_nParam
 *
 * Return Type: int
 */
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
/* sha: d095959231675200ad2ebf7c3ebb6805bc2b5ac90d49bac7848f8b6126ea1071 */
#if BIND_Sqlite3RtreeGeometry_nParam_FIELD_WRITER
/* set_nParam
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_set_nParam(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);
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

/* MRUBY_BINDING: Sqlite3RtreeGeometry::aParam_reader */
/* sha: 28a11f943c5c28735e1e5e78632b2c475ea42be5421d2fa61a68f4d1e3cf8ec0 */
#if BIND_Sqlite3RtreeGeometry_aParam_FIELD_READER
/* get_aParam
 *
 * Return Type: sqlite3_rtree_dbl *
 */
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
/* sha: aa0a327d45d4bacd534caa47fd8ce4895a7e5182470af2b48138a1f1bb03b0da */
#if BIND_Sqlite3RtreeGeometry_aParam_FIELD_WRITER
/* set_aParam
 *
 * Parameters:
 * - value: sqlite3_rtree_dbl *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_set_aParam(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);
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

/* MRUBY_BINDING: Sqlite3RtreeGeometry::pUser_reader */
/* sha: 4665be9ae6d6700b093982fc506bcdb9c16c4fb3d8d485667b110c2035bb7723 */
#if BIND_Sqlite3RtreeGeometry_pUser_FIELD_READER
/* get_pUser
 *
 * Return Type: void *
 */
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
/* sha: 57030c952ebc67f84a38b84e8ea84dcfef7a88200ca9e63de1febc2585f4c960 */
#if BIND_Sqlite3RtreeGeometry_pUser_FIELD_WRITER
/* set_pUser
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_set_pUser(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);
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

/* MRUBY_BINDING: Sqlite3RtreeGeometry::xDelUser_reader */
/* sha: eef543b525ece2cd78a718188319fcdab42993acd8a238e707f91a1dd6c0f069 */
#if BIND_Sqlite3RtreeGeometry_xDelUser_FIELD_READER
/* get_xDelUser
 *
 * Return Type: void (*)(void *)
 */
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
/* sha: efe5d8e7eda9fa48f3db294bb0a36328eca9e3db93a387c5ff9cb245d78e34cd */
#if BIND_Sqlite3RtreeGeometry_xDelUser_FIELD_WRITER
/* set_xDelUser
 *
 * Parameters:
 * - value: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_set_xDelUser(mrb_state* mrb, mrb_value self) {
  sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);
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


void mrb_SQLite_Sqlite3RtreeGeometry_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3RtreeGeometry::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
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

/* MRUBY_BINDING: Sqlite3RtreeGeometry::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
