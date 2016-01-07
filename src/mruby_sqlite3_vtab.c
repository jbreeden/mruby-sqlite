/*
 * struct sqlite3_vtab
 * Defined in file sqlite3.h @ line 5465
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Vtab_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Sqlite3Vtab::initialize */
/* sha: d8eb1688ef4ec7f2fe01dde188cb2ed44e03fe199373fda749d949abf49a0d55 */
#if BIND_Sqlite3Vtab_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Vtab_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab* native_object = (struct sqlite3_vtab*)calloc(1, sizeof(struct sqlite3_vtab));
  mruby_giftwrap_sqlite3_vtab_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::initialize */
/* sha: 76a5ebc84fbf8854c9ce30cb36cc3aee85ac13162154e56033d9ed7ab1a021ff */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::belongs_to_ruby */
/* sha: 0d94ba1377c5d86f843a7580dc61761e12ceb91c1d7aecb667b3bce023cbe91c */
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
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3Vtab::pModule_reader */
/* sha: f2bf8cc7f90a3f744a22af0251eeb95fa57ce3a2b4027e94b945ce497e244688 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::pModule_writer */
/* sha: a5cab68b0330315d563ee30dd2be61d73593dc947a75460ffabab57a6b4bca19 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::nRef_reader */
/* sha: 44675802077db8207f93ad8513e1d4140c6990aa965c6f5d3fe113dbc8b27c84 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::nRef_writer */
/* sha: 1703182030ed808c9087cfc0fa61b13369ce62a2bd2aeea92ac9ab8841748960 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::zErrMsg_reader */
/* sha: c35bf032af06f9b47cafb4f03517ea9882793185e2c3832fa736979419f91e28 */
#if BIND_Sqlite3Vtab_zErrMsg_FIELD_READER
/* get_zErrMsg
 *
 * Return Type: char *
 */
mrb_value
mrb_SQLite_Sqlite3Vtab_get_zErrMsg(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab * native_self = mruby_unbox_sqlite3_vtab(self);

  char * native_zErrMsg = native_self->zErrMsg;

  mrb_value zErrMsg = TODO_mruby_box_char_PTR(mrb, native_zErrMsg);

  return zErrMsg;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::zErrMsg_writer */
/* sha: a1dabe9b4a2a5988ad64c8b0f35691e06162421779f80c73e328714b60e5f50b */
#if BIND_Sqlite3Vtab_zErrMsg_FIELD_WRITER
/* set_zErrMsg
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_SQLite_Sqlite3Vtab_set_zErrMsg(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab * native_self = mruby_unbox_sqlite3_vtab(self);
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
/* MRUBY_BINDING: Sqlite3Vtab::class_definition */
/* sha: 008ff32534793c07965e6f477d3690e1b0019cdaed764ebdcc40993b87d388ac */
  struct RClass* Sqlite3Vtab_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Vtab", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Vtab_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::class_method_definitions */
/* sha: 663d41b10c91c96cc9aecc12b1c47e44da15e26447830456df330376fc3c4bd9 */
#if BIND_Sqlite3Vtab_INITIALIZE
  mrb_define_method(mrb, Sqlite3Vtab_class, "initialize", mrb_SQLite_Sqlite3Vtab_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3Vtab_class, "disown", mrb_SQLite_Sqlite3Vtab_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3Vtab_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3Vtab_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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

/* MRUBY_BINDING: Sqlite3Vtab::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
