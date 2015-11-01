/*
 * struct sqlite3_rtree_geometry
 * Defined in file sqlite3.h @ line 7738
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3RtreeGeometry_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3RtreeGeometry_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry* native_object = (struct sqlite3_rtree_geometry*)malloc(sizeof(struct sqlite3_rtree_geometry));
  mruby_gift_struct sqlite3_rtree_geometry_data_ptr(self, native_object);
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

#if BIND_Sqlite3RtreeGeometry_pContext_FIELD
/* get_pContext
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_get_pContext(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry * native_self = mruby_unbox_struct sqlite3_rtree_geometry(self);

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
mrb_SQLite_Sqlite3RtreeGeometry_set_pContext(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry * native_self = mruby_unbox_struct sqlite3_rtree_geometry(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_PTR(ruby_field);

  void * native_field = TODO_mruby_unbox_void_PTR(ruby_field);

  native_self->pContext = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3RtreeGeometry_nParam_FIELD
/* get_nParam
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_get_nParam(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry * native_self = mruby_unbox_struct sqlite3_rtree_geometry(self);

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
mrb_SQLite_Sqlite3RtreeGeometry_set_nParam(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry * native_self = mruby_unbox_struct sqlite3_rtree_geometry(self);
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

#if BIND_Sqlite3RtreeGeometry_aParam_FIELD
/* get_aParam
 *
 * Return Type: sqlite3_rtree_dbl *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_get_aParam(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry * native_self = mruby_unbox_struct sqlite3_rtree_geometry(self);

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
mrb_SQLite_Sqlite3RtreeGeometry_set_aParam(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry * native_self = mruby_unbox_struct sqlite3_rtree_geometry(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_sqlite3_rtree_dbl_PTR(ruby_field);

  sqlite3_rtree_dbl * native_field = TODO_mruby_unbox_sqlite3_rtree_dbl_PTR(ruby_field);

  native_self->aParam = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3RtreeGeometry_pUser_FIELD
/* get_pUser
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_get_pUser(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry * native_self = mruby_unbox_struct sqlite3_rtree_geometry(self);

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
mrb_SQLite_Sqlite3RtreeGeometry_set_pUser(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry * native_self = mruby_unbox_struct sqlite3_rtree_geometry(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_PTR(ruby_field);

  void * native_field = TODO_mruby_unbox_void_PTR(ruby_field);

  native_self->pUser = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3RtreeGeometry_xDelUser_FIELD
/* get_xDelUser
 *
 * Return Type: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3RtreeGeometry_get_xDelUser(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry * native_self = mruby_unbox_struct sqlite3_rtree_geometry(self);

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
mrb_SQLite_Sqlite3RtreeGeometry_set_xDelUser(mrb_state* mrb, mrb_value self) {
  struct sqlite3_rtree_geometry * native_self = mruby_unbox_struct sqlite3_rtree_geometry(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  void (*native_field)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  native_self->xDelUser = native_field;

  return ruby_field;
}
#endif


void mrb_SQLite_Sqlite3RtreeGeometry_init(mrb_state* mrb) {
  RClass* Sqlite3RtreeGeometry_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3RtreeGeometry", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3RtreeGeometry_class, MRB_TT_DATA);

#if BIND_Sqlite3RtreeGeometry_INITIALIZE
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "initialize", mrb_SQLite_Sqlite3RtreeGeometry_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3RtreeGeometry_class, "disown", mrb_SQLite_Sqlite3RtreeGeometry_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3RtreeGeometry_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3RtreeGeometry_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Sqlite3RtreeGeometry_pContext_FIELD
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "pContext", mrb_SQLite_Sqlite3RtreeGeometry_get_pContext, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "pContext=", mrb_SQLite_Sqlite3RtreeGeometry_set_pContext, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeGeometry_nParam_FIELD
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "nParam", mrb_SQLite_Sqlite3RtreeGeometry_get_nParam, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "nParam=", mrb_SQLite_Sqlite3RtreeGeometry_set_nParam, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeGeometry_aParam_FIELD
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "aParam", mrb_SQLite_Sqlite3RtreeGeometry_get_aParam, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "aParam=", mrb_SQLite_Sqlite3RtreeGeometry_set_aParam, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeGeometry_pUser_FIELD
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "pUser", mrb_SQLite_Sqlite3RtreeGeometry_get_pUser, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "pUser=", mrb_SQLite_Sqlite3RtreeGeometry_set_pUser, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3RtreeGeometry_xDelUser_FIELD
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "xDelUser", mrb_SQLite_Sqlite3RtreeGeometry_get_xDelUser, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3RtreeGeometry_class, "xDelUser=", mrb_SQLite_Sqlite3RtreeGeometry_set_xDelUser, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
