/*
 * struct sqlite3_vtab_cursor
 * Defined in file sqlite3.h @ line 5467
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3VtabCursor_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3VtabCursor_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3VtabCursor_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab_cursor* native_object = (struct sqlite3_vtab_cursor*)malloc(sizeof(struct sqlite3_vtab_cursor));
  mruby_gift_struct sqlite3_vtab_cursor_data_ptr(self, native_object);
  return self;
}
#endif

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

/*
 * Fields
 */

#if BIND_Sqlite3VtabCursor_pVtab_FIELD
/* get_pVtab
 *
 * Return Type: sqlite3_vtab *
 */
mrb_value
mrb_SQLite_Sqlite3VtabCursor_get_pVtab(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab_cursor * native_self = mruby_unbox_struct sqlite3_vtab_cursor(self);

  sqlite3_vtab * native_field = native_self->pVtab;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_sqlite3_vtab(mrb, native_field));

  return ruby_field;
}

/* set_pVtab
 *
 * Parameters:
 * - value: sqlite3_vtab *
 */
mrb_value
mrb_SQLite_Sqlite3VtabCursor_set_pVtab(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vtab_cursor * native_self = mruby_unbox_struct sqlite3_vtab_cursor(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, Sqlite3Vtab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vtab expected");
    return mrb_nil_value();
  }

  sqlite3_vtab * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_sqlite3_vtab(ruby_field));

  native_self->pVtab = native_field;

  return ruby_field;
}
#endif


void mrb_SQLite_Sqlite3VtabCursor_init(mrb_state* mrb) {
  RClass* Sqlite3VtabCursor_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3VtabCursor", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3VtabCursor_class, MRB_TT_DATA);

#if BIND_Sqlite3VtabCursor_INITIALIZE
  mrb_define_method(mrb, Sqlite3VtabCursor_class, "initialize", mrb_SQLite_Sqlite3VtabCursor_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3VtabCursor_class, "disown", mrb_SQLite_Sqlite3VtabCursor_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3VtabCursor_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3VtabCursor_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Sqlite3VtabCursor_pVtab_FIELD
  mrb_define_method(mrb, Sqlite3VtabCursor_class, "pVtab", mrb_SQLite_Sqlite3VtabCursor_get_pVtab, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3VtabCursor_class, "pVtab=", mrb_SQLite_Sqlite3VtabCursor_set_pVtab, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
