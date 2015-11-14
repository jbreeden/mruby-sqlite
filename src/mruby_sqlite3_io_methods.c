/*
 * struct sqlite3_io_methods
 * Defined in file sqlite3.h @ line 637
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3IoMethods_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3IoMethods_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3IoMethods_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods* native_object = (struct sqlite3_io_methods*)malloc(sizeof(struct sqlite3_io_methods));
  mruby_gift_struct sqlite3_io_methods_data_ptr(self, native_object);
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

#if BIND_Sqlite3IoMethods_iVersion_FIELD
/* get_iVersion
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_iVersion(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);

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
mrb_SQLite_Sqlite3IoMethods_set_iVersion(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);
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

#if BIND_Sqlite3IoMethods_xClose_FIELD
/* get_xClose
 *
 * Return Type: int (*)(sqlite3_file *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xClose(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);

  int (*)(sqlite3_file *) native_field = native_self->xClose;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xClose
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xClose(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_file *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(ruby_field);

  native_self->xClose = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IoMethods_xRead_FIELD
/* get_xRead
 *
 * Return Type: int (*)(sqlite3_file *, void *, int, sqlite3_int64)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xRead(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);

  int (*)(sqlite3_file *, void *, int, sqlite3_int64) native_field = native_self->xRead;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_void_PTR_COMMA_intCOMMA_sqlite3_int64_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xRead
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, void *, int, sqlite3_int64)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xRead(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_void_PTR_COMMA_intCOMMA_sqlite3_int64_RPAREN(ruby_field);

  int (*native_field)(sqlite3_file *, void *, int, sqlite3_int64) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_void_PTR_COMMA_intCOMMA_sqlite3_int64_RPAREN(ruby_field);

  native_self->xRead = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IoMethods_xWrite_FIELD
/* get_xWrite
 *
 * Return Type: int (*)(sqlite3_file *, const void *, int, sqlite3_int64)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xWrite(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);

  int (*)(sqlite3_file *, const void *, int, sqlite3_int64) native_field = native_self->xWrite;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMAvoid_PTR_COMMA_intCOMMA_sqlite3_int64_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xWrite
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, const void *, int, sqlite3_int64)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xWrite(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMAvoid_PTR_COMMA_intCOMMA_sqlite3_int64_RPAREN(ruby_field);

  int (*native_field)(sqlite3_file *, const void *, int, sqlite3_int64) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMAvoid_PTR_COMMA_intCOMMA_sqlite3_int64_RPAREN(ruby_field);

  native_self->xWrite = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IoMethods_xTruncate_FIELD
/* get_xTruncate
 *
 * Return Type: int (*)(sqlite3_file *, sqlite3_int64)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xTruncate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);

  int (*)(sqlite3_file *, sqlite3_int64) native_field = native_self->xTruncate;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xTruncate
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, sqlite3_int64)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xTruncate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64_RPAREN(ruby_field);

  int (*native_field)(sqlite3_file *, sqlite3_int64) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64_RPAREN(ruby_field);

  native_self->xTruncate = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IoMethods_xSync_FIELD
/* get_xSync
 *
 * Return Type: int (*)(sqlite3_file *, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xSync(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int) native_field = native_self->xSync;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xSync
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xSync(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(ruby_field);

  int (*native_field)(sqlite3_file *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(ruby_field);

  native_self->xSync = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IoMethods_xFileSize_FIELD
/* get_xFileSize
 *
 * Return Type: int (*)(sqlite3_file *, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xFileSize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);

  int (*)(sqlite3_file *, sqlite3_int64 *) native_field = native_self->xFileSize;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xFileSize
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xFileSize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_file *, sqlite3_int64 *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64_PTR_RPAREN(ruby_field);

  native_self->xFileSize = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IoMethods_xLock_FIELD
/* get_xLock
 *
 * Return Type: int (*)(sqlite3_file *, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xLock(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int) native_field = native_self->xLock;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xLock
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xLock(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(ruby_field);

  int (*native_field)(sqlite3_file *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(ruby_field);

  native_self->xLock = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IoMethods_xUnlock_FIELD
/* get_xUnlock
 *
 * Return Type: int (*)(sqlite3_file *, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xUnlock(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int) native_field = native_self->xUnlock;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xUnlock
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xUnlock(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(ruby_field);

  int (*native_field)(sqlite3_file *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(ruby_field);

  native_self->xUnlock = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IoMethods_xCheckReservedLock_FIELD
/* get_xCheckReservedLock
 *
 * Return Type: int (*)(sqlite3_file *, int *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xCheckReservedLock(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int *) native_field = native_self->xCheckReservedLock;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xCheckReservedLock
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xCheckReservedLock(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_file *, int *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_PTR_RPAREN(ruby_field);

  native_self->xCheckReservedLock = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IoMethods_xFileControl_FIELD
/* get_xFileControl
 *
 * Return Type: int (*)(sqlite3_file *, int, void *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xFileControl(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int, void *) native_field = native_self->xFileControl;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_void_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xFileControl
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int, void *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xFileControl(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_void_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_file *, int, void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_void_PTR_RPAREN(ruby_field);

  native_self->xFileControl = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IoMethods_xSectorSize_FIELD
/* get_xSectorSize
 *
 * Return Type: int (*)(sqlite3_file *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xSectorSize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);

  int (*)(sqlite3_file *) native_field = native_self->xSectorSize;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xSectorSize
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xSectorSize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_file *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(ruby_field);

  native_self->xSectorSize = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IoMethods_xDeviceCharacteristics_FIELD
/* get_xDeviceCharacteristics
 *
 * Return Type: int (*)(sqlite3_file *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xDeviceCharacteristics(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);

  int (*)(sqlite3_file *) native_field = native_self->xDeviceCharacteristics;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xDeviceCharacteristics
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xDeviceCharacteristics(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_file *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(ruby_field);

  native_self->xDeviceCharacteristics = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IoMethods_xShmMap_FIELD
/* get_xShmMap
 *
 * Return Type: int (*)(sqlite3_file *, int, int, int, volatile void **)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xShmMap(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int, int, int, volatile void **) native_field = native_self->xShmMap;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_intCOMMA_intCOMMA_volatile_void_PTR_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xShmMap
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int, int, int, volatile void **)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xShmMap(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_intCOMMA_intCOMMA_volatile_void_PTR_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_file *, int, int, int, volatile void **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_intCOMMA_intCOMMA_volatile_void_PTR_PTR_RPAREN(ruby_field);

  native_self->xShmMap = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IoMethods_xShmLock_FIELD
/* get_xShmLock
 *
 * Return Type: int (*)(sqlite3_file *, int, int, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xShmLock(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int, int, int) native_field = native_self->xShmLock;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_intCOMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xShmLock
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int, int, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xShmLock(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_intCOMMA_int_RPAREN(ruby_field);

  int (*native_field)(sqlite3_file *, int, int, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_intCOMMA_intCOMMA_int_RPAREN(ruby_field);

  native_self->xShmLock = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IoMethods_xShmBarrier_FIELD
/* get_xShmBarrier
 *
 * Return Type: void (*)(sqlite3_file *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xShmBarrier(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);

  void (*)(sqlite3_file *) native_field = native_self->xShmBarrier;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xShmBarrier
 *
 * Parameters:
 * - value: void (*)(sqlite3_file *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xShmBarrier(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(ruby_field);

  void (*native_field)(sqlite3_file *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_RPAREN(ruby_field);

  native_self->xShmBarrier = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IoMethods_xShmUnmap_FIELD
/* get_xShmUnmap
 *
 * Return Type: int (*)(sqlite3_file *, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xShmUnmap(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);

  int (*)(sqlite3_file *, int) native_field = native_self->xShmUnmap;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xShmUnmap
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, int)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xShmUnmap(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(ruby_field);

  int (*native_field)(sqlite3_file *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_int_RPAREN(ruby_field);

  native_self->xShmUnmap = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IoMethods_xFetch_FIELD
/* get_xFetch
 *
 * Return Type: int (*)(sqlite3_file *, sqlite3_int64, int, void **)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xFetch(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);

  int (*)(sqlite3_file *, sqlite3_int64, int, void **) native_field = native_self->xFetch;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64COMMA_intCOMMA_void_PTR_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xFetch
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, sqlite3_int64, int, void **)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xFetch(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64COMMA_intCOMMA_void_PTR_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_file *, sqlite3_int64, int, void **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64COMMA_intCOMMA_void_PTR_PTR_RPAREN(ruby_field);

  native_self->xFetch = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3IoMethods_xUnfetch_FIELD
/* get_xUnfetch
 *
 * Return Type: int (*)(sqlite3_file *, sqlite3_int64, void *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_get_xUnfetch(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);

  int (*)(sqlite3_file *, sqlite3_int64, void *) native_field = native_self->xUnfetch;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64COMMA_void_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xUnfetch
 *
 * Parameters:
 * - value: int (*)(sqlite3_file *, sqlite3_int64, void *)
 */
mrb_value
mrb_SQLite_Sqlite3IoMethods_set_xUnfetch(mrb_state* mrb, mrb_value self) {
  struct sqlite3_io_methods * native_self = mruby_unbox_struct sqlite3_io_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64COMMA_void_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_file *, sqlite3_int64, void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_file_PTR_COMMA_sqlite3_int64COMMA_void_PTR_RPAREN(ruby_field);

  native_self->xUnfetch = native_field;

  return ruby_field;
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
#if BIND_Sqlite3IoMethods_iVersion_FIELD
  mrb_define_method(mrb, Sqlite3IoMethods_class, "iVersion", mrb_SQLite_Sqlite3IoMethods_get_iVersion, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IoMethods_class, "iVersion=", mrb_SQLite_Sqlite3IoMethods_set_iVersion, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xClose_FIELD
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xClose", mrb_SQLite_Sqlite3IoMethods_get_xClose, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xClose=", mrb_SQLite_Sqlite3IoMethods_set_xClose, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xRead_FIELD
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xRead", mrb_SQLite_Sqlite3IoMethods_get_xRead, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xRead=", mrb_SQLite_Sqlite3IoMethods_set_xRead, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xWrite_FIELD
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xWrite", mrb_SQLite_Sqlite3IoMethods_get_xWrite, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xWrite=", mrb_SQLite_Sqlite3IoMethods_set_xWrite, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xTruncate_FIELD
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xTruncate", mrb_SQLite_Sqlite3IoMethods_get_xTruncate, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xTruncate=", mrb_SQLite_Sqlite3IoMethods_set_xTruncate, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xSync_FIELD
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xSync", mrb_SQLite_Sqlite3IoMethods_get_xSync, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xSync=", mrb_SQLite_Sqlite3IoMethods_set_xSync, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xFileSize_FIELD
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xFileSize", mrb_SQLite_Sqlite3IoMethods_get_xFileSize, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xFileSize=", mrb_SQLite_Sqlite3IoMethods_set_xFileSize, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xLock_FIELD
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xLock", mrb_SQLite_Sqlite3IoMethods_get_xLock, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xLock=", mrb_SQLite_Sqlite3IoMethods_set_xLock, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xUnlock_FIELD
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xUnlock", mrb_SQLite_Sqlite3IoMethods_get_xUnlock, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xUnlock=", mrb_SQLite_Sqlite3IoMethods_set_xUnlock, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xCheckReservedLock_FIELD
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xCheckReservedLock", mrb_SQLite_Sqlite3IoMethods_get_xCheckReservedLock, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xCheckReservedLock=", mrb_SQLite_Sqlite3IoMethods_set_xCheckReservedLock, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xFileControl_FIELD
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xFileControl", mrb_SQLite_Sqlite3IoMethods_get_xFileControl, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xFileControl=", mrb_SQLite_Sqlite3IoMethods_set_xFileControl, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xSectorSize_FIELD
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xSectorSize", mrb_SQLite_Sqlite3IoMethods_get_xSectorSize, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xSectorSize=", mrb_SQLite_Sqlite3IoMethods_set_xSectorSize, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xDeviceCharacteristics_FIELD
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xDeviceCharacteristics", mrb_SQLite_Sqlite3IoMethods_get_xDeviceCharacteristics, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xDeviceCharacteristics=", mrb_SQLite_Sqlite3IoMethods_set_xDeviceCharacteristics, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xShmMap_FIELD
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xShmMap", mrb_SQLite_Sqlite3IoMethods_get_xShmMap, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xShmMap=", mrb_SQLite_Sqlite3IoMethods_set_xShmMap, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xShmLock_FIELD
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xShmLock", mrb_SQLite_Sqlite3IoMethods_get_xShmLock, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xShmLock=", mrb_SQLite_Sqlite3IoMethods_set_xShmLock, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xShmBarrier_FIELD
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xShmBarrier", mrb_SQLite_Sqlite3IoMethods_get_xShmBarrier, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xShmBarrier=", mrb_SQLite_Sqlite3IoMethods_set_xShmBarrier, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xShmUnmap_FIELD
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xShmUnmap", mrb_SQLite_Sqlite3IoMethods_get_xShmUnmap, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xShmUnmap=", mrb_SQLite_Sqlite3IoMethods_set_xShmUnmap, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xFetch_FIELD
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xFetch", mrb_SQLite_Sqlite3IoMethods_get_xFetch, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xFetch=", mrb_SQLite_Sqlite3IoMethods_set_xFetch, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3IoMethods_xUnfetch_FIELD
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xUnfetch", mrb_SQLite_Sqlite3IoMethods_get_xUnfetch, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3IoMethods_class, "xUnfetch=", mrb_SQLite_Sqlite3IoMethods_set_xUnfetch, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
