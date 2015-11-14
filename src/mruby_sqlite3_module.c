/*
 * struct sqlite3_module
 * Defined in file sqlite3.h @ line 5468
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Module_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3Module_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Module_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module* native_object = (struct sqlite3_module*)malloc(sizeof(struct sqlite3_module));
  mruby_gift_struct sqlite3_module_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SQLite_Sqlite3Module_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3Module.disown only accepts objects of type SQLite::Sqlite3Module");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SQLite_Sqlite3Module_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3Module.belongs_to_ruby only accepts objects of type SQLite::Sqlite3Module");
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

#if BIND_Sqlite3Module_iVersion_FIELD
/* get_iVersion
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_iVersion(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int native_field = native_self->iVersion;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_iVersion
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_iVersion(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->iVersion = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Module_xCreate_FIELD
/* get_xCreate
 *
 * Return Type: int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xCreate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **) native_field = native_self->xCreate;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xCreate
 *
 * Parameters:
 * - value: int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xCreate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(ruby_field);

  native_self->xCreate = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Module_xConnect_FIELD
/* get_xConnect
 *
 * Return Type: int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xConnect(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **) native_field = native_self->xConnect;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xConnect
 *
 * Parameters:
 * - value: int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xConnect(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(ruby_field);

  native_self->xConnect = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Module_xBestIndex_FIELD
/* get_xBestIndex
 *
 * Return Type: int (*)(sqlite3_vtab *, sqlite3_index_info *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xBestIndex(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int (*)(sqlite3_vtab *, sqlite3_index_info *) native_field = native_self->xBestIndex;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_index_info_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xBestIndex
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, sqlite3_index_info *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xBestIndex(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_index_info_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vtab *, sqlite3_index_info *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_index_info_PTR_RPAREN(ruby_field);

  native_self->xBestIndex = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Module_xDisconnect_FIELD
/* get_xDisconnect
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xDisconnect(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_field = native_self->xDisconnect;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xDisconnect
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xDisconnect(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(ruby_field);

  native_self->xDisconnect = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Module_xDestroy_FIELD
/* get_xDestroy
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xDestroy(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_field = native_self->xDestroy;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xDestroy
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xDestroy(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(ruby_field);

  native_self->xDestroy = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Module_xOpen_FIELD
/* get_xOpen
 *
 * Return Type: int (*)(sqlite3_vtab *, sqlite3_vtab_cursor **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xOpen(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int (*)(sqlite3_vtab *, sqlite3_vtab_cursor **) native_field = native_self->xOpen;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_vtab_cursor_PTR_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xOpen
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, sqlite3_vtab_cursor **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xOpen(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_vtab_cursor_PTR_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vtab *, sqlite3_vtab_cursor **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_vtab_cursor_PTR_PTR_RPAREN(ruby_field);

  native_self->xOpen = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Module_xClose_FIELD
/* get_xClose
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xClose(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *) native_field = native_self->xClose;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xClose
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xClose(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vtab_cursor *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(ruby_field);

  native_self->xClose = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Module_xFilter_FIELD
/* get_xFilter
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *, int, const char *, int, sqlite3_value **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xFilter(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *, int, const char *, int, sqlite3_value **) native_field = native_self->xFilter;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_intCOMMAchar_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xFilter
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *, int, const char *, int, sqlite3_value **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xFilter(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_intCOMMAchar_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vtab_cursor *, int, const char *, int, sqlite3_value **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_intCOMMAchar_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(ruby_field);

  native_self->xFilter = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Module_xNext_FIELD
/* get_xNext
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xNext(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *) native_field = native_self->xNext;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xNext
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xNext(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vtab_cursor *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(ruby_field);

  native_self->xNext = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Module_xEof_FIELD
/* get_xEof
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xEof(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *) native_field = native_self->xEof;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xEof
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xEof(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vtab_cursor *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(ruby_field);

  native_self->xEof = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Module_xColumn_FIELD
/* get_xColumn
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *, sqlite3_context *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xColumn(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *, sqlite3_context *, int) native_field = native_self->xColumn;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_context_PTR_COMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xColumn
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *, sqlite3_context *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xColumn(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_context_PTR_COMMA_int_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vtab_cursor *, sqlite3_context *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_context_PTR_COMMA_int_RPAREN(ruby_field);

  native_self->xColumn = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Module_xRowid_FIELD
/* get_xRowid
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xRowid(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *, sqlite3_int64 *) native_field = native_self->xRowid;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_int64_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xRowid
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xRowid(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_int64_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vtab_cursor *, sqlite3_int64 *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_int64_PTR_RPAREN(ruby_field);

  native_self->xRowid = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Module_xUpdate_FIELD
/* get_xUpdate
 *
 * Return Type: int (*)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xUpdate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int (*)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *) native_field = native_self->xUpdate;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_COMMA_sqlite3_int64_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xUpdate
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xUpdate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_COMMA_sqlite3_int64_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_COMMA_sqlite3_int64_PTR_RPAREN(ruby_field);

  native_self->xUpdate = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Module_xBegin_FIELD
/* get_xBegin
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xBegin(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_field = native_self->xBegin;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xBegin
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xBegin(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(ruby_field);

  native_self->xBegin = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Module_xSync_FIELD
/* get_xSync
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xSync(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_field = native_self->xSync;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xSync
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xSync(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(ruby_field);

  native_self->xSync = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Module_xCommit_FIELD
/* get_xCommit
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xCommit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_field = native_self->xCommit;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xCommit
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xCommit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(ruby_field);

  native_self->xCommit = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Module_xRollback_FIELD
/* get_xRollback
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xRollback(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_field = native_self->xRollback;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xRollback
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xRollback(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(ruby_field);

  native_self->xRollback = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Module_xFindFunction_FIELD
/* get_xFindFunction
 *
 * Return Type: int (*)(sqlite3_vtab *, int, const char *, void (**)(sqlite3_context *, int, sqlite3_value **), void **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xFindFunction(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int (*)(sqlite3_vtab *, int, const char *, void (**)(sqlite3_context *, int, sqlite3_value **), void **) native_field = native_self->xFindFunction;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMAchar_PTR_COMMA_void_LPAREN_PTR_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN_COMMA_void_PTR_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xFindFunction
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, int, const char *, void (**)(sqlite3_context *, int, sqlite3_value **), void **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xFindFunction(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMAchar_PTR_COMMA_void_LPAREN_PTR_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN_COMMA_void_PTR_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vtab *, int, const char *, void (**)(sqlite3_context *, int, sqlite3_value **), void **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMAchar_PTR_COMMA_void_LPAREN_PTR_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN_COMMA_void_PTR_PTR_RPAREN(ruby_field);

  native_self->xFindFunction = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Module_xRename_FIELD
/* get_xRename
 *
 * Return Type: int (*)(sqlite3_vtab *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xRename(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int (*)(sqlite3_vtab *, const char *) native_field = native_self->xRename;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMAchar_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xRename
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xRename(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMAchar_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vtab *, const char *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMAchar_PTR_RPAREN(ruby_field);

  native_self->xRename = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Module_xSavepoint_FIELD
/* get_xSavepoint
 *
 * Return Type: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xSavepoint(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int (*)(sqlite3_vtab *, int) native_field = native_self->xSavepoint;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xSavepoint
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xSavepoint(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vtab *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(ruby_field);

  native_self->xSavepoint = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Module_xRelease_FIELD
/* get_xRelease
 *
 * Return Type: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xRelease(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int (*)(sqlite3_vtab *, int) native_field = native_self->xRelease;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xRelease
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xRelease(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vtab *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(ruby_field);

  native_self->xRelease = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Module_xRollbackTo_FIELD
/* get_xRollbackTo
 *
 * Return Type: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xRollbackTo(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);

  int (*)(sqlite3_vtab *, int) native_field = native_self->xRollbackTo;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xRollbackTo
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xRollbackTo(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_struct sqlite3_module(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vtab *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(ruby_field);

  native_self->xRollbackTo = native_field;

  return ruby_field;
}
#endif


void mrb_SQLite_Sqlite3Module_init(mrb_state* mrb) {
  struct RClass* Sqlite3Module_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Module", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Module_class, MRB_TT_DATA);

#if BIND_Sqlite3Module_INITIALIZE
  mrb_define_method(mrb, Sqlite3Module_class, "initialize", mrb_SQLite_Sqlite3Module_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3Module_class, "disown", mrb_SQLite_Sqlite3Module_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3Module_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3Module_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Sqlite3Module_iVersion_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "iVersion", mrb_SQLite_Sqlite3Module_get_iVersion, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "iVersion=", mrb_SQLite_Sqlite3Module_set_iVersion, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xCreate_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "xCreate", mrb_SQLite_Sqlite3Module_get_xCreate, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "xCreate=", mrb_SQLite_Sqlite3Module_set_xCreate, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xConnect_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "xConnect", mrb_SQLite_Sqlite3Module_get_xConnect, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "xConnect=", mrb_SQLite_Sqlite3Module_set_xConnect, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xBestIndex_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "xBestIndex", mrb_SQLite_Sqlite3Module_get_xBestIndex, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "xBestIndex=", mrb_SQLite_Sqlite3Module_set_xBestIndex, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xDisconnect_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "xDisconnect", mrb_SQLite_Sqlite3Module_get_xDisconnect, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "xDisconnect=", mrb_SQLite_Sqlite3Module_set_xDisconnect, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xDestroy_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "xDestroy", mrb_SQLite_Sqlite3Module_get_xDestroy, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "xDestroy=", mrb_SQLite_Sqlite3Module_set_xDestroy, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xOpen_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "xOpen", mrb_SQLite_Sqlite3Module_get_xOpen, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "xOpen=", mrb_SQLite_Sqlite3Module_set_xOpen, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xClose_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "xClose", mrb_SQLite_Sqlite3Module_get_xClose, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "xClose=", mrb_SQLite_Sqlite3Module_set_xClose, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xFilter_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "xFilter", mrb_SQLite_Sqlite3Module_get_xFilter, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "xFilter=", mrb_SQLite_Sqlite3Module_set_xFilter, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xNext_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "xNext", mrb_SQLite_Sqlite3Module_get_xNext, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "xNext=", mrb_SQLite_Sqlite3Module_set_xNext, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xEof_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "xEof", mrb_SQLite_Sqlite3Module_get_xEof, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "xEof=", mrb_SQLite_Sqlite3Module_set_xEof, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xColumn_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "xColumn", mrb_SQLite_Sqlite3Module_get_xColumn, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "xColumn=", mrb_SQLite_Sqlite3Module_set_xColumn, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xRowid_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "xRowid", mrb_SQLite_Sqlite3Module_get_xRowid, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "xRowid=", mrb_SQLite_Sqlite3Module_set_xRowid, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xUpdate_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "xUpdate", mrb_SQLite_Sqlite3Module_get_xUpdate, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "xUpdate=", mrb_SQLite_Sqlite3Module_set_xUpdate, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xBegin_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "xBegin", mrb_SQLite_Sqlite3Module_get_xBegin, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "xBegin=", mrb_SQLite_Sqlite3Module_set_xBegin, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xSync_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "xSync", mrb_SQLite_Sqlite3Module_get_xSync, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "xSync=", mrb_SQLite_Sqlite3Module_set_xSync, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xCommit_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "xCommit", mrb_SQLite_Sqlite3Module_get_xCommit, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "xCommit=", mrb_SQLite_Sqlite3Module_set_xCommit, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xRollback_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "xRollback", mrb_SQLite_Sqlite3Module_get_xRollback, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "xRollback=", mrb_SQLite_Sqlite3Module_set_xRollback, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xFindFunction_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "xFindFunction", mrb_SQLite_Sqlite3Module_get_xFindFunction, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "xFindFunction=", mrb_SQLite_Sqlite3Module_set_xFindFunction, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xRename_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "xRename", mrb_SQLite_Sqlite3Module_get_xRename, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "xRename=", mrb_SQLite_Sqlite3Module_set_xRename, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xSavepoint_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "xSavepoint", mrb_SQLite_Sqlite3Module_get_xSavepoint, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "xSavepoint=", mrb_SQLite_Sqlite3Module_set_xSavepoint, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xRelease_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "xRelease", mrb_SQLite_Sqlite3Module_get_xRelease, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "xRelease=", mrb_SQLite_Sqlite3Module_set_xRelease, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xRollbackTo_FIELD
  mrb_define_method(mrb, Sqlite3Module_class, "xRollbackTo", mrb_SQLite_Sqlite3Module_get_xRollbackTo, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Module_class, "xRollbackTo=", mrb_SQLite_Sqlite3Module_set_xRollbackTo, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
