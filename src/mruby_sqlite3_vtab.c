/*
 * sqlite3_vtab
 * Defined in file sqlite3.h @ line 5465
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Vtab_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::initialize */
/* sha: 1ef0fca49ad940296c8d66d9aa7ca666e0862cd9a1036b93fee69b0aaad1521b */
#if BIND_Sqlite3Vtab_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Vtab_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  sqlite3_vtab* native_object = (sqlite3_vtab*)calloc(1, sizeof(sqlite3_vtab));
  mruby_gift_sqlite3_vtab_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3Vtab::pModule_reader */
/* sha: d3564f4f675787143c74778681a1a16c21eae1defa3045a5508826bfb5897802 */
#if BIND_Sqlite3Vtab_pModule_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3Vtab_get_pModule(mrb_state* mrb, mrb_value self) {
  sqlite3_vtab * native_self = mruby_unbox_sqlite3_vtab(self);

  const sqlite3_module * native_pModule = native_self->pModule;

  mrb_value pModule = (native_pModule == NULL ? mrb_nil_value() : mruby_box_sqlite3_module(mrb, native_pModule));

  return pModule;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::pModule_writer */
/* sha: 0dd6651a1b69335732889d3917da3e7a67a712cd435c488f9b7f1d7e6b607e19 */
#if BIND_Sqlite3Vtab_pModule_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vtab_set_pModule(mrb_state* mrb, mrb_value self) {
  sqlite3_vtab * native_self = mruby_unbox_sqlite3_vtab(self);
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::nRef_reader */
/* sha: 0f80b0233a72c44873e866ddddc8505d7a9473e7b4f91b035b010d5e0ea0294a */
#if BIND_Sqlite3Vtab_nRef_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3Vtab_get_nRef(mrb_state* mrb, mrb_value self) {
  sqlite3_vtab * native_self = mruby_unbox_sqlite3_vtab(self);

  int native_nRef = native_self->nRef;

  mrb_value nRef = mrb_fixnum_value(native_nRef);

  return nRef;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::nRef_writer */
/* sha: 7f9773bca9dbccc2f51dafa8808a3757f7f8987ac2bcf0ae161432b286e43e5c */
#if BIND_Sqlite3Vtab_nRef_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vtab_set_nRef(mrb_state* mrb, mrb_value self) {
  sqlite3_vtab * native_self = mruby_unbox_sqlite3_vtab(self);
  mrb_int native_nRef;

  mrb_get_args(mrb, "i", &native_nRef);

  native_self->nRef = native_nRef;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::zErrMsg_reader */
/* sha: 8a03d08f880eb268827a52f71e3dbc2c9f55150ff3df613f4e538b7f3b27eac3 */
#if BIND_Sqlite3Vtab_zErrMsg_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3Vtab_get_zErrMsg(mrb_state* mrb, mrb_value self) {
  sqlite3_vtab * native_self = mruby_unbox_sqlite3_vtab(self);

  char * native_zErrMsg = native_self->zErrMsg;

  mrb_value zErrMsg = TODO_mruby_box_char_PTR(mrb, native_zErrMsg);

  return zErrMsg;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::zErrMsg_writer */
/* sha: 8ab363b363d8e9c487d786190157bb63ac4c2cbcab10d95f8dfc61c62ebc3380 */
#if BIND_Sqlite3Vtab_zErrMsg_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vtab_set_zErrMsg(mrb_state* mrb, mrb_value self) {
  sqlite3_vtab * native_self = mruby_unbox_sqlite3_vtab(self);
  mrb_value zErrMsg;

  mrb_get_args(mrb, "o", &zErrMsg);

  /* type checking */
  TODO_type_check_char_PTR(zErrMsg);

  char * native_zErrMsg = TODO_mruby_unbox_char_PTR(zErrMsg);

  native_self->zErrMsg = native_zErrMsg;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Vtab_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::class_definition */
/* sha: 008ff32534793c07965e6f477d3690e1b0019cdaed764ebdcc40993b87d388ac */
  struct RClass* Sqlite3Vtab_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Vtab", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Vtab_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::class_method_definitions */
/* sha: 380df65e514f34d8365c215c81db694b054006a5657ed801c53561069a784d42 */
#if BIND_Sqlite3Vtab_INITIALIZE
  mrb_define_method(mrb, Sqlite3Vtab_class, "initialize", mrb_SQLite_Sqlite3Vtab_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::attr_definitions */
/* sha: cc4169a83f64667251676efae32065fc7fd7d3139b0a31f202486f1ea2de3220 */
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
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: Sqlite3Vtab::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
