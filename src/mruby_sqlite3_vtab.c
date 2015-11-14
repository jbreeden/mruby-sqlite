/*
 * struct sqlite3_vtab
 * Defined in file sqlite3.h @ line 5465
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Vtab_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3Vtab_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Vtab_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab* native_object = (struct sqlite3_vtab*)malloc(sizeof(struct sqlite3_vtab));
  mruby_gift_struct sqlite3_vtab_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SQLite_Sqlite3Vtab_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3Vtab.disown only accepts objects of type SQLite::Sqlite3Vtab");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SQLite_Sqlite3Vtab_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3Vtab.belongs_to_ruby only accepts objects of type SQLite::Sqlite3Vtab");
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

#if BIND_Sqlite3Vtab_pModule_FIELD
/* get_pModule
 *
 * Return Type: const sqlite3_module *
 */
mrb_value
mrb_SQLite_Sqlite3Vtab_get_pModule(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab * native_self = mruby_unbox_struct sqlite3_vtab(self);

  const sqlite3_module * native_field = native_self->pModule;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_sqlite3_module(mrb, native_field));

  return ruby_field;
}

/* set_pModule
 *
 * Parameters:
 * - value: const sqlite3_module *
 */
mrb_value
mrb_SQLite_Sqlite3Vtab_set_pModule(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab * native_self = mruby_unbox_struct sqlite3_vtab(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, Sqlite3Module_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Module expected");
    return mrb_nil_value();
  }

  const sqlite3_module * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_sqlite3_module(ruby_field));

  native_self->pModule = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Vtab_nRef_FIELD
/* get_nRef
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3Vtab_get_nRef(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab * native_self = mruby_unbox_struct sqlite3_vtab(self);

  int native_field = native_self->nRef;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_nRef
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3Vtab_set_nRef(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab * native_self = mruby_unbox_struct sqlite3_vtab(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->nRef = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Vtab_zErrMsg_FIELD
/* get_zErrMsg
 *
 * Return Type: char *
 */
mrb_value
mrb_SQLite_Sqlite3Vtab_get_zErrMsg(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab * native_self = mruby_unbox_struct sqlite3_vtab(self);

  char * native_field = native_self->zErrMsg;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}

/* set_zErrMsg
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_SQLite_Sqlite3Vtab_set_zErrMsg(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab * native_self = mruby_unbox_struct sqlite3_vtab(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_field = strdup(mrb_string_value_cstr(mrb, &ruby_field));

  native_self->zErrMsg = native_field;

  return ruby_field;
}
#endif


void mrb_SQLite_Sqlite3Vtab_init(mrb_state* mrb) {
  struct RClass* Sqlite3Vtab_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Vtab", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Vtab_class, MRB_TT_DATA);

#if BIND_Sqlite3Vtab_INITIALIZE
  mrb_define_method(mrb, Sqlite3Vtab_class, "initialize", mrb_SQLite_Sqlite3Vtab_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3Vtab_class, "disown", mrb_SQLite_Sqlite3Vtab_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3Vtab_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3Vtab_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Sqlite3Vtab_pModule_FIELD
  mrb_define_method(mrb, Sqlite3Vtab_class, "pModule", mrb_SQLite_Sqlite3Vtab_get_pModule, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vtab_class, "pModule=", mrb_SQLite_Sqlite3Vtab_set_pModule, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vtab_nRef_FIELD
  mrb_define_method(mrb, Sqlite3Vtab_class, "nRef", mrb_SQLite_Sqlite3Vtab_get_nRef, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vtab_class, "nRef=", mrb_SQLite_Sqlite3Vtab_set_nRef, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vtab_zErrMsg_FIELD
  mrb_define_method(mrb, Sqlite3Vtab_class, "zErrMsg", mrb_SQLite_Sqlite3Vtab_get_zErrMsg, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vtab_class, "zErrMsg=", mrb_SQLite_Sqlite3Vtab_set_zErrMsg, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
