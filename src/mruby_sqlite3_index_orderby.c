/*
 * struct sqlite3_index_orderby
 * Defined in file sqlite3.h @ line 5596
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3IndexOrderby_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Sqlite3IndexOrderby::initialize */
/* sha: a3b7478114a24d7928d882324ddf200bb59f18fe807bfb21e937ab0b514b515a */
#if BIND_Sqlite3IndexOrderby_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IndexOrderby_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_index_orderby* native_object = (struct sqlite3_index_orderby*)calloc(1, sizeof(struct sqlite3_index_orderby));
  mruby_giftwrap_sqlite3_index_orderby_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexOrderby::initialize */
/* sha: 4d53bb1e3767161551e1e0718dd0a2d79c298f9436a00b4978618705a535ca27 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexOrderby::belongs_to_ruby */
/* sha: 88de38da4bb00cb9ba212a6e8f8593b1ed85edefe862e881943a3a40c2940676 */
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
/* sha: fa9a080078c8981a5e995f4fe0296a79bfe786c5fb8bef0c6531de7fb04dfc6d */
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
/* sha: d1a0da61e14f647b0a6b76cd398960c1dbe996e89c625285e77032b55bf60af8 */
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
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3IndexOrderby_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3IndexOrderby::class_definition */
/* sha: 1600d181e22c044ca123570994295b2413080d67f0a441af1b96366e43ee5a82 */
  struct RClass* Sqlite3IndexOrderby_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3IndexOrderby", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3IndexOrderby_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexOrderby::class_method_definitions */
/* sha: c949e8650f6469e55385d82ecfd731a2a88297fcd02cf038497377649fd7e4e4 */
#if BIND_Sqlite3IndexOrderby_INITIALIZE
  mrb_define_method(mrb, Sqlite3IndexOrderby_class, "initialize", mrb_SQLite_Sqlite3IndexOrderby_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3IndexOrderby_class, "disown", mrb_SQLite_Sqlite3IndexOrderby_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3IndexOrderby_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3IndexOrderby_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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

/* MRUBY_BINDING: Sqlite3IndexOrderby::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
