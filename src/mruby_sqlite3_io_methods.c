/*
 * struct sqlite3_io_methods
 * Defined in file sqlite3.h @ line 637
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3IoMethods_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3IoMethods_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IoMethods_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods* native_object = (struct sqlite3_io_methods*)calloc(1, sizeof(struct sqlite3_io_methods));
  mruby_giftwrap_sqlite3_io_methods_data_ptr(self, native_object);
  return self;
}
#endif

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

/*
 * Fields
 */

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


void mrb_SQLite_Sqlite3IoMethods_init(mrb_state* mrb) {
  struct RClass* Sqlite3IoMethods_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3IoMethods", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3IoMethods_class, MRB_TT_DATA);

#if BIND_Sqlite3IoMethods_INITIALIZE
  mrb_define_method(mrb, Sqlite3IoMethods_class, "initialize", mrb_SQLite_Sqlite3IoMethods_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3IoMethods_class, "disown", mrb_SQLite_Sqlite3IoMethods_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3IoMethods_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3IoMethods_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

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

}

#endif
