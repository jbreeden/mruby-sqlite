/*
 * struct sqlite3_rtree_geometry
 * Defined in file sqlite3.h @ line 7738
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3RtreeGeometry_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::initialize */
/* sha: ad15ddf3da8c9365bbadac9854c9aaf014417f74bd97d37a498422b5ee3c0ad0 */
#if BIND_Sqlite3RtreeGeometry_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry* native_object = (struct sqlite3_rtree_geometry*)calloc(1, sizeof(struct sqlite3_rtree_geometry));
  mruby_giftwrap_sqlite3_rtree_geometry_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::initialize */
/* sha: 2aa4ba2bda9a4f0182a445f4cd65f635e73e7ddd37faf09e4a14a183d2698b47 */
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3RtreeGeometry.disown only accepts objects of type SQLite::Sqlite3RtreeGeometry");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::belongs_to_ruby */
/* sha: e6830a74f4eabc42949c386d4e3ce90768f7bcd28cd7a3c1f864b53fa35a37f8 */
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3RtreeGeometry.belongs_to_ruby only accepts objects of type SQLite::Sqlite3RtreeGeometry");
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

/* MRUBY_BINDING: Sqlite3RtreeGeometry::pContext_reader */
/* sha: 36b7d1c16e7e7935ae6263c726bd861f351264a1bcdffa6eb6deb63e70024558 */
#if BIND_Sqlite3RtreeGeometry_pContext_FIELD_READER
/* get_pContext
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_get_pContext(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);

  void * native_pContext = native_self->pContext;

  mrb_value pContext = TODO_mruby_box_void_PTR(mrb, native_pContext);

  return pContext;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::pContext_writer */
/* sha: 8b0e29ba4106a279337e1b28f6ef24f07d339cdb750991a252ebea00b7b7b132 */
#if BIND_Sqlite3RtreeGeometry_pContext_FIELD_WRITER
/* set_pContext
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_set_pContext(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);
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
/* sha: cabe074cf504cefe0f2249f1da411bd185871c924add91aa57dbdf4b5af41af5 */
#if BIND_Sqlite3RtreeGeometry_nParam_FIELD_READER
/* get_nParam
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_get_nParam(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);

  int native_nParam = native_self->nParam;

  mrb_value nParam = mrb_fixnum_value(native_nParam);

  return nParam;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::nParam_writer */
/* sha: a0b208510af896a20cceaa2f494f139664f5b9f72dac597699d761d8709d80eb */
#if BIND_Sqlite3RtreeGeometry_nParam_FIELD_WRITER
/* set_nParam
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_set_nParam(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);
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
/* sha: ebf8c2d78473d8b83375500fae0e13ee1721b84e087575c7b6bbec107f64d138 */
#if BIND_Sqlite3RtreeGeometry_aParam_FIELD_READER
/* get_aParam
 *
 * Return Type: sqlite3_rtree_dbl *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_get_aParam(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);

  sqlite3_rtree_dbl * native_aParam = native_self->aParam;

  mrb_value aParam = TODO_mruby_box_sqlite3_rtree_dbl_PTR(mrb, native_aParam);

  return aParam;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::aParam_writer */
/* sha: 1e103a4c43c3b4e2e0410995f04b4aec4748fc0e296d324665484aae241dff07 */
#if BIND_Sqlite3RtreeGeometry_aParam_FIELD_WRITER
/* set_aParam
 *
 * Parameters:
 * - value: sqlite3_rtree_dbl *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_set_aParam(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);
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
/* sha: 47d415169812fe2acccc45edceecfd3e949f7c8446962b2d7e43a479b20232ce */
#if BIND_Sqlite3RtreeGeometry_pUser_FIELD_READER
/* get_pUser
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_get_pUser(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);

  void * native_pUser = native_self->pUser;

  mrb_value pUser = TODO_mruby_box_void_PTR(mrb, native_pUser);

  return pUser;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::pUser_writer */
/* sha: 955ec0923e35245258d1f5fcd3209cab9f2ad1475870b4d4b07cae7177dbe73c */
#if BIND_Sqlite3RtreeGeometry_pUser_FIELD_WRITER
/* set_pUser
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_set_pUser(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);
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
/* sha: 2e061a93a239b651e65f46599d4264bb242bf09bfb7cbfd526d8c81f79d1011e */
#if BIND_Sqlite3RtreeGeometry_xDelUser_FIELD_READER
/* get_xDelUser
 *
 * Return Type: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_get_xDelUser(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);

  void (*)(void *) native_xDelUser = native_self->xDelUser;

  mrb_value xDelUser = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_xDelUser);

  return xDelUser;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::xDelUser_writer */
/* sha: 05571ebe3ebf84bcf92977d6a4bcdc108421ce0792afc148a7ac2f53ad076b3f */
#if BIND_Sqlite3RtreeGeometry_xDelUser_FIELD_WRITER
/* set_xDelUser
 *
 * Parameters:
 * - value: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_set_xDelUser(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry * native_self = mruby_unbox_sqlite3_rtree_geometry(self);
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
/* MRUBY_BINDING: Sqlite3RtreeGeometry::class_definition */
/* sha: ba881c609ce64fda03749a60e88dfa9656a49b20391fb2ff5ae5d4661670d04e */
  struct RClass* Sqlite3RtreeGeometry_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3RtreeGeometry", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3RtreeGeometry_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::class_method_definitions */
/* sha: fcfe8e7b845364b974f659ec8d2115457ab7e7199016c3d97ec29de38050b9c9 */
#if BIND_Sqlite3RtreeGeometry_INITIALIZE
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "initialize", mrb_SQLite_Sqlite3RtreeGeometry_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3RtreeGeometry_class, "disown", mrb_SQLite_Sqlite3RtreeGeometry_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3RtreeGeometry_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3RtreeGeometry_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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

/* MRUBY_BINDING: Sqlite3RtreeGeometry::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
