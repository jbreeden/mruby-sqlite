/*
 * struct sqlite3_index_constraint_usage
 * Defined in file sqlite3.h @ line 5601
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3IndexConstraintUsage_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::initialize */
/* sha: d3f2e16004de146b48a1ad537108c940a9c05efdc6075b31b8d430a5b577dc07 */
#if BIND_Sqlite3IndexConstraintUsage_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IndexConstraintUsage_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint_usage* native_object = (struct sqlite3_index_constraint_usage*)calloc(1, sizeof(struct sqlite3_index_constraint_usage));
  mruby_giftwrap_sqlite3_index_raint_usage_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::initialize */
/* sha: 5921c705630e7612ac566b9cd5a82d19423c52b6579060e38dc2e15608fce8c3 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraintUsage_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3IndexConstraintUsage.disown only accepts objects of type SQLite::Sqlite3IndexConstraintUsage");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::belongs_to_ruby */
/* sha: 9ecb4b5c4b56c849e39e4d78d60166d663936aedd233c3d2bcc67e994016012a */
mrb_value
mrb_SQLite_Sqlite3IndexConstraintUsage_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3IndexConstraintUsage.belongs_to_ruby only accepts objects of type SQLite::Sqlite3IndexConstraintUsage");
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

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::argvIndex_reader */
/* sha: 3df41bdb9d8b079fc0ddee2b1bdcc2d6499ddcb3cb30a61811dec5ffbfa6a01d */
#if BIND_Sqlite3IndexConstraintUsage_argvIndex_FIELD_READER
/* get_argvIndex
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraintUsage_get_argvIndex(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint_usage * native_self = mruby_unbox_sqlite3_index_raint_usage(self);

  int native_argvIndex = native_self->argvIndex;

  mrb_value argvIndex = mrb_fixnum_value(native_argvIndex);

  return argvIndex;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::argvIndex_writer */
/* sha: e7b446c69435ecbe7cdb04363564084d7cbad9baabd768e663abc7ac80ebf4de */
#if BIND_Sqlite3IndexConstraintUsage_argvIndex_FIELD_WRITER
/* set_argvIndex
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraintUsage_set_argvIndex(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint_usage * native_self = mruby_unbox_sqlite3_index_raint_usage(self);
  mrb_int native_argvIndex;

  mrb_get_args(mrb, "i", &native_argvIndex);

  native_self->argvIndex = native_argvIndex;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::omit_reader */
/* sha: 6752a7a8da6cfc25bad1b1dacb8e731546bbe5e7eb30d1b0ab7379b2bee0b190 */
#if BIND_Sqlite3IndexConstraintUsage_omit_FIELD_READER
/* get_omit
 *
 * Return Type: unsigned char
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraintUsage_get_omit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint_usage * native_self = mruby_unbox_sqlite3_index_raint_usage(self);

  unsigned char native_omit = native_self->omit;

  mrb_value omit = mrb_fixnum_value(native_omit);

  return omit;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::omit_writer */
/* sha: 4896b728b222ef056da73911fe2da72dac3b495e2c3643832f2065bb91fac4e8 */
#if BIND_Sqlite3IndexConstraintUsage_omit_FIELD_WRITER
/* set_omit
 *
 * Parameters:
 * - value: unsigned char
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraintUsage_set_omit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint_usage * native_self = mruby_unbox_sqlite3_index_raint_usage(self);
  mrb_int native_omit;

  mrb_get_args(mrb, "i", &native_omit);

  native_self->omit = native_omit;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3IndexConstraintUsage_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::class_definition */
/* sha: 8c5395fad461f065273076fc369eb6ba684bd3b7932d911fbb994ca4fc998a47 */
  struct RClass* Sqlite3IndexConstraintUsage_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3IndexConstraintUsage", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3IndexConstraintUsage_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::class_method_definitions */
/* sha: 8863821ba567e65efd1997d8eaf9db05854b5f2d3b2b7337c308c9ec9b8d29fa */
#if BIND_Sqlite3IndexConstraintUsage_INITIALIZE
  mrb_define_method(mrb, Sqlite3IndexConstraintUsage_class, "initialize", mrb_SQLite_Sqlite3IndexConstraintUsage_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3IndexConstraintUsage_class, "disown", mrb_SQLite_Sqlite3IndexConstraintUsage_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3IndexConstraintUsage_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3IndexConstraintUsage_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::attr_definitions */
/* sha: 10f315babeb9af35cc587d0b57d8a652db44756a3717bb3effe10dbb567ab6fb */
  /*
   * Fields
   */
#if BIND_Sqlite3IndexConstraintUsage_argvIndex_FIELD_READER
  mrb_define_method(mrb, Sqlite3IndexConstraintUsage_class, "argvIndex", mrb_SQLite_Sqlite3IndexConstraintUsage_get_argvIndex, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IndexConstraintUsage_argvIndex_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IndexConstraintUsage_class, "argvIndex=", mrb_SQLite_Sqlite3IndexConstraintUsage_set_argvIndex, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexConstraintUsage_omit_FIELD_READER
  mrb_define_method(mrb, Sqlite3IndexConstraintUsage_class, "omit", mrb_SQLite_Sqlite3IndexConstraintUsage_get_omit, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IndexConstraintUsage_omit_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IndexConstraintUsage_class, "omit=", mrb_SQLite_Sqlite3IndexConstraintUsage_set_omit, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
