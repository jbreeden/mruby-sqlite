/*
 * struct sqlite3_vfs
 * Defined in file sqlite3.h @ line 1167
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Vfs_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3Vfs_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Vfs_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs* native_object = (struct sqlite3_vfs*)calloc(1, sizeof(struct sqlite3_vfs));
  mruby_giftwrap_sqlite3_vfs_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SQLite_Sqlite3Vfs_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3Vfs.disown only accepts objects of type SQLite::Sqlite3Vfs");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SQLite_Sqlite3Vfs_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3Vfs.belongs_to_ruby only accepts objects of type SQLite::Sqlite3Vfs");
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

#if BIND_Sqlite3Vfs_iVersion_FIELD_READER
/* get_iVersion
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_iVersion(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int native_iVersion = native_self->iVersion;

  mrb_value iVersion = mrb_fixnum_value(native_iVersion);

  return iVersion;
}
#endif

#if BIND_Sqlite3Vfs_iVersion_FIELD_WRITER
/* set_iVersion
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_iVersion(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_int native_iVersion;

  mrb_get_args(mrb, "i", &native_iVersion);

  native_self->iVersion = native_iVersion;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vfs_szOsFile_FIELD_READER
/* get_szOsFile
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_szOsFile(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int native_szOsFile = native_self->szOsFile;

  mrb_value szOsFile = mrb_fixnum_value(native_szOsFile);

  return szOsFile;
}
#endif

#if BIND_Sqlite3Vfs_szOsFile_FIELD_WRITER
/* set_szOsFile
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_szOsFile(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_int native_szOsFile;

  mrb_get_args(mrb, "i", &native_szOsFile);

  native_self->szOsFile = native_szOsFile;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vfs_mxPathname_FIELD_READER
/* get_mxPathname
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_mxPathname(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int native_mxPathname = native_self->mxPathname;

  mrb_value mxPathname = mrb_fixnum_value(native_mxPathname);

  return mxPathname;
}
#endif

#if BIND_Sqlite3Vfs_mxPathname_FIELD_WRITER
/* set_mxPathname
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_mxPathname(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_int native_mxPathname;

  mrb_get_args(mrb, "i", &native_mxPathname);

  native_self->mxPathname = native_mxPathname;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vfs_pNext_FIELD_READER
/* get_pNext
 *
 * Return Type: sqlite3_vfs *
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_pNext(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  sqlite3_vfs * native_pNext = native_self->pNext;

  mrb_value pNext = (native_pNext == NULL ? mrb_nil_value() : mruby_box_sqlite3_vfs(mrb, native_pNext));

  return pNext;
}
#endif

#if BIND_Sqlite3Vfs_pNext_FIELD_WRITER
/* set_pNext
 *
 * Parameters:
 * - value: sqlite3_vfs *
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_pNext(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value pNext;

  mrb_get_args(mrb, "o", &pNext);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, pNext, Sqlite3Vfs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vfs expected");
    return mrb_nil_value();
  }

  sqlite3_vfs * native_pNext = (mrb_nil_p(pNext) ? NULL : mruby_unbox_sqlite3_vfs(pNext));

  native_self->pNext = native_pNext;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vfs_zName_FIELD_READER
/* get_zName
 *
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_zName(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  const char * native_zName = native_self->zName;

  mrb_value zName = mrb_str_new_cstr(mrb, native_zName);

  return zName;
}
#endif

#if BIND_Sqlite3Vfs_zName_FIELD_WRITER
/* set_zName
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_zName(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  char * native_zName = NULL;

  mrb_get_args(mrb, "z!", &native_zName);

  native_self->zName = native_zName;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vfs_pAppData_FIELD_READER
/* get_pAppData
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_pAppData(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  void * native_pAppData = native_self->pAppData;

  mrb_value pAppData = TODO_mruby_box_void_PTR(mrb, native_pAppData);

  return pAppData;
}
#endif

#if BIND_Sqlite3Vfs_pAppData_FIELD_WRITER
/* set_pAppData
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_pAppData(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value pAppData;

  mrb_get_args(mrb, "o", &pAppData);

  /* type checking */
  TODO_type_check_void_PTR(pAppData);

  void * native_pAppData = TODO_mruby_unbox_void_PTR(pAppData);

  native_self->pAppData = native_pAppData;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vfs_xOpen_FIELD_READER
/* get_xOpen
 *
 * Return Type: int (*)(sqlite3_vfs *, const char *, sqlite3_file *, int, int *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xOpen(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, const char *, sqlite3_file *, int, int *) native_xOpen = native_self->xOpen;

  mrb_value xOpen = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_sqlite3_file_PTR_COMMA_intCOMMA_int_PTR_RPAREN(mrb, native_xOpen);

  return xOpen;
}
#endif

#if BIND_Sqlite3Vfs_xOpen_FIELD_WRITER
/* set_xOpen
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, const char *, sqlite3_file *, int, int *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xOpen(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xOpen;

  mrb_get_args(mrb, "o", &xOpen);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_sqlite3_file_PTR_COMMA_intCOMMA_int_PTR_RPAREN(xOpen);

  int (*native_xOpen)(sqlite3_vfs *, const char *, sqlite3_file *, int, int *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_sqlite3_file_PTR_COMMA_intCOMMA_int_PTR_RPAREN(xOpen);

  native_self->xOpen = native_xOpen;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vfs_xDelete_FIELD_READER
/* get_xDelete
 *
 * Return Type: int (*)(sqlite3_vfs *, const char *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xDelete(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, const char *, int) native_xDelete = native_self->xDelete;

  mrb_value xDelete = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_int_RPAREN(mrb, native_xDelete);

  return xDelete;
}
#endif

#if BIND_Sqlite3Vfs_xDelete_FIELD_WRITER
/* set_xDelete
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, const char *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xDelete(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xDelete;

  mrb_get_args(mrb, "o", &xDelete);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_int_RPAREN(xDelete);

  int (*native_xDelete)(sqlite3_vfs *, const char *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_int_RPAREN(xDelete);

  native_self->xDelete = native_xDelete;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vfs_xAccess_FIELD_READER
/* get_xAccess
 *
 * Return Type: int (*)(sqlite3_vfs *, const char *, int, int *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xAccess(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, const char *, int, int *) native_xAccess = native_self->xAccess;

  mrb_value xAccess = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_intCOMMA_int_PTR_RPAREN(mrb, native_xAccess);

  return xAccess;
}
#endif

#if BIND_Sqlite3Vfs_xAccess_FIELD_WRITER
/* set_xAccess
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, const char *, int, int *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xAccess(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xAccess;

  mrb_get_args(mrb, "o", &xAccess);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_intCOMMA_int_PTR_RPAREN(xAccess);

  int (*native_xAccess)(sqlite3_vfs *, const char *, int, int *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_intCOMMA_int_PTR_RPAREN(xAccess);

  native_self->xAccess = native_xAccess;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vfs_xFullPathname_FIELD_READER
/* get_xFullPathname
 *
 * Return Type: int (*)(sqlite3_vfs *, const char *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xFullPathname(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, const char *, int, char *) native_xFullPathname = native_self->xFullPathname;

  mrb_value xFullPathname = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_intCOMMA_char_PTR_RPAREN(mrb, native_xFullPathname);

  return xFullPathname;
}
#endif

#if BIND_Sqlite3Vfs_xFullPathname_FIELD_WRITER
/* set_xFullPathname
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, const char *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xFullPathname(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xFullPathname;

  mrb_get_args(mrb, "o", &xFullPathname);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_intCOMMA_char_PTR_RPAREN(xFullPathname);

  int (*native_xFullPathname)(sqlite3_vfs *, const char *, int, char *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_intCOMMA_char_PTR_RPAREN(xFullPathname);

  native_self->xFullPathname = native_xFullPathname;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vfs_xDlOpen_FIELD_READER
/* get_xDlOpen
 *
 * Return Type: void *(*)(sqlite3_vfs *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xDlOpen(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  void *(*)(sqlite3_vfs *, const char *) native_xDlOpen = native_self->xDlOpen;

  mrb_value xDlOpen = TODO_mruby_box_void_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_RPAREN(mrb, native_xDlOpen);

  return xDlOpen;
}
#endif

#if BIND_Sqlite3Vfs_xDlOpen_FIELD_WRITER
/* set_xDlOpen
 *
 * Parameters:
 * - value: void *(*)(sqlite3_vfs *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xDlOpen(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xDlOpen;

  mrb_get_args(mrb, "o", &xDlOpen);

  /* type checking */
  TODO_type_check_void_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_RPAREN(xDlOpen);

  void *(*native_xDlOpen)(sqlite3_vfs *, const char *) = TODO_mruby_unbox_void_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_RPAREN(xDlOpen);

  native_self->xDlOpen = native_xDlOpen;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vfs_xDlError_FIELD_READER
/* get_xDlError
 *
 * Return Type: void (*)(sqlite3_vfs *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xDlError(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  void (*)(sqlite3_vfs *, int, char *) native_xDlError = native_self->xDlError;

  mrb_value xDlError = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(mrb, native_xDlError);

  return xDlError;
}
#endif

#if BIND_Sqlite3Vfs_xDlError_FIELD_WRITER
/* set_xDlError
 *
 * Parameters:
 * - value: void (*)(sqlite3_vfs *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xDlError(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xDlError;

  mrb_get_args(mrb, "o", &xDlError);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(xDlError);

  void (*native_xDlError)(sqlite3_vfs *, int, char *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(xDlError);

  native_self->xDlError = native_xDlError;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vfs_xDlSym_FIELD_READER
/* get_xDlSym
 *
 * Return Type: void (*(*)(sqlite3_vfs *, void *, const char *))(void)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xDlSym(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  void (*(*)(sqlite3_vfs *, void *, const char *))(void) native_xDlSym = native_self->xDlSym;

  mrb_value xDlSym = TODO_mruby_box_void_LPAREN_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_void_PTR_COMMAchar_PTR_RPAREN_RPAREN_LPAREN_void_RPAREN(mrb, native_xDlSym);

  return xDlSym;
}
#endif

#if BIND_Sqlite3Vfs_xDlSym_FIELD_WRITER
/* set_xDlSym
 *
 * Parameters:
 * - value: void (*(*)(sqlite3_vfs *, void *, const char *))(void)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xDlSym(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xDlSym;

  mrb_get_args(mrb, "o", &xDlSym);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_void_PTR_COMMAchar_PTR_RPAREN_RPAREN_LPAREN_void_RPAREN(xDlSym);

  void (*(*native_xDlSym)(sqlite3_vfs *, void *, const char *))(void) = TODO_mruby_unbox_void_LPAREN_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_void_PTR_COMMAchar_PTR_RPAREN_RPAREN_LPAREN_void_RPAREN(xDlSym);

  native_self->xDlSym = native_xDlSym;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vfs_xDlClose_FIELD_READER
/* get_xDlClose
 *
 * Return Type: void (*)(sqlite3_vfs *, void *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xDlClose(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  void (*)(sqlite3_vfs *, void *) native_xDlClose = native_self->xDlClose;

  mrb_value xDlClose = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_void_PTR_RPAREN(mrb, native_xDlClose);

  return xDlClose;
}
#endif

#if BIND_Sqlite3Vfs_xDlClose_FIELD_WRITER
/* set_xDlClose
 *
 * Parameters:
 * - value: void (*)(sqlite3_vfs *, void *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xDlClose(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xDlClose;

  mrb_get_args(mrb, "o", &xDlClose);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_void_PTR_RPAREN(xDlClose);

  void (*native_xDlClose)(sqlite3_vfs *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_void_PTR_RPAREN(xDlClose);

  native_self->xDlClose = native_xDlClose;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vfs_xRandomness_FIELD_READER
/* get_xRandomness
 *
 * Return Type: int (*)(sqlite3_vfs *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xRandomness(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, int, char *) native_xRandomness = native_self->xRandomness;

  mrb_value xRandomness = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(mrb, native_xRandomness);

  return xRandomness;
}
#endif

#if BIND_Sqlite3Vfs_xRandomness_FIELD_WRITER
/* set_xRandomness
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xRandomness(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xRandomness;

  mrb_get_args(mrb, "o", &xRandomness);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(xRandomness);

  int (*native_xRandomness)(sqlite3_vfs *, int, char *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(xRandomness);

  native_self->xRandomness = native_xRandomness;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vfs_xSleep_FIELD_READER
/* get_xSleep
 *
 * Return Type: int (*)(sqlite3_vfs *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xSleep(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, int) native_xSleep = native_self->xSleep;

  mrb_value xSleep = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_int_RPAREN(mrb, native_xSleep);

  return xSleep;
}
#endif

#if BIND_Sqlite3Vfs_xSleep_FIELD_WRITER
/* set_xSleep
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xSleep(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xSleep;

  mrb_get_args(mrb, "o", &xSleep);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_int_RPAREN(xSleep);

  int (*native_xSleep)(sqlite3_vfs *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_int_RPAREN(xSleep);

  native_self->xSleep = native_xSleep;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vfs_xCurrentTime_FIELD_READER
/* get_xCurrentTime
 *
 * Return Type: int (*)(sqlite3_vfs *, double *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xCurrentTime(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, double *) native_xCurrentTime = native_self->xCurrentTime;

  mrb_value xCurrentTime = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_double_PTR_RPAREN(mrb, native_xCurrentTime);

  return xCurrentTime;
}
#endif

#if BIND_Sqlite3Vfs_xCurrentTime_FIELD_WRITER
/* set_xCurrentTime
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, double *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xCurrentTime(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xCurrentTime;

  mrb_get_args(mrb, "o", &xCurrentTime);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_double_PTR_RPAREN(xCurrentTime);

  int (*native_xCurrentTime)(sqlite3_vfs *, double *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_double_PTR_RPAREN(xCurrentTime);

  native_self->xCurrentTime = native_xCurrentTime;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vfs_xGetLastError_FIELD_READER
/* get_xGetLastError
 *
 * Return Type: int (*)(sqlite3_vfs *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xGetLastError(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, int, char *) native_xGetLastError = native_self->xGetLastError;

  mrb_value xGetLastError = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(mrb, native_xGetLastError);

  return xGetLastError;
}
#endif

#if BIND_Sqlite3Vfs_xGetLastError_FIELD_WRITER
/* set_xGetLastError
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xGetLastError(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xGetLastError;

  mrb_get_args(mrb, "o", &xGetLastError);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(xGetLastError);

  int (*native_xGetLastError)(sqlite3_vfs *, int, char *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(xGetLastError);

  native_self->xGetLastError = native_xGetLastError;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vfs_xCurrentTimeInt64_FIELD_READER
/* get_xCurrentTimeInt64
 *
 * Return Type: int (*)(sqlite3_vfs *, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xCurrentTimeInt64(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, sqlite3_int64 *) native_xCurrentTimeInt64 = native_self->xCurrentTimeInt64;

  mrb_value xCurrentTimeInt64 = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_sqlite3_int64_PTR_RPAREN(mrb, native_xCurrentTimeInt64);

  return xCurrentTimeInt64;
}
#endif

#if BIND_Sqlite3Vfs_xCurrentTimeInt64_FIELD_WRITER
/* set_xCurrentTimeInt64
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xCurrentTimeInt64(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xCurrentTimeInt64;

  mrb_get_args(mrb, "o", &xCurrentTimeInt64);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_sqlite3_int64_PTR_RPAREN(xCurrentTimeInt64);

  int (*native_xCurrentTimeInt64)(sqlite3_vfs *, sqlite3_int64 *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_sqlite3_int64_PTR_RPAREN(xCurrentTimeInt64);

  native_self->xCurrentTimeInt64 = native_xCurrentTimeInt64;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vfs_xSetSystemCall_FIELD_READER
/* get_xSetSystemCall
 *
 * Return Type: int (*)(sqlite3_vfs *, const char *, sqlite3_syscall_ptr)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xSetSystemCall(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, const char *, sqlite3_syscall_ptr) native_xSetSystemCall = native_self->xSetSystemCall;

  mrb_value xSetSystemCall = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_sqlite3_syscall_ptr_RPAREN(mrb, native_xSetSystemCall);

  return xSetSystemCall;
}
#endif

#if BIND_Sqlite3Vfs_xSetSystemCall_FIELD_WRITER
/* set_xSetSystemCall
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, const char *, sqlite3_syscall_ptr)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xSetSystemCall(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xSetSystemCall;

  mrb_get_args(mrb, "o", &xSetSystemCall);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_sqlite3_syscall_ptr_RPAREN(xSetSystemCall);

  int (*native_xSetSystemCall)(sqlite3_vfs *, const char *, sqlite3_syscall_ptr) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_sqlite3_syscall_ptr_RPAREN(xSetSystemCall);

  native_self->xSetSystemCall = native_xSetSystemCall;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vfs_xGetSystemCall_FIELD_READER
/* get_xGetSystemCall
 *
 * Return Type: sqlite3_syscall_ptr (*)(sqlite3_vfs *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xGetSystemCall(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  sqlite3_syscall_ptr (*)(sqlite3_vfs *, const char *) native_xGetSystemCall = native_self->xGetSystemCall;

  mrb_value xGetSystemCall = TODO_mruby_box_sqlite3_syscall_ptr_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_RPAREN(mrb, native_xGetSystemCall);

  return xGetSystemCall;
}
#endif

#if BIND_Sqlite3Vfs_xGetSystemCall_FIELD_WRITER
/* set_xGetSystemCall
 *
 * Parameters:
 * - value: sqlite3_syscall_ptr (*)(sqlite3_vfs *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xGetSystemCall(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xGetSystemCall;

  mrb_get_args(mrb, "o", &xGetSystemCall);

  /* type checking */
  TODO_type_check_sqlite3_syscall_ptr_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_RPAREN(xGetSystemCall);

  sqlite3_syscall_ptr (*native_xGetSystemCall)(sqlite3_vfs *, const char *) = TODO_mruby_unbox_sqlite3_syscall_ptr_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_RPAREN(xGetSystemCall);

  native_self->xGetSystemCall = native_xGetSystemCall;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif

#if BIND_Sqlite3Vfs_xNextSystemCall_FIELD_READER
/* get_xNextSystemCall
 *
 * Return Type: const char *(*)(sqlite3_vfs *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xNextSystemCall(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  const char *(*)(sqlite3_vfs *, const char *) native_xNextSystemCall = native_self->xNextSystemCall;

  mrb_value xNextSystemCall = TODO_mruby_box_char_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_const_char_PTR_RPAREN(mrb, native_xNextSystemCall);

  return xNextSystemCall;
}
#endif

#if BIND_Sqlite3Vfs_xNextSystemCall_FIELD_WRITER
/* set_xNextSystemCall
 *
 * Parameters:
 * - value: const char *(*)(sqlite3_vfs *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xNextSystemCall(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xNextSystemCall;

  mrb_get_args(mrb, "o", &xNextSystemCall);

  /* type checking */
  TODO_type_check_char_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_const_char_PTR_RPAREN(xNextSystemCall);

  const char *(*native_xNextSystemCall)(sqlite3_vfs *, const char *) = TODO_mruby_unbox_char_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_const_char_PTR_RPAREN(xNextSystemCall);

  native_self->xNextSystemCall = native_xNextSystemCall;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif


void mrb_SQLite_Sqlite3Vfs_init(mrb_state* mrb) {
  struct RClass* Sqlite3Vfs_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Vfs", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Vfs_class, MRB_TT_DATA);

#if BIND_Sqlite3Vfs_INITIALIZE
  mrb_define_method(mrb, Sqlite3Vfs_class, "initialize", mrb_SQLite_Sqlite3Vfs_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3Vfs_class, "disown", mrb_SQLite_Sqlite3Vfs_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3Vfs_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3Vfs_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Sqlite3Vfs_iVersion_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vfs_class, "iVersion", mrb_SQLite_Sqlite3Vfs_get_iVersion, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vfs_iVersion_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vfs_class, "iVersion=", mrb_SQLite_Sqlite3Vfs_set_iVersion, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_szOsFile_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vfs_class, "szOsFile", mrb_SQLite_Sqlite3Vfs_get_szOsFile, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vfs_szOsFile_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vfs_class, "szOsFile=", mrb_SQLite_Sqlite3Vfs_set_szOsFile, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_mxPathname_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vfs_class, "mxPathname", mrb_SQLite_Sqlite3Vfs_get_mxPathname, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vfs_mxPathname_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vfs_class, "mxPathname=", mrb_SQLite_Sqlite3Vfs_set_mxPathname, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_pNext_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vfs_class, "pNext", mrb_SQLite_Sqlite3Vfs_get_pNext, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vfs_pNext_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vfs_class, "pNext=", mrb_SQLite_Sqlite3Vfs_set_pNext, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_zName_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vfs_class, "zName", mrb_SQLite_Sqlite3Vfs_get_zName, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vfs_zName_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vfs_class, "zName=", mrb_SQLite_Sqlite3Vfs_set_zName, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_pAppData_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vfs_class, "pAppData", mrb_SQLite_Sqlite3Vfs_get_pAppData, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vfs_pAppData_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vfs_class, "pAppData=", mrb_SQLite_Sqlite3Vfs_set_pAppData, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xOpen_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xOpen", mrb_SQLite_Sqlite3Vfs_get_xOpen, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vfs_xOpen_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xOpen=", mrb_SQLite_Sqlite3Vfs_set_xOpen, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xDelete_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xDelete", mrb_SQLite_Sqlite3Vfs_get_xDelete, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vfs_xDelete_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xDelete=", mrb_SQLite_Sqlite3Vfs_set_xDelete, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xAccess_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xAccess", mrb_SQLite_Sqlite3Vfs_get_xAccess, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vfs_xAccess_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xAccess=", mrb_SQLite_Sqlite3Vfs_set_xAccess, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xFullPathname_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xFullPathname", mrb_SQLite_Sqlite3Vfs_get_xFullPathname, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vfs_xFullPathname_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xFullPathname=", mrb_SQLite_Sqlite3Vfs_set_xFullPathname, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xDlOpen_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xDlOpen", mrb_SQLite_Sqlite3Vfs_get_xDlOpen, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vfs_xDlOpen_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xDlOpen=", mrb_SQLite_Sqlite3Vfs_set_xDlOpen, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xDlError_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xDlError", mrb_SQLite_Sqlite3Vfs_get_xDlError, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vfs_xDlError_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xDlError=", mrb_SQLite_Sqlite3Vfs_set_xDlError, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xDlSym_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xDlSym", mrb_SQLite_Sqlite3Vfs_get_xDlSym, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vfs_xDlSym_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xDlSym=", mrb_SQLite_Sqlite3Vfs_set_xDlSym, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xDlClose_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xDlClose", mrb_SQLite_Sqlite3Vfs_get_xDlClose, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vfs_xDlClose_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xDlClose=", mrb_SQLite_Sqlite3Vfs_set_xDlClose, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xRandomness_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xRandomness", mrb_SQLite_Sqlite3Vfs_get_xRandomness, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vfs_xRandomness_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xRandomness=", mrb_SQLite_Sqlite3Vfs_set_xRandomness, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xSleep_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xSleep", mrb_SQLite_Sqlite3Vfs_get_xSleep, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vfs_xSleep_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xSleep=", mrb_SQLite_Sqlite3Vfs_set_xSleep, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xCurrentTime_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xCurrentTime", mrb_SQLite_Sqlite3Vfs_get_xCurrentTime, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vfs_xCurrentTime_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xCurrentTime=", mrb_SQLite_Sqlite3Vfs_set_xCurrentTime, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xGetLastError_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xGetLastError", mrb_SQLite_Sqlite3Vfs_get_xGetLastError, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vfs_xGetLastError_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xGetLastError=", mrb_SQLite_Sqlite3Vfs_set_xGetLastError, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xCurrentTimeInt64_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xCurrentTimeInt64", mrb_SQLite_Sqlite3Vfs_get_xCurrentTimeInt64, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vfs_xCurrentTimeInt64_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xCurrentTimeInt64=", mrb_SQLite_Sqlite3Vfs_set_xCurrentTimeInt64, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xSetSystemCall_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xSetSystemCall", mrb_SQLite_Sqlite3Vfs_get_xSetSystemCall, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vfs_xSetSystemCall_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xSetSystemCall=", mrb_SQLite_Sqlite3Vfs_set_xSetSystemCall, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xGetSystemCall_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xGetSystemCall", mrb_SQLite_Sqlite3Vfs_get_xGetSystemCall, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vfs_xGetSystemCall_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xGetSystemCall=", mrb_SQLite_Sqlite3Vfs_set_xGetSystemCall, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xNextSystemCall_FIELD_READER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xNextSystemCall", mrb_SQLite_Sqlite3Vfs_get_xNextSystemCall, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Vfs_xNextSystemCall_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Vfs_class, "xNextSystemCall=", mrb_SQLite_Sqlite3Vfs_set_xNextSystemCall, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
