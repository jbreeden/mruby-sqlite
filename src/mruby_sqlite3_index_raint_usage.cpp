/*
 * struct sqlite3_index_constraint_usage
 * Defined in file sqlite3.h @ line 5601
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3IndexConstraintUsage_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3IndexConstraintUsage_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IndexConstraintUsage_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint_usage* native_object = (struct sqlite3_index_constraint_usage*)malloc(sizeof(struct sqlite3_index_constraint_usage));
  mruby_gift_struct sqlite3_index_constraint_usage_data_ptr(self, native_object);
  return self;
}
#endif

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

/*
 * Fields
 */

#if BIND_Sqlite3IndexConstraintUsage_argvIndex_FIELD
/* get_argvIndex
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraintUsage_get_argvIndex(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint_usage * native_self = mruby_unbox_struct sqlite3_index_constraint_usage(self);

  int native_field = native_self->argvIndex;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_argvIndex
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraintUsage_set_argvIndex(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint_usage * native_self = mruby_unbox_struct sqlite3_index_constraint_usage(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->argvIndex = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IndexConstraintUsage_omit_FIELD
/* get_omit
 *
 * Return Type: unsigned char
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraintUsage_get_omit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint_usage * native_self = mruby_unbox_struct sqlite3_index_constraint_usage(self);

  unsigned char native_field = native_self->omit;

  mrb_value ruby_field = TODO_mruby_box_unsigned_char(mrb, native_field);

  return ruby_field;
}

/* set_omit
 *
 * Parameters:
 * - value: unsigned char
 */
mrb_value
mrb_SQLite_Sqlite3IndexConstraintUsage_set_omit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_constraint_usage * native_self = mruby_unbox_struct sqlite3_index_constraint_usage(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_unsigned_char(ruby_field);

  unsigned char native_field = TODO_mruby_unbox_unsigned_char(ruby_field);

  native_self->omit = native_field;

  return ruby_field;
}
#endif


void mrb_SQLite_Sqlite3IndexConstraintUsage_init(mrb_state* mrb) {
  RClass* Sqlite3IndexConstraintUsage_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3IndexConstraintUsage", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3IndexConstraintUsage_class, MRB_TT_DATA);

#if BIND_Sqlite3IndexConstraintUsage_INITIALIZE
  mrb_define_method(mrb, Sqlite3IndexConstraintUsage_class, "initialize", mrb_SQLite_Sqlite3IndexConstraintUsage_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3IndexConstraintUsage_class, "disown", mrb_SQLite_Sqlite3IndexConstraintUsage_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3IndexConstraintUsage_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3IndexConstraintUsage_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Sqlite3IndexConstraintUsage_argvIndex_FIELD
  mrb_define_method(mrb, Sqlite3IndexConstraintUsage_class, "argvIndex", mrb_SQLite_Sqlite3IndexConstraintUsage_get_argvIndex, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IndexConstraintUsage_class, "argvIndex=", mrb_SQLite_Sqlite3IndexConstraintUsage_set_argvIndex, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexConstraintUsage_omit_FIELD
  mrb_define_method(mrb, Sqlite3IndexConstraintUsage_class, "omit", mrb_SQLite_Sqlite3IndexConstraintUsage_get_omit, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IndexConstraintUsage_class, "omit=", mrb_SQLite_Sqlite3IndexConstraintUsage_set_omit, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
