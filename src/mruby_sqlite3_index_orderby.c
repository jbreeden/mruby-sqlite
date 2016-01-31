/*
 * struct sqlite3_index_orderby
 * Defined in file sqlite3.h @ line 5596
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3IndexOrderby_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexOrderby::initialize */
/* sha: 43eef97917787d14ddbeca9ab5b48d3c84454c05c48f6334f2687fb36b17adfa */
#if BIND_Sqlite3IndexOrderby_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IndexOrderby_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  struct sqlite3_index_orderby* native_object = (struct sqlite3_index_orderby*)calloc(1, sizeof(struct sqlite3_index_orderby));
  mruby_gift_sqlite3_index_orderby_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3IndexOrderby::iColumn_reader */
/* sha: 6aba679a53fb87fdf4a54df7c1aef61b14d562731852e4f1f334ac3ba2653f50 */
#if BIND_Sqlite3IndexOrderby_iColumn_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IndexOrderby_get_iColumn(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_orderby * native_self = mruby_unbox_sqlite3_index_orderby(self);

  int native_iColumn = native_self->iColumn;

  mrb_value iColumn = mrb_fixnum_value(native_iColumn);

  return iColumn;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexOrderby::iColumn_writer */
/* sha: cdb585b4146e61af40d9fb89d46025e2f86eb29f344cb65d70eb2a4c9e38d37f */
#if BIND_Sqlite3IndexOrderby_iColumn_FIELD_WRITER
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexOrderby::desc_reader */
/* sha: 7520e7eda5767a4076e8e6312a50d79c1773c137ebc30544ea20ecd5884e68a7 */
#if BIND_Sqlite3IndexOrderby_desc_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IndexOrderby_get_desc(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_orderby * native_self = mruby_unbox_sqlite3_index_orderby(self);

  unsigned char native_desc = native_self->desc;

  mrb_value desc = mrb_fixnum_value(native_desc);

  return desc;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexOrderby::desc_writer */
/* sha: 475b543598b9a735571d8009be5e35b0fe9b78a0aba3ad046884102f26179f8b */
#if BIND_Sqlite3IndexOrderby_desc_FIELD_WRITER
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
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3IndexOrderby_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexOrderby::class_definition */
/* sha: 1600d181e22c044ca123570994295b2413080d67f0a441af1b96366e43ee5a82 */
  struct RClass* Sqlite3IndexOrderby_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3IndexOrderby", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3IndexOrderby_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexOrderby::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexOrderby::class_method_definitions */
/* sha: ac98453c8e1203396bc82a1be217ba27f5e11cef8060b6f7e2f186d60e9812c3 */
#if BIND_Sqlite3IndexOrderby_INITIALIZE
  mrb_define_method(mrb, Sqlite3IndexOrderby_class, "initialize", mrb_SQLite_Sqlite3IndexOrderby_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexOrderby::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexOrderby::attr_definitions */
/* sha: 11167f71b3e7dbbdbb152183bfc9d382cb5f3f29480da9d3455444455550c701 */
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
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: Sqlite3IndexOrderby::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
