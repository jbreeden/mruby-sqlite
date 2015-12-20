/*
 * struct sqlite3_rtree_geometry
 * Defined in file sqlite3.h @ line 7738
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3RtreeGeometry_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3RtreeGeometry_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry* native_object = (struct sqlite3_rtree_geometry*)calloc(1, sizeof(struct sqlite3_rtree_geometry));
  mruby_giftwrap_sqlite3_rtree_geometry_data_ptr(self, native_object);
  return self;
}
#endif

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

/*
 * Fields
 */

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


void mrb_SQLite_Sqlite3RtreeGeometry_init(mrb_state* mrb) {
  struct RClass* Sqlite3RtreeGeometry_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3RtreeGeometry", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3RtreeGeometry_class, MRB_TT_DATA);

#if BIND_Sqlite3RtreeGeometry_INITIALIZE
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "initialize", mrb_SQLite_Sqlite3RtreeGeometry_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3RtreeGeometry_class, "disown", mrb_SQLite_Sqlite3RtreeGeometry_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3RtreeGeometry_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3RtreeGeometry_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

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

}

#endif
