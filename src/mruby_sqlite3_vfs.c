/*
 * struct sqlite3_vfs
 * Defined in file sqlite3.h @ line 1167
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Vfs_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Sqlite3Vfs::initialize */
/* sha: d32b29c122826a4575e67b6b40d6782c52e85451990af5e21c461d89a905cd4e */
#if BIND_Sqlite3Vfs_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Vfs_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs* native_object = (struct sqlite3_vfs*)calloc(1, sizeof(struct sqlite3_vfs));
  mruby_giftwrap_sqlite3_vfs_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::initialize */
/* sha: 42aa10929bce5efa5dc295ceac9880a307a6e27eeefd789e53cb3cb6783c023a */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::belongs_to_ruby */
/* sha: 5d511eba00b1a1c17f7e31c7f3b59f00f0a0f64e65b25ea59182119e11324021 */
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
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3Vfs::iVersion_reader */
/* sha: 4d8226fd7e0810cc2fb5a61e5de8307e17cb0ce475697e30cc5a229b4a64f322 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::iVersion_writer */
/* sha: 324a7d2ec83aec631da58d0e312e7485045c51411fa1fc92e26218e2c8a2141b */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::szOsFile_reader */
/* sha: 1fbf099006a25f800b8e499beec8b23f829a0e5502142a1bd924422372f4d2bd */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::szOsFile_writer */
/* sha: b75cbeceac411d87f5624d71b24d4dff82fbc4ad5ed7c13c64c134ed77935e69 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::mxPathname_reader */
/* sha: 1dc4db1ed2d5f86423be21eb88a069cdebb96d721a68b31e99751e7605f1c0f0 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::mxPathname_writer */
/* sha: 8abce15e01b7af5e16ffb5083d4f99fdaeeccefd786463b4fd8ca5dcf314cd42 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::pNext_reader */
/* sha: e7d965e6743be8e880e5e8e6d7d46c6b24bcaf1e1b41b556375dc4c861b05da3 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::pNext_writer */
/* sha: a05f0d9c2d7154cbd1aa89dd07a52626fb0c30c8ceef37b7af16e5d53897eeb3 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::zName_reader */
/* sha: e0c978efad9c1597ef856682aaf640e8f26e49441bfae19614512b68c3411202 */
#if BIND_Sqlite3Vfs_zName_FIELD_READER
/* get_zName
 *
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_zName(mrb_state* mrb, mrb_value self) {
  struct sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  const char * native_zName = native_self->zName;

  mrb_value zName = native_zName == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_zName);

  return zName;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::zName_writer */
/* sha: 0f94b58163821488c2207c0fcaade0c15fd78fa64b2382d84c99bc1358e84db2 */
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

  mrb_get_args(mrb, "z", &native_zName);

  native_self->zName = native_zName;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::pAppData_reader */
/* sha: b921e2419fe5a7424a8213cabaca09685420e03600394a96eab2bd6e8ee6bae1 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::pAppData_writer */
/* sha: 119acd1758a4b8b9d978287309c6e516418fb4eb9762a8723225bb8555b5ae3f */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xOpen_reader */
/* sha: c8232427d620eebacf30d20b92030980912f46075c0df5883eb77c13cdf0d974 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xOpen_writer */
/* sha: ec334813cdee70a9dd514ac74324fa263b89e61e10c253242069dab62e562dc0 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xDelete_reader */
/* sha: 63c2a886b764f3ad3e0547ab216e5a870b9be83e19932c7e1e811f5b4b9cf868 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xDelete_writer */
/* sha: 11992ac28add98f725c1935c55bcb304028ce7f556ca7e607cb40e28e6792fa2 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xAccess_reader */
/* sha: d62c79939af0246e12a72de7567f9c24fe7e855b61b836034d0768bf8479fc11 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xAccess_writer */
/* sha: ce59081707a741269d61033f8f95a49bec65200d6ea76f0d1c5cc5cebe85d421 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xFullPathname_reader */
/* sha: a8b9d48ef9b3327d77aff86985987cb37f239b05cc95a6b7281e94250e644135 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xFullPathname_writer */
/* sha: e7144d52086b338df60f79fc0ff911dcc3d31c914e6ca79d96560d5e868aa732 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xDlOpen_reader */
/* sha: 77ea2584b3a0c6dad342910beeb8973f82839aeff75f936cca8dd5bc26e01178 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xDlOpen_writer */
/* sha: c56f51a51e085fcfc131e5cca2b0d5aa399dee156cbf6e14dc277f1b7b066acb */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xDlError_reader */
/* sha: 0c52c13c917e775ceb69c8058b87a1cc25ecfe36b957cbda817f9779228ac398 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xDlError_writer */
/* sha: 5aa28886ac8dd897cd4d2d6091592695f326c3784432220ba7572c46207ac8f6 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xDlSym_reader */
/* sha: 96354ba8c89e855a01b19f0dda522168ff81fff1a4f900e9e32e7f8c934f95e3 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xDlSym_writer */
/* sha: 59bc962015fdcb514bda01364753b05d28fb6b11f1fbf9b98dfd6941ca090246 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xDlClose_reader */
/* sha: b0172eb7e1547b361403af8c9a00f1c72b3778657d3ae55efcb65794d173478a */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xDlClose_writer */
/* sha: 71a37716cdcad002b50ce978b4842ad7634ca681b427d1a310b0f29dc469e37e */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xRandomness_reader */
/* sha: 8b38a39a497e328c5aa9e72f569861ba15083c7b0848c35c84b9a473ea144ed7 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xRandomness_writer */
/* sha: aea6222d2df411f9e15d7a054b9787ecaa235593904fea2f82b4302e28de0b68 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xSleep_reader */
/* sha: 81d9c115c640cc487182ff6802dff8f29b93fc3314b9434aea942cd0d15d97bc */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xSleep_writer */
/* sha: 055fc39d1a9d1a777968ceb14958fc8de27932d542df2b2fe6db70b821d307bc */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xCurrentTime_reader */
/* sha: 7a64ce677bcde60295df22d17e526328b4b3954d7eed42265f630207bb952d5c */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xCurrentTime_writer */
/* sha: 3fa2808109db198c1e257e26a96f0de68954dc8e909c554cfaa2b666b1e20b39 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xGetLastError_reader */
/* sha: 7c4e49577150cbcb63524aa12ca4b6b96a48b7eb2641f77e1a2743438bfdf3ca */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xGetLastError_writer */
/* sha: 3578e9b121b6daa2770980fde8cfb5b3e8543d7b3bbfe0bd234cdf066760335a */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xCurrentTimeInt64_reader */
/* sha: 923d0b5f952ecfc16b48938332750b3b4611e2de91ce14af5dd6e947187c8c4c */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xCurrentTimeInt64_writer */
/* sha: 5cf60f9bc49b142958bd91d7e4db286c68f7cf6c1a03e00823ddb1f311b05d78 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xSetSystemCall_reader */
/* sha: 81b051714788293a494d866de3dcaac2c8b6a82f2c2d5f9f92b501cbf84b4932 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xSetSystemCall_writer */
/* sha: 5d0f2e3243d5656a1cff49d45964998797547d59b96a64f79304dbc8cf2393bc */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xGetSystemCall_reader */
/* sha: 1ea7ed211906e2d0e9cd11ad21a8a97ae00cce80c6de8a7121e0afe791441b79 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xGetSystemCall_writer */
/* sha: 288142c32922477c16e7dec9c95ba2b08a4cd06384b3d34e1f7a9ee59e869a23 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xNextSystemCall_reader */
/* sha: 2e8f7430669f4f6d0058ec7655f1ea4cc8c386433bc53195aa5f8d5abcb6e019 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xNextSystemCall_writer */
/* sha: 34760196973b3ee6862234cc48c81db821b11c7dc6a646bbbfe0d925755a8f1c */
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
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Vfs_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3Vfs::class_definition */
/* sha: 203ef002429397aefc1efdde9c40f085d0391e1d9d53e5cc2bf50172a4776b50 */
  struct RClass* Sqlite3Vfs_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Vfs", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Vfs_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::class_method_definitions */
/* sha: 933d3c2274c8c37bdf560aab86ec46a124901b9fd533aace62fa51af0c885dc4 */
#if BIND_Sqlite3Vfs_INITIALIZE
  mrb_define_method(mrb, Sqlite3Vfs_class, "initialize", mrb_SQLite_Sqlite3Vfs_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3Vfs_class, "disown", mrb_SQLite_Sqlite3Vfs_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3Vfs_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3Vfs_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::attr_definitions */
/* sha: 5ef2a9bf64703e84c97f2c1e191eb5f1150f3c6c6e0f9e893579b9dbb1b80dcd */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
