/*
 * struct sqlite3_module
 * Defined in file sqlite3.h @ line 5468
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Module_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3Module_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Module_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module* native_object = (struct sqlite3_module*)calloc(1, sizeof(struct sqlite3_module));
  mruby_giftwrap_sqlite3_module_data_ptr(self, native_object);
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

#if BIND_Sqlite3Module_iVersion_FIELD_READER
/* get_iVersion
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_iVersion(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int native_iVersion = native_self->iVersion;

  mrb_value iVersion = mrb_fixnum_value(native_iVersion);

  return iVersion;
}
#endif

#if BIND_Sqlite3Module_iVersion_FIELD_WRITER
/* set_iVersion
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_iVersion(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_int native_iVersion;

  mrb_get_args(mrb, "i", &native_iVersion);

  native_self->iVersion = native_iVersion;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Module_xCreate_FIELD_READER
/* get_xCreate
 *
 * Return Type: int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xCreate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **) native_xCreate = native_self->xCreate;

  mrb_value xCreate = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(mrb, native_xCreate);

  return xCreate;
}
#endif

#if BIND_Sqlite3Module_xCreate_FIELD_WRITER
/* set_xCreate
 *
 * Parameters:
 * - value: int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xCreate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xCreate;

  mrb_get_args(mrb, "o", &xCreate);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(xCreate);

  int (*native_xCreate)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(xCreate);

  native_self->xCreate = native_xCreate;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Module_xConnect_FIELD_READER
/* get_xConnect
 *
 * Return Type: int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xConnect(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **) native_xConnect = native_self->xConnect;

  mrb_value xConnect = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(mrb, native_xConnect);

  return xConnect;
}
#endif

#if BIND_Sqlite3Module_xConnect_FIELD_WRITER
/* set_xConnect
 *
 * Parameters:
 * - value: int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xConnect(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xConnect;

  mrb_get_args(mrb, "o", &xConnect);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(xConnect);

  int (*native_xConnect)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(xConnect);

  native_self->xConnect = native_xConnect;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Module_xBestIndex_FIELD_READER
/* get_xBestIndex
 *
 * Return Type: int (*)(sqlite3_vtab *, sqlite3_index_info *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xBestIndex(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, sqlite3_index_info *) native_xBestIndex = native_self->xBestIndex;

  mrb_value xBestIndex = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_index_info_PTR_RPAREN(mrb, native_xBestIndex);

  return xBestIndex;
}
#endif

#if BIND_Sqlite3Module_xBestIndex_FIELD_WRITER
/* set_xBestIndex
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, sqlite3_index_info *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xBestIndex(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xBestIndex;

  mrb_get_args(mrb, "o", &xBestIndex);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_index_info_PTR_RPAREN(xBestIndex);

  int (*native_xBestIndex)(sqlite3_vtab *, sqlite3_index_info *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_index_info_PTR_RPAREN(xBestIndex);

  native_self->xBestIndex = native_xBestIndex;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Module_xDisconnect_FIELD_READER
/* get_xDisconnect
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xDisconnect(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_xDisconnect = native_self->xDisconnect;

  mrb_value xDisconnect = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_xDisconnect);

  return xDisconnect;
}
#endif

#if BIND_Sqlite3Module_xDisconnect_FIELD_WRITER
/* set_xDisconnect
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xDisconnect(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xDisconnect;

  mrb_get_args(mrb, "o", &xDisconnect);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xDisconnect);

  int (*native_xDisconnect)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xDisconnect);

  native_self->xDisconnect = native_xDisconnect;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Module_xDestroy_FIELD_READER
/* get_xDestroy
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xDestroy(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_xDestroy = native_self->xDestroy;

  mrb_value xDestroy = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_xDestroy);

  return xDestroy;
}
#endif

#if BIND_Sqlite3Module_xDestroy_FIELD_WRITER
/* set_xDestroy
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xDestroy(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xDestroy;

  mrb_get_args(mrb, "o", &xDestroy);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xDestroy);

  int (*native_xDestroy)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xDestroy);

  native_self->xDestroy = native_xDestroy;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Module_xOpen_FIELD_READER
/* get_xOpen
 *
 * Return Type: int (*)(sqlite3_vtab *, sqlite3_vtab_cursor **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xOpen(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, sqlite3_vtab_cursor **) native_xOpen = native_self->xOpen;

  mrb_value xOpen = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_vtab_cursor_PTR_PTR_RPAREN(mrb, native_xOpen);

  return xOpen;
}
#endif

#if BIND_Sqlite3Module_xOpen_FIELD_WRITER
/* set_xOpen
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, sqlite3_vtab_cursor **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xOpen(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xOpen;

  mrb_get_args(mrb, "o", &xOpen);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_vtab_cursor_PTR_PTR_RPAREN(xOpen);

  int (*native_xOpen)(sqlite3_vtab *, sqlite3_vtab_cursor **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_vtab_cursor_PTR_PTR_RPAREN(xOpen);

  native_self->xOpen = native_xOpen;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Module_xClose_FIELD_READER
/* get_xClose
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xClose(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *) native_xClose = native_self->xClose;

  mrb_value xClose = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(mrb, native_xClose);

  return xClose;
}
#endif

#if BIND_Sqlite3Module_xClose_FIELD_WRITER
/* set_xClose
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xClose(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xClose;

  mrb_get_args(mrb, "o", &xClose);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(xClose);

  int (*native_xClose)(sqlite3_vtab_cursor *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(xClose);

  native_self->xClose = native_xClose;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Module_xFilter_FIELD_READER
/* get_xFilter
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *, int, const char *, int, sqlite3_value **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xFilter(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *, int, const char *, int, sqlite3_value **) native_xFilter = native_self->xFilter;

  mrb_value xFilter = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_intCOMMAchar_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(mrb, native_xFilter);

  return xFilter;
}
#endif

#if BIND_Sqlite3Module_xFilter_FIELD_WRITER
/* set_xFilter
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *, int, const char *, int, sqlite3_value **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xFilter(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xFilter;

  mrb_get_args(mrb, "o", &xFilter);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_intCOMMAchar_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(xFilter);

  int (*native_xFilter)(sqlite3_vtab_cursor *, int, const char *, int, sqlite3_value **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_intCOMMAchar_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(xFilter);

  native_self->xFilter = native_xFilter;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Module_xNext_FIELD_READER
/* get_xNext
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xNext(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *) native_xNext = native_self->xNext;

  mrb_value xNext = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(mrb, native_xNext);

  return xNext;
}
#endif

#if BIND_Sqlite3Module_xNext_FIELD_WRITER
/* set_xNext
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xNext(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xNext;

  mrb_get_args(mrb, "o", &xNext);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(xNext);

  int (*native_xNext)(sqlite3_vtab_cursor *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(xNext);

  native_self->xNext = native_xNext;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Module_xEof_FIELD_READER
/* get_xEof
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xEof(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *) native_xEof = native_self->xEof;

  mrb_value xEof = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(mrb, native_xEof);

  return xEof;
}
#endif

#if BIND_Sqlite3Module_xEof_FIELD_WRITER
/* set_xEof
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xEof(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xEof;

  mrb_get_args(mrb, "o", &xEof);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(xEof);

  int (*native_xEof)(sqlite3_vtab_cursor *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(xEof);

  native_self->xEof = native_xEof;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Module_xColumn_FIELD_READER
/* get_xColumn
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *, sqlite3_context *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xColumn(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *, sqlite3_context *, int) native_xColumn = native_self->xColumn;

  mrb_value xColumn = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_context_PTR_COMMA_int_RPAREN(mrb, native_xColumn);

  return xColumn;
}
#endif

#if BIND_Sqlite3Module_xColumn_FIELD_WRITER
/* set_xColumn
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *, sqlite3_context *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xColumn(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xColumn;

  mrb_get_args(mrb, "o", &xColumn);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_context_PTR_COMMA_int_RPAREN(xColumn);

  int (*native_xColumn)(sqlite3_vtab_cursor *, sqlite3_context *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_context_PTR_COMMA_int_RPAREN(xColumn);

  native_self->xColumn = native_xColumn;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Module_xRowid_FIELD_READER
/* get_xRowid
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xRowid(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *, sqlite3_int64 *) native_xRowid = native_self->xRowid;

  mrb_value xRowid = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_int64_PTR_RPAREN(mrb, native_xRowid);

  return xRowid;
}
#endif

#if BIND_Sqlite3Module_xRowid_FIELD_WRITER
/* set_xRowid
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xRowid(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xRowid;

  mrb_get_args(mrb, "o", &xRowid);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_int64_PTR_RPAREN(xRowid);

  int (*native_xRowid)(sqlite3_vtab_cursor *, sqlite3_int64 *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_int64_PTR_RPAREN(xRowid);

  native_self->xRowid = native_xRowid;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Module_xUpdate_FIELD_READER
/* get_xUpdate
 *
 * Return Type: int (*)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xUpdate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *) native_xUpdate = native_self->xUpdate;

  mrb_value xUpdate = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_COMMA_sqlite3_int64_PTR_RPAREN(mrb, native_xUpdate);

  return xUpdate;
}
#endif

#if BIND_Sqlite3Module_xUpdate_FIELD_WRITER
/* set_xUpdate
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xUpdate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xUpdate;

  mrb_get_args(mrb, "o", &xUpdate);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_COMMA_sqlite3_int64_PTR_RPAREN(xUpdate);

  int (*native_xUpdate)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_COMMA_sqlite3_int64_PTR_RPAREN(xUpdate);

  native_self->xUpdate = native_xUpdate;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Module_xBegin_FIELD_READER
/* get_xBegin
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xBegin(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_xBegin = native_self->xBegin;

  mrb_value xBegin = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_xBegin);

  return xBegin;
}
#endif

#if BIND_Sqlite3Module_xBegin_FIELD_WRITER
/* set_xBegin
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xBegin(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xBegin;

  mrb_get_args(mrb, "o", &xBegin);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xBegin);

  int (*native_xBegin)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xBegin);

  native_self->xBegin = native_xBegin;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Module_xSync_FIELD_READER
/* get_xSync
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xSync(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_xSync = native_self->xSync;

  mrb_value xSync = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_xSync);

  return xSync;
}
#endif

#if BIND_Sqlite3Module_xSync_FIELD_WRITER
/* set_xSync
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xSync(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xSync;

  mrb_get_args(mrb, "o", &xSync);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xSync);

  int (*native_xSync)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xSync);

  native_self->xSync = native_xSync;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Module_xCommit_FIELD_READER
/* get_xCommit
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xCommit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_xCommit = native_self->xCommit;

  mrb_value xCommit = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_xCommit);

  return xCommit;
}
#endif

#if BIND_Sqlite3Module_xCommit_FIELD_WRITER
/* set_xCommit
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xCommit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xCommit;

  mrb_get_args(mrb, "o", &xCommit);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xCommit);

  int (*native_xCommit)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xCommit);

  native_self->xCommit = native_xCommit;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Module_xRollback_FIELD_READER
/* get_xRollback
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xRollback(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_xRollback = native_self->xRollback;

  mrb_value xRollback = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_xRollback);

  return xRollback;
}
#endif

#if BIND_Sqlite3Module_xRollback_FIELD_WRITER
/* set_xRollback
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xRollback(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xRollback;

  mrb_get_args(mrb, "o", &xRollback);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xRollback);

  int (*native_xRollback)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xRollback);

  native_self->xRollback = native_xRollback;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Module_xFindFunction_FIELD_READER
/* get_xFindFunction
 *
 * Return Type: int (*)(sqlite3_vtab *, int, const char *, void (**)(sqlite3_context *, int, sqlite3_value **), void **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xFindFunction(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, int, const char *, void (**)(sqlite3_context *, int, sqlite3_value **), void **) native_xFindFunction = native_self->xFindFunction;

  mrb_value xFindFunction = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMAchar_PTR_COMMA_void_LPAREN_PTR_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN_COMMA_void_PTR_PTR_RPAREN(mrb, native_xFindFunction);

  return xFindFunction;
}
#endif

#if BIND_Sqlite3Module_xFindFunction_FIELD_WRITER
/* set_xFindFunction
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, int, const char *, void (**)(sqlite3_context *, int, sqlite3_value **), void **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xFindFunction(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xFindFunction;

  mrb_get_args(mrb, "o", &xFindFunction);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMAchar_PTR_COMMA_void_LPAREN_PTR_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN_COMMA_void_PTR_PTR_RPAREN(xFindFunction);

  int (*native_xFindFunction)(sqlite3_vtab *, int, const char *, void (**)(sqlite3_context *, int, sqlite3_value **), void **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMAchar_PTR_COMMA_void_LPAREN_PTR_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN_COMMA_void_PTR_PTR_RPAREN(xFindFunction);

  native_self->xFindFunction = native_xFindFunction;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Module_xRename_FIELD_READER
/* get_xRename
 *
 * Return Type: int (*)(sqlite3_vtab *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xRename(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, const char *) native_xRename = native_self->xRename;

  mrb_value xRename = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMAchar_PTR_RPAREN(mrb, native_xRename);

  return xRename;
}
#endif

#if BIND_Sqlite3Module_xRename_FIELD_WRITER
/* set_xRename
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xRename(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xRename;

  mrb_get_args(mrb, "o", &xRename);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMAchar_PTR_RPAREN(xRename);

  int (*native_xRename)(sqlite3_vtab *, const char *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMAchar_PTR_RPAREN(xRename);

  native_self->xRename = native_xRename;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Module_xSavepoint_FIELD_READER
/* get_xSavepoint
 *
 * Return Type: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xSavepoint(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, int) native_xSavepoint = native_self->xSavepoint;

  mrb_value xSavepoint = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(mrb, native_xSavepoint);

  return xSavepoint;
}
#endif

#if BIND_Sqlite3Module_xSavepoint_FIELD_WRITER
/* set_xSavepoint
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xSavepoint(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xSavepoint;

  mrb_get_args(mrb, "o", &xSavepoint);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(xSavepoint);

  int (*native_xSavepoint)(sqlite3_vtab *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(xSavepoint);

  native_self->xSavepoint = native_xSavepoint;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Module_xRelease_FIELD_READER
/* get_xRelease
 *
 * Return Type: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xRelease(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, int) native_xRelease = native_self->xRelease;

  mrb_value xRelease = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(mrb, native_xRelease);

  return xRelease;
}
#endif

#if BIND_Sqlite3Module_xRelease_FIELD_WRITER
/* set_xRelease
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xRelease(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xRelease;

  mrb_get_args(mrb, "o", &xRelease);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(xRelease);

  int (*native_xRelease)(sqlite3_vtab *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(xRelease);

  native_self->xRelease = native_xRelease;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Module_xRollbackTo_FIELD_READER
/* get_xRollbackTo
 *
 * Return Type: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xRollbackTo(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, int) native_xRollbackTo = native_self->xRollbackTo;

  mrb_value xRollbackTo = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(mrb, native_xRollbackTo);

  return xRollbackTo;
}
#endif

#if BIND_Sqlite3Module_xRollbackTo_FIELD_WRITER
/* set_xRollbackTo
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xRollbackTo(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xRollbackTo;

  mrb_get_args(mrb, "o", &xRollbackTo);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(xRollbackTo);

  int (*native_xRollbackTo)(sqlite3_vtab *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(xRollbackTo);

  native_self->xRollbackTo = native_xRollbackTo;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
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
#if BIND_Sqlite3Module_iVersion_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "iVersion", mrb_SQLite_Sqlite3Module_get_iVersion, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_iVersion_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "iVersion=", mrb_SQLite_Sqlite3Module_set_iVersion, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xCreate_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xCreate", mrb_SQLite_Sqlite3Module_get_xCreate, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xCreate_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xCreate=", mrb_SQLite_Sqlite3Module_set_xCreate, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xConnect_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xConnect", mrb_SQLite_Sqlite3Module_get_xConnect, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xConnect_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xConnect=", mrb_SQLite_Sqlite3Module_set_xConnect, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xBestIndex_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xBestIndex", mrb_SQLite_Sqlite3Module_get_xBestIndex, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xBestIndex_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xBestIndex=", mrb_SQLite_Sqlite3Module_set_xBestIndex, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xDisconnect_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xDisconnect", mrb_SQLite_Sqlite3Module_get_xDisconnect, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xDisconnect_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xDisconnect=", mrb_SQLite_Sqlite3Module_set_xDisconnect, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xDestroy_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xDestroy", mrb_SQLite_Sqlite3Module_get_xDestroy, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xDestroy_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xDestroy=", mrb_SQLite_Sqlite3Module_set_xDestroy, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xOpen_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xOpen", mrb_SQLite_Sqlite3Module_get_xOpen, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xOpen_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xOpen=", mrb_SQLite_Sqlite3Module_set_xOpen, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xClose_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xClose", mrb_SQLite_Sqlite3Module_get_xClose, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xClose_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xClose=", mrb_SQLite_Sqlite3Module_set_xClose, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xFilter_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xFilter", mrb_SQLite_Sqlite3Module_get_xFilter, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xFilter_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xFilter=", mrb_SQLite_Sqlite3Module_set_xFilter, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xNext_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xNext", mrb_SQLite_Sqlite3Module_get_xNext, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xNext_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xNext=", mrb_SQLite_Sqlite3Module_set_xNext, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xEof_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xEof", mrb_SQLite_Sqlite3Module_get_xEof, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xEof_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xEof=", mrb_SQLite_Sqlite3Module_set_xEof, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xColumn_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xColumn", mrb_SQLite_Sqlite3Module_get_xColumn, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xColumn_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xColumn=", mrb_SQLite_Sqlite3Module_set_xColumn, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xRowid_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xRowid", mrb_SQLite_Sqlite3Module_get_xRowid, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xRowid_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xRowid=", mrb_SQLite_Sqlite3Module_set_xRowid, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xUpdate_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xUpdate", mrb_SQLite_Sqlite3Module_get_xUpdate, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xUpdate_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xUpdate=", mrb_SQLite_Sqlite3Module_set_xUpdate, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xBegin_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xBegin", mrb_SQLite_Sqlite3Module_get_xBegin, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xBegin_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xBegin=", mrb_SQLite_Sqlite3Module_set_xBegin, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xSync_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xSync", mrb_SQLite_Sqlite3Module_get_xSync, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xSync_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xSync=", mrb_SQLite_Sqlite3Module_set_xSync, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xCommit_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xCommit", mrb_SQLite_Sqlite3Module_get_xCommit, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xCommit_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xCommit=", mrb_SQLite_Sqlite3Module_set_xCommit, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xRollback_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xRollback", mrb_SQLite_Sqlite3Module_get_xRollback, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xRollback_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xRollback=", mrb_SQLite_Sqlite3Module_set_xRollback, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xFindFunction_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xFindFunction", mrb_SQLite_Sqlite3Module_get_xFindFunction, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xFindFunction_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xFindFunction=", mrb_SQLite_Sqlite3Module_set_xFindFunction, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xRename_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xRename", mrb_SQLite_Sqlite3Module_get_xRename, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xRename_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xRename=", mrb_SQLite_Sqlite3Module_set_xRename, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xSavepoint_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xSavepoint", mrb_SQLite_Sqlite3Module_get_xSavepoint, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xSavepoint_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xSavepoint=", mrb_SQLite_Sqlite3Module_set_xSavepoint, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xRelease_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xRelease", mrb_SQLite_Sqlite3Module_get_xRelease, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xRelease_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xRelease=", mrb_SQLite_Sqlite3Module_set_xRelease, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xRollbackTo_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xRollbackTo", mrb_SQLite_Sqlite3Module_get_xRollbackTo, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xRollbackTo_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xRollbackTo=", mrb_SQLite_Sqlite3Module_set_xRollbackTo, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
