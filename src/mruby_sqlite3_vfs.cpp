/*
 * struct sqlite3_vfs
 * Defined in file sqlite3.h @ line 1167
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Vfs_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3Vfs_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Vfs_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs* native_object = (struct sqlite3_vfs*)malloc(sizeof(struct sqlite3_vfs));
  mruby_gift_struct sqlite3_vfs_data_ptr(self, native_object);
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

#if BIND_Sqlite3Vfs_iVersion_FIELD
/* get_iVersion
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_iVersion(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);

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
mrb_SQLite_Sqlite3Vfs_set_iVersion(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);
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

#if BIND_Sqlite3Vfs_szOsFile_FIELD
/* get_szOsFile
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_szOsFile(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);

  int native_field = native_self->szOsFile;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_szOsFile
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_szOsFile(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->szOsFile = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Vfs_mxPathname_FIELD
/* get_mxPathname
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_mxPathname(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);

  int native_field = native_self->mxPathname;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_mxPathname
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_mxPathname(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->mxPathname = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Vfs_pNext_FIELD
/* get_pNext
 *
 * Return Type: sqlite3_vfs *
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_pNext(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);

  sqlite3_vfs * native_field = native_self->pNext;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_sqlite3_vfs(mrb, native_field));

  return ruby_field;
}

/* set_pNext
 *
 * Parameters:
 * - value: sqlite3_vfs *
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_pNext(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, Sqlite3Vfs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vfs expected");
    return mrb_nil_value();
  }

  sqlite3_vfs * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_sqlite3_vfs(ruby_field));

  native_self->pNext = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Vfs_zName_FIELD
/* get_zName
 *
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_zName(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);

  const char * native_field = native_self->zName;

  mrb_value ruby_field = mrb_str_new_cstr(mrb, native_field);

  return ruby_field;
}

/* set_zName
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_zName(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  const char * native_field = mrb_string_value_cstr(mrb, &ruby_field);

  native_self->zName = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Vfs_pAppData_FIELD
/* get_pAppData
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_pAppData(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);

  void * native_field = native_self->pAppData;

  mrb_value ruby_field = TODO_mruby_box_void_PTR(mrb, native_field);

  return ruby_field;
}

/* set_pAppData
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_pAppData(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_PTR(ruby_field);

  void * native_field = TODO_mruby_unbox_void_PTR(ruby_field);

  native_self->pAppData = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Vfs_xOpen_FIELD
/* get_xOpen
 *
 * Return Type: int (*)(sqlite3_vfs *, const char *, sqlite3_file *, int, int *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xOpen(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, const char *, sqlite3_file *, int, int *) native_field = native_self->xOpen;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_sqlite3_file_PTR_COMMA_intCOMMA_int_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xOpen
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, const char *, sqlite3_file *, int, int *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xOpen(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_sqlite3_file_PTR_COMMA_intCOMMA_int_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vfs *, const char *, sqlite3_file *, int, int *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_sqlite3_file_PTR_COMMA_intCOMMA_int_PTR_RPAREN(ruby_field);

  native_self->xOpen = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Vfs_xDelete_FIELD
/* get_xDelete
 *
 * Return Type: int (*)(sqlite3_vfs *, const char *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xDelete(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, const char *, int) native_field = native_self->xDelete;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xDelete
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, const char *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xDelete(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_int_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vfs *, const char *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_int_RPAREN(ruby_field);

  native_self->xDelete = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Vfs_xAccess_FIELD
/* get_xAccess
 *
 * Return Type: int (*)(sqlite3_vfs *, const char *, int, int *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xAccess(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, const char *, int, int *) native_field = native_self->xAccess;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_intCOMMA_int_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xAccess
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, const char *, int, int *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xAccess(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_intCOMMA_int_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vfs *, const char *, int, int *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_intCOMMA_int_PTR_RPAREN(ruby_field);

  native_self->xAccess = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Vfs_xFullPathname_FIELD
/* get_xFullPathname
 *
 * Return Type: int (*)(sqlite3_vfs *, const char *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xFullPathname(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, const char *, int, char *) native_field = native_self->xFullPathname;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_intCOMMA_char_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xFullPathname
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, const char *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xFullPathname(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_intCOMMA_char_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vfs *, const char *, int, char *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_intCOMMA_char_PTR_RPAREN(ruby_field);

  native_self->xFullPathname = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Vfs_xDlOpen_FIELD
/* get_xDlOpen
 *
 * Return Type: void *(*)(sqlite3_vfs *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xDlOpen(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);

  void *(*)(sqlite3_vfs *, const char *) native_field = native_self->xDlOpen;

  mrb_value ruby_field = TODO_mruby_box_void_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xDlOpen
 *
 * Parameters:
 * - value: void *(*)(sqlite3_vfs *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xDlOpen(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_RPAREN(ruby_field);

  void *(*native_field)(sqlite3_vfs *, const char *) = TODO_mruby_unbox_void_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_RPAREN(ruby_field);

  native_self->xDlOpen = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Vfs_xDlError_FIELD
/* get_xDlError
 *
 * Return Type: void (*)(sqlite3_vfs *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xDlError(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);

  void (*)(sqlite3_vfs *, int, char *) native_field = native_self->xDlError;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xDlError
 *
 * Parameters:
 * - value: void (*)(sqlite3_vfs *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xDlError(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(ruby_field);

  void (*native_field)(sqlite3_vfs *, int, char *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(ruby_field);

  native_self->xDlError = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Vfs_xDlSym_FIELD
/* get_xDlSym
 *
 * Return Type: void (*(*)(sqlite3_vfs *, void *, const char *))(void)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xDlSym(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);

  void (*(*)(sqlite3_vfs *, void *, const char *))(void) native_field = native_self->xDlSym;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_void_PTR_COMMAchar_PTR_RPAREN_RPAREN_LPAREN_void_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xDlSym
 *
 * Parameters:
 * - value: void (*(*)(sqlite3_vfs *, void *, const char *))(void)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xDlSym(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_void_PTR_COMMAchar_PTR_RPAREN_RPAREN_LPAREN_void_RPAREN(ruby_field);

  void (*(*native_field)(sqlite3_vfs *, void *, const char *))(void) = TODO_mruby_unbox_void_LPAREN_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_void_PTR_COMMAchar_PTR_RPAREN_RPAREN_LPAREN_void_RPAREN(ruby_field);

  native_self->xDlSym = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Vfs_xDlClose_FIELD
/* get_xDlClose
 *
 * Return Type: void (*)(sqlite3_vfs *, void *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xDlClose(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);

  void (*)(sqlite3_vfs *, void *) native_field = native_self->xDlClose;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_void_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xDlClose
 *
 * Parameters:
 * - value: void (*)(sqlite3_vfs *, void *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xDlClose(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_void_PTR_RPAREN(ruby_field);

  void (*native_field)(sqlite3_vfs *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_void_PTR_RPAREN(ruby_field);

  native_self->xDlClose = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Vfs_xRandomness_FIELD
/* get_xRandomness
 *
 * Return Type: int (*)(sqlite3_vfs *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xRandomness(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, int, char *) native_field = native_self->xRandomness;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xRandomness
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xRandomness(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vfs *, int, char *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(ruby_field);

  native_self->xRandomness = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Vfs_xSleep_FIELD
/* get_xSleep
 *
 * Return Type: int (*)(sqlite3_vfs *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xSleep(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, int) native_field = native_self->xSleep;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xSleep
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xSleep(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_int_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vfs *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_int_RPAREN(ruby_field);

  native_self->xSleep = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Vfs_xCurrentTime_FIELD
/* get_xCurrentTime
 *
 * Return Type: int (*)(sqlite3_vfs *, double *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xCurrentTime(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, double *) native_field = native_self->xCurrentTime;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_double_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xCurrentTime
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, double *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xCurrentTime(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_double_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vfs *, double *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_double_PTR_RPAREN(ruby_field);

  native_self->xCurrentTime = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Vfs_xGetLastError_FIELD
/* get_xGetLastError
 *
 * Return Type: int (*)(sqlite3_vfs *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xGetLastError(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, int, char *) native_field = native_self->xGetLastError;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xGetLastError
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xGetLastError(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vfs *, int, char *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(ruby_field);

  native_self->xGetLastError = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Vfs_xCurrentTimeInt64_FIELD
/* get_xCurrentTimeInt64
 *
 * Return Type: int (*)(sqlite3_vfs *, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xCurrentTimeInt64(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, sqlite3_int64 *) native_field = native_self->xCurrentTimeInt64;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_sqlite3_int64_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xCurrentTimeInt64
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xCurrentTimeInt64(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_sqlite3_int64_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vfs *, sqlite3_int64 *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_sqlite3_int64_PTR_RPAREN(ruby_field);

  native_self->xCurrentTimeInt64 = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Vfs_xSetSystemCall_FIELD
/* get_xSetSystemCall
 *
 * Return Type: int (*)(sqlite3_vfs *, const char *, sqlite3_syscall_ptr)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xSetSystemCall(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, const char *, sqlite3_syscall_ptr) native_field = native_self->xSetSystemCall;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_sqlite3_syscall_ptr_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xSetSystemCall
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, const char *, sqlite3_syscall_ptr)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xSetSystemCall(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_sqlite3_syscall_ptr_RPAREN(ruby_field);

  int (*native_field)(sqlite3_vfs *, const char *, sqlite3_syscall_ptr) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_sqlite3_syscall_ptr_RPAREN(ruby_field);

  native_self->xSetSystemCall = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Vfs_xGetSystemCall_FIELD
/* get_xGetSystemCall
 *
 * Return Type: sqlite3_syscall_ptr (*)(sqlite3_vfs *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xGetSystemCall(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);

  sqlite3_syscall_ptr (*)(sqlite3_vfs *, const char *) native_field = native_self->xGetSystemCall;

  mrb_value ruby_field = TODO_mruby_box_sqlite3_syscall_ptr_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xGetSystemCall
 *
 * Parameters:
 * - value: sqlite3_syscall_ptr (*)(sqlite3_vfs *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xGetSystemCall(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_sqlite3_syscall_ptr_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_RPAREN(ruby_field);

  sqlite3_syscall_ptr (*native_field)(sqlite3_vfs *, const char *) = TODO_mruby_unbox_sqlite3_syscall_ptr_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_RPAREN(ruby_field);

  native_self->xGetSystemCall = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3Vfs_xNextSystemCall_FIELD
/* get_xNextSystemCall
 *
 * Return Type: const char *(*)(sqlite3_vfs *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xNextSystemCall(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);

  const char *(*)(sqlite3_vfs *, const char *) native_field = native_self->xNextSystemCall;

  mrb_value ruby_field = TODO_mruby_box_char_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_const_char_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xNextSystemCall
 *
 * Parameters:
 * - value: const char *(*)(sqlite3_vfs *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xNextSystemCall(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_struct sqlite3_vfs(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_char_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_const_char_PTR_RPAREN(ruby_field);

  const char *(*native_field)(sqlite3_vfs *, const char *) = TODO_mruby_unbox_char_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_const_char_PTR_RPAREN(ruby_field);

  native_self->xNextSystemCall = native_field;

  return ruby_field;
}
#endif


void mrb_SQLite_Sqlite3Vfs_init(mrb_state* mrb) {
  RClass* Sqlite3Vfs_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Vfs", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Vfs_class, MRB_TT_DATA);

#if BIND_Sqlite3Vfs_INITIALIZE
  mrb_define_method(mrb, Sqlite3Vfs_class, "initialize", mrb_SQLite_Sqlite3Vfs_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3Vfs_class, "disown", mrb_SQLite_Sqlite3Vfs_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3Vfs_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3Vfs_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Sqlite3Vfs_iVersion_FIELD
  mrb_define_method(mrb, Sqlite3Vfs_class, "iVersion", mrb_SQLite_Sqlite3Vfs_get_iVersion, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vfs_class, "iVersion=", mrb_SQLite_Sqlite3Vfs_set_iVersion, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_szOsFile_FIELD
  mrb_define_method(mrb, Sqlite3Vfs_class, "szOsFile", mrb_SQLite_Sqlite3Vfs_get_szOsFile, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vfs_class, "szOsFile=", mrb_SQLite_Sqlite3Vfs_set_szOsFile, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_mxPathname_FIELD
  mrb_define_method(mrb, Sqlite3Vfs_class, "mxPathname", mrb_SQLite_Sqlite3Vfs_get_mxPathname, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vfs_class, "mxPathname=", mrb_SQLite_Sqlite3Vfs_set_mxPathname, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_pNext_FIELD
  mrb_define_method(mrb, Sqlite3Vfs_class, "pNext", mrb_SQLite_Sqlite3Vfs_get_pNext, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vfs_class, "pNext=", mrb_SQLite_Sqlite3Vfs_set_pNext, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_zName_FIELD
  mrb_define_method(mrb, Sqlite3Vfs_class, "zName", mrb_SQLite_Sqlite3Vfs_get_zName, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vfs_class, "zName=", mrb_SQLite_Sqlite3Vfs_set_zName, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_pAppData_FIELD
  mrb_define_method(mrb, Sqlite3Vfs_class, "pAppData", mrb_SQLite_Sqlite3Vfs_get_pAppData, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vfs_class, "pAppData=", mrb_SQLite_Sqlite3Vfs_set_pAppData, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xOpen_FIELD
  mrb_define_method(mrb, Sqlite3Vfs_class, "xOpen", mrb_SQLite_Sqlite3Vfs_get_xOpen, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vfs_class, "xOpen=", mrb_SQLite_Sqlite3Vfs_set_xOpen, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xDelete_FIELD
  mrb_define_method(mrb, Sqlite3Vfs_class, "xDelete", mrb_SQLite_Sqlite3Vfs_get_xDelete, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vfs_class, "xDelete=", mrb_SQLite_Sqlite3Vfs_set_xDelete, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xAccess_FIELD
  mrb_define_method(mrb, Sqlite3Vfs_class, "xAccess", mrb_SQLite_Sqlite3Vfs_get_xAccess, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vfs_class, "xAccess=", mrb_SQLite_Sqlite3Vfs_set_xAccess, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xFullPathname_FIELD
  mrb_define_method(mrb, Sqlite3Vfs_class, "xFullPathname", mrb_SQLite_Sqlite3Vfs_get_xFullPathname, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vfs_class, "xFullPathname=", mrb_SQLite_Sqlite3Vfs_set_xFullPathname, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xDlOpen_FIELD
  mrb_define_method(mrb, Sqlite3Vfs_class, "xDlOpen", mrb_SQLite_Sqlite3Vfs_get_xDlOpen, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vfs_class, "xDlOpen=", mrb_SQLite_Sqlite3Vfs_set_xDlOpen, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xDlError_FIELD
  mrb_define_method(mrb, Sqlite3Vfs_class, "xDlError", mrb_SQLite_Sqlite3Vfs_get_xDlError, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vfs_class, "xDlError=", mrb_SQLite_Sqlite3Vfs_set_xDlError, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xDlSym_FIELD
  mrb_define_method(mrb, Sqlite3Vfs_class, "xDlSym", mrb_SQLite_Sqlite3Vfs_get_xDlSym, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vfs_class, "xDlSym=", mrb_SQLite_Sqlite3Vfs_set_xDlSym, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xDlClose_FIELD
  mrb_define_method(mrb, Sqlite3Vfs_class, "xDlClose", mrb_SQLite_Sqlite3Vfs_get_xDlClose, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vfs_class, "xDlClose=", mrb_SQLite_Sqlite3Vfs_set_xDlClose, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xRandomness_FIELD
  mrb_define_method(mrb, Sqlite3Vfs_class, "xRandomness", mrb_SQLite_Sqlite3Vfs_get_xRandomness, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vfs_class, "xRandomness=", mrb_SQLite_Sqlite3Vfs_set_xRandomness, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xSleep_FIELD
  mrb_define_method(mrb, Sqlite3Vfs_class, "xSleep", mrb_SQLite_Sqlite3Vfs_get_xSleep, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vfs_class, "xSleep=", mrb_SQLite_Sqlite3Vfs_set_xSleep, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xCurrentTime_FIELD
  mrb_define_method(mrb, Sqlite3Vfs_class, "xCurrentTime", mrb_SQLite_Sqlite3Vfs_get_xCurrentTime, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vfs_class, "xCurrentTime=", mrb_SQLite_Sqlite3Vfs_set_xCurrentTime, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xGetLastError_FIELD
  mrb_define_method(mrb, Sqlite3Vfs_class, "xGetLastError", mrb_SQLite_Sqlite3Vfs_get_xGetLastError, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vfs_class, "xGetLastError=", mrb_SQLite_Sqlite3Vfs_set_xGetLastError, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xCurrentTimeInt64_FIELD
  mrb_define_method(mrb, Sqlite3Vfs_class, "xCurrentTimeInt64", mrb_SQLite_Sqlite3Vfs_get_xCurrentTimeInt64, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vfs_class, "xCurrentTimeInt64=", mrb_SQLite_Sqlite3Vfs_set_xCurrentTimeInt64, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xSetSystemCall_FIELD
  mrb_define_method(mrb, Sqlite3Vfs_class, "xSetSystemCall", mrb_SQLite_Sqlite3Vfs_get_xSetSystemCall, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vfs_class, "xSetSystemCall=", mrb_SQLite_Sqlite3Vfs_set_xSetSystemCall, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xGetSystemCall_FIELD
  mrb_define_method(mrb, Sqlite3Vfs_class, "xGetSystemCall", mrb_SQLite_Sqlite3Vfs_get_xGetSystemCall, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vfs_class, "xGetSystemCall=", mrb_SQLite_Sqlite3Vfs_set_xGetSystemCall, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Vfs_xNextSystemCall_FIELD
  mrb_define_method(mrb, Sqlite3Vfs_class, "xNextSystemCall", mrb_SQLite_Sqlite3Vfs_get_xNextSystemCall, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3Vfs_class, "xNextSystemCall=", mrb_SQLite_Sqlite3Vfs_set_xNextSystemCall, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
