/*
 * struct sqlite3_index_orderby
 * Defined in file sqlite3.h @ line 5596
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3IndexOrderby_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3IndexOrderby_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IndexOrderby_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_orderby* native_object = (struct sqlite3_index_orderby*)calloc(1, sizeof(struct sqlite3_index_orderby));
  mruby_giftwrap_sqlite3_index_orderby_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SQLite_Sqlite3IndexOrderby_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3IndexOrderby.disown only accepts objects of type SQLite::Sqlite3IndexOrderby");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SQLite_Sqlite3IndexOrderby_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3IndexOrderby.belongs_to_ruby only accepts objects of type SQLite::Sqlite3IndexOrderby");
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

#if BIND_Sqlite3IndexOrderby_iColumn_FIELD_READER
/* get_iColumn
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexOrderby_get_iColumn(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_orderby * native_self = mruby_unbox_sqlite3_index_orderby(self);

  int native_iColumn = native_self->iColumn;

  mrb_value iColumn = mrb_fixnum_value(native_iColumn);

  return iColumn;
}
#endif

#if BIND_Sqlite3IndexOrderby_iColumn_FIELD_WRITER
/* set_iColumn
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IndexOrderby_set_iColumn(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_orderby * native_self = mruby_unbox_sqlite3_index_orderby(self);
  mrb_int native_iColumn;

  mrb_get_args(mrb, "i", &native_iColumn);

  native_self->iColumn = native_iColumn;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3IndexOrderby_desc_FIELD_READER
/* get_desc
 *
 * Return Type: unsigned char
 */
mrb_value
mrb_SQLite_Sqlite3IndexOrderby_get_desc(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_orderby * native_self = mruby_unbox_sqlite3_index_orderby(self);

  unsigned char native_desc = native_self->desc;

  mrb_value desc = mrb_fixnum_value(native_desc);

  return desc;
}
#endif

#if BIND_Sqlite3IndexOrderby_desc_FIELD_WRITER
/* set_desc
 *
 * Parameters:
 * - value: unsigned char
 */
mrb_value
mrb_SQLite_Sqlite3IndexOrderby_set_desc(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_orderby * native_self = mruby_unbox_sqlite3_index_orderby(self);
  mrb_int native_desc;

  mrb_get_args(mrb, "i", &native_desc);

  native_self->desc = native_desc;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif


void mrb_SQLite_Sqlite3IndexOrderby_init(mrb_state* mrb) {
  struct RClass* Sqlite3IndexOrderby_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3IndexOrderby", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3IndexOrderby_class, MRB_TT_DATA);

#if BIND_Sqlite3IndexOrderby_INITIALIZE
  mrb_define_method(mrb, Sqlite3IndexOrderby_class, "initialize", mrb_SQLite_Sqlite3IndexOrderby_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3IndexOrderby_class, "disown", mrb_SQLite_Sqlite3IndexOrderby_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3IndexOrderby_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3IndexOrderby_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Sqlite3IndexOrderby_iColumn_FIELD_READER
  mrb_define_method(mrb, Sqlite3IndexOrderby_class, "iColumn", mrb_SQLite_Sqlite3IndexOrderby_get_iColumn, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IndexOrderby_iColumn_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IndexOrderby_class, "iColumn=", mrb_SQLite_Sqlite3IndexOrderby_set_iColumn, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IndexOrderby_desc_FIELD_READER
  mrb_define_method(mrb, Sqlite3IndexOrderby_class, "desc", mrb_SQLite_Sqlite3IndexOrderby_get_desc, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IndexOrderby_desc_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IndexOrderby_class, "desc=", mrb_SQLite_Sqlite3IndexOrderby_set_desc, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
