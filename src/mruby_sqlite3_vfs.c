/*
 * sqlite3_vfs
 * Defined in file sqlite3.h @ line 1167
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Vfs_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::initialize */
/* sha: 0178877a00a229154913e32d8e54d173c9e5f1af4a01e0cc750571ab70275f03 */
#if BIND_Sqlite3Vfs_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Vfs_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  sqlite3_vfs* native_object = (sqlite3_vfs*)calloc(1, sizeof(sqlite3_vfs));
  mruby_gift_sqlite3_vfs_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3Vfs::iVersion_reader */
/* sha: 6d4c6d33ec36821ecb96bf0283078a308569b8055617b447cd5150aee47cfc32 */
#if BIND_Sqlite3Vfs_iVersion_FIELD_READER
/* get_iVersion
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_iVersion(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int native_iVersion = native_self->iVersion;

  mrb_value iVersion = mrb_fixnum_value(native_iVersion);

  return iVersion;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::iVersion_writer */
/* sha: 31e817d1be688a7013d7e976f7c8122b954d187a225f11716e4efa8debb815bd */
#if BIND_Sqlite3Vfs_iVersion_FIELD_WRITER
/* set_iVersion
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_iVersion(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_int native_iVersion;

  mrb_get_args(mrb, "i", &native_iVersion);

  native_self->iVersion = native_iVersion;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::szOsFile_reader */
/* sha: 4bc6dd3407eac2a92d5a8b05e697a8b58e7c849cf3f1eca113bec8f6d89c24e7 */
#if BIND_Sqlite3Vfs_szOsFile_FIELD_READER
/* get_szOsFile
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_szOsFile(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int native_szOsFile = native_self->szOsFile;

  mrb_value szOsFile = mrb_fixnum_value(native_szOsFile);

  return szOsFile;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::szOsFile_writer */
/* sha: dd4f1324b6be8ee1c7adaddb2cf718d4e2b07a7206700df6a99395818e33fa3c */
#if BIND_Sqlite3Vfs_szOsFile_FIELD_WRITER
/* set_szOsFile
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_szOsFile(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_int native_szOsFile;

  mrb_get_args(mrb, "i", &native_szOsFile);

  native_self->szOsFile = native_szOsFile;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::mxPathname_reader */
/* sha: 0d4471f7abc0299a98a88dacb9793f10c406775e1bbfce4ec95e1882782c41d8 */
#if BIND_Sqlite3Vfs_mxPathname_FIELD_READER
/* get_mxPathname
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_mxPathname(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int native_mxPathname = native_self->mxPathname;

  mrb_value mxPathname = mrb_fixnum_value(native_mxPathname);

  return mxPathname;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::mxPathname_writer */
/* sha: abb9f5712b2c02c2d133d7174745be13b7dc72e465cf35eca616b5619dd3ac39 */
#if BIND_Sqlite3Vfs_mxPathname_FIELD_WRITER
/* set_mxPathname
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_mxPathname(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_int native_mxPathname;

  mrb_get_args(mrb, "i", &native_mxPathname);

  native_self->mxPathname = native_mxPathname;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::pNext_reader */
/* sha: 4ce015e3270ed445aa4e45087492cd0fbf402921c15309f4e79653d6df816786 */
#if BIND_Sqlite3Vfs_pNext_FIELD_READER
/* get_pNext
 *
 * Return Type: sqlite3_vfs *
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_pNext(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  sqlite3_vfs * native_pNext = native_self->pNext;

  mrb_value pNext = (native_pNext == NULL ? mrb_nil_value() : mruby_box_sqlite3_vfs(mrb, native_pNext));

  return pNext;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::pNext_writer */
/* sha: a05f3f6c36456112c2d9d82c6107c8ff8ea3bdb5946ca0ea67d5926312f6786f */
#if BIND_Sqlite3Vfs_pNext_FIELD_WRITER
/* set_pNext
 *
 * Parameters:
 * - value: sqlite3_vfs *
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_pNext(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value pNext;

  mrb_get_args(mrb, "o", &pNext);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, pNext, Sqlite3Vfs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vfs expected");
    return mrb_nil_value();
  }

  sqlite3_vfs * native_pNext = (mrb_nil_p(pNext) ? NULL : mruby_unbox_sqlite3_vfs(pNext));

  native_self->pNext = native_pNext;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::zName_reader */
/* sha: cbd2890888bb4953540f0d05e371951b86e5759184f758d11dbfe579f07bb03c */
#if BIND_Sqlite3Vfs_zName_FIELD_READER
/* get_zName
 *
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_zName(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  const char * native_zName = native_self->zName;

  mrb_value zName = native_zName == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_zName);

  return zName;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::zName_writer */
/* sha: 929f138a9a3e3567c6157d18883cd87067bdc4d43d45d579154e21446cef9402 */
#if BIND_Sqlite3Vfs_zName_FIELD_WRITER
/* set_zName
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_zName(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  char * native_zName = NULL;

  mrb_get_args(mrb, "z", &native_zName);

  native_self->zName = native_zName;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::pAppData_reader */
/* sha: fdae7d935ce6b4b6ce1f834376e55a9a96ccb49ef907b945b268d30b39a1ef4c */
#if BIND_Sqlite3Vfs_pAppData_FIELD_READER
/* get_pAppData
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_pAppData(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  void * native_pAppData = native_self->pAppData;

  mrb_value pAppData = TODO_mruby_box_void_PTR(mrb, native_pAppData);

  return pAppData;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::pAppData_writer */
/* sha: 7c9f0ced29e9a41182431bc4b8eada52909f7aa065fcb9a9026a74f5751213a9 */
#if BIND_Sqlite3Vfs_pAppData_FIELD_WRITER
/* set_pAppData
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_pAppData(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value pAppData;

  mrb_get_args(mrb, "o", &pAppData);

  /* type checking */
  TODO_type_check_void_PTR(pAppData);

  void * native_pAppData = TODO_mruby_unbox_void_PTR(pAppData);

  native_self->pAppData = native_pAppData;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xOpen_reader */
/* sha: 04729bb431e668915c5f4cff44491afd6255ec46f90221d3469d47b2f9329cf7 */
#if BIND_Sqlite3Vfs_xOpen_FIELD_READER
/* get_xOpen
 *
 * Return Type: int (*)(sqlite3_vfs *, const char *, sqlite3_file *, int, int *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xOpen(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, const char *, sqlite3_file *, int, int *) native_xOpen = native_self->xOpen;

  mrb_value xOpen = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_sqlite3_file_PTR_COMMA_intCOMMA_int_PTR_RPAREN(mrb, native_xOpen);

  return xOpen;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xOpen_writer */
/* sha: 207e01df12289eca0cffde59169c30a09bede91655127469c43f1a070d96948e */
#if BIND_Sqlite3Vfs_xOpen_FIELD_WRITER
/* set_xOpen
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, const char *, sqlite3_file *, int, int *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xOpen(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xOpen;

  mrb_get_args(mrb, "o", &xOpen);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_sqlite3_file_PTR_COMMA_intCOMMA_int_PTR_RPAREN(xOpen);

  int (*native_xOpen)(sqlite3_vfs *, const char *, sqlite3_file *, int, int *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_sqlite3_file_PTR_COMMA_intCOMMA_int_PTR_RPAREN(xOpen);

  native_self->xOpen = native_xOpen;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xDelete_reader */
/* sha: 9b6f841eb7d6182d4952e4f9379005ff2c779565dfd4f6b4630cbd116392d0dc */
#if BIND_Sqlite3Vfs_xDelete_FIELD_READER
/* get_xDelete
 *
 * Return Type: int (*)(sqlite3_vfs *, const char *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xDelete(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, const char *, int) native_xDelete = native_self->xDelete;

  mrb_value xDelete = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_int_RPAREN(mrb, native_xDelete);

  return xDelete;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xDelete_writer */
/* sha: 126445c6f33ac16c53d256da722b47921eddfa46b8ec589c9a9ce8ab52ec96ae */
#if BIND_Sqlite3Vfs_xDelete_FIELD_WRITER
/* set_xDelete
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, const char *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xDelete(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xDelete;

  mrb_get_args(mrb, "o", &xDelete);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_int_RPAREN(xDelete);

  int (*native_xDelete)(sqlite3_vfs *, const char *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_int_RPAREN(xDelete);

  native_self->xDelete = native_xDelete;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xAccess_reader */
/* sha: 02e8ca88692ceb71d3dc0bfb56e06c163c210bfbab758544ca3d719e966e2298 */
#if BIND_Sqlite3Vfs_xAccess_FIELD_READER
/* get_xAccess
 *
 * Return Type: int (*)(sqlite3_vfs *, const char *, int, int *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xAccess(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, const char *, int, int *) native_xAccess = native_self->xAccess;

  mrb_value xAccess = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_intCOMMA_int_PTR_RPAREN(mrb, native_xAccess);

  return xAccess;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xAccess_writer */
/* sha: 4ceace1980a266069470c084f65521e33ab0ddcab8e524a71086c58a122528d7 */
#if BIND_Sqlite3Vfs_xAccess_FIELD_WRITER
/* set_xAccess
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, const char *, int, int *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xAccess(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xAccess;

  mrb_get_args(mrb, "o", &xAccess);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_intCOMMA_int_PTR_RPAREN(xAccess);

  int (*native_xAccess)(sqlite3_vfs *, const char *, int, int *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_intCOMMA_int_PTR_RPAREN(xAccess);

  native_self->xAccess = native_xAccess;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xFullPathname_reader */
/* sha: a58955c5cd287b85db0131f11384c677c270c4c9ef59d8b70b2e7736bbad8989 */
#if BIND_Sqlite3Vfs_xFullPathname_FIELD_READER
/* get_xFullPathname
 *
 * Return Type: int (*)(sqlite3_vfs *, const char *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xFullPathname(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, const char *, int, char *) native_xFullPathname = native_self->xFullPathname;

  mrb_value xFullPathname = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_intCOMMA_char_PTR_RPAREN(mrb, native_xFullPathname);

  return xFullPathname;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xFullPathname_writer */
/* sha: 0eff1861fc5af7049a254dbb9ffbf16156463c05dda1dbab1e88f47ded1880d9 */
#if BIND_Sqlite3Vfs_xFullPathname_FIELD_WRITER
/* set_xFullPathname
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, const char *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xFullPathname(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xFullPathname;

  mrb_get_args(mrb, "o", &xFullPathname);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_intCOMMA_char_PTR_RPAREN(xFullPathname);

  int (*native_xFullPathname)(sqlite3_vfs *, const char *, int, char *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_intCOMMA_char_PTR_RPAREN(xFullPathname);

  native_self->xFullPathname = native_xFullPathname;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xDlOpen_reader */
/* sha: 9362362aacb2ef37e061b7aa3891271d6640776b8d8b7a250f36368874b66073 */
#if BIND_Sqlite3Vfs_xDlOpen_FIELD_READER
/* get_xDlOpen
 *
 * Return Type: void *(*)(sqlite3_vfs *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xDlOpen(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  void *(*)(sqlite3_vfs *, const char *) native_xDlOpen = native_self->xDlOpen;

  mrb_value xDlOpen = TODO_mruby_box_void_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_RPAREN(mrb, native_xDlOpen);

  return xDlOpen;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xDlOpen_writer */
/* sha: 83769f26ec8d4e8bfae58a9374a1859fb9c7b25ddda8652412ec0f4e20c57dae */
#if BIND_Sqlite3Vfs_xDlOpen_FIELD_WRITER
/* set_xDlOpen
 *
 * Parameters:
 * - value: void *(*)(sqlite3_vfs *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xDlOpen(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xDlOpen;

  mrb_get_args(mrb, "o", &xDlOpen);

  /* type checking */
  TODO_type_check_void_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_RPAREN(xDlOpen);

  void *(*native_xDlOpen)(sqlite3_vfs *, const char *) = TODO_mruby_unbox_void_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_RPAREN(xDlOpen);

  native_self->xDlOpen = native_xDlOpen;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xDlError_reader */
/* sha: 5a5d7f36613f236f65c58cb78a349925687ba690b6fb6f2aac7323d2b137ea6f */
#if BIND_Sqlite3Vfs_xDlError_FIELD_READER
/* get_xDlError
 *
 * Return Type: void (*)(sqlite3_vfs *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xDlError(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  void (*)(sqlite3_vfs *, int, char *) native_xDlError = native_self->xDlError;

  mrb_value xDlError = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(mrb, native_xDlError);

  return xDlError;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xDlError_writer */
/* sha: 1dd936cccb086169f50cc50fdbcf6fb96305b781317c2d02108bad66190abae4 */
#if BIND_Sqlite3Vfs_xDlError_FIELD_WRITER
/* set_xDlError
 *
 * Parameters:
 * - value: void (*)(sqlite3_vfs *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xDlError(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xDlError;

  mrb_get_args(mrb, "o", &xDlError);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(xDlError);

  void (*native_xDlError)(sqlite3_vfs *, int, char *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(xDlError);

  native_self->xDlError = native_xDlError;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xDlSym_reader */
/* sha: 0aea43926d6c10e0b31525040bd220c5646b132e6710bfa9ad94180d4b47bcfa */
#if BIND_Sqlite3Vfs_xDlSym_FIELD_READER
/* get_xDlSym
 *
 * Return Type: void (*(*)(sqlite3_vfs *, void *, const char *))(void)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xDlSym(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  void (*(*)(sqlite3_vfs *, void *, const char *))(void) native_xDlSym = native_self->xDlSym;

  mrb_value xDlSym = TODO_mruby_box_void_LPAREN_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_void_PTR_COMMAchar_PTR_RPAREN_RPAREN_LPAREN_void_RPAREN(mrb, native_xDlSym);

  return xDlSym;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xDlSym_writer */
/* sha: 492161561fe4d2c8253624d6b79f6c928a39c0f7793f54743e9b42112bdee3ae */
#if BIND_Sqlite3Vfs_xDlSym_FIELD_WRITER
/* set_xDlSym
 *
 * Parameters:
 * - value: void (*(*)(sqlite3_vfs *, void *, const char *))(void)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xDlSym(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xDlSym;

  mrb_get_args(mrb, "o", &xDlSym);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_void_PTR_COMMAchar_PTR_RPAREN_RPAREN_LPAREN_void_RPAREN(xDlSym);

  void (*(*native_xDlSym)(sqlite3_vfs *, void *, const char *))(void) = TODO_mruby_unbox_void_LPAREN_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_void_PTR_COMMAchar_PTR_RPAREN_RPAREN_LPAREN_void_RPAREN(xDlSym);

  native_self->xDlSym = native_xDlSym;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xDlClose_reader */
/* sha: 15403e774673fb815648a99409e39ae303469a7dd372c205ea2e9760d2660a33 */
#if BIND_Sqlite3Vfs_xDlClose_FIELD_READER
/* get_xDlClose
 *
 * Return Type: void (*)(sqlite3_vfs *, void *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xDlClose(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  void (*)(sqlite3_vfs *, void *) native_xDlClose = native_self->xDlClose;

  mrb_value xDlClose = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_void_PTR_RPAREN(mrb, native_xDlClose);

  return xDlClose;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xDlClose_writer */
/* sha: fe568502a1defa7e6353d5f8eaff3e5b7ef1235f758493364cb6a30a505d365f */
#if BIND_Sqlite3Vfs_xDlClose_FIELD_WRITER
/* set_xDlClose
 *
 * Parameters:
 * - value: void (*)(sqlite3_vfs *, void *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xDlClose(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xDlClose;

  mrb_get_args(mrb, "o", &xDlClose);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_void_PTR_RPAREN(xDlClose);

  void (*native_xDlClose)(sqlite3_vfs *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_void_PTR_RPAREN(xDlClose);

  native_self->xDlClose = native_xDlClose;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xRandomness_reader */
/* sha: e8ba38128826778b03aa92bbd01beeb224900ca4e64d28ababd57f1b30a8f900 */
#if BIND_Sqlite3Vfs_xRandomness_FIELD_READER
/* get_xRandomness
 *
 * Return Type: int (*)(sqlite3_vfs *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xRandomness(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, int, char *) native_xRandomness = native_self->xRandomness;

  mrb_value xRandomness = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(mrb, native_xRandomness);

  return xRandomness;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xRandomness_writer */
/* sha: e9bdc6aebfd132770a83a3d4794481f647aeaa44c77603a0e0e9bbdb536a881c */
#if BIND_Sqlite3Vfs_xRandomness_FIELD_WRITER
/* set_xRandomness
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xRandomness(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xRandomness;

  mrb_get_args(mrb, "o", &xRandomness);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(xRandomness);

  int (*native_xRandomness)(sqlite3_vfs *, int, char *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(xRandomness);

  native_self->xRandomness = native_xRandomness;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xSleep_reader */
/* sha: bc987293ed51ff79524d92c628f42710b95f6e095a26235976e95435a7850989 */
#if BIND_Sqlite3Vfs_xSleep_FIELD_READER
/* get_xSleep
 *
 * Return Type: int (*)(sqlite3_vfs *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xSleep(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, int) native_xSleep = native_self->xSleep;

  mrb_value xSleep = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_int_RPAREN(mrb, native_xSleep);

  return xSleep;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xSleep_writer */
/* sha: dde44c9074dacc379a400a19d99d4967da5700467f13e36a6498efa21029d875 */
#if BIND_Sqlite3Vfs_xSleep_FIELD_WRITER
/* set_xSleep
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xSleep(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xSleep;

  mrb_get_args(mrb, "o", &xSleep);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_int_RPAREN(xSleep);

  int (*native_xSleep)(sqlite3_vfs *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_int_RPAREN(xSleep);

  native_self->xSleep = native_xSleep;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xCurrentTime_reader */
/* sha: 34390d62b78cf354a5f28017b1f8861f7df425749de443f8e4ebbce8e6f8227c */
#if BIND_Sqlite3Vfs_xCurrentTime_FIELD_READER
/* get_xCurrentTime
 *
 * Return Type: int (*)(sqlite3_vfs *, double *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xCurrentTime(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, double *) native_xCurrentTime = native_self->xCurrentTime;

  mrb_value xCurrentTime = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_double_PTR_RPAREN(mrb, native_xCurrentTime);

  return xCurrentTime;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xCurrentTime_writer */
/* sha: b8d0feb9be91836fce2b540db7255f272d9fabffc4a9398a9eb2029678e6b56a */
#if BIND_Sqlite3Vfs_xCurrentTime_FIELD_WRITER
/* set_xCurrentTime
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, double *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xCurrentTime(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xCurrentTime;

  mrb_get_args(mrb, "o", &xCurrentTime);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_double_PTR_RPAREN(xCurrentTime);

  int (*native_xCurrentTime)(sqlite3_vfs *, double *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_double_PTR_RPAREN(xCurrentTime);

  native_self->xCurrentTime = native_xCurrentTime;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xGetLastError_reader */
/* sha: 61c782dec155477e01f8ee4ea784a1d52ae3a0b43d0545574427900b923cedfa */
#if BIND_Sqlite3Vfs_xGetLastError_FIELD_READER
/* get_xGetLastError
 *
 * Return Type: int (*)(sqlite3_vfs *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xGetLastError(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, int, char *) native_xGetLastError = native_self->xGetLastError;

  mrb_value xGetLastError = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(mrb, native_xGetLastError);

  return xGetLastError;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xGetLastError_writer */
/* sha: 5420046bae079154ebbba891499ffab7f259d11ade472977c64b355efa00722b */
#if BIND_Sqlite3Vfs_xGetLastError_FIELD_WRITER
/* set_xGetLastError
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, int, char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xGetLastError(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xGetLastError;

  mrb_get_args(mrb, "o", &xGetLastError);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(xGetLastError);

  int (*native_xGetLastError)(sqlite3_vfs *, int, char *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_intCOMMA_char_PTR_RPAREN(xGetLastError);

  native_self->xGetLastError = native_xGetLastError;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xCurrentTimeInt64_reader */
/* sha: eedef0ac1e894a71d69f67d411969b12e5ad5b9e8814070778f359a24a0e73f4 */
#if BIND_Sqlite3Vfs_xCurrentTimeInt64_FIELD_READER
/* get_xCurrentTimeInt64
 *
 * Return Type: int (*)(sqlite3_vfs *, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xCurrentTimeInt64(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, sqlite3_int64 *) native_xCurrentTimeInt64 = native_self->xCurrentTimeInt64;

  mrb_value xCurrentTimeInt64 = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_sqlite3_int64_PTR_RPAREN(mrb, native_xCurrentTimeInt64);

  return xCurrentTimeInt64;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xCurrentTimeInt64_writer */
/* sha: 298256ca40890ec3f9efcacc6b09f04043e0cb43f8d9295d45eeb28a66ecd0d7 */
#if BIND_Sqlite3Vfs_xCurrentTimeInt64_FIELD_WRITER
/* set_xCurrentTimeInt64
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xCurrentTimeInt64(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xCurrentTimeInt64;

  mrb_get_args(mrb, "o", &xCurrentTimeInt64);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_sqlite3_int64_PTR_RPAREN(xCurrentTimeInt64);

  int (*native_xCurrentTimeInt64)(sqlite3_vfs *, sqlite3_int64 *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_sqlite3_int64_PTR_RPAREN(xCurrentTimeInt64);

  native_self->xCurrentTimeInt64 = native_xCurrentTimeInt64;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xSetSystemCall_reader */
/* sha: a311c06d724c37c757a50ef8a34b7bc1a711f0c1d48e6a14f71bd955a3d47d27 */
#if BIND_Sqlite3Vfs_xSetSystemCall_FIELD_READER
/* get_xSetSystemCall
 *
 * Return Type: int (*)(sqlite3_vfs *, const char *, sqlite3_syscall_ptr)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xSetSystemCall(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  int (*)(sqlite3_vfs *, const char *, sqlite3_syscall_ptr) native_xSetSystemCall = native_self->xSetSystemCall;

  mrb_value xSetSystemCall = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_sqlite3_syscall_ptr_RPAREN(mrb, native_xSetSystemCall);

  return xSetSystemCall;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xSetSystemCall_writer */
/* sha: c73245184c377132be876b2fdad376d7769e94e128444b3bd0742cd82e15ae4e */
#if BIND_Sqlite3Vfs_xSetSystemCall_FIELD_WRITER
/* set_xSetSystemCall
 *
 * Parameters:
 * - value: int (*)(sqlite3_vfs *, const char *, sqlite3_syscall_ptr)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xSetSystemCall(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xSetSystemCall;

  mrb_get_args(mrb, "o", &xSetSystemCall);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_sqlite3_syscall_ptr_RPAREN(xSetSystemCall);

  int (*native_xSetSystemCall)(sqlite3_vfs *, const char *, sqlite3_syscall_ptr) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_COMMA_sqlite3_syscall_ptr_RPAREN(xSetSystemCall);

  native_self->xSetSystemCall = native_xSetSystemCall;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xGetSystemCall_reader */
/* sha: c913583569ee2a978503abbce18c80e968f7900aa1a4a5c972ce9f3e7be88ab8 */
#if BIND_Sqlite3Vfs_xGetSystemCall_FIELD_READER
/* get_xGetSystemCall
 *
 * Return Type: sqlite3_syscall_ptr (*)(sqlite3_vfs *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xGetSystemCall(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  sqlite3_syscall_ptr (*)(sqlite3_vfs *, const char *) native_xGetSystemCall = native_self->xGetSystemCall;

  mrb_value xGetSystemCall = TODO_mruby_box_sqlite3_syscall_ptr_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_RPAREN(mrb, native_xGetSystemCall);

  return xGetSystemCall;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xGetSystemCall_writer */
/* sha: 65fcb6c8c5906cab3cb18f1cede9a8fa72d87f2c7a383d318bb4595b756764b9 */
#if BIND_Sqlite3Vfs_xGetSystemCall_FIELD_WRITER
/* set_xGetSystemCall
 *
 * Parameters:
 * - value: sqlite3_syscall_ptr (*)(sqlite3_vfs *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xGetSystemCall(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xGetSystemCall;

  mrb_get_args(mrb, "o", &xGetSystemCall);

  /* type checking */
  TODO_type_check_sqlite3_syscall_ptr_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_RPAREN(xGetSystemCall);

  sqlite3_syscall_ptr (*native_xGetSystemCall)(sqlite3_vfs *, const char *) = TODO_mruby_unbox_sqlite3_syscall_ptr_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMAchar_PTR_RPAREN(xGetSystemCall);

  native_self->xGetSystemCall = native_xGetSystemCall;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xNextSystemCall_reader */
/* sha: f8b1ec1c9d97109514866b62bfbc5533b7d33a976e7de9f00dd0d3ea4dc0f9f3 */
#if BIND_Sqlite3Vfs_xNextSystemCall_FIELD_READER
/* get_xNextSystemCall
 *
 * Return Type: const char *(*)(sqlite3_vfs *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_get_xNextSystemCall(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);

  const char *(*)(sqlite3_vfs *, const char *) native_xNextSystemCall = native_self->xNextSystemCall;

  mrb_value xNextSystemCall = TODO_mruby_box_char_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_const_char_PTR_RPAREN(mrb, native_xNextSystemCall);

  return xNextSystemCall;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::xNextSystemCall_writer */
/* sha: 933e79e3bbe38d4a85d0645a3484f589cfced86d88a2e5e100dad49d63f1d736 */
#if BIND_Sqlite3Vfs_xNextSystemCall_FIELD_WRITER
/* set_xNextSystemCall
 *
 * Parameters:
 * - value: const char *(*)(sqlite3_vfs *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xNextSystemCall(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
  mrb_value xNextSystemCall;

  mrb_get_args(mrb, "o", &xNextSystemCall);

  /* type checking */
  TODO_type_check_char_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_const_char_PTR_RPAREN(xNextSystemCall);

  const char *(*native_xNextSystemCall)(sqlite3_vfs *, const char *) = TODO_mruby_unbox_char_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vfs_PTR_COMMA_const_char_PTR_RPAREN(xNextSystemCall);

  native_self->xNextSystemCall = native_xNextSystemCall;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Vfs_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3Vfs::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::class_definition */
/* sha: 203ef002429397aefc1efdde9c40f085d0391e1d9d53e5cc2bf50172a4776b50 */
  struct RClass* Sqlite3Vfs_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Vfs", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Vfs_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::class_method_definitions */
/* sha: 436c75c9186a5ab0e029d4a8beb16d7ea8258ef6b0c9528838aff2ac41e18331 */
#if BIND_Sqlite3Vfs_INITIALIZE
  mrb_define_method(mrb, Sqlite3Vfs_class, "initialize", mrb_SQLite_Sqlite3Vfs_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::pre_attr_definitions */
/* sha: user_defined */

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

/* MRUBY_BINDING: Sqlite3Vfs::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
