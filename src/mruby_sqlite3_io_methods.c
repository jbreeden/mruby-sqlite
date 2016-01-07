/*
 * struct sqlite3_io_methods
 * Defined in file sqlite3.h @ line 637
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3IoMethods_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Sqlite3IoMethods::initialize */
/* sha: c17dc2bbd1b8a635637516619b175e95ade428e42ae6c7674b95077d1406c712 */
#if BIND_Sqlite3IoMethods_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IoMethods_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods* native_object = (struct sqlite3_io_methods*)calloc(1, sizeof(struct sqlite3_io_methods));
  mruby_giftwrap_sqlite3_io_methods_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::initialize */
/* sha: 41b1b5def8967d47c16f5b990989b4dd4de0fc8db1551ba740d152b1dea3d92c */
mrb_value
mrb_SQLite_Sqlite3IoMethods_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3IoMethods.disown only accepts objects of type SQLite::Sqlite3IoMethods");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::belongs_to_ruby */
/* sha: 23343f82bde3b60a0344afc7f4bc2675f576b447b1164d91df78e0c965cb3f11 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3IoMethods.belongs_to_ruby only accepts objects of type SQLite::Sqlite3IoMethods");
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

/* MRUBY_BINDING: Sqlite3IoMethods::iVersion_reader */
/* sha: 3abd9ec899fa880888fe3996dbbdd4d85d590860af03c8d24c53a236e1a3c7b1 */
#if BIND_Sqlite3IoMethods_iVersion_FIELD_READER
/* get_iVersion
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_iVersion(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int native_iVersion = native_self->iVersion;

  mrb_value iVersion = mrb_fixnum_value(native_iVersion);

  return iVersion;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::iVersion_writer */
/* sha: 88a0ae0960e677453cbce77f9c8617413cb4886dc49a09b851d5b185effa0a1a */
#if BIND_Sqlite3IoMethods_iVersion_FIELD_WRITER
/* set_iVersion
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_iVersion(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
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
/* sha: 14b58e1fcdf74f882371e7c18c26e2f4837f825bffae72644ad9dae704d5f50c */
#if BIND_Sqlite3IoMethods_xClose_FIELD_READER
/* get_xClose
 *
 * Return Type: int (*)(sqlite3_file *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xClose(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *) native_xClose = native_self->xClose;

  mrb_value xClose = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(mrb, native_xClose);

  return xClose;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xClose_writer */
/* sha: 52326e648eb0ede135110c3afb7d6ace3604ddaa6172b5f1283fc017d544a393 */
#if BIND_Sqlite3IoMethods_xClose_FIELD_WRITER
/* set_xClose
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xClose(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
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
/* sha: 816053d50ca2cfa0d72e7dc20fbbf39ddf6b7e8ad1a6d1e1a700cea6a73c9d56 */
#if BIND_Sqlite3IoMethods_xRead_FIELD_READER
/* get_xRead
 *
 * Return Type: int (*)(sqlite3_file *, void *, int, sqlite3_int64)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xRead(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, void *, int, sqlite3_int64) native_xRead = native_self->xRead;

  mrb_value xRead = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_void_PTR_COMMA_intCOMMA_sqlite3_int64_RPAREN(mrb, native_xRead);

  return xRead;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xRead_writer */
/* sha: b0a32eea2d40b19dd61d8888a73a3dc8b81c8c2efc03e8714eb12b27768fc045 */
#if BIND_Sqlite3IoMethods_xRead_FIELD_WRITER
/* set_xRead
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, void *, int, sqlite3_int64)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xRead(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
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
/* sha: cc38fe4601b5906f738219746dcfd8ca4cbcbadf513f62156d41182b5bfe814b */
#if BIND_Sqlite3IoMethods_xWrite_FIELD_READER
/* get_xWrite
 *
 * Return Type: int (*)(sqlite3_file *, const void *, int, sqlite3_int64)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xWrite(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, const void *, int, sqlite3_int64) native_xWrite = native_self->xWrite;

  mrb_value xWrite = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMAvoid_PTR_COMMA_intCOMMA_sqlite3_int64_RPAREN(mrb, native_xWrite);

  return xWrite;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xWrite_writer */
/* sha: e949e0934d8a00d2134cded621b2aeb75b928deed4e50631a72c1e2635d01194 */
#if BIND_Sqlite3IoMethods_xWrite_FIELD_WRITER
/* set_xWrite
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, const void *, int, sqlite3_int64)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xWrite(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
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
/* sha: 5cef0f7827b369b9ed63b72198b1eb387ae3b64d986bc6aec1b164f5352ec7ea */
#if BIND_Sqlite3IoMethods_xTruncate_FIELD_READER
/* get_xTruncate
 *
 * Return Type: int (*)(sqlite3_file *, sqlite3_int64)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xTruncate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, sqlite3_int64) native_xTruncate = native_self->xTruncate;

  mrb_value xTruncate = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64_RPAREN(mrb, native_xTruncate);

  return xTruncate;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xTruncate_writer */
/* sha: ab2bfd065e227b4c7e5fa0ce7c301ad6041e45e9a5058fad27f10eea6ba0cb1b */
#if BIND_Sqlite3IoMethods_xTruncate_FIELD_WRITER
/* set_xTruncate
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, sqlite3_int64)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xTruncate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
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
/* sha: fa8d14d2f38229a8685770c864c919cabc1b6373d8a983a2d22607f4ddcd1043 */
#if BIND_Sqlite3IoMethods_xSync_FIELD_READER
/* get_xSync
 *
 * Return Type: int (*)(sqlite3_file *, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xSync(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int) native_xSync = native_self->xSync;

  mrb_value xSync = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(mrb, native_xSync);

  return xSync;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xSync_writer */
/* sha: 3c673236fa49189facc79b7a37cea8df498f43e60ca667b07bcad080397733d2 */
#if BIND_Sqlite3IoMethods_xSync_FIELD_WRITER
/* set_xSync
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xSync(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
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
/* sha: 4076557b9c417440c41b80ff7aca46d4f6009810859bcad823cc673a5cc4d963 */
#if BIND_Sqlite3IoMethods_xFileSize_FIELD_READER
/* get_xFileSize
 *
 * Return Type: int (*)(sqlite3_file *, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xFileSize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, sqlite3_int64 *) native_xFileSize = native_self->xFileSize;

  mrb_value xFileSize = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64_PTR_RPAREN(mrb, native_xFileSize);

  return xFileSize;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xFileSize_writer */
/* sha: 37449606823de373d933392a5c6af23343f784d7c239d6345cef83e0faa1dc48 */
#if BIND_Sqlite3IoMethods_xFileSize_FIELD_WRITER
/* set_xFileSize
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xFileSize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
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
/* sha: a32da7737c7b7eab90e7010d7cd0feeec8f64810cdaf25ada3bae99dd9e7b682 */
#if BIND_Sqlite3IoMethods_xLock_FIELD_READER
/* get_xLock
 *
 * Return Type: int (*)(sqlite3_file *, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xLock(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int) native_xLock = native_self->xLock;

  mrb_value xLock = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(mrb, native_xLock);

  return xLock;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xLock_writer */
/* sha: 4defd4c27695bf17b70b7fe7880024a0f0b9f04eaa4c606e1c116f26304d8479 */
#if BIND_Sqlite3IoMethods_xLock_FIELD_WRITER
/* set_xLock
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xLock(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
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
/* sha: 7a196146ec760151a28ebfc6e8554525f45ea537d24002213b6d76c23899a06e */
#if BIND_Sqlite3IoMethods_xUnlock_FIELD_READER
/* get_xUnlock
 *
 * Return Type: int (*)(sqlite3_file *, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xUnlock(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int) native_xUnlock = native_self->xUnlock;

  mrb_value xUnlock = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(mrb, native_xUnlock);

  return xUnlock;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xUnlock_writer */
/* sha: ca3c3e77f98e849517c5b2c9c4bd7dfdc1095b23f70b7ced7841cff21968abb8 */
#if BIND_Sqlite3IoMethods_xUnlock_FIELD_WRITER
/* set_xUnlock
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xUnlock(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
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
/* sha: 1705c45d6673f31f7b3057453b8cfe377f5215dcdcb8e06a0d9ab844cb92f6e6 */
#if BIND_Sqlite3IoMethods_xCheckReservedLock_FIELD_READER
/* get_xCheckReservedLock
 *
 * Return Type: int (*)(sqlite3_file *, int *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xCheckReservedLock(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int *) native_xCheckReservedLock = native_self->xCheckReservedLock;

  mrb_value xCheckReservedLock = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_PTR_RPAREN(mrb, native_xCheckReservedLock);

  return xCheckReservedLock;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xCheckReservedLock_writer */
/* sha: 86e82cf3a9b7c85e6e412c59bcf7424aed0c7ede514383a62bbb4b3ba199ba3d */
#if BIND_Sqlite3IoMethods_xCheckReservedLock_FIELD_WRITER
/* set_xCheckReservedLock
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xCheckReservedLock(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
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
/* sha: fb4d2586054c649725af235ac0a87587f5a106287798dfe693b64a8f14163c5b */
#if BIND_Sqlite3IoMethods_xFileControl_FIELD_READER
/* get_xFileControl
 *
 * Return Type: int (*)(sqlite3_file *, int, void *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xFileControl(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int, void *) native_xFileControl = native_self->xFileControl;

  mrb_value xFileControl = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_void_PTR_RPAREN(mrb, native_xFileControl);

  return xFileControl;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xFileControl_writer */
/* sha: 6ee009d3dfc641cdf2169d749b03361fe35e7bed98986dd9a424267a3c27eb5b */
#if BIND_Sqlite3IoMethods_xFileControl_FIELD_WRITER
/* set_xFileControl
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int, void *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xFileControl(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
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
/* sha: 61c6cf4aecb89586b251d13ce358fd64910e778428423d78dcefe72810cfe981 */
#if BIND_Sqlite3IoMethods_xSectorSize_FIELD_READER
/* get_xSectorSize
 *
 * Return Type: int (*)(sqlite3_file *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xSectorSize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *) native_xSectorSize = native_self->xSectorSize;

  mrb_value xSectorSize = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(mrb, native_xSectorSize);

  return xSectorSize;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xSectorSize_writer */
/* sha: 540bd9053e41a8b00787c64910f80bd628c126edbf4b751a0c453daea41a3e73 */
#if BIND_Sqlite3IoMethods_xSectorSize_FIELD_WRITER
/* set_xSectorSize
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xSectorSize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
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
/* sha: 728d1f1fcc42093f7ab1c72fea0ace576aa8d1a0a4f8587d4abc5a36831ee55b */
#if BIND_Sqlite3IoMethods_xDeviceCharacteristics_FIELD_READER
/* get_xDeviceCharacteristics
 *
 * Return Type: int (*)(sqlite3_file *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xDeviceCharacteristics(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *) native_xDeviceCharacteristics = native_self->xDeviceCharacteristics;

  mrb_value xDeviceCharacteristics = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(mrb, native_xDeviceCharacteristics);

  return xDeviceCharacteristics;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xDeviceCharacteristics_writer */
/* sha: 6d6d4fbb5c78a41d62107ae58a33b05714eec80039830156564f983efb49445c */
#if BIND_Sqlite3IoMethods_xDeviceCharacteristics_FIELD_WRITER
/* set_xDeviceCharacteristics
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xDeviceCharacteristics(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
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
/* sha: 3ce58b76e831aef3c5ff8fde1cf70e04e165d153513f3789f4e67cbdfecf5caf */
#if BIND_Sqlite3IoMethods_xShmMap_FIELD_READER
/* get_xShmMap
 *
 * Return Type: int (*)(sqlite3_file *, int, int, int, volatile void **)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xShmMap(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int, int, int, volatile void **) native_xShmMap = native_self->xShmMap;

  mrb_value xShmMap = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_intCOMMA_intCOMMA_volatile_void_PTR_PTR_RPAREN(mrb, native_xShmMap);

  return xShmMap;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xShmMap_writer */
/* sha: bd3e71c15e7421e132ec5ebe6a12b355b0fad946f1119218206d885e764306e0 */
#if BIND_Sqlite3IoMethods_xShmMap_FIELD_WRITER
/* set_xShmMap
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int, int, int, volatile void **)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xShmMap(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
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
/* sha: bb8af616148029ec1c7161653058baf4c7985f505a63cf952b280afad48d556b */
#if BIND_Sqlite3IoMethods_xShmLock_FIELD_READER
/* get_xShmLock
 *
 * Return Type: int (*)(sqlite3_file *, int, int, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xShmLock(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int, int, int) native_xShmLock = native_self->xShmLock;

  mrb_value xShmLock = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_intCOMMA_int_RPAREN(mrb, native_xShmLock);

  return xShmLock;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xShmLock_writer */
/* sha: 2f76088275704e2a95cc00add30ebc8a2d16dd6ae4ff4dde410b69b6f6bc7df8 */
#if BIND_Sqlite3IoMethods_xShmLock_FIELD_WRITER
/* set_xShmLock
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int, int, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xShmLock(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
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
/* sha: 1a83e325790cdc50c07c5c9e5322cabfc306c5053d7b95f575d5fa9625296e68 */
#if BIND_Sqlite3IoMethods_xShmBarrier_FIELD_READER
/* get_xShmBarrier
 *
 * Return Type: void (*)(sqlite3_file *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xShmBarrier(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  void (*)(sqlite3_file *) native_xShmBarrier = native_self->xShmBarrier;

  mrb_value xShmBarrier = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(mrb, native_xShmBarrier);

  return xShmBarrier;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xShmBarrier_writer */
/* sha: 1ea62b14c58f05eaa4f382e4d7c3faee758a5788b62b64b6381c0a7a9784e419 */
#if BIND_Sqlite3IoMethods_xShmBarrier_FIELD_WRITER
/* set_xShmBarrier
 *
 * Parameters:
 * - value: void (*)(sqlite3_file *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xShmBarrier(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
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
/* sha: 8b12c97d775007b8b5813b9954d14e0d44b0dab55767654c29eb6d98ae72e5cc */
#if BIND_Sqlite3IoMethods_xShmUnmap_FIELD_READER
/* get_xShmUnmap
 *
 * Return Type: int (*)(sqlite3_file *, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xShmUnmap(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int) native_xShmUnmap = native_self->xShmUnmap;

  mrb_value xShmUnmap = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(mrb, native_xShmUnmap);

  return xShmUnmap;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xShmUnmap_writer */
/* sha: 57495d428caa3478949db0edd587595e0394d3a52ac8a32749b1dbe16b1e5480 */
#if BIND_Sqlite3IoMethods_xShmUnmap_FIELD_WRITER
/* set_xShmUnmap
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xShmUnmap(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
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
/* sha: 22301d48a04f5ffc73a09905d8ae5893019472f12c78347cacbb032c5b836e0b */
#if BIND_Sqlite3IoMethods_xFetch_FIELD_READER
/* get_xFetch
 *
 * Return Type: int (*)(sqlite3_file *, sqlite3_int64, int, void **)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xFetch(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, sqlite3_int64, int, void **) native_xFetch = native_self->xFetch;

  mrb_value xFetch = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64COMMA_intCOMMA_void_PTR_PTR_RPAREN(mrb, native_xFetch);

  return xFetch;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xFetch_writer */
/* sha: 753977fc7c4b2e2bee961cf6d4bb49d3a3779a703622699269d6118c812796ec */
#if BIND_Sqlite3IoMethods_xFetch_FIELD_WRITER
/* set_xFetch
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, sqlite3_int64, int, void **)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xFetch(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
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
/* sha: 7a35da3d18698e0dfd7adfad5a588b1a936c89592b52c45024de9dff05be9549 */
#if BIND_Sqlite3IoMethods_xUnfetch_FIELD_READER
/* get_xUnfetch
 *
 * Return Type: int (*)(sqlite3_file *, sqlite3_int64, void *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xUnfetch(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);

  int (*)(sqlite3_file *, sqlite3_int64, void *) native_xUnfetch = native_self->xUnfetch;

  mrb_value xUnfetch = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64COMMA_void_PTR_RPAREN(mrb, native_xUnfetch);

  return xUnfetch;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::xUnfetch_writer */
/* sha: 01efbedfe2af230629b1245ef24a8e3396e55ec656b216653f87649560ab9068 */
#if BIND_Sqlite3IoMethods_xUnfetch_FIELD_WRITER
/* set_xUnfetch
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, sqlite3_int64, void *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xUnfetch(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_sqlite3_io_methods(self);
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
/* MRUBY_BINDING: Sqlite3IoMethods::class_definition */
/* sha: a957d6d3709e0ef5e895292edff2a20cddac03394c145574e5fec896d77fb6c7 */
  struct RClass* Sqlite3IoMethods_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3IoMethods", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3IoMethods_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::class_method_definitions */
/* sha: f6d96684254c77ebfce3a6b0399cf31ac37da70176f6f952f2191f6980138c57 */
#if BIND_Sqlite3IoMethods_INITIALIZE
  mrb_define_method(mrb, Sqlite3IoMethods_class, "initialize", mrb_SQLite_Sqlite3IoMethods_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3IoMethods_class, "disown", mrb_SQLite_Sqlite3IoMethods_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3IoMethods_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3IoMethods_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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

/* MRUBY_BINDING: Sqlite3IoMethods::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
