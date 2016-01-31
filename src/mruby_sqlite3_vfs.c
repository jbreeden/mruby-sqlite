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
/* sha: 98ed3345393f8e56ec7e15329d8c45e1e6864d025fd1b8162698688737313c48 */
#if BIND_Sqlite3Vfs_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Vfs_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  sqlite3_vfs* native_object = (sqlite3_vfs*)calloc(1, sizeof(sqlite3_vfs));
  mruby_gift_sqlite3_vfs_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3Vfs::iVersion_reader */
/* sha: bbec8d7dc01ac8c19aabf3c9d44958430d0d9ccb57914e4128054808498f772d */
#if BIND_Sqlite3Vfs_iVersion_FIELD_READER
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
/* sha: 9e79ad562ef52627eeef3d1254f65538f00e1c58b0ebd176cc7b3db680686cd4 */
#if BIND_Sqlite3Vfs_iVersion_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vfs_set_iVersion(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
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
/* sha: af700dc3e9614180bd51c565dbe04e95b070e981fc04d31afe9bfc5c6833e9c1 */
#if BIND_Sqlite3Vfs_szOsFile_FIELD_READER
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
/* sha: 0f948cbc091760f24f844d712410512909f1f851f8f32608ce1963e9cc16980e */
#if BIND_Sqlite3Vfs_szOsFile_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vfs_set_szOsFile(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
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
/* sha: 415c43a5917727e76a37c6ed6fdbb8a6bd5c6b600ab3beef8ad4ab6fcc592f00 */
#if BIND_Sqlite3Vfs_mxPathname_FIELD_READER
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
/* sha: 914695ad76c44cf0fe246498d5c6703750e0ae82b975052c78b5de9fae547c0a */
#if BIND_Sqlite3Vfs_mxPathname_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vfs_set_mxPathname(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
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
/* sha: 1facad7d743970c7b5ecd3cb7bf21bc36bc80c0a8e9f1cb75f74003c299dd33f */
#if BIND_Sqlite3Vfs_pNext_FIELD_READER
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
/* sha: ddd15df914cb4ff2deebfd0ef84ef177a13c0b811741ffaf7f5fa8365d8fb568 */
#if BIND_Sqlite3Vfs_pNext_FIELD_WRITER
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
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::zName_reader */
/* sha: 02457083f99a11f3061c23c684a7ed566b6508d7c1defef95789a5a7181406d3 */
#if BIND_Sqlite3Vfs_zName_FIELD_READER
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
/* sha: c8366afde15c4cf6f5fe662458a1de1cb8889036291bfe28de6952dcf1538920 */
#if BIND_Sqlite3Vfs_zName_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vfs_set_zName(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
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
/* sha: 2d007dc8a79191d9ca82818fba85df9676a927ab97942d2f83a8b385bfaa3f5f */
#if BIND_Sqlite3Vfs_pAppData_FIELD_READER
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
/* sha: 28c03fb5b57b5551a3f12c763fb2b46bf08683cb13a5ff88f838b0fdc800e6ab */
#if BIND_Sqlite3Vfs_pAppData_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vfs_set_pAppData(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
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
/* sha: ab221356f05dd7d00ac12a3e0462ad1164b8fbd7338eb47dcae18aaaf5263548 */
#if BIND_Sqlite3Vfs_xOpen_FIELD_READER
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
/* sha: 67998d2825675e34587e5cad8d3ba6668d5b2be1111cf2e247b77874341662c9 */
#if BIND_Sqlite3Vfs_xOpen_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xOpen(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
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
/* sha: 80fffece3e585663fd6b2fa2f5a02662c0667b04aea821a34011ec4d6f346363 */
#if BIND_Sqlite3Vfs_xDelete_FIELD_READER
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
/* sha: a1a9ba8c5ec9f4fecf0e1de4bc7472b982c945f3a32c6e63d065688e066cca44 */
#if BIND_Sqlite3Vfs_xDelete_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xDelete(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
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
/* sha: 1002235c7de75bb2a3e1eb18a94d46e48862cf25ca07caa292ca47e735742637 */
#if BIND_Sqlite3Vfs_xAccess_FIELD_READER
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
/* sha: c325abe8caa8bc3106390a34f84443caa205dbcbada3e63502e62fbe8ec236b4 */
#if BIND_Sqlite3Vfs_xAccess_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xAccess(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
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
/* sha: 56d887c0f62b4b37ceab91c4c2b4e1cb72d4028da99b419376e82fbb9ad56d23 */
#if BIND_Sqlite3Vfs_xFullPathname_FIELD_READER
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
/* sha: f9966ee37d05dd023d963102ac7368911682d0500603a44b309f4fadffc7a368 */
#if BIND_Sqlite3Vfs_xFullPathname_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xFullPathname(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
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
/* sha: e4e40e85215108cdcf6fb827e2bd64f0f8d5fa5f409bf02d746d758dfee8b140 */
#if BIND_Sqlite3Vfs_xDlOpen_FIELD_READER
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
/* sha: 4c2dd7abf2c1e12b496c5bc328c4dabfcb12b5a9798cce318836f8c889884a16 */
#if BIND_Sqlite3Vfs_xDlOpen_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xDlOpen(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
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
/* sha: b3dab6545de6caf5d6e0ce871392edf01841cc1d9fb5c8fcce789957ae016dce */
#if BIND_Sqlite3Vfs_xDlError_FIELD_READER
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
/* sha: ea4cd45b8b1df95bad5256c0d9b23c5a1ae0ff09bd9ade83457ecf251dd68aa5 */
#if BIND_Sqlite3Vfs_xDlError_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xDlError(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
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
/* sha: 0e04f41b71932db3841c3169fa6ff100575e499a9412b54802e91743e3c98834 */
#if BIND_Sqlite3Vfs_xDlSym_FIELD_READER
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
/* sha: 24e62de56b31523794659b4f46dcdc7441830e41a619f54d519d1839c5132991 */
#if BIND_Sqlite3Vfs_xDlSym_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xDlSym(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
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
/* sha: e25f5523a5f54d7360028649807c79f4bfe613b300ea65b8822d475678421a20 */
#if BIND_Sqlite3Vfs_xDlClose_FIELD_READER
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
/* sha: c4c0605195e45ad81eb23b207e2063a495f6ae09f1986bfd671453f90b3e0881 */
#if BIND_Sqlite3Vfs_xDlClose_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xDlClose(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
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
/* sha: 506083da9ed5c6f2f68025f7e433b47279c33a419291514552f6f25521119aa9 */
#if BIND_Sqlite3Vfs_xRandomness_FIELD_READER
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
/* sha: 7732a4a0fa7bbd83e832584f7355e17ece54f982dbdcdd8808368dd6a1f50015 */
#if BIND_Sqlite3Vfs_xRandomness_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xRandomness(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
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
/* sha: 06b14c5a2782a6862123ce3ef52d968878735209af9ce463da488264baec3b17 */
#if BIND_Sqlite3Vfs_xSleep_FIELD_READER
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
/* sha: 78a91ea2615d4089e0c1505ec816560dd9136aafece6c29ec2e5c71dd2771873 */
#if BIND_Sqlite3Vfs_xSleep_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xSleep(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
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
/* sha: 2377c7bdff4db738c467c81c71c8911324d0d1babefea4a2c01a1b6c355d1ed5 */
#if BIND_Sqlite3Vfs_xCurrentTime_FIELD_READER
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
/* sha: fc15294e27539c3bc128bd2588861fab0623f6864e66a74d2fad73bff2504b0f */
#if BIND_Sqlite3Vfs_xCurrentTime_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xCurrentTime(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
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
/* sha: 6759a44a679ff2b336345bdff52bd9cff40f123f112774cc014b29cabd6d3cae */
#if BIND_Sqlite3Vfs_xGetLastError_FIELD_READER
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
/* sha: 9f66401bee985982faf63a8f0f20d5ca60741f4333704baeebb20812eedd1716 */
#if BIND_Sqlite3Vfs_xGetLastError_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xGetLastError(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
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
/* sha: 9822ca46ec768f289d5cdfc9b5434292b26296bc3a7b9ec7141d160f522fb12d */
#if BIND_Sqlite3Vfs_xCurrentTimeInt64_FIELD_READER
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
/* sha: 1c7e38a8bc6970e8a225e1037444f004a42385139e11045050a43d1208f3a267 */
#if BIND_Sqlite3Vfs_xCurrentTimeInt64_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xCurrentTimeInt64(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
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
/* sha: 1aa299ba0993545616b05dc6e7e6e62e739ea8197e6aa33c60d5c87364a79a69 */
#if BIND_Sqlite3Vfs_xSetSystemCall_FIELD_READER
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
/* sha: f0bd5c1f5cd38a0565567c4cfa36e81bedc6dc75a158537ee01f09619fe52c19 */
#if BIND_Sqlite3Vfs_xSetSystemCall_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xSetSystemCall(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
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
/* sha: 34af234e77d91d77d165e4d9274b7bda125a70e0dc598c3416ac48a3edd143d6 */
#if BIND_Sqlite3Vfs_xGetSystemCall_FIELD_READER
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
/* sha: 87426a29fc7411ca828f1c1c148f2b1fab34538c4b84c967b7eb84fbcb1f5e47 */
#if BIND_Sqlite3Vfs_xGetSystemCall_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xGetSystemCall(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
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
/* sha: 9fe8260aa12785a787a5d3986e5b5ed0c054c1e7301aac2c7e157d5aacf8821b */
#if BIND_Sqlite3Vfs_xNextSystemCall_FIELD_READER
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
/* sha: c8e92e9921a46e42046ace79cc9a315c62a66470f8db12374a75d3ffee480429 */
#if BIND_Sqlite3Vfs_xNextSystemCall_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Vfs_set_xNextSystemCall(mrb_state* mrb, mrb_value self) {
  sqlite3_vfs * native_self = mruby_unbox_sqlite3_vfs(self);
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
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

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


/* MRUBY_BINDING: Sqlite3Vfs::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
