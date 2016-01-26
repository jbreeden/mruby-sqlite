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
/* sha: 6a8174044a85c9d1bbf51c392f80c316788d792242f12d50cb82a033f989b511 */
#if BIND_Sqlite3Vtab_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Vtab_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  sqlite3_vtab* native_object = (sqlite3_vtab*)calloc(1, sizeof(sqlite3_vtab));
  mruby_gift_sqlite3_vtab_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3Vtab::pModule_reader */
/* sha: a44f28530e4043cac83c3d8287819d4823ba2d74ef00b3fab88b778be6fa19d1 */
#if BIND_Sqlite3Vtab_pModule_FIELD_READER
/* get_pModule
 *
 * Return Type: const sqlite3_module *
 */
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
/* sha: 52fc46c46711308d121a4724d4788cb5c3e1c3eb121086c3a0be7d5b884f639b */
#if BIND_Sqlite3Vtab_pModule_FIELD_WRITER
/* set_pModule
 *
 * Parameters:
 * - value: const sqlite3_module *
 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::nRef_reader */
/* sha: 0ba22eb10c1746d8229ac69d07dc4caa2964d3c297c53ed11a74492e0f4a6fc5 */
#if BIND_Sqlite3Vtab_nRef_FIELD_READER
/* get_nRef
 *
 * Return Type: int
 */
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
/* sha: 50a60188abb0e9164b0d6ed1c281b67f212fbac50eb19a98de69caaa70f15e66 */
#if BIND_Sqlite3Vtab_nRef_FIELD_WRITER
/* set_nRef
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3Vtab_set_nRef(mrb_state* mrb, mrb_value self) {
  sqlite3_vtab * native_self = mruby_unbox_sqlite3_vtab(self);
  mrb_int native_nRef;

  mrb_get_args(mrb, "i", &native_nRef);

  native_self->nRef = native_nRef;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::zErrMsg_reader */
/* sha: 51c5888d31955a96fe430efe4adfa866a40c5f8f4e499674567262a6ac8aa0ec */
#if BIND_Sqlite3Vtab_zErrMsg_FIELD_READER
/* get_zErrMsg
 *
 * Return Type: char *
 */
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
/* sha: a94915427d9e8ed23d7a5a7a3ed20ec703fc66069591aef67d8881f4b160b1a4 */
#if BIND_Sqlite3Vtab_zErrMsg_FIELD_WRITER
/* set_zErrMsg
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_SQLite_Sqlite3Vtab_set_zErrMsg(mrb_state* mrb, mrb_value self) {
  sqlite3_vtab * native_self = mruby_unbox_sqlite3_vtab(self);
  mrb_value zErrMsg;

  mrb_get_args(mrb, "o", &zErrMsg);

  /* type checking */
  TODO_type_check_char_PTR(zErrMsg);

  char * native_zErrMsg = TODO_mruby_unbox_char_PTR(zErrMsg);

  native_self->zErrMsg = native_zErrMsg;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Vtab_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3Vtab::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
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

/* MRUBY_BINDING: Sqlite3Vtab::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
