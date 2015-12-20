/*
 * struct sqlite3_vtab
 * Defined in file sqlite3.h @ line 5465
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Vtab_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3Vtab_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Vtab_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab* native_object = (struct sqlite3_vtab*)calloc(1, sizeof(struct sqlite3_vtab));
  mruby_giftwrap_sqlite3_vtab_data_ptr(self, native_object);
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

#if BIND_Sqlite3Vtab_pModule_FIELD_READER
/* get_pModule
 *
 * Return Type: const sqlite3_module *
 */
mrb_value
mrb_SQLite_Sqlite3Vtab_get_pModule(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab * native_self = mruby_unbox_sqlite3_vtab(self);

  const sqlite3_module * native_pModule = native_self->pModule;

  mrb_value pModule = (native_pModule == NULL ? mrb_nil_value() : mruby_box_sqlite3_module(mrb, native_pModule));

  return pModule;
}
#endif

#if BIND_Sqlite3Vtab_pModule_FIELD_WRITER
/* set_pModule
 *
 * Parameters:
 * - value: const sqlite3_module *
 */
mrb_value
mrb_SQLite_Sqlite3Vtab_set_pModule(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab * native_self = mruby_unbox_sqlite3_vtab(self);
  mrb_value pModule;

  mrb_get_args(mrb, "o", &pModule);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, pModule, Sqlite3Module_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Module expected");
    return mrb_nil_value();
  }

  const sqlite3_module * native_pModule = (mrb_nil_p(pModule) ? NULL : mruby_unbox_sqlite3_module(pModule));

  native_self->pModule = native_pModule;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vtab_nRef_FIELD_READER
/* get_nRef
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3Vtab_get_nRef(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab * native_self = mruby_unbox_sqlite3_vtab(self);

  int native_nRef = native_self->nRef;

  mrb_value nRef = mrb_fixnum_value(native_nRef);

  return nRef;
}
#endif

#if BIND_Sqlite3Vtab_nRef_FIELD_WRITER
/* set_nRef
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3Vtab_set_nRef(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab * native_self = mruby_unbox_sqlite3_vtab(self);
  mrb_int native_nRef;

  mrb_get_args(mrb, "i", &native_nRef);

  native_self->nRef = native_nRef;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vtab_zErrMsg_FIELD_READER
/* get_zErrMsg
 *
 * Return Type: char *
 */
mrb_value
mrb_SQLite_Sqlite3Vtab_get_zErrMsg(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab * native_self = mruby_unbox_sqlite3_vtab(self);

  char * native_zErrMsg = native_self->zErrMsg;

  mrb_value zErrMsg = mrb_str_new_cstr(mrb, native_zErrMsg);

  return zErrMsg;
}
#endif

#if BIND_Sqlite3Vtab_zErrMsg_FIELD_WRITER
/* set_zErrMsg
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_SQLite_Sqlite3Vtab_set_zErrMsg(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab * native_self = mruby_unbox_sqlite3_vtab(self);
  char * zErrMsg = NULL;

  mrb_get_args(mrb, "z!", &zErrMsg);

  /* WARNING: String is strdup'ed to avoid mutable reference to internal MRuby memory */
  char * native_zErrMsg = strdup(zErrMsg);

  if (NULL != native_self->zErrMsg) free(native_self->zErrMsg);
  native_self->zErrMsg = native_zErrMsg;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
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
#if BIND_Sqlite3Vtab_pModule_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vtab_class, "pModule", mrb_SQLite_Sqlite3Vtab_get_pModule, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vtab_pModule_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vtab_class, "pModule=", mrb_SQLite_Sqlite3Vtab_set_pModule, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vtab_nRef_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vtab_class, "nRef", mrb_SQLite_Sqlite3Vtab_get_nRef, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vtab_nRef_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vtab_class, "nRef=", mrb_SQLite_Sqlite3Vtab_set_nRef, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vtab_zErrMsg_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vtab_class, "zErrMsg", mrb_SQLite_Sqlite3Vtab_get_zErrMsg, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vtab_zErrMsg_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vtab_class, "zErrMsg=", mrb_SQLite_Sqlite3Vtab_set_zErrMsg, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
