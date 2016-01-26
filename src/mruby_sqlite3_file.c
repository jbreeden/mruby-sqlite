/*
 * sqlite3_file
 * Defined in file sqlite3.h @ line 635
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3File_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3File::initialize */
/* sha: 6389641052e6fa7b60d4d339d682ad36b647eb0606a5b09cfb70db4746b9e0ad */
#if BIND_Sqlite3File_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3File_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  sqlite3_file* native_object = (sqlite3_file*)calloc(1, sizeof(sqlite3_file));
  mruby_gift_sqlite3_file_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3File::pMethods_reader */
/* sha: 770740f15bbacc56666e38c6a6a806285c5f3ea5a6cb9b71921a6dce7f81c0ee */
#if BIND_Sqlite3File_pMethods_FIELD_READER
/* get_pMethods
 *
 * Return Type: const struct sqlite3_io_methods *
 */
mrb_value
mrb_SQLite_Sqlite3File_get_pMethods(mrb_state* mrb, mrb_value self) {
  sqlite3_file * native_self = mruby_unbox_sqlite3_file(self);

  const struct sqlite3_io_methods * native_pMethods = native_self->pMethods;

  mrb_value pMethods = (native_pMethods == NULL ? mrb_nil_value() : mruby_box_sqlite3_io_methods(mrb, native_pMethods));

  return pMethods;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3File::pMethods_writer */
/* sha: db59e4d0baeba6b29ce2ae9dae27abbbeee1b6857a0acbfe21f93569cf216784 */
#if BIND_Sqlite3File_pMethods_FIELD_WRITER
/* set_pMethods
 *
 * Parameters:
 * - value: const struct sqlite3_io_methods *
 */
mrb_value
mrb_SQLite_Sqlite3File_set_pMethods(mrb_state* mrb, mrb_value self) {
  sqlite3_file * native_self = mruby_unbox_sqlite3_file(self);
  mrb_value pMethods;

  mrb_get_args(mrb, "o", &pMethods);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, pMethods, Sqlite3IoMethods_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3IoMethods expected");
    return mrb_nil_value();
  }

  const struct sqlite3_io_methods * native_pMethods = (mrb_nil_p(pMethods) ? NULL : mruby_unbox_sqlite3_io_methods(pMethods));

  native_self->pMethods = native_pMethods;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3File_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3File::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3File::class_definition */
/* sha: d367bfea7a0601ac5e58b10bafc0c729ef460a7eed461fa2db119e4be7a37886 */
  struct RClass* Sqlite3File_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3File", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3File_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3File::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3File::class_method_definitions */
/* sha: 7b91553c5246d0613c0a9f61f31b187737aa855509b6b3287071034656ebb2b5 */
#if BIND_Sqlite3File_INITIALIZE
  mrb_define_method(mrb, Sqlite3File_class, "initialize", mrb_SQLite_Sqlite3File_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3File::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3File::attr_definitions */
/* sha: a28c8930f5909cf9d10a0919caa4cfb49541cfe4ac3cdf571c96eca311bdf0bd */
  /*
   * Fields
   */
#if BIND_Sqlite3File_pMethods_FIELD_READER
  mrb_define_method(mrb, Sqlite3File_class, "pMethods", mrb_SQLite_Sqlite3File_get_pMethods, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3File_pMethods_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3File_class, "pMethods=", mrb_SQLite_Sqlite3File_set_pMethods, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3File::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3File::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3File::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
