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
/* sha: 5ba8cad5075ed082e7138dbbc998dd83fe747c14428274c3ae845439922a634a */
#if BIND_Sqlite3IndexOrderby_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IndexOrderby_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  struct sqlite3_index_orderby* native_object = (struct sqlite3_index_orderby*)calloc(1, sizeof(struct sqlite3_index_orderby));
  mruby_gift_sqlite3_index_orderby_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3IndexOrderby::iColumn_reader */
/* sha: 7d40e462052758aab2dcb6fbfdca06dfaf3a36a5ca384b0211df4dde96f66db0 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexOrderby::iColumn_writer */
/* sha: 83bc3079d84fecb7d395bba3cb45524871597e88d79179163f35562a0847ef13 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexOrderby::desc_reader */
/* sha: fe523dfae39e01c3af73415810c0d40f64122ce9fcfd86ad65f530e9706a3a72 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexOrderby::desc_writer */
/* sha: aa9f869ace33ef0585b4c83803b3fcc5cd4b6bca397b83971167a629d1b66b59 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3IndexOrderby_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3IndexOrderby::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
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

/* MRUBY_BINDING: Sqlite3IndexOrderby::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexOrderby::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexOrderby::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
