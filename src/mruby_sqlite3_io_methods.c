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
/* sha: 06bfefdc092f66be59dd6c0cb3b8fb3d6ea6299be23deb65f8f4715ffa243326 */
#if BIND_Sqlite3IoMethods_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IoMethods_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  sqlite3_io_methods* native_object = (sqlite3_io_methods*)calloc(1, sizeof(sqlite3_io_methods));
  mruby_gift_sqlite3_io_methods_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3IoMethods::iVersion_reader */
/* sha: fcb7ecf7ecca8c4eec1030fcea4886e590c6b0bb73b9a4f100cb86daf48f1a7c */
#if BIND_Sqlite3IoMethods_iVersion_FIELD_READER
/* get_iVersion
 *
 * Return Type: int
 */
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
/* sha: 8f92a7896c7c13bb4efc6e0b75b513f7a498e8aab2ba0711856fe99020271c0a */
#if BIND_Sqlite3IoMethods_iVersion_FIELD_WRITER
/* set_iVersion
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_iVersion(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
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

/* MRUBY_BINDING: Sqlite3IoMethods::xClose_reader */
/* sha: b2be58d52ddd7232dcc5fd93df7034e1166a07f9e6c1ffa5a411134159528a69 */
#if BIND_Sqlite3IoMethods_xClose_FIELD_READER
/* get_xClose
 *
 * Return Type: int (*)(sqlite3_file *)
 */
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
/* sha: f1fe19cec7198b9d3cbce66abd8dc9c6de30d38927829d80b73e4dbd55b2fec4 */
#if BIND_Sqlite3IoMethods_xClose_FIELD_WRITER
/* set_xClose
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xClose(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xClose;

  mrb_get_args(mrb, "o", &xClose);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(xClose);

  int (*native_xClose)(sqlite3_file *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(xClose);

  native_self->xClose = native_xClose;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xRead_reader */
/* sha: 04a5dbf810d8616436bbfc6c8c4cc5af4f2efb0919b4ad6792bddaa086462972 */
#if BIND_Sqlite3IoMethods_xRead_FIELD_READER
/* get_xRead
 *
 * Return Type: int (*)(sqlite3_file *, void *, int, sqlite3_int64)
 */
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
/* sha: 561f547746dee5169d9ec6ff7019a0837db77c31f6d7b435e20df3d26f584258 */
#if BIND_Sqlite3IoMethods_xRead_FIELD_WRITER
/* set_xRead
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, void *, int, sqlite3_int64)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xRead(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xRead;

  mrb_get_args(mrb, "o", &xRead);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_void_PTR_COMMA_intCOMMA_sqlite3_int64_RPAREN(xRead);

  int (*native_xRead)(sqlite3_file *, void *, int, sqlite3_int64) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_void_PTR_COMMA_intCOMMA_sqlite3_int64_RPAREN(xRead);

  native_self->xRead = native_xRead;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xWrite_reader */
/* sha: c0d0a770ccbeb67d514a5577766d8df63671cbb1d7e3cccf588b9376ffaf4ca8 */
#if BIND_Sqlite3IoMethods_xWrite_FIELD_READER
/* get_xWrite
 *
 * Return Type: int (*)(sqlite3_file *, const void *, int, sqlite3_int64)
 */
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
/* sha: 3839d71828a2bea90d125e1c0ac9c60851500f6be5d68229263902b2398964bd */
#if BIND_Sqlite3IoMethods_xWrite_FIELD_WRITER
/* set_xWrite
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, const void *, int, sqlite3_int64)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xWrite(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xWrite;

  mrb_get_args(mrb, "o", &xWrite);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMAvoid_PTR_COMMA_intCOMMA_sqlite3_int64_RPAREN(xWrite);

  int (*native_xWrite)(sqlite3_file *, const void *, int, sqlite3_int64) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMAvoid_PTR_COMMA_intCOMMA_sqlite3_int64_RPAREN(xWrite);

  native_self->xWrite = native_xWrite;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xTruncate_reader */
/* sha: 0a42772dda3bd7bc122a1ae27038a526319d254fad6656c7c4ec9593a35dc275 */
#if BIND_Sqlite3IoMethods_xTruncate_FIELD_READER
/* get_xTruncate
 *
 * Return Type: int (*)(sqlite3_file *, sqlite3_int64)
 */
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
/* sha: 080acdb87f2abab8f695d640980d119b7db096f99b4a89cae69ed1f73c553cba */
#if BIND_Sqlite3IoMethods_xTruncate_FIELD_WRITER
/* set_xTruncate
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, sqlite3_int64)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xTruncate(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xTruncate;

  mrb_get_args(mrb, "o", &xTruncate);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64_RPAREN(xTruncate);

  int (*native_xTruncate)(sqlite3_file *, sqlite3_int64) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64_RPAREN(xTruncate);

  native_self->xTruncate = native_xTruncate;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xSync_reader */
/* sha: d993e175fb6b3ab81504b2110531fb474b2a0fb319596a430990d2cb3895f28e */
#if BIND_Sqlite3IoMethods_xSync_FIELD_READER
/* get_xSync
 *
 * Return Type: int (*)(sqlite3_file *, int)
 */
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
/* sha: 6f5a2628242b0876dda68761dbc6f3861ec0ae42d1c6cfd7ff577af2b6897617 */
#if BIND_Sqlite3IoMethods_xSync_FIELD_WRITER
/* set_xSync
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xSync(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xSync;

  mrb_get_args(mrb, "o", &xSync);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(xSync);

  int (*native_xSync)(sqlite3_file *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(xSync);

  native_self->xSync = native_xSync;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xFileSize_reader */
/* sha: 1d9f243645f00da3d6f179867df3803dd84b2974d1538887784008958c04fbef */
#if BIND_Sqlite3IoMethods_xFileSize_FIELD_READER
/* get_xFileSize
 *
 * Return Type: int (*)(sqlite3_file *, sqlite3_int64 *)
 */
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
/* sha: 2fab6f40e578d813d4e7fe96a62b39d14ccb05f5e19901b489f95b68b46e6d11 */
#if BIND_Sqlite3IoMethods_xFileSize_FIELD_WRITER
/* set_xFileSize
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xFileSize(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xFileSize;

  mrb_get_args(mrb, "o", &xFileSize);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64_PTR_RPAREN(xFileSize);

  int (*native_xFileSize)(sqlite3_file *, sqlite3_int64 *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64_PTR_RPAREN(xFileSize);

  native_self->xFileSize = native_xFileSize;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xLock_reader */
/* sha: 5b0c869a6b62b59056608cfb6f5d1d18843714bbb21d0669a0dec6a1fcc5fe95 */
#if BIND_Sqlite3IoMethods_xLock_FIELD_READER
/* get_xLock
 *
 * Return Type: int (*)(sqlite3_file *, int)
 */
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
/* sha: 41f3bc90d9ff4098515a4750007eb6af89396aa125270cbfb64a2225f65b07a2 */
#if BIND_Sqlite3IoMethods_xLock_FIELD_WRITER
/* set_xLock
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xLock(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xLock;

  mrb_get_args(mrb, "o", &xLock);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(xLock);

  int (*native_xLock)(sqlite3_file *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(xLock);

  native_self->xLock = native_xLock;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xUnlock_reader */
/* sha: 1ba96f0c86b9106cd7f122ced8c15080a99171f7276775604fe23ae63950a0ba */
#if BIND_Sqlite3IoMethods_xUnlock_FIELD_READER
/* get_xUnlock
 *
 * Return Type: int (*)(sqlite3_file *, int)
 */
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
/* sha: 058afe8548c40ef41e46a0b0eb5a49edf44237d153edf0a3607a83b7a974a3df */
#if BIND_Sqlite3IoMethods_xUnlock_FIELD_WRITER
/* set_xUnlock
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xUnlock(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xUnlock;

  mrb_get_args(mrb, "o", &xUnlock);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(xUnlock);

  int (*native_xUnlock)(sqlite3_file *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(xUnlock);

  native_self->xUnlock = native_xUnlock;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xCheckReservedLock_reader */
/* sha: 17f06ffe64a5fdf0990e852d630510ff6d32b3b085a5656845c890bb22339bc2 */
#if BIND_Sqlite3IoMethods_xCheckReservedLock_FIELD_READER
/* get_xCheckReservedLock
 *
 * Return Type: int (*)(sqlite3_file *, int *)
 */
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
/* sha: 7eb9c861ac1b3102b85f245ec8ca5ab4e447c8ab27bcf5d5e3ce3aa1483af3ed */
#if BIND_Sqlite3IoMethods_xCheckReservedLock_FIELD_WRITER
/* set_xCheckReservedLock
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xCheckReservedLock(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xCheckReservedLock;

  mrb_get_args(mrb, "o", &xCheckReservedLock);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_PTR_RPAREN(xCheckReservedLock);

  int (*native_xCheckReservedLock)(sqlite3_file *, int *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_PTR_RPAREN(xCheckReservedLock);

  native_self->xCheckReservedLock = native_xCheckReservedLock;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xFileControl_reader */
/* sha: 0c17c830be060ce9dabca785abb2e34698782251ba0c9ea73dd0a9a9ca17b8ea */
#if BIND_Sqlite3IoMethods_xFileControl_FIELD_READER
/* get_xFileControl
 *
 * Return Type: int (*)(sqlite3_file *, int, void *)
 */
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
/* sha: b5ed40008cb0fed83c087ae590f79f07984ecbbfc6a74bb52ec6775c441b0c1f */
#if BIND_Sqlite3IoMethods_xFileControl_FIELD_WRITER
/* set_xFileControl
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int, void *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xFileControl(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xFileControl;

  mrb_get_args(mrb, "o", &xFileControl);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_void_PTR_RPAREN(xFileControl);

  int (*native_xFileControl)(sqlite3_file *, int, void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_void_PTR_RPAREN(xFileControl);

  native_self->xFileControl = native_xFileControl;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xSectorSize_reader */
/* sha: 86bd1d095eb9ed3e12b49bb1c7537edab15dbd9c5aac5ca15ea544e23db52cd1 */
#if BIND_Sqlite3IoMethods_xSectorSize_FIELD_READER
/* get_xSectorSize
 *
 * Return Type: int (*)(sqlite3_file *)
 */
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
/* sha: 9ae9b5f8bf8290e1834a09b65fa22e6fd7ed9e006852e7f8566cb3a8c1dcc816 */
#if BIND_Sqlite3IoMethods_xSectorSize_FIELD_WRITER
/* set_xSectorSize
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xSectorSize(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xSectorSize;

  mrb_get_args(mrb, "o", &xSectorSize);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(xSectorSize);

  int (*native_xSectorSize)(sqlite3_file *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(xSectorSize);

  native_self->xSectorSize = native_xSectorSize;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xDeviceCharacteristics_reader */
/* sha: d44bcaf7566419bdd57c210b7632b3dce1a8e108a030176de5189e1a7bd0b8bf */
#if BIND_Sqlite3IoMethods_xDeviceCharacteristics_FIELD_READER
/* get_xDeviceCharacteristics
 *
 * Return Type: int (*)(sqlite3_file *)
 */
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
/* sha: 4844afab3c7147ad6c7826b4edf44a09894abda41c7ad5cd7afbdf78c63134ef */
#if BIND_Sqlite3IoMethods_xDeviceCharacteristics_FIELD_WRITER
/* set_xDeviceCharacteristics
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xDeviceCharacteristics(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xDeviceCharacteristics;

  mrb_get_args(mrb, "o", &xDeviceCharacteristics);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(xDeviceCharacteristics);

  int (*native_xDeviceCharacteristics)(sqlite3_file *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(xDeviceCharacteristics);

  native_self->xDeviceCharacteristics = native_xDeviceCharacteristics;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xShmMap_reader */
/* sha: 682bb55317b62f15200568e55f932e8840ecb8c98a502979860e77548ae864a0 */
#if BIND_Sqlite3IoMethods_xShmMap_FIELD_READER
/* get_xShmMap
 *
 * Return Type: int (*)(sqlite3_file *, int, int, int, volatile void **)
 */
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
/* sha: ec8cfa7b2e26176a8ce32fa8684581d9f270b75021c16e04c860ee04d956c583 */
#if BIND_Sqlite3IoMethods_xShmMap_FIELD_WRITER
/* set_xShmMap
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int, int, int, volatile void **)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xShmMap(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xShmMap;

  mrb_get_args(mrb, "o", &xShmMap);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_intCOMMA_intCOMMA_volatile_void_PTR_PTR_RPAREN(xShmMap);

  int (*native_xShmMap)(sqlite3_file *, int, int, int, volatile void **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_intCOMMA_intCOMMA_volatile_void_PTR_PTR_RPAREN(xShmMap);

  native_self->xShmMap = native_xShmMap;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xShmLock_reader */
/* sha: 7c7def61aeda89ba25a998e6dc8d7a06116c5da9379702fb1f0d7ba3f640549a */
#if BIND_Sqlite3IoMethods_xShmLock_FIELD_READER
/* get_xShmLock
 *
 * Return Type: int (*)(sqlite3_file *, int, int, int)
 */
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
/* sha: 3dcd11ac7a7229f394ef5b99faffe47fb8d1ab8984bc202b2d78b18b00f1e265 */
#if BIND_Sqlite3IoMethods_xShmLock_FIELD_WRITER
/* set_xShmLock
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int, int, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xShmLock(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xShmLock;

  mrb_get_args(mrb, "o", &xShmLock);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_intCOMMA_int_RPAREN(xShmLock);

  int (*native_xShmLock)(sqlite3_file *, int, int, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_intCOMMA_int_RPAREN(xShmLock);

  native_self->xShmLock = native_xShmLock;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xShmBarrier_reader */
/* sha: afe137119787ce8932cc763e3c08a0496dde30c460246e77412a09fad2ed9b63 */
#if BIND_Sqlite3IoMethods_xShmBarrier_FIELD_READER
/* get_xShmBarrier
 *
 * Return Type: void (*)(sqlite3_file *)
 */
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
/* sha: 7ef030a893bcb11281b88ba0e6a10ca9e812558f2f7933a9fce63a78a4a3c815 */
#if BIND_Sqlite3IoMethods_xShmBarrier_FIELD_WRITER
/* set_xShmBarrier
 *
 * Parameters:
 * - value: void (*)(sqlite3_file *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xShmBarrier(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xShmBarrier;

  mrb_get_args(mrb, "o", &xShmBarrier);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(xShmBarrier);

  void (*native_xShmBarrier)(sqlite3_file *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(xShmBarrier);

  native_self->xShmBarrier = native_xShmBarrier;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xShmUnmap_reader */
/* sha: f8fcecec7be935d78ef59d7be64c4bd3cdc37e259834fcc40f36efbe2330892e */
#if BIND_Sqlite3IoMethods_xShmUnmap_FIELD_READER
/* get_xShmUnmap
 *
 * Return Type: int (*)(sqlite3_file *, int)
 */
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
/* sha: e519eb9e2d3f9960dc9d63b58ad1c246c28bc3d0abe2d648a04cd7fc383a6f73 */
#if BIND_Sqlite3IoMethods_xShmUnmap_FIELD_WRITER
/* set_xShmUnmap
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xShmUnmap(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xShmUnmap;

  mrb_get_args(mrb, "o", &xShmUnmap);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(xShmUnmap);

  int (*native_xShmUnmap)(sqlite3_file *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(xShmUnmap);

  native_self->xShmUnmap = native_xShmUnmap;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xFetch_reader */
/* sha: 9bf4e7dbd2eb4d7b20b78f91e4d9bebd00942ce42e314e724e182bbfafa1c4ca */
#if BIND_Sqlite3IoMethods_xFetch_FIELD_READER
/* get_xFetch
 *
 * Return Type: int (*)(sqlite3_file *, sqlite3_int64, int, void **)
 */
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
/* sha: 89e26a9676dd8711b07f18b2e5b30b6677aacab236a4c690cc38272c430fb05d */
#if BIND_Sqlite3IoMethods_xFetch_FIELD_WRITER
/* set_xFetch
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, sqlite3_int64, int, void **)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xFetch(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xFetch;

  mrb_get_args(mrb, "o", &xFetch);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64COMMA_intCOMMA_void_PTR_PTR_RPAREN(xFetch);

  int (*native_xFetch)(sqlite3_file *, sqlite3_int64, int, void **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64COMMA_intCOMMA_void_PTR_PTR_RPAREN(xFetch);

  native_self->xFetch = native_xFetch;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xUnfetch_reader */
/* sha: ea42a77bc509225f21a79d3714effef12d0072e69ee37ca0fa10ca3f015cc142 */
#if BIND_Sqlite3IoMethods_xUnfetch_FIELD_READER
/* get_xUnfetch
 *
 * Return Type: int (*)(sqlite3_file *, sqlite3_int64, void *)
 */
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
/* sha: 580ff9b477465a7939ac37b518f6a0027ae042b90312b8b4378e80a674678b98 */
#if BIND_Sqlite3IoMethods_xUnfetch_FIELD_WRITER
/* set_xUnfetch
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, sqlite3_int64, void *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xUnfetch(mrb_state* mrb, mrb_value self) {
  sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
  mrb_value xUnfetch;

  mrb_get_args(mrb, "o", &xUnfetch);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64COMMA_void_PTR_RPAREN(xUnfetch);

  int (*native_xUnfetch)(sqlite3_file *, sqlite3_int64, void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64COMMA_void_PTR_RPAREN(xUnfetch);

  native_self->xUnfetch = native_xUnfetch;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3IoMethods_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3IoMethods::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
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

/* MRUBY_BINDING: Sqlite3IoMethods::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
