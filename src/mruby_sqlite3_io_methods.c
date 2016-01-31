/*
 * sqlite3_io_methods
 * Defined in file sqlite3.h @ line 637
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3IoMethods_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::initialize */
/* sha: 1fa80c1a6c8ae6fef4276918aba25195e02f0cf529dd099f8517944250165b13 */
#if BIND_Sqlite3IoMethods_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IoMethods_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  sqlite3_io_methods* native_object = (sqlite3_io_methods*)calloc(1, sizeof(sqlite3_io_methods));
  mruby_gift_sqlite3_io_methods_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3IoMethods::iVersion_reader */
/* sha: c3c85317e6a992b79dee52446f94a20dea153eae881540c8875cef7fe1f98faf */
#if BIND_Sqlite3IoMethods_iVersion_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_iVersion(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int native_iVersion = native_self->iVersion;

  mrb_value iVersion = mrb_fixnum_value(native_iVersion);

  return iVersion;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::iVersion_writer */
/* sha: 1b08eb16015eae667add353ba09341e7664b1147c3b8f0e6f3694828faab9e58 */
#if BIND_Sqlite3IoMethods_iVersion_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_iVersion(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_int native_iVersion;

  mrb_get_args(mrb, "i", &native_iVersion);

  native_self->iVersion = native_iVersion;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xClose_reader */
/* sha: fd99227a6695ccea322b441fe998027c67fe49938823831d70cd54e2ead7c08b */
#if BIND_Sqlite3IoMethods_xClose_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xClose(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *) native_xClose = native_self->xClose;

  mrb_value xClose = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(mrb, native_xClose);

  return xClose;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xClose_writer */
/* sha: 580a84740af6b2d11856be640f84c4fc5e2a2060e177011504cb07accfab6ced */
#if BIND_Sqlite3IoMethods_xClose_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xClose(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xClose;

  mrb_get_args(mrb, "o", &xClose);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(xClose);

  int (*native_xClose)(sqlite3_file *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(xClose);

  native_self->xClose = native_xClose;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xRead_reader */
/* sha: 2db8b8027e51ff1dfa7f998a83db6e5ca04b02778951f4b3aff3fbf6ada9419f */
#if BIND_Sqlite3IoMethods_xRead_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xRead(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, void *, int, sqlite3_int64) native_xRead = native_self->xRead;

  mrb_value xRead = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_void_PTR_COMMA_intCOMMA_sqlite3_int64_RPAREN(mrb, native_xRead);

  return xRead;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xRead_writer */
/* sha: 4f5440220515d71f366f4672c8b19504c5c80f9db7b57ef97ac41e509ac10b57 */
#if BIND_Sqlite3IoMethods_xRead_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xRead(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xRead;

  mrb_get_args(mrb, "o", &xRead);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_void_PTR_COMMA_intCOMMA_sqlite3_int64_RPAREN(xRead);

  int (*native_xRead)(sqlite3_file *, void *, int, sqlite3_int64) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_void_PTR_COMMA_intCOMMA_sqlite3_int64_RPAREN(xRead);

  native_self->xRead = native_xRead;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xWrite_reader */
/* sha: 04e2fde40996ec78c11f36593d3d410673b8c1ae7daf07f8b518e2825da2b2f8 */
#if BIND_Sqlite3IoMethods_xWrite_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xWrite(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, const void *, int, sqlite3_int64) native_xWrite = native_self->xWrite;

  mrb_value xWrite = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMAvoid_PTR_COMMA_intCOMMA_sqlite3_int64_RPAREN(mrb, native_xWrite);

  return xWrite;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xWrite_writer */
/* sha: bc4bb9d70e23d1934f345ee29343c062f838787455bd1dfe71b61c98e3b32eb9 */
#if BIND_Sqlite3IoMethods_xWrite_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xWrite(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xWrite;

  mrb_get_args(mrb, "o", &xWrite);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMAvoid_PTR_COMMA_intCOMMA_sqlite3_int64_RPAREN(xWrite);

  int (*native_xWrite)(sqlite3_file *, const void *, int, sqlite3_int64) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMAvoid_PTR_COMMA_intCOMMA_sqlite3_int64_RPAREN(xWrite);

  native_self->xWrite = native_xWrite;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xTruncate_reader */
/* sha: 6d7197ba843b0c35ac5bfff7869e63204c0b99bb0b31a3d4a6a0db83b7dc643a */
#if BIND_Sqlite3IoMethods_xTruncate_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xTruncate(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, sqlite3_int64) native_xTruncate = native_self->xTruncate;

  mrb_value xTruncate = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64_RPAREN(mrb, native_xTruncate);

  return xTruncate;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xTruncate_writer */
/* sha: 97a1cf8e2b79980fcc6f8849301093264a9ffa12679c456f006e67a6f6f1ad21 */
#if BIND_Sqlite3IoMethods_xTruncate_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xTruncate(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xTruncate;

  mrb_get_args(mrb, "o", &xTruncate);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64_RPAREN(xTruncate);

  int (*native_xTruncate)(sqlite3_file *, sqlite3_int64) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64_RPAREN(xTruncate);

  native_self->xTruncate = native_xTruncate;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xSync_reader */
/* sha: 21a3d409c68162f433fa9090316c5893f1b754b6d73e905c6f73159e32c4c8a6 */
#if BIND_Sqlite3IoMethods_xSync_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xSync(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int) native_xSync = native_self->xSync;

  mrb_value xSync = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(mrb, native_xSync);

  return xSync;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xSync_writer */
/* sha: d5be3904a82874f3b1c8676f51c03ae47d658bee7bc611d407d9b740f281bdb6 */
#if BIND_Sqlite3IoMethods_xSync_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xSync(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xSync;

  mrb_get_args(mrb, "o", &xSync);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(xSync);

  int (*native_xSync)(sqlite3_file *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(xSync);

  native_self->xSync = native_xSync;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xFileSize_reader */
/* sha: 084357fcb830e52dd975f6a917141fe5aeffcd8dc1293aca29210b61d958fdc1 */
#if BIND_Sqlite3IoMethods_xFileSize_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xFileSize(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, sqlite3_int64 *) native_xFileSize = native_self->xFileSize;

  mrb_value xFileSize = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64_PTR_RPAREN(mrb, native_xFileSize);

  return xFileSize;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xFileSize_writer */
/* sha: 337ba92a7c4582e46d00b294d4fda559f6c7692311fa1091c637a5ca74de919c */
#if BIND_Sqlite3IoMethods_xFileSize_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xFileSize(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xFileSize;

  mrb_get_args(mrb, "o", &xFileSize);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64_PTR_RPAREN(xFileSize);

  int (*native_xFileSize)(sqlite3_file *, sqlite3_int64 *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64_PTR_RPAREN(xFileSize);

  native_self->xFileSize = native_xFileSize;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xLock_reader */
/* sha: 69fb37344113e30ad113f28774c2d7e20405f32dcbb81fc5f2fe1e1c8d080e93 */
#if BIND_Sqlite3IoMethods_xLock_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xLock(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int) native_xLock = native_self->xLock;

  mrb_value xLock = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(mrb, native_xLock);

  return xLock;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xLock_writer */
/* sha: c83825235e232c90fc6af0e9b7d8bad8d110cbd614f7e8fc8a29b38b07f72185 */
#if BIND_Sqlite3IoMethods_xLock_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xLock(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xLock;

  mrb_get_args(mrb, "o", &xLock);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(xLock);

  int (*native_xLock)(sqlite3_file *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(xLock);

  native_self->xLock = native_xLock;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xUnlock_reader */
/* sha: 80025472a1a47be718195ec3e67ae33ca4649504516ac80798f20ba4a11a6b0d */
#if BIND_Sqlite3IoMethods_xUnlock_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xUnlock(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int) native_xUnlock = native_self->xUnlock;

  mrb_value xUnlock = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(mrb, native_xUnlock);

  return xUnlock;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xUnlock_writer */
/* sha: cb4ba1cc85a989e7e249ffffbd938bdcf1f2fa791acabbed1721bba0b47c86a4 */
#if BIND_Sqlite3IoMethods_xUnlock_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xUnlock(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xUnlock;

  mrb_get_args(mrb, "o", &xUnlock);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(xUnlock);

  int (*native_xUnlock)(sqlite3_file *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(xUnlock);

  native_self->xUnlock = native_xUnlock;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xCheckReservedLock_reader */
/* sha: 0eeccefd1a7ddd5a75c8f655829762e1ad0bed558728d725cad14971ce310392 */
#if BIND_Sqlite3IoMethods_xCheckReservedLock_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xCheckReservedLock(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int *) native_xCheckReservedLock = native_self->xCheckReservedLock;

  mrb_value xCheckReservedLock = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_PTR_RPAREN(mrb, native_xCheckReservedLock);

  return xCheckReservedLock;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xCheckReservedLock_writer */
/* sha: 6e5c47d5050bd0baa05717b2cb1eaae988eddf9d64c654c2177424ead8a22331 */
#if BIND_Sqlite3IoMethods_xCheckReservedLock_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xCheckReservedLock(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xCheckReservedLock;

  mrb_get_args(mrb, "o", &xCheckReservedLock);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_PTR_RPAREN(xCheckReservedLock);

  int (*native_xCheckReservedLock)(sqlite3_file *, int *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_PTR_RPAREN(xCheckReservedLock);

  native_self->xCheckReservedLock = native_xCheckReservedLock;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xFileControl_reader */
/* sha: 34a2e687be0ccc0d0d93934b7483c41926a7ac15da140c3fce740856a77d0193 */
#if BIND_Sqlite3IoMethods_xFileControl_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xFileControl(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int, void *) native_xFileControl = native_self->xFileControl;

  mrb_value xFileControl = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_void_PTR_RPAREN(mrb, native_xFileControl);

  return xFileControl;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xFileControl_writer */
/* sha: 8c8d9872d14f64d3271e9c630c3d24d2144e8b16e8e844aa5d243bf158516ba9 */
#if BIND_Sqlite3IoMethods_xFileControl_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xFileControl(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xFileControl;

  mrb_get_args(mrb, "o", &xFileControl);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_void_PTR_RPAREN(xFileControl);

  int (*native_xFileControl)(sqlite3_file *, int, void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_void_PTR_RPAREN(xFileControl);

  native_self->xFileControl = native_xFileControl;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xSectorSize_reader */
/* sha: d880e25db1a9c9f16379fe666c0114e210fcf0f4b6874ca853f677159227dabe */
#if BIND_Sqlite3IoMethods_xSectorSize_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xSectorSize(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *) native_xSectorSize = native_self->xSectorSize;

  mrb_value xSectorSize = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(mrb, native_xSectorSize);

  return xSectorSize;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xSectorSize_writer */
/* sha: a2ad581b9b7adfa5ea64e17e545185c88c1f6d47bcc405970629b79e6eee9070 */
#if BIND_Sqlite3IoMethods_xSectorSize_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xSectorSize(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xSectorSize;

  mrb_get_args(mrb, "o", &xSectorSize);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(xSectorSize);

  int (*native_xSectorSize)(sqlite3_file *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(xSectorSize);

  native_self->xSectorSize = native_xSectorSize;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xDeviceCharacteristics_reader */
/* sha: 6c5be157d78c06309d547d621cd95fe41542d83c8340f2b67ebe2a4ac5a8521c */
#if BIND_Sqlite3IoMethods_xDeviceCharacteristics_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xDeviceCharacteristics(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *) native_xDeviceCharacteristics = native_self->xDeviceCharacteristics;

  mrb_value xDeviceCharacteristics = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(mrb, native_xDeviceCharacteristics);

  return xDeviceCharacteristics;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xDeviceCharacteristics_writer */
/* sha: eb12ca5fe513abdc8bf2f596ecdb03eb201e2f7028bf6cdc38e2e87414396bdf */
#if BIND_Sqlite3IoMethods_xDeviceCharacteristics_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xDeviceCharacteristics(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xDeviceCharacteristics;

  mrb_get_args(mrb, "o", &xDeviceCharacteristics);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(xDeviceCharacteristics);

  int (*native_xDeviceCharacteristics)(sqlite3_file *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(xDeviceCharacteristics);

  native_self->xDeviceCharacteristics = native_xDeviceCharacteristics;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xShmMap_reader */
/* sha: 5e95ceefdce4d3ed39475aa53f355b4de7041dc2387f21d11423c978102d0922 */
#if BIND_Sqlite3IoMethods_xShmMap_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xShmMap(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int, int, int, volatile void **) native_xShmMap = native_self->xShmMap;

  mrb_value xShmMap = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_intCOMMA_intCOMMA_volatile_void_PTR_PTR_RPAREN(mrb, native_xShmMap);

  return xShmMap;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xShmMap_writer */
/* sha: b70314c1d44ab10cf05b45744e13c9fd1fe75689b4c1b3346abd056955eed621 */
#if BIND_Sqlite3IoMethods_xShmMap_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xShmMap(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xShmMap;

  mrb_get_args(mrb, "o", &xShmMap);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_intCOMMA_intCOMMA_volatile_void_PTR_PTR_RPAREN(xShmMap);

  int (*native_xShmMap)(sqlite3_file *, int, int, int, volatile void **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_intCOMMA_intCOMMA_volatile_void_PTR_PTR_RPAREN(xShmMap);

  native_self->xShmMap = native_xShmMap;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xShmLock_reader */
/* sha: facd88559c659b959e3aa6e5bd0339c73b7f14fe72fe454465156f5503462249 */
#if BIND_Sqlite3IoMethods_xShmLock_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xShmLock(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int, int, int) native_xShmLock = native_self->xShmLock;

  mrb_value xShmLock = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_intCOMMA_int_RPAREN(mrb, native_xShmLock);

  return xShmLock;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xShmLock_writer */
/* sha: 14a73431bdf65805d8dce02cb3affb2d712cefaa31d7e71d329f86961686f0d4 */
#if BIND_Sqlite3IoMethods_xShmLock_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xShmLock(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xShmLock;

  mrb_get_args(mrb, "o", &xShmLock);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_intCOMMA_int_RPAREN(xShmLock);

  int (*native_xShmLock)(sqlite3_file *, int, int, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_intCOMMA_int_RPAREN(xShmLock);

  native_self->xShmLock = native_xShmLock;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xShmBarrier_reader */
/* sha: 1b2d0f9f9fa6e04ce2c6eb064cec36d98f85bec984d2ca9482cac9b89df020e7 */
#if BIND_Sqlite3IoMethods_xShmBarrier_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xShmBarrier(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  void (*)(sqlite3_file *) native_xShmBarrier = native_self->xShmBarrier;

  mrb_value xShmBarrier = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(mrb, native_xShmBarrier);

  return xShmBarrier;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xShmBarrier_writer */
/* sha: 82d3078d05e6ce5553daa1f4d38f220a0229c2f716b5a636fbae1e46f7788b33 */
#if BIND_Sqlite3IoMethods_xShmBarrier_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xShmBarrier(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xShmBarrier;

  mrb_get_args(mrb, "o", &xShmBarrier);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(xShmBarrier);

  void (*native_xShmBarrier)(sqlite3_file *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(xShmBarrier);

  native_self->xShmBarrier = native_xShmBarrier;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xShmUnmap_reader */
/* sha: 13ddc07e769705fbd8a7899a70e00dc628ad038b2185babc068207b00e77a994 */
#if BIND_Sqlite3IoMethods_xShmUnmap_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xShmUnmap(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int) native_xShmUnmap = native_self->xShmUnmap;

  mrb_value xShmUnmap = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(mrb, native_xShmUnmap);

  return xShmUnmap;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xShmUnmap_writer */
/* sha: 8c88db59d4afbd590dd0ae660f3145c0149a40467eeb1ae93cc0f054c76cbef3 */
#if BIND_Sqlite3IoMethods_xShmUnmap_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xShmUnmap(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xShmUnmap;

  mrb_get_args(mrb, "o", &xShmUnmap);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(xShmUnmap);

  int (*native_xShmUnmap)(sqlite3_file *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(xShmUnmap);

  native_self->xShmUnmap = native_xShmUnmap;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xFetch_reader */
/* sha: 5ac3fd0c217322653e39e472afd14913657afbb20de977bc64f1388782d4cd07 */
#if BIND_Sqlite3IoMethods_xFetch_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xFetch(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, sqlite3_int64, int, void **) native_xFetch = native_self->xFetch;

  mrb_value xFetch = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64COMMA_intCOMMA_void_PTR_PTR_RPAREN(mrb, native_xFetch);

  return xFetch;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xFetch_writer */
/* sha: f52c112650e15c253465b332239d6c1e37b7f3b22422a2b6686dd71cfe8e6441 */
#if BIND_Sqlite3IoMethods_xFetch_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xFetch(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xFetch;

  mrb_get_args(mrb, "o", &xFetch);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64COMMA_intCOMMA_void_PTR_PTR_RPAREN(xFetch);

  int (*native_xFetch)(sqlite3_file *, sqlite3_int64, int, void **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64COMMA_intCOMMA_void_PTR_PTR_RPAREN(xFetch);

  native_self->xFetch = native_xFetch;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xUnfetch_reader */
/* sha: 451abdfd6e45e75743f90318c23e4529b24a0ffd5c77c6fb728a02ad2e52e774 */
#if BIND_Sqlite3IoMethods_xUnfetch_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xUnfetch(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, sqlite3_int64, void *) native_xUnfetch = native_self->xUnfetch;

  mrb_value xUnfetch = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64COMMA_void_PTR_RPAREN(mrb, native_xUnfetch);

  return xUnfetch;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xUnfetch_writer */
/* sha: 95318c8e49b0bffd73842e361eb4d973457a6b11f7327a3fcc8e189658314d9d */
#if BIND_Sqlite3IoMethods_xUnfetch_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xUnfetch(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xUnfetch;

  mrb_get_args(mrb, "o", &xUnfetch);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64COMMA_void_PTR_RPAREN(xUnfetch);

  int (*native_xUnfetch)(sqlite3_file *, sqlite3_int64, void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64COMMA_void_PTR_RPAREN(xUnfetch);

  native_self->xUnfetch = native_xUnfetch;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3IoMethods_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::class_definition */
/* sha: a957d6d3709e0ef5e895292edff2a20cddac03394c145574e5fec896d77fb6c7 */
  struct RClass* Sqlite3IoMethods_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3IoMethods", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3IoMethods_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::class_method_definitions */
/* sha: 67ff1eedd275491e909372533a37b9242f4541c0c664d139f07666f393afebd3 */
#if BIND_Sqlite3IoMethods_INITIALIZE
  mrb_define_method(mrb, Sqlite3IoMethods_class, "initialize", mrb_SQLite_Sqlite3IoMethods_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::attr_definitions */
/* sha: 02b4d271c5e2df8038f791cc96d2b53bec80160ddea3f7f6d9496e199397d6f3 */
  /*
   * Fields
   */
#if BIND_Sqlite3IoMethods_iVersion_FIELD_READER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "iVersion", mrb_SQLite_Sqlite3IoMethods_get_iVersion, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IoMethods_iVersion_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "iVersion=", mrb_SQLite_Sqlite3IoMethods_set_iVersion, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xClose_FIELD_READER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xClose", mrb_SQLite_Sqlite3IoMethods_get_xClose, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IoMethods_xClose_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xClose=", mrb_SQLite_Sqlite3IoMethods_set_xClose, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xRead_FIELD_READER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xRead", mrb_SQLite_Sqlite3IoMethods_get_xRead, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IoMethods_xRead_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xRead=", mrb_SQLite_Sqlite3IoMethods_set_xRead, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xWrite_FIELD_READER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xWrite", mrb_SQLite_Sqlite3IoMethods_get_xWrite, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IoMethods_xWrite_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xWrite=", mrb_SQLite_Sqlite3IoMethods_set_xWrite, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xTruncate_FIELD_READER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xTruncate", mrb_SQLite_Sqlite3IoMethods_get_xTruncate, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IoMethods_xTruncate_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xTruncate=", mrb_SQLite_Sqlite3IoMethods_set_xTruncate, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xSync_FIELD_READER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xSync", mrb_SQLite_Sqlite3IoMethods_get_xSync, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IoMethods_xSync_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xSync=", mrb_SQLite_Sqlite3IoMethods_set_xSync, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xFileSize_FIELD_READER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xFileSize", mrb_SQLite_Sqlite3IoMethods_get_xFileSize, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IoMethods_xFileSize_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xFileSize=", mrb_SQLite_Sqlite3IoMethods_set_xFileSize, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xLock_FIELD_READER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xLock", mrb_SQLite_Sqlite3IoMethods_get_xLock, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IoMethods_xLock_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xLock=", mrb_SQLite_Sqlite3IoMethods_set_xLock, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xUnlock_FIELD_READER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xUnlock", mrb_SQLite_Sqlite3IoMethods_get_xUnlock, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IoMethods_xUnlock_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xUnlock=", mrb_SQLite_Sqlite3IoMethods_set_xUnlock, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xCheckReservedLock_FIELD_READER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xCheckReservedLock", mrb_SQLite_Sqlite3IoMethods_get_xCheckReservedLock, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IoMethods_xCheckReservedLock_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xCheckReservedLock=", mrb_SQLite_Sqlite3IoMethods_set_xCheckReservedLock, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xFileControl_FIELD_READER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xFileControl", mrb_SQLite_Sqlite3IoMethods_get_xFileControl, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IoMethods_xFileControl_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xFileControl=", mrb_SQLite_Sqlite3IoMethods_set_xFileControl, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xSectorSize_FIELD_READER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xSectorSize", mrb_SQLite_Sqlite3IoMethods_get_xSectorSize, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IoMethods_xSectorSize_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xSectorSize=", mrb_SQLite_Sqlite3IoMethods_set_xSectorSize, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xDeviceCharacteristics_FIELD_READER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xDeviceCharacteristics", mrb_SQLite_Sqlite3IoMethods_get_xDeviceCharacteristics, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IoMethods_xDeviceCharacteristics_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xDeviceCharacteristics=", mrb_SQLite_Sqlite3IoMethods_set_xDeviceCharacteristics, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xShmMap_FIELD_READER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xShmMap", mrb_SQLite_Sqlite3IoMethods_get_xShmMap, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IoMethods_xShmMap_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xShmMap=", mrb_SQLite_Sqlite3IoMethods_set_xShmMap, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xShmLock_FIELD_READER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xShmLock", mrb_SQLite_Sqlite3IoMethods_get_xShmLock, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IoMethods_xShmLock_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xShmLock=", mrb_SQLite_Sqlite3IoMethods_set_xShmLock, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xShmBarrier_FIELD_READER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xShmBarrier", mrb_SQLite_Sqlite3IoMethods_get_xShmBarrier, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IoMethods_xShmBarrier_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xShmBarrier=", mrb_SQLite_Sqlite3IoMethods_set_xShmBarrier, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xShmUnmap_FIELD_READER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xShmUnmap", mrb_SQLite_Sqlite3IoMethods_get_xShmUnmap, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IoMethods_xShmUnmap_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xShmUnmap=", mrb_SQLite_Sqlite3IoMethods_set_xShmUnmap, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xFetch_FIELD_READER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xFetch", mrb_SQLite_Sqlite3IoMethods_get_xFetch, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IoMethods_xFetch_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xFetch=", mrb_SQLite_Sqlite3IoMethods_set_xFetch, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xUnfetch_FIELD_READER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xUnfetch", mrb_SQLite_Sqlite3IoMethods_get_xUnfetch, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3IoMethods_xUnfetch_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xUnfetch=", mrb_SQLite_Sqlite3IoMethods_set_xUnfetch, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: Sqlite3IoMethods::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
