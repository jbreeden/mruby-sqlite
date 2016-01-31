/*
 * sqlite3_vtab_cursor
 * Defined in file sqlite3.h @ line 5467
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3VtabCursor_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3VtabCursor::initialize */
/* sha: 719ca4ec59158d6e3555a5d6417fb360268e8845e247334fb7ae8661f9957447 */
#if BIND_Sqlite3VtabCursor_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3VtabCursor_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  sqlite3_vtab_cursor* native_object = (sqlite3_vtab_cursor*)calloc(1, sizeof(sqlite3_vtab_cursor));
  mruby_gift_sqlite3_vtab_cursor_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3VtabCursor::pVtab_reader */
/* sha: b01fe2851b54a8afa487b79d6da536ccbd5dc7544069bda94296409958a9afcc */
#if BIND_Sqlite3VtabCursor_pVtab_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3VtabCursor_get_pVtab(mrb_state* mrb, mrb_value self) {
  sqlite3_vtab_cursor * native_self = mruby_unbox_sqlite3_vtab_cursor(self);

  sqlite3_vtab * native_pVtab = native_self->pVtab;

  mrb_value pVtab = (native_pVtab == NULL ? mrb_nil_value() : mruby_box_sqlite3_vtab(mrb, native_pVtab));

  return pVtab;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3VtabCursor::pVtab_writer */
/* sha: 48d5f1d1e1b1f4d415a54463665158e7f6ed01262408c203bb94d65ff30e1e99 */
#if BIND_Sqlite3VtabCursor_pVtab_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3VtabCursor_set_pVtab(mrb_state* mrb, mrb_value self) {
  sqlite3_vtab_cursor * native_self = mruby_unbox_sqlite3_vtab_cursor(self);
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
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3VtabCursor::class_definition */
/* sha: f41b7bd7bf51fb1af329e14b6908ba1140d8e49f57abf248eb31bc9e7dd1af1e */
  struct RClass* Sqlite3VtabCursor_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3VtabCursor", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3VtabCursor_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3VtabCursor::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3VtabCursor::class_method_definitions */
/* sha: 091cb11e7303ef3c495f65ee47816f189644323a09414d45ed5e8d520e4b0d79 */
#if BIND_Sqlite3VtabCursor_INITIALIZE
  mrb_define_method(mrb, Sqlite3VtabCursor_class, "initialize", mrb_SQLite_Sqlite3VtabCursor_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3VtabCursor::pre_attr_definitions */
/* sha: user_defined */

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


/* MRUBY_BINDING: Sqlite3VtabCursor::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
