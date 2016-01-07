/*
 * struct sqlite3_vtab_cursor
 * Defined in file sqlite3.h @ line 5467
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3VtabCursor_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Sqlite3VtabCursor::initialize */
/* sha: 9845255fe22c5f3078d3072c95a53b6012c21a2ac1cc08339a52b486d017104d */
#if BIND_Sqlite3VtabCursor_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3VtabCursor_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab_cursor* native_object = (struct sqlite3_vtab_cursor*)calloc(1, sizeof(struct sqlite3_vtab_cursor));
  mruby_giftwrap_sqlite3_vtab_cursor_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3VtabCursor::initialize */
/* sha: 14bcf705715c59c3e82557b65a03e7e9a38474b7be17b854c599484712ab2249 */
mrb_value
mrb_SQLite_Sqlite3VtabCursor_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3VtabCursor.disown only accepts objects of type SQLite::Sqlite3VtabCursor");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3VtabCursor::belongs_to_ruby */
/* sha: 8c0cccc67d806176737ee8fdb43b3d12eff1d902a1cb680e3bf70702d7a5a2b2 */
mrb_value
mrb_SQLite_Sqlite3VtabCursor_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3VtabCursor.belongs_to_ruby only accepts objects of type SQLite::Sqlite3VtabCursor");
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

/* MRUBY_BINDING: Sqlite3VtabCursor::pVtab_reader */
/* sha: b5d5dc170f557cdfdd6ee99ca5b5c3651a380ab443dea0c0f428bebfc5862665 */
#if BIND_Sqlite3VtabCursor_pVtab_FIELD_READER
/* get_pVtab
 *
 * Return Type: sqlite3_vtab *
 */
mrb_value
mrb_SQLite_Sqlite3VtabCursor_get_pVtab(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab_cursor * native_self = mruby_unbox_sqlite3_vtab_cursor(self);

  sqlite3_vtab * native_pVtab = native_self->pVtab;

  mrb_value pVtab = (native_pVtab == NULL ? mrb_nil_value() : mruby_box_sqlite3_vtab(mrb, native_pVtab));

  return pVtab;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3VtabCursor::pVtab_writer */
/* sha: 5338be6b3e5a3de5c3f89d0136c45c6f50bf9c4d2545a4ce66e0cec57327ec58 */
#if BIND_Sqlite3VtabCursor_pVtab_FIELD_WRITER
/* set_pVtab
 *
 * Parameters:
 * - value: sqlite3_vtab *
 */
mrb_value
mrb_SQLite_Sqlite3VtabCursor_set_pVtab(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab_cursor * native_self = mruby_unbox_sqlite3_vtab_cursor(self);
  mrb_value pVtab;

  mrb_get_args(mrb, "o", &pVtab);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, pVtab, Sqlite3Vtab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vtab expected");
    return mrb_nil_value();
  }

  sqlite3_vtab * native_pVtab = (mrb_nil_p(pVtab) ? NULL : mruby_unbox_sqlite3_vtab(pVtab));

  native_self->pVtab = native_pVtab;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3VtabCursor_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3VtabCursor::class_definition */
/* sha: f41b7bd7bf51fb1af329e14b6908ba1140d8e49f57abf248eb31bc9e7dd1af1e */
  struct RClass* Sqlite3VtabCursor_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3VtabCursor", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3VtabCursor_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3VtabCursor::class_method_definitions */
/* sha: 87d01e5b95ceac752b38417c39cbb024657c4b556581edec08279b9d740c3f2f */
#if BIND_Sqlite3VtabCursor_INITIALIZE
  mrb_define_method(mrb, Sqlite3VtabCursor_class, "initialize", mrb_SQLite_Sqlite3VtabCursor_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3VtabCursor_class, "disown", mrb_SQLite_Sqlite3VtabCursor_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3VtabCursor_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3VtabCursor_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3VtabCursor::attr_definitions */
/* sha: 4aead208d727656d8cad59eec33f134d508896d3ce7b74a44cfc76e83f87ed33 */
  /*
   * Fields
   */
#if BIND_Sqlite3VtabCursor_pVtab_FIELD_READER
  mrb_define_method(mrb, Sqlite3VtabCursor_class, "pVtab", mrb_SQLite_Sqlite3VtabCursor_get_pVtab, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3VtabCursor_pVtab_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3VtabCursor_class, "pVtab=", mrb_SQLite_Sqlite3VtabCursor_set_pVtab, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3VtabCursor::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
