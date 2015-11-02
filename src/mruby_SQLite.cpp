/*
 * TODO: INCLUDES
 */

#include "mruby_SQLite.h"

#ifdef __cplusplus
extern "C" {
#endif

#if BIND_sqlite3_aggregate_context_FUNCTION
#define sqlite3_aggregate_context_REQUIRED_ARGC 2
#define sqlite3_aggregate_context_OPTIONAL_ARGC 0
/* sqlite3_aggregate_context
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * - nBytes: int
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_aggregate_context(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value nBytes;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &nBytes);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, nBytes, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  int native_nBytes = mrb_fixnum(nBytes);

  /* Invocation */
  void * result = sqlite3_aggregate_context(native_arg1, native_nBytes);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_aggregate_count_FUNCTION
#define sqlite3_aggregate_count_REQUIRED_ARGC 1
#define sqlite3_aggregate_count_OPTIONAL_ARGC 0
/* sqlite3_aggregate_count
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_aggregate_count(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Invocation */
  int result = sqlite3_aggregate_count(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_auto_extension_FUNCTION
#define sqlite3_auto_extension_REQUIRED_ARGC 1
#define sqlite3_auto_extension_OPTIONAL_ARGC 0
/* sqlite3_auto_extension
 *
 * Parameters:
 * - xEntryPoint: void (*)(void)
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_auto_extension(mrb_state* mrb, mrb_value self) {
  mrb_value xEntryPoint;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &xEntryPoint);


  /* Type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(xEntryPoint);


  /* Unbox parameters */
  void (*native_xEntryPoint)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(xEntryPoint);

  /* Invocation */
  int result = sqlite3_auto_extension(native_xEntryPoint);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_backup_finish_FUNCTION
#define sqlite3_backup_finish_REQUIRED_ARGC 1
#define sqlite3_backup_finish_OPTIONAL_ARGC 0
/* sqlite3_backup_finish
 *
 * Parameters:
 * - p: struct sqlite3_backup *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_backup_finish(mrb_state* mrb, mrb_value self) {
  mrb_value p;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &p);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, Sqlite3Backup_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Backup expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_backup * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_sqlite3_backup(p));

  /* Invocation */
  int result = sqlite3_backup_finish(native_p);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_backup_init_FUNCTION
#define sqlite3_backup_init_REQUIRED_ARGC 4
#define sqlite3_backup_init_OPTIONAL_ARGC 0
/* sqlite3_backup_init
 *
 * Parameters:
 * - pDest: struct sqlite3 *
 * - zDestName: const char *
 * - pSource: struct sqlite3 *
 * - zSourceName: const char *
 * Return Type: sqlite3_backup *
 */
mrb_value
mrb_SQLite_sqlite3_backup_init(mrb_state* mrb, mrb_value self) {
  mrb_value pDest;
  mrb_value zDestName;
  mrb_value pSource;
  mrb_value zSourceName;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &pDest, &zDestName, &pSource, &zSourceName);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pDest, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zDestName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pSource, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zSourceName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_pDest = (mrb_nil_p(pDest) ? NULL : mruby_unbox_sqlite3(pDest));

  const char * native_zDestName = mrb_string_value_cstr(mrb, &zDestName);

  struct sqlite3 * native_pSource = (mrb_nil_p(pSource) ? NULL : mruby_unbox_sqlite3(pSource));

  const char * native_zSourceName = mrb_string_value_cstr(mrb, &zSourceName);

  /* Invocation */
  sqlite3_backup * result = sqlite3_backup_init(native_pDest, native_zDestName, native_pSource, native_zSourceName);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_sqlite3_backup(mrb, result));

  return return_value;
}
#endif

#if BIND_sqlite3_backup_pagecount_FUNCTION
#define sqlite3_backup_pagecount_REQUIRED_ARGC 1
#define sqlite3_backup_pagecount_OPTIONAL_ARGC 0
/* sqlite3_backup_pagecount
 *
 * Parameters:
 * - p: struct sqlite3_backup *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_backup_pagecount(mrb_state* mrb, mrb_value self) {
  mrb_value p;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &p);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, Sqlite3Backup_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Backup expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_backup * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_sqlite3_backup(p));

  /* Invocation */
  int result = sqlite3_backup_pagecount(native_p);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_backup_remaining_FUNCTION
#define sqlite3_backup_remaining_REQUIRED_ARGC 1
#define sqlite3_backup_remaining_OPTIONAL_ARGC 0
/* sqlite3_backup_remaining
 *
 * Parameters:
 * - p: struct sqlite3_backup *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_backup_remaining(mrb_state* mrb, mrb_value self) {
  mrb_value p;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &p);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, Sqlite3Backup_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Backup expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_backup * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_sqlite3_backup(p));

  /* Invocation */
  int result = sqlite3_backup_remaining(native_p);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_backup_step_FUNCTION
#define sqlite3_backup_step_REQUIRED_ARGC 2
#define sqlite3_backup_step_OPTIONAL_ARGC 0
/* sqlite3_backup_step
 *
 * Parameters:
 * - p: struct sqlite3_backup *
 * - nPage: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_backup_step(mrb_state* mrb, mrb_value self) {
  mrb_value p;
  mrb_value nPage;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &p, &nPage);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, Sqlite3Backup_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Backup expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, nPage, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_backup * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_sqlite3_backup(p));

  int native_nPage = mrb_fixnum(nPage);

  /* Invocation */
  int result = sqlite3_backup_step(native_p, native_nPage);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_bind_blob_FUNCTION
#define sqlite3_bind_blob_REQUIRED_ARGC 4
#define sqlite3_bind_blob_OPTIONAL_ARGC 0
/* sqlite3_bind_blob
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - arg2: int
 * - arg3: const void *
 * - n: int
 * NOT USED -----------------
 * | - arg5: void (*)(void *)
 * | - arg6: void *
 * |_________________________
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_blob(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value n;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &n);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String or Blob expected");
    return mrb_nil_value();
  }

  if (!mrb_obj_is_kind_of(mrb, n, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));
  int native_arg2 = mrb_fixnum(arg2);
  const void * native_arg3 = mrb_string_value_ptr(mrb, arg3);
  int native_n = mrb_fixnum(n);

  /* Invocation */
  int result = sqlite3_bind_blob(native_arg1, native_arg2, native_arg3, native_n, SQLITE_TRANSIENT);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_bind_blob64_FUNCTION
#define sqlite3_bind_blob64_REQUIRED_ARGC 6
#define sqlite3_bind_blob64_OPTIONAL_ARGC 0
/* sqlite3_bind_blob64
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - arg2: int
 * - arg3: const void *
 * - arg4: unsigned long long
 * - arg5: void (*)(void *)
 * - arg6: void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_blob64(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value arg6;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooo", &arg1, &arg2, &arg3, &arg4, &arg5, &arg6);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg3);
  TODO_type_check_unsigned_long_long(arg4);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg5);
  TODO_type_check_void_PTR(arg6);


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  const void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  unsigned long long native_arg4 = TODO_mruby_unbox_unsigned_long_long(arg4);

  void (*native_arg5)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg5);

  void * native_arg6 = TODO_mruby_unbox_void_PTR(arg6);

  /* Invocation */
  int result = sqlite3_bind_blob64(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5, native_arg6);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_bind_double_FUNCTION
#define sqlite3_bind_double_REQUIRED_ARGC 3
#define sqlite3_bind_double_OPTIONAL_ARGC 0
/* sqlite3_bind_double
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - arg2: int
 * - arg3: double
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_double(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  double native_arg3 = mrb_float(arg3);

  /* Invocation */
  int result = sqlite3_bind_double(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_bind_int_FUNCTION
#define sqlite3_bind_int_REQUIRED_ARGC 3
#define sqlite3_bind_int_OPTIONAL_ARGC 0
/* sqlite3_bind_int
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - arg2: int
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_int(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = sqlite3_bind_int(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_bind_int64_FUNCTION
#define sqlite3_bind_int64_REQUIRED_ARGC 3
#define sqlite3_bind_int64_OPTIONAL_ARGC 0
/* sqlite3_bind_int64
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - arg2: int
 * - arg3: long long
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_int64(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_long_long(arg3);


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  long long native_arg3 = TODO_mruby_unbox_long_long(arg3);

  /* Invocation */
  int result = sqlite3_bind_int64(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_bind_null_FUNCTION
#define sqlite3_bind_null_REQUIRED_ARGC 2
#define sqlite3_bind_null_OPTIONAL_ARGC 0
/* sqlite3_bind_null
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - arg2: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_null(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  int result = sqlite3_bind_null(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_bind_parameter_count_FUNCTION
#define sqlite3_bind_parameter_count_REQUIRED_ARGC 1
#define sqlite3_bind_parameter_count_OPTIONAL_ARGC 0
/* sqlite3_bind_parameter_count
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_parameter_count(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  int result = sqlite3_bind_parameter_count(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_bind_parameter_index_FUNCTION
#define sqlite3_bind_parameter_index_REQUIRED_ARGC 2
#define sqlite3_bind_parameter_index_OPTIONAL_ARGC 0
/* sqlite3_bind_parameter_index
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - zName: const char *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_parameter_index(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value zName;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &zName);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  const char * native_zName = mrb_string_value_cstr(mrb, &zName);

  /* Invocation */
  int result = sqlite3_bind_parameter_index(native_arg1, native_zName);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_bind_parameter_name_FUNCTION
#define sqlite3_bind_parameter_name_REQUIRED_ARGC 2
#define sqlite3_bind_parameter_name_OPTIONAL_ARGC 0
/* sqlite3_bind_parameter_name
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - arg2: int
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_sqlite3_bind_parameter_name(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  const char * result = sqlite3_bind_parameter_name(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_bind_text_FUNCTION
#define sqlite3_bind_text_REQUIRED_ARGC 4
#define sqlite3_bind_text_OPTIONAL_ARGC 0
/* sqlite3_bind_text
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - arg2: int
 * - arg3: const char *
 * - arg4: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_text(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));
  int native_arg2 = mrb_fixnum(arg2);
  const char * native_arg3 = mrb_string_value_cstr(mrb, &arg3);
  int native_arg4 = mrb_fixnum(arg4);

  /* Invocation */
  int result = sqlite3_bind_text(native_arg1, native_arg2, native_arg3, native_arg4, SQLITE_TRANSIENT);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_bind_text16_FUNCTION
#define sqlite3_bind_text16_REQUIRED_ARGC 6
#define sqlite3_bind_text16_OPTIONAL_ARGC 0
/* sqlite3_bind_text16
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - arg2: int
 * - arg3: const void *
 * - arg4: int
 * - arg5: void (*)(void *)
 * - arg6: void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_text16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value arg6;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooo", &arg1, &arg2, &arg3, &arg4, &arg5, &arg6);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg3);
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg5);
  TODO_type_check_void_PTR(arg6);


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  const void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  int native_arg4 = mrb_fixnum(arg4);

  void (*native_arg5)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg5);

  void * native_arg6 = TODO_mruby_unbox_void_PTR(arg6);

  /* Invocation */
  int result = sqlite3_bind_text16(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5, native_arg6);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_bind_text64_FUNCTION
#define sqlite3_bind_text64_REQUIRED_ARGC 7
#define sqlite3_bind_text64_OPTIONAL_ARGC 0
/* sqlite3_bind_text64
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - arg2: int
 * - arg3: const char *
 * - arg4: unsigned long long
 * - arg5: void (*)(void *)
 * - arg6: void *
 * - encoding: unsigned char
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_text64(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value arg6;
  mrb_value encoding;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooooo", &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &encoding);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_long_long(arg4);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg5);
  TODO_type_check_void_PTR(arg6);
  TODO_type_check_unsigned_char(encoding);


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  const char * native_arg3 = mrb_string_value_cstr(mrb, &arg3);

  unsigned long long native_arg4 = TODO_mruby_unbox_unsigned_long_long(arg4);

  void (*native_arg5)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg5);

  void * native_arg6 = TODO_mruby_unbox_void_PTR(arg6);

  unsigned char native_encoding = TODO_mruby_unbox_unsigned_char(encoding);

  /* Invocation */
  int result = sqlite3_bind_text64(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5, native_arg6, native_encoding);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_bind_value_FUNCTION
#define sqlite3_bind_value_REQUIRED_ARGC 3
#define sqlite3_bind_value_OPTIONAL_ARGC 0
/* sqlite3_bind_value
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - arg2: int
 * - arg3: const struct Mem *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_value(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, Mem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Mem expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  const struct Mem * native_arg3 = (mrb_nil_p(arg3) ? NULL : mruby_unbox_Mem(arg3));

  /* Invocation */
  int result = sqlite3_bind_value(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_bind_zeroblob_FUNCTION
#define sqlite3_bind_zeroblob_REQUIRED_ARGC 3
#define sqlite3_bind_zeroblob_OPTIONAL_ARGC 0
/* sqlite3_bind_zeroblob
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - arg2: int
 * - n: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_zeroblob(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value n;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &n);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, n, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int native_n = mrb_fixnum(n);

  /* Invocation */
  int result = sqlite3_bind_zeroblob(native_arg1, native_arg2, native_n);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_blob_bytes_FUNCTION
#define sqlite3_blob_bytes_REQUIRED_ARGC 1
#define sqlite3_blob_bytes_OPTIONAL_ARGC 0
/* sqlite3_blob_bytes
 *
 * Parameters:
 * - arg1: struct sqlite3_blob *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_blob_bytes(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Blob expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_blob * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_blob(arg1));

  /* Invocation */
  int result = sqlite3_blob_bytes(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_blob_close_FUNCTION
#define sqlite3_blob_close_REQUIRED_ARGC 1
#define sqlite3_blob_close_OPTIONAL_ARGC 0
/* sqlite3_blob_close
 *
 * Parameters:
 * - arg1: struct sqlite3_blob *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_blob_close(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Blob expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_blob * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_blob(arg1));

  /* Invocation */
  int result = sqlite3_blob_close(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_blob_open_FUNCTION
#define sqlite3_blob_open_REQUIRED_ARGC 7
#define sqlite3_blob_open_OPTIONAL_ARGC 0
/* sqlite3_blob_open
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - zDb: const char *
 * - zTable: const char *
 * - zColumn: const char *
 * - iRow: long long
 * - flags: int
 * - ppBlob: struct sqlite3_blob **
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_blob_open(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value zDb;
  mrb_value zTable;
  mrb_value zColumn;
  mrb_value iRow;
  mrb_value flags;
  mrb_value ppBlob;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooooo", &arg1, &zDb, &zTable, &zColumn, &iRow, &flags, &ppBlob);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zDb, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zTable, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zColumn, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_long_long(iRow);
  if (!mrb_obj_is_kind_of(mrb, flags, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_sqlite3_blob_PTR_PTR(ppBlob);


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  const char * native_zDb = mrb_string_value_cstr(mrb, &zDb);

  const char * native_zTable = mrb_string_value_cstr(mrb, &zTable);

  const char * native_zColumn = mrb_string_value_cstr(mrb, &zColumn);

  long long native_iRow = TODO_mruby_unbox_long_long(iRow);

  int native_flags = mrb_fixnum(flags);

  struct sqlite3_blob ** native_ppBlob = TODO_mruby_unbox_sqlite3_blob_PTR_PTR(ppBlob);

  /* Invocation */
  int result = sqlite3_blob_open(native_arg1, native_zDb, native_zTable, native_zColumn, native_iRow, native_flags, native_ppBlob);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_blob_read_FUNCTION
#define sqlite3_blob_read_REQUIRED_ARGC 4
#define sqlite3_blob_read_OPTIONAL_ARGC 0
/* sqlite3_blob_read
 *
 * Parameters:
 * - arg1: struct sqlite3_blob *
 * - Z: void *
 * - N: int
 * - iOffset: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_blob_read(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value Z;
  mrb_value N;
  mrb_value iOffset;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &Z, &N, &iOffset);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Blob expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(Z);
  if (!mrb_obj_is_kind_of(mrb, N, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, iOffset, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_blob * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_blob(arg1));

  void * native_Z = TODO_mruby_unbox_void_PTR(Z);

  int native_N = mrb_fixnum(N);

  int native_iOffset = mrb_fixnum(iOffset);

  /* Invocation */
  int result = sqlite3_blob_read(native_arg1, native_Z, native_N, native_iOffset);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_blob_reopen_FUNCTION
#define sqlite3_blob_reopen_REQUIRED_ARGC 2
#define sqlite3_blob_reopen_OPTIONAL_ARGC 0
/* sqlite3_blob_reopen
 *
 * Parameters:
 * - arg1: struct sqlite3_blob *
 * - arg2: long long
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_blob_reopen(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Blob expected");
    return mrb_nil_value();
  }
  TODO_type_check_long_long(arg2);


  /* Unbox parameters */
  struct sqlite3_blob * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_blob(arg1));

  long long native_arg2 = TODO_mruby_unbox_long_long(arg2);

  /* Invocation */
  int result = sqlite3_blob_reopen(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_blob_write_FUNCTION
#define sqlite3_blob_write_REQUIRED_ARGC 4
#define sqlite3_blob_write_OPTIONAL_ARGC 0
/* sqlite3_blob_write
 *
 * Parameters:
 * - arg1: struct sqlite3_blob *
 * - z: const void *
 * - n: int
 * - iOffset: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_blob_write(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value z;
  mrb_value n;
  mrb_value iOffset;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &z, &n, &iOffset);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Blob expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(z);
  if (!mrb_obj_is_kind_of(mrb, n, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, iOffset, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_blob * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_blob(arg1));

  const void * native_z = TODO_mruby_unbox_void_PTR(z);

  int native_n = mrb_fixnum(n);

  int native_iOffset = mrb_fixnum(iOffset);

  /* Invocation */
  int result = sqlite3_blob_write(native_arg1, native_z, native_n, native_iOffset);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_busy_handler_FUNCTION
#define sqlite3_busy_handler_REQUIRED_ARGC 5
#define sqlite3_busy_handler_OPTIONAL_ARGC 0
/* sqlite3_busy_handler
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - arg2: int (*)(void *, int)
 * - arg3: void *
 * - arg4: int
 * - arg5: void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_busy_handler(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &arg2, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_int_RPAREN(arg2);
  TODO_type_check_void_PTR(arg3);
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg5);


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  int (*native_arg2)(void *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_int_RPAREN(arg2);

  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  int native_arg4 = mrb_fixnum(arg4);

  void * native_arg5 = TODO_mruby_unbox_void_PTR(arg5);

  /* Invocation */
  int result = sqlite3_busy_handler(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_busy_timeout_FUNCTION
#define sqlite3_busy_timeout_REQUIRED_ARGC 2
#define sqlite3_busy_timeout_OPTIONAL_ARGC 0
/* sqlite3_busy_timeout
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - ms: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_busy_timeout(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value ms;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &ms);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, ms, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  int native_ms = mrb_fixnum(ms);

  /* Invocation */
  int result = sqlite3_busy_timeout(native_arg1, native_ms);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_cancel_auto_extension_FUNCTION
#define sqlite3_cancel_auto_extension_REQUIRED_ARGC 1
#define sqlite3_cancel_auto_extension_OPTIONAL_ARGC 0
/* sqlite3_cancel_auto_extension
 *
 * Parameters:
 * - xEntryPoint: void (*)(void)
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_cancel_auto_extension(mrb_state* mrb, mrb_value self) {
  mrb_value xEntryPoint;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &xEntryPoint);


  /* Type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(xEntryPoint);


  /* Unbox parameters */
  void (*native_xEntryPoint)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(xEntryPoint);

  /* Invocation */
  int result = sqlite3_cancel_auto_extension(native_xEntryPoint);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_changes_FUNCTION
#define sqlite3_changes_REQUIRED_ARGC 1
#define sqlite3_changes_OPTIONAL_ARGC 0
/* sqlite3_changes
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_changes(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }

  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  int result = sqlite3_changes(native_arg1);

  /* Box the return value */
  return mrb_fixnum_value(result);
}
#endif

#if BIND_sqlite3_clear_bindings_FUNCTION
#define sqlite3_clear_bindings_REQUIRED_ARGC 1
#define sqlite3_clear_bindings_OPTIONAL_ARGC 0
/* sqlite3_clear_bindings
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_clear_bindings(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  int result = sqlite3_clear_bindings(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_close_FUNCTION
#define sqlite3_close_REQUIRED_ARGC 1
#define sqlite3_close_OPTIONAL_ARGC 0
/* sqlite3_close
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_close(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  int result = sqlite3_close(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_close_v2_FUNCTION
#define sqlite3_close_v2_REQUIRED_ARGC 5
#define sqlite3_close_v2_OPTIONAL_ARGC 0
/* sqlite3_close_v2
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - arg2: void *
 * - arg3: int
 * - arg4: char **
 * - arg5: char **
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_close_v2(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &arg2, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR_PTR(arg4);
  TODO_type_check_char_PTR_PTR(arg5);


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  char ** native_arg4 = TODO_mruby_unbox_char_PTR_PTR(arg4);

  char ** native_arg5 = TODO_mruby_unbox_char_PTR_PTR(arg5);

  /* Invocation */
  int result = sqlite3_close_v2(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_collation_needed_FUNCTION
#define sqlite3_collation_needed_REQUIRED_ARGC 7
#define sqlite3_collation_needed_OPTIONAL_ARGC 0
/* sqlite3_collation_needed
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - arg2: void *
 * - arg3: void (*)(void *, struct sqlite3 *, int, const char *)
 * - arg4: void *
 * - arg5: struct sqlite3 *
 * - eTextRep: int
 * - arg7: const char *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_collation_needed(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value eTextRep;
  mrb_value arg7;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooooo", &arg1, &arg2, &arg3, &arg4, &arg5, &eTextRep, &arg7);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMAsqlite3_PTR_COMMA_intCOMMAchar_PTR_RPAREN(arg3);
  TODO_type_check_void_PTR(arg4);
  if (!mrb_obj_is_kind_of(mrb, arg5, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, eTextRep, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg7, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  void (*native_arg3)(void *, struct sqlite3 *, int, const char *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMAsqlite3_PTR_COMMA_intCOMMAchar_PTR_RPAREN(arg3);

  void * native_arg4 = TODO_mruby_unbox_void_PTR(arg4);

  struct sqlite3 * native_arg5 = (mrb_nil_p(arg5) ? NULL : mruby_unbox_sqlite3(arg5));

  int native_eTextRep = mrb_fixnum(eTextRep);

  const char * native_arg7 = mrb_string_value_cstr(mrb, &arg7);

  /* Invocation */
  int result = sqlite3_collation_needed(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5, native_eTextRep, native_arg7);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_collation_needed16_FUNCTION
#define sqlite3_collation_needed16_REQUIRED_ARGC 7
#define sqlite3_collation_needed16_OPTIONAL_ARGC 0
/* sqlite3_collation_needed16
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - arg2: void *
 * - arg3: void (*)(void *, struct sqlite3 *, int, const void *)
 * - arg4: void *
 * - arg5: struct sqlite3 *
 * - eTextRep: int
 * - arg7: const void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_collation_needed16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value eTextRep;
  mrb_value arg7;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooooo", &arg1, &arg2, &arg3, &arg4, &arg5, &eTextRep, &arg7);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMAsqlite3_PTR_COMMA_intCOMMAvoid_PTR_RPAREN(arg3);
  TODO_type_check_void_PTR(arg4);
  if (!mrb_obj_is_kind_of(mrb, arg5, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, eTextRep, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg7);


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  void (*native_arg3)(void *, struct sqlite3 *, int, const void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMAsqlite3_PTR_COMMA_intCOMMAvoid_PTR_RPAREN(arg3);

  void * native_arg4 = TODO_mruby_unbox_void_PTR(arg4);

  struct sqlite3 * native_arg5 = (mrb_nil_p(arg5) ? NULL : mruby_unbox_sqlite3(arg5));

  int native_eTextRep = mrb_fixnum(eTextRep);

  const void * native_arg7 = TODO_mruby_unbox_void_PTR(arg7);

  /* Invocation */
  int result = sqlite3_collation_needed16(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5, native_eTextRep, native_arg7);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_column_blob_FUNCTION
#define sqlite3_column_blob_REQUIRED_ARGC 2
#define sqlite3_column_blob_OPTIONAL_ARGC 0
/* sqlite3_column_blob
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - iCol: int
 * Return Type: const void *
 */
mrb_value
mrb_SQLite_sqlite3_column_blob(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value iCol;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &iCol);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, iCol, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));
  int native_iCol = mrb_fixnum(iCol);

  /* Invocation */
  const void * result = sqlite3_column_blob(native_arg1, native_iCol);

  /* Box the return value */
  int num_bytes = sqlite3_column_bytes(native_arg1, native_iCol);
  mrb_value return_value = mrb_str_new(mrb, (char*)result, num_bytes);

  return return_value;
}
#endif

#if BIND_sqlite3_column_bytes_FUNCTION
#define sqlite3_column_bytes_REQUIRED_ARGC 2
#define sqlite3_column_bytes_OPTIONAL_ARGC 0
/* sqlite3_column_bytes
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - iCol: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_column_bytes(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value iCol;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &iCol);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, iCol, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_iCol = mrb_fixnum(iCol);

  /* Invocation */
  int result = sqlite3_column_bytes(native_arg1, native_iCol);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_column_bytes16_FUNCTION
#define sqlite3_column_bytes16_REQUIRED_ARGC 2
#define sqlite3_column_bytes16_OPTIONAL_ARGC 0
/* sqlite3_column_bytes16
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - iCol: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_column_bytes16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value iCol;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &iCol);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, iCol, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_iCol = mrb_fixnum(iCol);

  /* Invocation */
  int result = sqlite3_column_bytes16(native_arg1, native_iCol);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_column_count_FUNCTION
#define sqlite3_column_count_REQUIRED_ARGC 1
#define sqlite3_column_count_OPTIONAL_ARGC 0
/* sqlite3_column_count
 *
 * Parameters:
 * - pStmt: struct sqlite3_stmt *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_column_count(mrb_state* mrb, mrb_value self) {
  mrb_value pStmt;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pStmt);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pStmt, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_pStmt = (mrb_nil_p(pStmt) ? NULL : mruby_unbox_sqlite3_stmt(pStmt));

  /* Invocation */
  int result = sqlite3_column_count(native_pStmt);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_column_database_name_FUNCTION
#define sqlite3_column_database_name_REQUIRED_ARGC 2
#define sqlite3_column_database_name_OPTIONAL_ARGC 0
/* sqlite3_column_database_name
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - arg2: int
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_sqlite3_column_database_name(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  const char * result = sqlite3_column_database_name(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_column_database_name16_FUNCTION
#define sqlite3_column_database_name16_REQUIRED_ARGC 2
#define sqlite3_column_database_name16_OPTIONAL_ARGC 0
/* sqlite3_column_database_name16
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - arg2: int
 * Return Type: const void *
 */
mrb_value
mrb_SQLite_sqlite3_column_database_name16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  const void * result = sqlite3_column_database_name16(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_column_decltype_FUNCTION
#define sqlite3_column_decltype_REQUIRED_ARGC 2
#define sqlite3_column_decltype_OPTIONAL_ARGC 0
/* sqlite3_column_decltype
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - arg2: int
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_sqlite3_column_decltype(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  const char * result = sqlite3_column_decltype(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_column_decltype16_FUNCTION
#define sqlite3_column_decltype16_REQUIRED_ARGC 2
#define sqlite3_column_decltype16_OPTIONAL_ARGC 0
/* sqlite3_column_decltype16
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - arg2: int
 * Return Type: const void *
 */
mrb_value
mrb_SQLite_sqlite3_column_decltype16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  const void * result = sqlite3_column_decltype16(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_column_double_FUNCTION
#define sqlite3_column_double_REQUIRED_ARGC 2
#define sqlite3_column_double_OPTIONAL_ARGC 0
/* sqlite3_column_double
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - iCol: int
 * Return Type: double
 */
mrb_value
mrb_SQLite_sqlite3_column_double(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value iCol;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &iCol);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, iCol, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_iCol = mrb_fixnum(iCol);

  /* Invocation */
  double result = sqlite3_column_double(native_arg1, native_iCol);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_column_int_FUNCTION
#define sqlite3_column_int_REQUIRED_ARGC 2
#define sqlite3_column_int_OPTIONAL_ARGC 0
/* sqlite3_column_int
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - iCol: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_column_int(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value iCol;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &iCol);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, iCol, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_iCol = mrb_fixnum(iCol);

  /* Invocation */
  int result = sqlite3_column_int(native_arg1, native_iCol);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_column_int64_FUNCTION
#define sqlite3_column_int64_REQUIRED_ARGC 2
#define sqlite3_column_int64_OPTIONAL_ARGC 0
/* sqlite3_column_int64
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - iCol: int
 * Return Type: sqlite3_int64
 */
mrb_value
mrb_SQLite_sqlite3_column_int64(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value iCol;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &iCol);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, iCol, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_iCol = mrb_fixnum(iCol);

  /* Invocation */
  sqlite3_int64 result = sqlite3_column_int64(native_arg1, native_iCol);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_sqlite3_int64(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_column_name_FUNCTION
#define sqlite3_column_name_REQUIRED_ARGC 2
#define sqlite3_column_name_OPTIONAL_ARGC 0
/* sqlite3_column_name
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - N: int
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_sqlite3_column_name(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value N;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &N);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, N, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_N = mrb_fixnum(N);

  /* Invocation */
  const char * result = sqlite3_column_name(native_arg1, native_N);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_column_name16_FUNCTION
#define sqlite3_column_name16_REQUIRED_ARGC 2
#define sqlite3_column_name16_OPTIONAL_ARGC 0
/* sqlite3_column_name16
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - N: int
 * Return Type: const void *
 */
mrb_value
mrb_SQLite_sqlite3_column_name16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value N;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &N);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, N, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_N = mrb_fixnum(N);

  /* Invocation */
  const void * result = sqlite3_column_name16(native_arg1, native_N);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_column_origin_name_FUNCTION
#define sqlite3_column_origin_name_REQUIRED_ARGC 2
#define sqlite3_column_origin_name_OPTIONAL_ARGC 0
/* sqlite3_column_origin_name
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - arg2: int
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_sqlite3_column_origin_name(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));
  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  const char * result = sqlite3_column_origin_name(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_column_origin_name16_FUNCTION
#define sqlite3_column_origin_name16_REQUIRED_ARGC 2
#define sqlite3_column_origin_name16_OPTIONAL_ARGC 0
/* sqlite3_column_origin_name16
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - arg2: int
 * Return Type: const void *
 */
mrb_value
mrb_SQLite_sqlite3_column_origin_name16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  const void * result = sqlite3_column_origin_name16(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_column_table_name_FUNCTION
#define sqlite3_column_table_name_REQUIRED_ARGC 2
#define sqlite3_column_table_name_OPTIONAL_ARGC 0
/* sqlite3_column_table_name
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - arg2: int
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_sqlite3_column_table_name(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  const char * result = sqlite3_column_table_name(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_column_table_name16_FUNCTION
#define sqlite3_column_table_name16_REQUIRED_ARGC 2
#define sqlite3_column_table_name16_OPTIONAL_ARGC 0
/* sqlite3_column_table_name16
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - arg2: int
 * Return Type: const void *
 */
mrb_value
mrb_SQLite_sqlite3_column_table_name16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  const void * result = sqlite3_column_table_name16(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_column_text_FUNCTION
#define sqlite3_column_text_REQUIRED_ARGC 2
#define sqlite3_column_text_OPTIONAL_ARGC 0
/* sqlite3_column_text
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - iCol: int
 * Return Type: const unsigned char *
 */
mrb_value
mrb_SQLite_sqlite3_column_text(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value iCol;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &iCol);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, iCol, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));
  int native_iCol = mrb_fixnum(iCol);

  /* Invocation */
  const unsigned char * result = sqlite3_column_text(native_arg1, native_iCol);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, (char*)result);

  return return_value;
}
#endif

#if BIND_sqlite3_column_text16_FUNCTION
#define sqlite3_column_text16_REQUIRED_ARGC 2
#define sqlite3_column_text16_OPTIONAL_ARGC 0
/* sqlite3_column_text16
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - iCol: int
 * Return Type: const void *
 */
mrb_value
mrb_SQLite_sqlite3_column_text16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value iCol;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &iCol);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, iCol, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_iCol = mrb_fixnum(iCol);

  /* Invocation */
  const void * result = sqlite3_column_text16(native_arg1, native_iCol);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_column_type_FUNCTION
#define sqlite3_column_type_REQUIRED_ARGC 2
#define sqlite3_column_type_OPTIONAL_ARGC 0
/* sqlite3_column_type
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - iCol: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_column_type(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value iCol;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &iCol);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, iCol, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_iCol = mrb_fixnum(iCol);

  /* Invocation */
  int result = sqlite3_column_type(native_arg1, native_iCol);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_column_value_FUNCTION
#define sqlite3_column_value_REQUIRED_ARGC 2
#define sqlite3_column_value_OPTIONAL_ARGC 0
/* sqlite3_column_value
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - iCol: int
 * Return Type: sqlite3_value *
 */
mrb_value
mrb_SQLite_sqlite3_column_value(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value iCol;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &iCol);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, iCol, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_iCol = mrb_fixnum(iCol);

  /* Invocation */
  sqlite3_value * result = sqlite3_column_value(native_arg1, native_iCol);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_Mem(mrb, result));

  return return_value;
}
#endif

#if BIND_sqlite3_commit_hook_FUNCTION
#define sqlite3_commit_hook_REQUIRED_ARGC 4
#define sqlite3_commit_hook_OPTIONAL_ARGC 0
/* sqlite3_commit_hook
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - arg2: int (*)(void *)
 * - arg3: void *
 * - arg4: void *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_commit_hook(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg2);
  TODO_type_check_void_PTR(arg3);
  TODO_type_check_void_PTR(arg4);


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  int (*native_arg2)(void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg2);

  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  void * native_arg4 = TODO_mruby_unbox_void_PTR(arg4);

  /* Invocation */
  void * result = sqlite3_commit_hook(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_compileoption_get_FUNCTION
#define sqlite3_compileoption_get_REQUIRED_ARGC 1
#define sqlite3_compileoption_get_OPTIONAL_ARGC 0
/* sqlite3_compileoption_get
 *
 * Parameters:
 * - N: int
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_sqlite3_compileoption_get(mrb_state* mrb, mrb_value self) {
  mrb_value N;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &N);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, N, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_N = mrb_fixnum(N);

  /* Invocation */
  const char * result = sqlite3_compileoption_get(native_N);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_compileoption_used_FUNCTION
#define sqlite3_compileoption_used_REQUIRED_ARGC 1
#define sqlite3_compileoption_used_OPTIONAL_ARGC 0
/* sqlite3_compileoption_used
 *
 * Parameters:
 * - zOptName: const char *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_compileoption_used(mrb_state* mrb, mrb_value self) {
  mrb_value zOptName;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &zOptName);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, zOptName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_zOptName = mrb_string_value_cstr(mrb, &zOptName);

  /* Invocation */
  int result = sqlite3_compileoption_used(native_zOptName);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_complete_FUNCTION
#define sqlite3_complete_REQUIRED_ARGC 1
#define sqlite3_complete_OPTIONAL_ARGC 0
/* sqlite3_complete
 *
 * Parameters:
 * - sql: const char *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_complete(mrb_state* mrb, mrb_value self) {
  mrb_value sql;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &sql);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, sql, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  /* Unbox parameters */
  const char * native_sql = mrb_string_value_cstr(mrb, &sql);

  /* Invocation */
  int result = sqlite3_complete(native_sql);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_complete16_FUNCTION
#define sqlite3_complete16_REQUIRED_ARGC 1
#define sqlite3_complete16_OPTIONAL_ARGC 0
/* sqlite3_complete16
 *
 * Parameters:
 * - sql: const void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_complete16(mrb_state* mrb, mrb_value self) {
  mrb_value sql;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &sql);


  /* Type checking */
  TODO_type_check_void_PTR(sql);


  /* Unbox parameters */
  const void * native_sql = TODO_mruby_unbox_void_PTR(sql);

  /* Invocation */
  int result = sqlite3_complete16(native_sql);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_config_FUNCTION
#define sqlite3_config_REQUIRED_ARGC 1
#define sqlite3_config_OPTIONAL_ARGC 0
/* sqlite3_config
 *
 * Parameters:
 * - arg1: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_config(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = sqlite3_config(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_context_db_handle_FUNCTION
#define sqlite3_context_db_handle_REQUIRED_ARGC 1
#define sqlite3_context_db_handle_OPTIONAL_ARGC 0
/* sqlite3_context_db_handle
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * Return Type: sqlite3 *
 */
mrb_value
mrb_SQLite_sqlite3_context_db_handle(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Invocation */
  sqlite3 * result = sqlite3_context_db_handle(native_arg1);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_sqlite3(mrb, result));

  return return_value;
}
#endif

#if BIND_sqlite3_create_collation_FUNCTION
#define sqlite3_create_collation_REQUIRED_ARGC 10
#define sqlite3_create_collation_OPTIONAL_ARGC 0
/* sqlite3_create_collation
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - zName: const char *
 * - eTextRep: int
 * - pArg: void *
 * - xCompare: int (*)(void *, int, const void *, int, const void *)
 * - arg6: void *
 * - arg7: int
 * - arg8: const void *
 * - arg9: int
 * - arg10: const void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_create_collation(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value zName;
  mrb_value eTextRep;
  mrb_value pArg;
  mrb_value xCompare;
  mrb_value arg6;
  mrb_value arg7;
  mrb_value arg8;
  mrb_value arg9;
  mrb_value arg10;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooooooo", &arg1, &zName, &eTextRep, &pArg, &xCompare, &arg6, &arg7, &arg8, &arg9, &arg10);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, eTextRep, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pArg);
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMAvoid_PTR_COMMA_intCOMMA_const_void_PTR_RPAREN(xCompare);
  TODO_type_check_void_PTR(arg6);
  if (!mrb_obj_is_kind_of(mrb, arg7, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg8);
  if (!mrb_obj_is_kind_of(mrb, arg9, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg10);


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  const char * native_zName = mrb_string_value_cstr(mrb, &zName);

  int native_eTextRep = mrb_fixnum(eTextRep);

  void * native_pArg = TODO_mruby_unbox_void_PTR(pArg);

  int (*native_xCompare)(void *, int, const void *, int, const void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMAvoid_PTR_COMMA_intCOMMA_const_void_PTR_RPAREN(xCompare);

  void * native_arg6 = TODO_mruby_unbox_void_PTR(arg6);

  int native_arg7 = mrb_fixnum(arg7);

  const void * native_arg8 = TODO_mruby_unbox_void_PTR(arg8);

  int native_arg9 = mrb_fixnum(arg9);

  const void * native_arg10 = TODO_mruby_unbox_void_PTR(arg10);

  /* Invocation */
  int result = sqlite3_create_collation(native_arg1, native_zName, native_eTextRep, native_pArg, native_xCompare, native_arg6, native_arg7, native_arg8, native_arg9, native_arg10);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_create_collation16_FUNCTION
#define sqlite3_create_collation16_REQUIRED_ARGC 10
#define sqlite3_create_collation16_OPTIONAL_ARGC 0
/* sqlite3_create_collation16
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - zName: const void *
 * - eTextRep: int
 * - pArg: void *
 * - xCompare: int (*)(void *, int, const void *, int, const void *)
 * - arg6: void *
 * - arg7: int
 * - arg8: const void *
 * - arg9: int
 * - arg10: const void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_create_collation16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value zName;
  mrb_value eTextRep;
  mrb_value pArg;
  mrb_value xCompare;
  mrb_value arg6;
  mrb_value arg7;
  mrb_value arg8;
  mrb_value arg9;
  mrb_value arg10;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooooooo", &arg1, &zName, &eTextRep, &pArg, &xCompare, &arg6, &arg7, &arg8, &arg9, &arg10);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(zName);
  if (!mrb_obj_is_kind_of(mrb, eTextRep, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pArg);
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMAvoid_PTR_COMMA_intCOMMA_const_void_PTR_RPAREN(xCompare);
  TODO_type_check_void_PTR(arg6);
  if (!mrb_obj_is_kind_of(mrb, arg7, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg8);
  if (!mrb_obj_is_kind_of(mrb, arg9, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg10);


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  const void * native_zName = TODO_mruby_unbox_void_PTR(zName);

  int native_eTextRep = mrb_fixnum(eTextRep);

  void * native_pArg = TODO_mruby_unbox_void_PTR(pArg);

  int (*native_xCompare)(void *, int, const void *, int, const void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMAvoid_PTR_COMMA_intCOMMA_const_void_PTR_RPAREN(xCompare);

  void * native_arg6 = TODO_mruby_unbox_void_PTR(arg6);

  int native_arg7 = mrb_fixnum(arg7);

  const void * native_arg8 = TODO_mruby_unbox_void_PTR(arg8);

  int native_arg9 = mrb_fixnum(arg9);

  const void * native_arg10 = TODO_mruby_unbox_void_PTR(arg10);

  /* Invocation */
  int result = sqlite3_create_collation16(native_arg1, native_zName, native_eTextRep, native_pArg, native_xCompare, native_arg6, native_arg7, native_arg8, native_arg9, native_arg10);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_create_collation_v2_FUNCTION
#define sqlite3_create_collation_v2_REQUIRED_ARGC 12
#define sqlite3_create_collation_v2_OPTIONAL_ARGC 0
/* sqlite3_create_collation_v2
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - zName: const char *
 * - eTextRep: int
 * - pArg: void *
 * - xCompare: int (*)(void *, int, const void *, int, const void *)
 * - arg6: void *
 * - arg7: int
 * - arg8: const void *
 * - arg9: int
 * - arg10: const void *
 * - xDestroy: void (*)(void *)
 * - arg12: void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_create_collation_v2(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value zName;
  mrb_value eTextRep;
  mrb_value pArg;
  mrb_value xCompare;
  mrb_value arg6;
  mrb_value arg7;
  mrb_value arg8;
  mrb_value arg9;
  mrb_value arg10;
  mrb_value xDestroy;
  mrb_value arg12;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooooooooo", &arg1, &zName, &eTextRep, &pArg, &xCompare, &arg6, &arg7, &arg8, &arg9, &arg10, &xDestroy, &arg12);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, eTextRep, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pArg);
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMAvoid_PTR_COMMA_intCOMMA_const_void_PTR_RPAREN(xCompare);
  TODO_type_check_void_PTR(arg6);
  if (!mrb_obj_is_kind_of(mrb, arg7, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg8);
  if (!mrb_obj_is_kind_of(mrb, arg9, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg10);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xDestroy);
  TODO_type_check_void_PTR(arg12);


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  const char * native_zName = mrb_string_value_cstr(mrb, &zName);

  int native_eTextRep = mrb_fixnum(eTextRep);

  void * native_pArg = TODO_mruby_unbox_void_PTR(pArg);

  int (*native_xCompare)(void *, int, const void *, int, const void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMAvoid_PTR_COMMA_intCOMMA_const_void_PTR_RPAREN(xCompare);

  void * native_arg6 = TODO_mruby_unbox_void_PTR(arg6);

  int native_arg7 = mrb_fixnum(arg7);

  const void * native_arg8 = TODO_mruby_unbox_void_PTR(arg8);

  int native_arg9 = mrb_fixnum(arg9);

  const void * native_arg10 = TODO_mruby_unbox_void_PTR(arg10);

  void (*native_xDestroy)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xDestroy);

  void * native_arg12 = TODO_mruby_unbox_void_PTR(arg12);

  /* Invocation */
  int result = sqlite3_create_collation_v2(native_arg1, native_zName, native_eTextRep, native_pArg, native_xCompare, native_arg6, native_arg7, native_arg8, native_arg9, native_arg10, native_xDestroy, native_arg12);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_create_function_FUNCTION
#define sqlite3_create_function_REQUIRED_ARGC 15
#define sqlite3_create_function_OPTIONAL_ARGC 0
/* sqlite3_create_function
 *
 * Parameters:
 * - db: struct sqlite3 *
 * - zFunctionName: const char *
 * - nArg: int
 * - eTextRep: int
 * - pApp: void *
 * - xFunc: void (*)(struct sqlite3_context *, int, struct Mem **)
 * - arg7: struct sqlite3_context *
 * - arg8: int
 * - arg9: struct Mem **
 * - xStep: void (*)(struct sqlite3_context *, int, struct Mem **)
 * - arg11: struct sqlite3_context *
 * - arg12: int
 * - arg13: struct Mem **
 * - xFinal: void (*)(struct sqlite3_context *)
 * - arg15: struct sqlite3_context *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_create_function(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value zFunctionName;
  mrb_value nArg;
  mrb_value eTextRep;
  mrb_value pApp;
  mrb_value xFunc;
  mrb_value arg7;
  mrb_value arg8;
  mrb_value arg9;
  mrb_value xStep;
  mrb_value arg11;
  mrb_value arg12;
  mrb_value arg13;
  mrb_value xFinal;
  mrb_value arg15;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooooooooooooo", &db, &zFunctionName, &nArg, &eTextRep, &pApp, &xFunc, &arg7, &arg8, &arg9, &xStep, &arg11, &arg12, &arg13, &xFinal, &arg15);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zFunctionName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, nArg, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, eTextRep, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pApp);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_struct_Mem_PTR_PTR_RPAREN(xFunc);
  if (!mrb_obj_is_kind_of(mrb, arg7, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg8, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_Mem_PTR_PTR(arg9);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_struct_Mem_PTR_PTR_RPAREN(xStep);
  if (!mrb_obj_is_kind_of(mrb, arg11, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg12, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_Mem_PTR_PTR(arg13);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_RPAREN(xFinal);
  if (!mrb_obj_is_kind_of(mrb, arg15, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  const char * native_zFunctionName = mrb_string_value_cstr(mrb, &zFunctionName);

  int native_nArg = mrb_fixnum(nArg);

  int native_eTextRep = mrb_fixnum(eTextRep);

  void * native_pApp = TODO_mruby_unbox_void_PTR(pApp);

  void (*native_xFunc)(struct sqlite3_context *, int, struct Mem **) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_struct_Mem_PTR_PTR_RPAREN(xFunc);

  struct sqlite3_context * native_arg7 = (mrb_nil_p(arg7) ? NULL : mruby_unbox_sqlite3_context(arg7));

  int native_arg8 = mrb_fixnum(arg8);

  struct Mem ** native_arg9 = TODO_mruby_unbox_Mem_PTR_PTR(arg9);

  void (*native_xStep)(struct sqlite3_context *, int, struct Mem **) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_struct_Mem_PTR_PTR_RPAREN(xStep);

  struct sqlite3_context * native_arg11 = (mrb_nil_p(arg11) ? NULL : mruby_unbox_sqlite3_context(arg11));

  int native_arg12 = mrb_fixnum(arg12);

  struct Mem ** native_arg13 = TODO_mruby_unbox_Mem_PTR_PTR(arg13);

  void (*native_xFinal)(struct sqlite3_context *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_RPAREN(xFinal);

  struct sqlite3_context * native_arg15 = (mrb_nil_p(arg15) ? NULL : mruby_unbox_sqlite3_context(arg15));

  /* Invocation */
  int result = sqlite3_create_function(native_db, native_zFunctionName, native_nArg, native_eTextRep, native_pApp, native_xFunc, native_arg7, native_arg8, native_arg9, native_xStep, native_arg11, native_arg12, native_arg13, native_xFinal, native_arg15);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_create_function16_FUNCTION
#define sqlite3_create_function16_REQUIRED_ARGC 15
#define sqlite3_create_function16_OPTIONAL_ARGC 0
/* sqlite3_create_function16
 *
 * Parameters:
 * - db: struct sqlite3 *
 * - zFunctionName: const void *
 * - nArg: int
 * - eTextRep: int
 * - pApp: void *
 * - xFunc: void (*)(struct sqlite3_context *, int, struct Mem **)
 * - arg7: struct sqlite3_context *
 * - arg8: int
 * - arg9: struct Mem **
 * - xStep: void (*)(struct sqlite3_context *, int, struct Mem **)
 * - arg11: struct sqlite3_context *
 * - arg12: int
 * - arg13: struct Mem **
 * - xFinal: void (*)(struct sqlite3_context *)
 * - arg15: struct sqlite3_context *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_create_function16(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value zFunctionName;
  mrb_value nArg;
  mrb_value eTextRep;
  mrb_value pApp;
  mrb_value xFunc;
  mrb_value arg7;
  mrb_value arg8;
  mrb_value arg9;
  mrb_value xStep;
  mrb_value arg11;
  mrb_value arg12;
  mrb_value arg13;
  mrb_value xFinal;
  mrb_value arg15;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooooooooooooo", &db, &zFunctionName, &nArg, &eTextRep, &pApp, &xFunc, &arg7, &arg8, &arg9, &xStep, &arg11, &arg12, &arg13, &xFinal, &arg15);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(zFunctionName);
  if (!mrb_obj_is_kind_of(mrb, nArg, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, eTextRep, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pApp);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_struct_Mem_PTR_PTR_RPAREN(xFunc);
  if (!mrb_obj_is_kind_of(mrb, arg7, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg8, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_Mem_PTR_PTR(arg9);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_struct_Mem_PTR_PTR_RPAREN(xStep);
  if (!mrb_obj_is_kind_of(mrb, arg11, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg12, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_Mem_PTR_PTR(arg13);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_RPAREN(xFinal);
  if (!mrb_obj_is_kind_of(mrb, arg15, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  const void * native_zFunctionName = TODO_mruby_unbox_void_PTR(zFunctionName);

  int native_nArg = mrb_fixnum(nArg);

  int native_eTextRep = mrb_fixnum(eTextRep);

  void * native_pApp = TODO_mruby_unbox_void_PTR(pApp);

  void (*native_xFunc)(struct sqlite3_context *, int, struct Mem **) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_struct_Mem_PTR_PTR_RPAREN(xFunc);

  struct sqlite3_context * native_arg7 = (mrb_nil_p(arg7) ? NULL : mruby_unbox_sqlite3_context(arg7));

  int native_arg8 = mrb_fixnum(arg8);

  struct Mem ** native_arg9 = TODO_mruby_unbox_Mem_PTR_PTR(arg9);

  void (*native_xStep)(struct sqlite3_context *, int, struct Mem **) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_struct_Mem_PTR_PTR_RPAREN(xStep);

  struct sqlite3_context * native_arg11 = (mrb_nil_p(arg11) ? NULL : mruby_unbox_sqlite3_context(arg11));

  int native_arg12 = mrb_fixnum(arg12);

  struct Mem ** native_arg13 = TODO_mruby_unbox_Mem_PTR_PTR(arg13);

  void (*native_xFinal)(struct sqlite3_context *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_RPAREN(xFinal);

  struct sqlite3_context * native_arg15 = (mrb_nil_p(arg15) ? NULL : mruby_unbox_sqlite3_context(arg15));

  /* Invocation */
  int result = sqlite3_create_function16(native_db, native_zFunctionName, native_nArg, native_eTextRep, native_pApp, native_xFunc, native_arg7, native_arg8, native_arg9, native_xStep, native_arg11, native_arg12, native_arg13, native_xFinal, native_arg15);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_create_function_v2_FUNCTION
#define sqlite3_create_function_v2_REQUIRED_ARGC 17
#define sqlite3_create_function_v2_OPTIONAL_ARGC 0
/* sqlite3_create_function_v2
 *
 * Parameters:
 * - db: struct sqlite3 *
 * - zFunctionName: const char *
 * - nArg: int
 * - eTextRep: int
 * - pApp: void *
 * - xFunc: void (*)(struct sqlite3_context *, int, struct Mem **)
 * - arg7: struct sqlite3_context *
 * - arg8: int
 * - arg9: struct Mem **
 * - xStep: void (*)(struct sqlite3_context *, int, struct Mem **)
 * - arg11: struct sqlite3_context *
 * - arg12: int
 * - arg13: struct Mem **
 * - xFinal: void (*)(struct sqlite3_context *)
 * - arg15: struct sqlite3_context *
 * - xDestroy: void (*)(void *)
 * - arg17: void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_create_function_v2(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value zFunctionName;
  mrb_value nArg;
  mrb_value eTextRep;
  mrb_value pApp;
  mrb_value xFunc;
  mrb_value arg7;
  mrb_value arg8;
  mrb_value arg9;
  mrb_value xStep;
  mrb_value arg11;
  mrb_value arg12;
  mrb_value arg13;
  mrb_value xFinal;
  mrb_value arg15;
  mrb_value xDestroy;
  mrb_value arg17;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooooooooooooooo", &db, &zFunctionName, &nArg, &eTextRep, &pApp, &xFunc, &arg7, &arg8, &arg9, &xStep, &arg11, &arg12, &arg13, &xFinal, &arg15, &xDestroy, &arg17);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zFunctionName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, nArg, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, eTextRep, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pApp);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_struct_Mem_PTR_PTR_RPAREN(xFunc);
  if (!mrb_obj_is_kind_of(mrb, arg7, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg8, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_Mem_PTR_PTR(arg9);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_struct_Mem_PTR_PTR_RPAREN(xStep);
  if (!mrb_obj_is_kind_of(mrb, arg11, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg12, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_Mem_PTR_PTR(arg13);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_RPAREN(xFinal);
  if (!mrb_obj_is_kind_of(mrb, arg15, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xDestroy);
  TODO_type_check_void_PTR(arg17);


  /* Unbox parameters */
  struct sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  const char * native_zFunctionName = mrb_string_value_cstr(mrb, &zFunctionName);

  int native_nArg = mrb_fixnum(nArg);

  int native_eTextRep = mrb_fixnum(eTextRep);

  void * native_pApp = TODO_mruby_unbox_void_PTR(pApp);

  void (*native_xFunc)(struct sqlite3_context *, int, struct Mem **) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_struct_Mem_PTR_PTR_RPAREN(xFunc);

  struct sqlite3_context * native_arg7 = (mrb_nil_p(arg7) ? NULL : mruby_unbox_sqlite3_context(arg7));

  int native_arg8 = mrb_fixnum(arg8);

  struct Mem ** native_arg9 = TODO_mruby_unbox_Mem_PTR_PTR(arg9);

  void (*native_xStep)(struct sqlite3_context *, int, struct Mem **) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_struct_Mem_PTR_PTR_RPAREN(xStep);

  struct sqlite3_context * native_arg11 = (mrb_nil_p(arg11) ? NULL : mruby_unbox_sqlite3_context(arg11));

  int native_arg12 = mrb_fixnum(arg12);

  struct Mem ** native_arg13 = TODO_mruby_unbox_Mem_PTR_PTR(arg13);

  void (*native_xFinal)(struct sqlite3_context *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_RPAREN(xFinal);

  struct sqlite3_context * native_arg15 = (mrb_nil_p(arg15) ? NULL : mruby_unbox_sqlite3_context(arg15));

  void (*native_xDestroy)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xDestroy);

  void * native_arg17 = TODO_mruby_unbox_void_PTR(arg17);

  /* Invocation */
  int result = sqlite3_create_function_v2(native_db, native_zFunctionName, native_nArg, native_eTextRep, native_pApp, native_xFunc, native_arg7, native_arg8, native_arg9, native_xStep, native_arg11, native_arg12, native_arg13, native_xFinal, native_arg15, native_xDestroy, native_arg17);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_create_module_FUNCTION
#define sqlite3_create_module_REQUIRED_ARGC 4
#define sqlite3_create_module_OPTIONAL_ARGC 0
/* sqlite3_create_module
 *
 * Parameters:
 * - db: struct sqlite3 *
 * - zName: const char *
 * - p: const struct sqlite3_module *
 * - pClientData: void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_create_module(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value zName;
  mrb_value p;
  mrb_value pClientData;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &db, &zName, &p, &pClientData);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, p, Sqlite3Module_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Module expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pClientData);


  /* Unbox parameters */
  struct sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  const char * native_zName = mrb_string_value_cstr(mrb, &zName);

  const struct sqlite3_module * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_sqlite3_module(p));

  void * native_pClientData = TODO_mruby_unbox_void_PTR(pClientData);

  /* Invocation */
  int result = sqlite3_create_module(native_db, native_zName, native_p, native_pClientData);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_create_module_v2_FUNCTION
#define sqlite3_create_module_v2_REQUIRED_ARGC 6
#define sqlite3_create_module_v2_OPTIONAL_ARGC 0
/* sqlite3_create_module_v2
 *
 * Parameters:
 * - db: struct sqlite3 *
 * - zName: const char *
 * - p: const struct sqlite3_module *
 * - pClientData: void *
 * - xDestroy: void (*)(void *)
 * - arg6: void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_create_module_v2(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value zName;
  mrb_value p;
  mrb_value pClientData;
  mrb_value xDestroy;
  mrb_value arg6;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooo", &db, &zName, &p, &pClientData, &xDestroy, &arg6);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, p, Sqlite3Module_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Module expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pClientData);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xDestroy);
  TODO_type_check_void_PTR(arg6);


  /* Unbox parameters */
  struct sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  const char * native_zName = mrb_string_value_cstr(mrb, &zName);

  const struct sqlite3_module * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_sqlite3_module(p));

  void * native_pClientData = TODO_mruby_unbox_void_PTR(pClientData);

  void (*native_xDestroy)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xDestroy);

  void * native_arg6 = TODO_mruby_unbox_void_PTR(arg6);

  /* Invocation */
  int result = sqlite3_create_module_v2(native_db, native_zName, native_p, native_pClientData, native_xDestroy, native_arg6);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_data_count_FUNCTION
#define sqlite3_data_count_REQUIRED_ARGC 1
#define sqlite3_data_count_OPTIONAL_ARGC 0
/* sqlite3_data_count
 *
 * Parameters:
 * - pStmt: struct sqlite3_stmt *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_data_count(mrb_state* mrb, mrb_value self) {
  mrb_value pStmt;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pStmt);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pStmt, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_pStmt = (mrb_nil_p(pStmt) ? NULL : mruby_unbox_sqlite3_stmt(pStmt));

  /* Invocation */
  int result = sqlite3_data_count(native_pStmt);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_db_config_FUNCTION
#define sqlite3_db_config_REQUIRED_ARGC 10
#define sqlite3_db_config_OPTIONAL_ARGC 0
/* sqlite3_db_config
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - op: int
 * - arg3: int
 * - arg4: void *
 * - arg5: void *
 * - arg6: int
 * - arg7: void *
 * - arg8: int
 * - arg9: void *
 * - arg10: void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_db_config(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value op;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value arg6;
  mrb_value arg7;
  mrb_value arg8;
  mrb_value arg9;
  mrb_value arg10;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooooooo", &arg1, &op, &arg3, &arg4, &arg5, &arg6, &arg7, &arg8, &arg9, &arg10);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, op, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg4);
  TODO_type_check_void_PTR(arg5);
  if (!mrb_obj_is_kind_of(mrb, arg6, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg7);
  if (!mrb_obj_is_kind_of(mrb, arg8, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg9);
  TODO_type_check_void_PTR(arg10);


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  int native_op = mrb_fixnum(op);

  int native_arg3 = mrb_fixnum(arg3);

  void * native_arg4 = TODO_mruby_unbox_void_PTR(arg4);

  void * native_arg5 = TODO_mruby_unbox_void_PTR(arg5);

  int native_arg6 = mrb_fixnum(arg6);

  void * native_arg7 = TODO_mruby_unbox_void_PTR(arg7);

  int native_arg8 = mrb_fixnum(arg8);

  void * native_arg9 = TODO_mruby_unbox_void_PTR(arg9);

  void * native_arg10 = TODO_mruby_unbox_void_PTR(arg10);

  /* Invocation */
  int result = sqlite3_db_config(native_arg1, native_op, native_arg3, native_arg4, native_arg5, native_arg6, native_arg7, native_arg8, native_arg9, native_arg10);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_db_filename_FUNCTION
#define sqlite3_db_filename_REQUIRED_ARGC 2
#define sqlite3_db_filename_OPTIONAL_ARGC 0
/* sqlite3_db_filename
 *
 * Parameters:
 * - db: struct sqlite3 *
 * - zDbName: const char *
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_sqlite3_db_filename(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value zDbName;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &db, &zDbName);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zDbName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  const char * native_zDbName = mrb_string_value_cstr(mrb, &zDbName);

  /* Invocation */
  const char * result = sqlite3_db_filename(native_db, native_zDbName);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_db_handle_FUNCTION
#define sqlite3_db_handle_REQUIRED_ARGC 1
#define sqlite3_db_handle_OPTIONAL_ARGC 0
/* sqlite3_db_handle
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * Return Type: sqlite3 *
 */
mrb_value
mrb_SQLite_sqlite3_db_handle(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  sqlite3 * result = sqlite3_db_handle(native_arg1);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_sqlite3(mrb, result));

  return return_value;
}
#endif

#if BIND_sqlite3_db_mutex_FUNCTION
#define sqlite3_db_mutex_REQUIRED_ARGC 1
#define sqlite3_db_mutex_OPTIONAL_ARGC 0
/* sqlite3_db_mutex
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * Return Type: sqlite3_mutex *
 */
mrb_value
mrb_SQLite_sqlite3_db_mutex(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  sqlite3_mutex * result = sqlite3_db_mutex(native_arg1);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_sqlite3_mutex(mrb, result));

  return return_value;
}
#endif

#if BIND_sqlite3_db_readonly_FUNCTION
#define sqlite3_db_readonly_REQUIRED_ARGC 2
#define sqlite3_db_readonly_OPTIONAL_ARGC 0
/* sqlite3_db_readonly
 *
 * Parameters:
 * - db: struct sqlite3 *
 * - zDbName: const char *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_db_readonly(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value zDbName;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &db, &zDbName);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zDbName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  const char * native_zDbName = mrb_string_value_cstr(mrb, &zDbName);

  /* Invocation */
  int result = sqlite3_db_readonly(native_db, native_zDbName);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_db_release_memory_FUNCTION
#define sqlite3_db_release_memory_REQUIRED_ARGC 1
#define sqlite3_db_release_memory_OPTIONAL_ARGC 0
/* sqlite3_db_release_memory
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_db_release_memory(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  int result = sqlite3_db_release_memory(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_db_status_FUNCTION
#define sqlite3_db_status_REQUIRED_ARGC 5
#define sqlite3_db_status_OPTIONAL_ARGC 0
/* sqlite3_db_status
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - op: int
 * - pCur: int *
 * - pHiwtr: int *
 * - resetFlg: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_db_status(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value op;
  mrb_value pCur;
  mrb_value pHiwtr;
  mrb_value resetFlg;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &op, &pCur, &pHiwtr, &resetFlg);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, op, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(pCur);
  TODO_type_check_int_PTR(pHiwtr);
  if (!mrb_obj_is_kind_of(mrb, resetFlg, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  int native_op = mrb_fixnum(op);

  int * native_pCur = TODO_mruby_unbox_int_PTR(pCur);

  int * native_pHiwtr = TODO_mruby_unbox_int_PTR(pHiwtr);

  int native_resetFlg = mrb_fixnum(resetFlg);

  /* Invocation */
  int result = sqlite3_db_status(native_arg1, native_op, native_pCur, native_pHiwtr, native_resetFlg);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_declare_vtab_FUNCTION
#define sqlite3_declare_vtab_REQUIRED_ARGC 2
#define sqlite3_declare_vtab_OPTIONAL_ARGC 0
/* sqlite3_declare_vtab
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - zSQL: const char *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_declare_vtab(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value zSQL;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &zSQL);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zSQL, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  const char * native_zSQL = mrb_string_value_cstr(mrb, &zSQL);

  /* Invocation */
  int result = sqlite3_declare_vtab(native_arg1, native_zSQL);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_enable_load_extension_FUNCTION
#define sqlite3_enable_load_extension_REQUIRED_ARGC 2
#define sqlite3_enable_load_extension_OPTIONAL_ARGC 0
/* sqlite3_enable_load_extension
 *
 * Parameters:
 * - db: struct sqlite3 *
 * - onoff: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_enable_load_extension(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value onoff;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &db, &onoff);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, onoff, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  int native_onoff = mrb_fixnum(onoff);

  /* Invocation */
  int result = sqlite3_enable_load_extension(native_db, native_onoff);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_enable_shared_cache_FUNCTION
#define sqlite3_enable_shared_cache_REQUIRED_ARGC 1
#define sqlite3_enable_shared_cache_OPTIONAL_ARGC 0
/* sqlite3_enable_shared_cache
 *
 * Parameters:
 * - arg1: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_enable_shared_cache(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = sqlite3_enable_shared_cache(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_errcode_FUNCTION
#define sqlite3_errcode_REQUIRED_ARGC 1
#define sqlite3_errcode_OPTIONAL_ARGC 0
/* sqlite3_errcode
 *
 * Parameters:
 * - db: struct sqlite3 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_errcode(mrb_state* mrb, mrb_value self) {
  mrb_value db;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &db);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Invocation */
  int result = sqlite3_errcode(native_db);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_errmsg_FUNCTION
#define sqlite3_errmsg_REQUIRED_ARGC 1
#define sqlite3_errmsg_OPTIONAL_ARGC 0
/* sqlite3_errmsg
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_sqlite3_errmsg(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  const char * result = sqlite3_errmsg(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_errmsg16_FUNCTION
#define sqlite3_errmsg16_REQUIRED_ARGC 1
#define sqlite3_errmsg16_OPTIONAL_ARGC 0
/* sqlite3_errmsg16
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * Return Type: const void *
 */
mrb_value
mrb_SQLite_sqlite3_errmsg16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  const void * result = sqlite3_errmsg16(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_errstr_FUNCTION
#define sqlite3_errstr_REQUIRED_ARGC 1
#define sqlite3_errstr_OPTIONAL_ARGC 0
/* sqlite3_errstr
 *
 * Parameters:
 * - arg1: int
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_sqlite3_errstr(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  const char * result = sqlite3_errstr(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_exec_FUNCTION
#define sqlite3_exec_REQUIRED_ARGC 99
#define sqlite3_exec_OPTIONAL_ARGC 0
/* sqlite3_exec
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - sql: const char *
 * - callback: int (*)(void *, int, char **, char **)
 * - arg4: void *
 * - arg5: int
 * - arg6: char **
 * - arg7: char **
 * - arg8: void *
 * - errmsg: char **
 * - arg10: struct sqlite3_file *
 * - arg11: struct sqlite3_file *
 * - arg12: void *
 * - iAmt: int
 * - iOfst: long long
 * - arg15: struct sqlite3_file *
 * - arg16: const void *
 * - iAmt: int
 * - iOfst: long long
 * - arg19: struct sqlite3_file *
 * - size: long long
 * - arg21: struct sqlite3_file *
 * - flags: int
 * - arg23: struct sqlite3_file *
 * - pSize: long long *
 * - arg25: struct sqlite3_file *
 * - arg26: int
 * - arg27: struct sqlite3_file *
 * - arg28: int
 * - arg29: struct sqlite3_file *
 * - pResOut: int *
 * - arg31: struct sqlite3_file *
 * - op: int
 * - pArg: void *
 * - arg34: struct sqlite3_file *
 * - arg35: struct sqlite3_file *
 * - arg36: struct sqlite3_file *
 * - iPg: int
 * - pgsz: int
 * - arg39: int
 * - arg40: volatile void **
 * - arg41: struct sqlite3_file *
 * - offset: int
 * - n: int
 * - flags: int
 * - arg45: struct sqlite3_file *
 * - arg46: struct sqlite3_file *
 * - deleteFlag: int
 * - arg48: struct sqlite3_file *
 * - iOfst: long long
 * - iAmt: int
 * - pp: void **
 * - arg52: struct sqlite3_file *
 * - iOfst: long long
 * - p: void *
 * - arg55: struct sqlite3_vfs *
 * - zName: const char *
 * - arg57: struct sqlite3_file *
 * - flags: int
 * - pOutFlags: int *
 * - arg60: struct sqlite3_vfs *
 * - zName: const char *
 * - syncDir: int
 * - arg63: struct sqlite3_vfs *
 * - zName: const char *
 * - flags: int
 * - pResOut: int *
 * - arg67: struct sqlite3_vfs *
 * - zName: const char *
 * - nOut: int
 * - zOut: char *
 * - arg71: struct sqlite3_vfs *
 * - zFilename: const char *
 * - arg73: struct sqlite3_vfs *
 * - nByte: int
 * - zErrMsg: char *
 * - arg76: struct sqlite3_vfs *
 * - arg77: void *
 * - zSymbol: const char *
 * - arg79: struct sqlite3_vfs *
 * - arg80: void *
 * - arg81: struct sqlite3_vfs *
 * - nByte: int
 * - zOut: char *
 * - arg84: struct sqlite3_vfs *
 * - microseconds: int
 * - arg86: struct sqlite3_vfs *
 * - arg87: double *
 * - arg88: struct sqlite3_vfs *
 * - arg89: int
 * - arg90: char *
 * - arg91: struct sqlite3_vfs *
 * - arg92: long long *
 * - arg93: struct sqlite3_vfs *
 * - zName: const char *
 * - arg95: void (*)(void)
 * - arg96: struct sqlite3_vfs *
 * - zName: const char *
 * - arg98: struct sqlite3_vfs *
 * - zName: const char *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_exec(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value sql;
  mrb_value callback;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value arg6;
  mrb_value arg7;
  mrb_value arg8;
  mrb_value errmsg;
  mrb_value arg10;
  mrb_value arg11;
  mrb_value arg12;
  mrb_value iAmt;
  mrb_value iOfst;
  mrb_value arg15;
  mrb_value arg16;
  mrb_value iAmt;
  mrb_value iOfst;
  mrb_value arg19;
  mrb_value size;
  mrb_value arg21;
  mrb_value flags;
  mrb_value arg23;
  mrb_value pSize;
  mrb_value arg25;
  mrb_value arg26;
  mrb_value arg27;
  mrb_value arg28;
  mrb_value arg29;
  mrb_value pResOut;
  mrb_value arg31;
  mrb_value op;
  mrb_value pArg;
  mrb_value arg34;
  mrb_value arg35;
  mrb_value arg36;
  mrb_value iPg;
  mrb_value pgsz;
  mrb_value arg39;
  mrb_value arg40;
  mrb_value arg41;
  mrb_value offset;
  mrb_value n;
  mrb_value flags;
  mrb_value arg45;
  mrb_value arg46;
  mrb_value deleteFlag;
  mrb_value arg48;
  mrb_value iOfst;
  mrb_value iAmt;
  mrb_value pp;
  mrb_value arg52;
  mrb_value iOfst;
  mrb_value p;
  mrb_value arg55;
  mrb_value zName;
  mrb_value arg57;
  mrb_value flags;
  mrb_value pOutFlags;
  mrb_value arg60;
  mrb_value zName;
  mrb_value syncDir;
  mrb_value arg63;
  mrb_value zName;
  mrb_value flags;
  mrb_value pResOut;
  mrb_value arg67;
  mrb_value zName;
  mrb_value nOut;
  mrb_value zOut;
  mrb_value arg71;
  mrb_value zFilename;
  mrb_value arg73;
  mrb_value nByte;
  mrb_value zErrMsg;
  mrb_value arg76;
  mrb_value arg77;
  mrb_value zSymbol;
  mrb_value arg79;
  mrb_value arg80;
  mrb_value arg81;
  mrb_value nByte;
  mrb_value zOut;
  mrb_value arg84;
  mrb_value microseconds;
  mrb_value arg86;
  mrb_value arg87;
  mrb_value arg88;
  mrb_value arg89;
  mrb_value arg90;
  mrb_value arg91;
  mrb_value arg92;
  mrb_value arg93;
  mrb_value zName;
  mrb_value arg95;
  mrb_value arg96;
  mrb_value zName;
  mrb_value arg98;
  mrb_value zName;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo", &arg1, &sql, &callback, &arg4, &arg5, &arg6, &arg7, &arg8, &errmsg, &arg10, &arg11, &arg12, &iAmt, &iOfst, &arg15, &arg16, &iAmt, &iOfst, &arg19, &size, &arg21, &flags, &arg23, &pSize, &arg25, &arg26, &arg27, &arg28, &arg29, &pResOut, &arg31, &op, &pArg, &arg34, &arg35, &arg36, &iPg, &pgsz, &arg39, &arg40, &arg41, &offset, &n, &flags, &arg45, &arg46, &deleteFlag, &arg48, &iOfst, &iAmt, &pp, &arg52, &iOfst, &p, &arg55, &zName, &arg57, &flags, &pOutFlags, &arg60, &zName, &syncDir, &arg63, &zName, &flags, &pResOut, &arg67, &zName, &nOut, &zOut, &arg71, &zFilename, &arg73, &nByte, &zErrMsg, &arg76, &arg77, &zSymbol, &arg79, &arg80, &arg81, &nByte, &zOut, &arg84, &microseconds, &arg86, &arg87, &arg88, &arg89, &arg90, &arg91, &arg92, &arg93, &zName, &arg95, &arg96, &zName, &arg98, &zName);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, sql, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMA_char_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(callback);
  TODO_type_check_void_PTR(arg4);
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR_PTR(arg6);
  TODO_type_check_char_PTR_PTR(arg7);
  TODO_type_check_void_PTR(arg8);
  TODO_type_check_char_PTR_PTR(errmsg);
  if (!mrb_obj_is_kind_of(mrb, arg10, Sqlite3File_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3File expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg11, Sqlite3File_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3File expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg12);
  if (!mrb_obj_is_kind_of(mrb, iAmt, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_long_long(iOfst);
  if (!mrb_obj_is_kind_of(mrb, arg15, Sqlite3File_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3File expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg16);
  if (!mrb_obj_is_kind_of(mrb, iAmt, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_long_long(iOfst);
  if (!mrb_obj_is_kind_of(mrb, arg19, Sqlite3File_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3File expected");
    return mrb_nil_value();
  }
  TODO_type_check_long_long(size);
  if (!mrb_obj_is_kind_of(mrb, arg21, Sqlite3File_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3File expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, flags, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg23, Sqlite3File_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3File expected");
    return mrb_nil_value();
  }
  TODO_type_check_long_long_PTR(pSize);
  if (!mrb_obj_is_kind_of(mrb, arg25, Sqlite3File_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3File expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg26, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg27, Sqlite3File_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3File expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg28, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg29, Sqlite3File_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3File expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(pResOut);
  if (!mrb_obj_is_kind_of(mrb, arg31, Sqlite3File_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3File expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, op, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pArg);
  if (!mrb_obj_is_kind_of(mrb, arg34, Sqlite3File_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3File expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg35, Sqlite3File_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3File expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg36, Sqlite3File_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3File expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, iPg, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pgsz, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg39, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_volatile_void_PTR_PTR(arg40);
  if (!mrb_obj_is_kind_of(mrb, arg41, Sqlite3File_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3File expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, offset, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, n, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, flags, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg45, Sqlite3File_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3File expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg46, Sqlite3File_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3File expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, deleteFlag, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg48, Sqlite3File_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3File expected");
    return mrb_nil_value();
  }
  TODO_type_check_long_long(iOfst);
  if (!mrb_obj_is_kind_of(mrb, iAmt, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR_PTR(pp);
  if (!mrb_obj_is_kind_of(mrb, arg52, Sqlite3File_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3File expected");
    return mrb_nil_value();
  }
  TODO_type_check_long_long(iOfst);
  TODO_type_check_void_PTR(p);
  if (!mrb_obj_is_kind_of(mrb, arg55, Sqlite3Vfs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vfs expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg57, Sqlite3File_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3File expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, flags, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(pOutFlags);
  if (!mrb_obj_is_kind_of(mrb, arg60, Sqlite3Vfs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vfs expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, syncDir, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg63, Sqlite3Vfs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vfs expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, flags, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(pResOut);
  if (!mrb_obj_is_kind_of(mrb, arg67, Sqlite3Vfs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vfs expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, nOut, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zOut, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg71, Sqlite3Vfs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vfs expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zFilename, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg73, Sqlite3Vfs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vfs expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, nByte, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zErrMsg, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg76, Sqlite3Vfs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vfs expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg77);
  if (!mrb_obj_is_kind_of(mrb, zSymbol, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg79, Sqlite3Vfs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vfs expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg80);
  if (!mrb_obj_is_kind_of(mrb, arg81, Sqlite3Vfs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vfs expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, nByte, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zOut, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg84, Sqlite3Vfs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vfs expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, microseconds, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg86, Sqlite3Vfs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vfs expected");
    return mrb_nil_value();
  }
  TODO_type_check_double_PTR(arg87);
  if (!mrb_obj_is_kind_of(mrb, arg88, Sqlite3Vfs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vfs expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg89, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg90, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg91, Sqlite3Vfs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vfs expected");
    return mrb_nil_value();
  }
  TODO_type_check_long_long_PTR(arg92);
  if (!mrb_obj_is_kind_of(mrb, arg93, Sqlite3Vfs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vfs expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(arg95);
  if (!mrb_obj_is_kind_of(mrb, arg96, Sqlite3Vfs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vfs expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg98, Sqlite3Vfs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vfs expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  const char * native_sql = mrb_string_value_cstr(mrb, &sql);

  int (*native_callback)(void *, int, char **, char **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMA_char_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(callback);

  void * native_arg4 = TODO_mruby_unbox_void_PTR(arg4);

  int native_arg5 = mrb_fixnum(arg5);

  char ** native_arg6 = TODO_mruby_unbox_char_PTR_PTR(arg6);

  char ** native_arg7 = TODO_mruby_unbox_char_PTR_PTR(arg7);

  void * native_arg8 = TODO_mruby_unbox_void_PTR(arg8);

  char ** native_errmsg = TODO_mruby_unbox_char_PTR_PTR(errmsg);

  struct sqlite3_file * native_arg10 = (mrb_nil_p(arg10) ? NULL : mruby_unbox_sqlite3_file(arg10));

  struct sqlite3_file * native_arg11 = (mrb_nil_p(arg11) ? NULL : mruby_unbox_sqlite3_file(arg11));

  void * native_arg12 = TODO_mruby_unbox_void_PTR(arg12);

  int native_iAmt = mrb_fixnum(iAmt);

  long long native_iOfst = TODO_mruby_unbox_long_long(iOfst);

  struct sqlite3_file * native_arg15 = (mrb_nil_p(arg15) ? NULL : mruby_unbox_sqlite3_file(arg15));

  const void * native_arg16 = TODO_mruby_unbox_void_PTR(arg16);

  int native_iAmt = mrb_fixnum(iAmt);

  long long native_iOfst = TODO_mruby_unbox_long_long(iOfst);

  struct sqlite3_file * native_arg19 = (mrb_nil_p(arg19) ? NULL : mruby_unbox_sqlite3_file(arg19));

  long long native_size = TODO_mruby_unbox_long_long(size);

  struct sqlite3_file * native_arg21 = (mrb_nil_p(arg21) ? NULL : mruby_unbox_sqlite3_file(arg21));

  int native_flags = mrb_fixnum(flags);

  struct sqlite3_file * native_arg23 = (mrb_nil_p(arg23) ? NULL : mruby_unbox_sqlite3_file(arg23));

  long long * native_pSize = TODO_mruby_unbox_long_long_PTR(pSize);

  struct sqlite3_file * native_arg25 = (mrb_nil_p(arg25) ? NULL : mruby_unbox_sqlite3_file(arg25));

  int native_arg26 = mrb_fixnum(arg26);

  struct sqlite3_file * native_arg27 = (mrb_nil_p(arg27) ? NULL : mruby_unbox_sqlite3_file(arg27));

  int native_arg28 = mrb_fixnum(arg28);

  struct sqlite3_file * native_arg29 = (mrb_nil_p(arg29) ? NULL : mruby_unbox_sqlite3_file(arg29));

  int * native_pResOut = TODO_mruby_unbox_int_PTR(pResOut);

  struct sqlite3_file * native_arg31 = (mrb_nil_p(arg31) ? NULL : mruby_unbox_sqlite3_file(arg31));

  int native_op = mrb_fixnum(op);

  void * native_pArg = TODO_mruby_unbox_void_PTR(pArg);

  struct sqlite3_file * native_arg34 = (mrb_nil_p(arg34) ? NULL : mruby_unbox_sqlite3_file(arg34));

  struct sqlite3_file * native_arg35 = (mrb_nil_p(arg35) ? NULL : mruby_unbox_sqlite3_file(arg35));

  struct sqlite3_file * native_arg36 = (mrb_nil_p(arg36) ? NULL : mruby_unbox_sqlite3_file(arg36));

  int native_iPg = mrb_fixnum(iPg);

  int native_pgsz = mrb_fixnum(pgsz);

  int native_arg39 = mrb_fixnum(arg39);

  volatile void ** native_arg40 = TODO_mruby_unbox_volatile_void_PTR_PTR(arg40);

  struct sqlite3_file * native_arg41 = (mrb_nil_p(arg41) ? NULL : mruby_unbox_sqlite3_file(arg41));

  int native_offset = mrb_fixnum(offset);

  int native_n = mrb_fixnum(n);

  int native_flags = mrb_fixnum(flags);

  struct sqlite3_file * native_arg45 = (mrb_nil_p(arg45) ? NULL : mruby_unbox_sqlite3_file(arg45));

  struct sqlite3_file * native_arg46 = (mrb_nil_p(arg46) ? NULL : mruby_unbox_sqlite3_file(arg46));

  int native_deleteFlag = mrb_fixnum(deleteFlag);

  struct sqlite3_file * native_arg48 = (mrb_nil_p(arg48) ? NULL : mruby_unbox_sqlite3_file(arg48));

  long long native_iOfst = TODO_mruby_unbox_long_long(iOfst);

  int native_iAmt = mrb_fixnum(iAmt);

  void ** native_pp = TODO_mruby_unbox_void_PTR_PTR(pp);

  struct sqlite3_file * native_arg52 = (mrb_nil_p(arg52) ? NULL : mruby_unbox_sqlite3_file(arg52));

  long long native_iOfst = TODO_mruby_unbox_long_long(iOfst);

  void * native_p = TODO_mruby_unbox_void_PTR(p);

  struct sqlite3_vfs * native_arg55 = (mrb_nil_p(arg55) ? NULL : mruby_unbox_sqlite3_vfs(arg55));

  const char * native_zName = mrb_string_value_cstr(mrb, &zName);

  struct sqlite3_file * native_arg57 = (mrb_nil_p(arg57) ? NULL : mruby_unbox_sqlite3_file(arg57));

  int native_flags = mrb_fixnum(flags);

  int * native_pOutFlags = TODO_mruby_unbox_int_PTR(pOutFlags);

  struct sqlite3_vfs * native_arg60 = (mrb_nil_p(arg60) ? NULL : mruby_unbox_sqlite3_vfs(arg60));

  const char * native_zName = mrb_string_value_cstr(mrb, &zName);

  int native_syncDir = mrb_fixnum(syncDir);

  struct sqlite3_vfs * native_arg63 = (mrb_nil_p(arg63) ? NULL : mruby_unbox_sqlite3_vfs(arg63));

  const char * native_zName = mrb_string_value_cstr(mrb, &zName);

  int native_flags = mrb_fixnum(flags);

  int * native_pResOut = TODO_mruby_unbox_int_PTR(pResOut);

  struct sqlite3_vfs * native_arg67 = (mrb_nil_p(arg67) ? NULL : mruby_unbox_sqlite3_vfs(arg67));

  const char * native_zName = mrb_string_value_cstr(mrb, &zName);

  int native_nOut = mrb_fixnum(nOut);

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_zOut = strdup(mrb_string_value_cstr(mrb, &zOut));

  struct sqlite3_vfs * native_arg71 = (mrb_nil_p(arg71) ? NULL : mruby_unbox_sqlite3_vfs(arg71));

  const char * native_zFilename = mrb_string_value_cstr(mrb, &zFilename);

  struct sqlite3_vfs * native_arg73 = (mrb_nil_p(arg73) ? NULL : mruby_unbox_sqlite3_vfs(arg73));

  int native_nByte = mrb_fixnum(nByte);

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_zErrMsg = strdup(mrb_string_value_cstr(mrb, &zErrMsg));

  struct sqlite3_vfs * native_arg76 = (mrb_nil_p(arg76) ? NULL : mruby_unbox_sqlite3_vfs(arg76));

  void * native_arg77 = TODO_mruby_unbox_void_PTR(arg77);

  const char * native_zSymbol = mrb_string_value_cstr(mrb, &zSymbol);

  struct sqlite3_vfs * native_arg79 = (mrb_nil_p(arg79) ? NULL : mruby_unbox_sqlite3_vfs(arg79));

  void * native_arg80 = TODO_mruby_unbox_void_PTR(arg80);

  struct sqlite3_vfs * native_arg81 = (mrb_nil_p(arg81) ? NULL : mruby_unbox_sqlite3_vfs(arg81));

  int native_nByte = mrb_fixnum(nByte);

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_zOut = strdup(mrb_string_value_cstr(mrb, &zOut));

  struct sqlite3_vfs * native_arg84 = (mrb_nil_p(arg84) ? NULL : mruby_unbox_sqlite3_vfs(arg84));

  int native_microseconds = mrb_fixnum(microseconds);

  struct sqlite3_vfs * native_arg86 = (mrb_nil_p(arg86) ? NULL : mruby_unbox_sqlite3_vfs(arg86));

  double * native_arg87 = TODO_mruby_unbox_double_PTR(arg87);

  struct sqlite3_vfs * native_arg88 = (mrb_nil_p(arg88) ? NULL : mruby_unbox_sqlite3_vfs(arg88));

  int native_arg89 = mrb_fixnum(arg89);

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_arg90 = strdup(mrb_string_value_cstr(mrb, &arg90));

  struct sqlite3_vfs * native_arg91 = (mrb_nil_p(arg91) ? NULL : mruby_unbox_sqlite3_vfs(arg91));

  long long * native_arg92 = TODO_mruby_unbox_long_long_PTR(arg92);

  struct sqlite3_vfs * native_arg93 = (mrb_nil_p(arg93) ? NULL : mruby_unbox_sqlite3_vfs(arg93));

  const char * native_zName = mrb_string_value_cstr(mrb, &zName);

  void (*native_arg95)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(arg95);

  struct sqlite3_vfs * native_arg96 = (mrb_nil_p(arg96) ? NULL : mruby_unbox_sqlite3_vfs(arg96));

  const char * native_zName = mrb_string_value_cstr(mrb, &zName);

  struct sqlite3_vfs * native_arg98 = (mrb_nil_p(arg98) ? NULL : mruby_unbox_sqlite3_vfs(arg98));

  const char * native_zName = mrb_string_value_cstr(mrb, &zName);

  /* Invocation */
  int result = sqlite3_exec(native_arg1, native_sql, native_callback, native_arg4, native_arg5, native_arg6, native_arg7, native_arg8, native_errmsg, native_arg10, native_arg11, native_arg12, native_iAmt, native_iOfst, native_arg15, native_arg16, native_iAmt, native_iOfst, native_arg19, native_size, native_arg21, native_flags, native_arg23, native_pSize, native_arg25, native_arg26, native_arg27, native_arg28, native_arg29, native_pResOut, native_arg31, native_op, native_pArg, native_arg34, native_arg35, native_arg36, native_iPg, native_pgsz, native_arg39, native_arg40, native_arg41, native_offset, native_n, native_flags, native_arg45, native_arg46, native_deleteFlag, native_arg48, native_iOfst, native_iAmt, native_pp, native_arg52, native_iOfst, native_p, native_arg55, native_zName, native_arg57, native_flags, native_pOutFlags, native_arg60, native_zName, native_syncDir, native_arg63, native_zName, native_flags, native_pResOut, native_arg67, native_zName, native_nOut, native_zOut, native_arg71, native_zFilename, native_arg73, native_nByte, native_zErrMsg, native_arg76, native_arg77, native_zSymbol, native_arg79, native_arg80, native_arg81, native_nByte, native_zOut, native_arg84, native_microseconds, native_arg86, native_arg87, native_arg88, native_arg89, native_arg90, native_arg91, native_arg92, native_arg93, native_zName, native_arg95, native_arg96, native_zName, native_arg98, native_zName);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_zOut);
  native_zOut = NULL;

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_zErrMsg);
  native_zErrMsg = NULL;

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_zOut);
  native_zOut = NULL;

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_arg90);
  native_arg90 = NULL;

  return return_value;
}
#endif

#if BIND_sqlite3_expired_FUNCTION
#define sqlite3_expired_REQUIRED_ARGC 1
#define sqlite3_expired_OPTIONAL_ARGC 0
/* sqlite3_expired
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_expired(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  int result = sqlite3_expired(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_extended_errcode_FUNCTION
#define sqlite3_extended_errcode_REQUIRED_ARGC 1
#define sqlite3_extended_errcode_OPTIONAL_ARGC 0
/* sqlite3_extended_errcode
 *
 * Parameters:
 * - db: struct sqlite3 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_extended_errcode(mrb_state* mrb, mrb_value self) {
  mrb_value db;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &db);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Invocation */
  int result = sqlite3_extended_errcode(native_db);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_extended_result_codes_FUNCTION
#define sqlite3_extended_result_codes_REQUIRED_ARGC 2
#define sqlite3_extended_result_codes_OPTIONAL_ARGC 0
/* sqlite3_extended_result_codes
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - onoff: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_extended_result_codes(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value onoff;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &onoff);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, onoff, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  int native_onoff = mrb_fixnum(onoff);

  /* Invocation */
  int result = sqlite3_extended_result_codes(native_arg1, native_onoff);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_file_control_FUNCTION
#define sqlite3_file_control_REQUIRED_ARGC 4
#define sqlite3_file_control_OPTIONAL_ARGC 0
/* sqlite3_file_control
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - zDbName: const char *
 * - op: int
 * - arg4: void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_file_control(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value zDbName;
  mrb_value op;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &zDbName, &op, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zDbName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, op, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg4);


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  const char * native_zDbName = mrb_string_value_cstr(mrb, &zDbName);

  int native_op = mrb_fixnum(op);

  void * native_arg4 = TODO_mruby_unbox_void_PTR(arg4);

  /* Invocation */
  int result = sqlite3_file_control(native_arg1, native_zDbName, native_op, native_arg4);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_finalize_FUNCTION
#define sqlite3_finalize_REQUIRED_ARGC 1
#define sqlite3_finalize_OPTIONAL_ARGC 0
/* sqlite3_finalize
 *
 * Parameters:
 * - pStmt: struct sqlite3_stmt *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_finalize(mrb_state* mrb, mrb_value self) {
  mrb_value pStmt;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pStmt);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pStmt, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_pStmt = (mrb_nil_p(pStmt) ? NULL : mruby_unbox_sqlite3_stmt(pStmt));

  /* Invocation */
  int result = sqlite3_finalize(native_pStmt);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_free_FUNCTION
#define sqlite3_free_REQUIRED_ARGC 1
#define sqlite3_free_OPTIONAL_ARGC 0
/* sqlite3_free
 *
 * Parameters:
 * - arg1: void *
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_free(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  TODO_type_check_void_PTR(arg1);


  /* Unbox parameters */
  void * native_arg1 = TODO_mruby_unbox_void_PTR(arg1);

  /* Invocation */
  sqlite3_free(native_arg1);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_free_table_FUNCTION
#define sqlite3_free_table_REQUIRED_ARGC 1
#define sqlite3_free_table_OPTIONAL_ARGC 0
/* sqlite3_free_table
 *
 * Parameters:
 * - result: char **
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_free_table(mrb_state* mrb, mrb_value self) {
  mrb_value result;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &result);


  /* Type checking */
  TODO_type_check_char_PTR_PTR(result);


  /* Unbox parameters */
  char ** native_result = TODO_mruby_unbox_char_PTR_PTR(result);

  /* Invocation */
  sqlite3_free_table(native_result);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_get_autocommit_FUNCTION
#define sqlite3_get_autocommit_REQUIRED_ARGC 1
#define sqlite3_get_autocommit_OPTIONAL_ARGC 0
/* sqlite3_get_autocommit
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_get_autocommit(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  int result = sqlite3_get_autocommit(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_get_auxdata_FUNCTION
#define sqlite3_get_auxdata_REQUIRED_ARGC 2
#define sqlite3_get_auxdata_OPTIONAL_ARGC 0
/* sqlite3_get_auxdata
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * - N: int
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_get_auxdata(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value N;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &N);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, N, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  int native_N = mrb_fixnum(N);

  /* Invocation */
  void * result = sqlite3_get_auxdata(native_arg1, native_N);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_get_table_FUNCTION
#define sqlite3_get_table_REQUIRED_ARGC 6
#define sqlite3_get_table_OPTIONAL_ARGC 0
/* sqlite3_get_table
 *
 * Parameters:
 * - db: struct sqlite3 *
 * - zSql: const char *
 * - pazResult: char ***
 * - pnRow: int *
 * - pnColumn: int *
 * - pzErrmsg: char **
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_get_table(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value zSql;
  mrb_value pazResult;
  mrb_value pnRow;
  mrb_value pnColumn;
  mrb_value pzErrmsg;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooo", &db, &zSql, &pazResult, &pnRow, &pnColumn, &pzErrmsg);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zSql, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR_PTR_PTR(pazResult);
  TODO_type_check_int_PTR(pnRow);
  TODO_type_check_int_PTR(pnColumn);
  TODO_type_check_char_PTR_PTR(pzErrmsg);


  /* Unbox parameters */
  struct sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  const char * native_zSql = mrb_string_value_cstr(mrb, &zSql);

  char *** native_pazResult = TODO_mruby_unbox_char_PTR_PTR_PTR(pazResult);

  int * native_pnRow = TODO_mruby_unbox_int_PTR(pnRow);

  int * native_pnColumn = TODO_mruby_unbox_int_PTR(pnColumn);

  char ** native_pzErrmsg = TODO_mruby_unbox_char_PTR_PTR(pzErrmsg);

  /* Invocation */
  int result = sqlite3_get_table(native_db, native_zSql, native_pazResult, native_pnRow, native_pnColumn, native_pzErrmsg);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_global_recover_FUNCTION
#define sqlite3_global_recover_REQUIRED_ARGC 0
#define sqlite3_global_recover_OPTIONAL_ARGC 0
/* sqlite3_global_recover
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_global_recover(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = sqlite3_global_recover();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_initialize_FUNCTION
#define sqlite3_initialize_REQUIRED_ARGC 0
#define sqlite3_initialize_OPTIONAL_ARGC 0
/* sqlite3_initialize
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_initialize(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = sqlite3_initialize();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_interrupt_FUNCTION
#define sqlite3_interrupt_REQUIRED_ARGC 1
#define sqlite3_interrupt_OPTIONAL_ARGC 0
/* sqlite3_interrupt
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_interrupt(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  sqlite3_interrupt(native_arg1);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_last_insert_rowid_FUNCTION
#define sqlite3_last_insert_rowid_REQUIRED_ARGC 1
#define sqlite3_last_insert_rowid_OPTIONAL_ARGC 0
/* sqlite3_last_insert_rowid
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * Return Type: sqlite3_int64
 */
mrb_value
mrb_SQLite_sqlite3_last_insert_rowid(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  sqlite3_int64 result = sqlite3_last_insert_rowid(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_sqlite3_int64(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_libversion_FUNCTION
#define sqlite3_libversion_REQUIRED_ARGC 0
#define sqlite3_libversion_OPTIONAL_ARGC 0
/* sqlite3_libversion
 *
 * Parameters: None
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_sqlite3_libversion(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  const char * result = sqlite3_libversion();

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_libversion_number_FUNCTION
#define sqlite3_libversion_number_REQUIRED_ARGC 0
#define sqlite3_libversion_number_OPTIONAL_ARGC 0
/* sqlite3_libversion_number
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_libversion_number(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = sqlite3_libversion_number();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_limit_FUNCTION
#define sqlite3_limit_REQUIRED_ARGC 3
#define sqlite3_limit_OPTIONAL_ARGC 0
/* sqlite3_limit
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - id: int
 * - newVal: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_limit(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value id;
  mrb_value newVal;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &id, &newVal);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, newVal, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  int native_id = mrb_fixnum(id);

  int native_newVal = mrb_fixnum(newVal);

  /* Invocation */
  int result = sqlite3_limit(native_arg1, native_id, native_newVal);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_load_extension_FUNCTION
#define sqlite3_load_extension_REQUIRED_ARGC 4
#define sqlite3_load_extension_OPTIONAL_ARGC 0
/* sqlite3_load_extension
 *
 * Parameters:
 * - db: struct sqlite3 *
 * - zFile: const char *
 * - zProc: const char *
 * - pzErrMsg: char **
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_load_extension(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value zFile;
  mrb_value zProc;
  mrb_value pzErrMsg;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &db, &zFile, &zProc, &pzErrMsg);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zFile, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zProc, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR_PTR(pzErrMsg);


  /* Unbox parameters */
  struct sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  const char * native_zFile = mrb_string_value_cstr(mrb, &zFile);

  const char * native_zProc = mrb_string_value_cstr(mrb, &zProc);

  char ** native_pzErrMsg = TODO_mruby_unbox_char_PTR_PTR(pzErrMsg);

  /* Invocation */
  int result = sqlite3_load_extension(native_db, native_zFile, native_zProc, native_pzErrMsg);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_log_FUNCTION
#define sqlite3_log_REQUIRED_ARGC 2
#define sqlite3_log_OPTIONAL_ARGC 0
/* sqlite3_log
 *
 * Parameters:
 * - iErrCode: int
 * - zFormat: const char *
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_log(mrb_state* mrb, mrb_value self) {
  mrb_value iErrCode;
  mrb_value zFormat;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &iErrCode, &zFormat);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, iErrCode, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zFormat, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_iErrCode = mrb_fixnum(iErrCode);

  const char * native_zFormat = mrb_string_value_cstr(mrb, &zFormat);

  /* Invocation */
  sqlite3_log(native_iErrCode, native_zFormat);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_malloc_FUNCTION
#define sqlite3_malloc_REQUIRED_ARGC 1
#define sqlite3_malloc_OPTIONAL_ARGC 0
/* sqlite3_malloc
 *
 * Parameters:
 * - arg1: int
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_malloc(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  void * result = sqlite3_malloc(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_malloc64_FUNCTION
#define sqlite3_malloc64_REQUIRED_ARGC 1
#define sqlite3_malloc64_OPTIONAL_ARGC 0
/* sqlite3_malloc64
 *
 * Parameters:
 * - arg1: unsigned long long
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_malloc64(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  TODO_type_check_unsigned_long_long(arg1);


  /* Unbox parameters */
  unsigned long long native_arg1 = TODO_mruby_unbox_unsigned_long_long(arg1);

  /* Invocation */
  void * result = sqlite3_malloc64(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_memory_alarm_FUNCTION
#define sqlite3_memory_alarm_REQUIRED_ARGC 6
#define sqlite3_memory_alarm_OPTIONAL_ARGC 0
/* sqlite3_memory_alarm
 *
 * Parameters:
 * - arg1: void (*)(void *, long long, int)
 * - arg2: void *
 * - arg3: long long
 * - arg4: int
 * - arg5: void *
 * - arg6: long long
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_memory_alarm(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value arg6;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooo", &arg1, &arg2, &arg3, &arg4, &arg5, &arg6);


  /* Type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_long_longCOMMA_int_RPAREN(arg1);
  TODO_type_check_void_PTR(arg2);
  TODO_type_check_long_long(arg3);
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg5);
  TODO_type_check_long_long(arg6);


  /* Unbox parameters */
  void (*native_arg1)(void *, long long, int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_long_longCOMMA_int_RPAREN(arg1);

  void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  long long native_arg3 = TODO_mruby_unbox_long_long(arg3);

  int native_arg4 = mrb_fixnum(arg4);

  void * native_arg5 = TODO_mruby_unbox_void_PTR(arg5);

  long long native_arg6 = TODO_mruby_unbox_long_long(arg6);

  /* Invocation */
  int result = sqlite3_memory_alarm(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5, native_arg6);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_memory_highwater_FUNCTION
#define sqlite3_memory_highwater_REQUIRED_ARGC 1
#define sqlite3_memory_highwater_OPTIONAL_ARGC 0
/* sqlite3_memory_highwater
 *
 * Parameters:
 * - resetFlag: int
 * Return Type: sqlite3_int64
 */
mrb_value
mrb_SQLite_sqlite3_memory_highwater(mrb_state* mrb, mrb_value self) {
  mrb_value resetFlag;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &resetFlag);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, resetFlag, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_resetFlag = mrb_fixnum(resetFlag);

  /* Invocation */
  sqlite3_int64 result = sqlite3_memory_highwater(native_resetFlag);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_sqlite3_int64(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_memory_used_FUNCTION
#define sqlite3_memory_used_REQUIRED_ARGC 0
#define sqlite3_memory_used_OPTIONAL_ARGC 0
/* sqlite3_memory_used
 *
 * Parameters: None
 * Return Type: sqlite3_int64
 */
mrb_value
mrb_SQLite_sqlite3_memory_used(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  sqlite3_int64 result = sqlite3_memory_used();

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_sqlite3_int64(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_mprintf_FUNCTION
#define sqlite3_mprintf_REQUIRED_ARGC 1
#define sqlite3_mprintf_OPTIONAL_ARGC 0
/* sqlite3_mprintf
 *
 * Parameters:
 * - arg1: const char *
 * Return Type: char *
 */
mrb_value
mrb_SQLite_sqlite3_mprintf(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  /* Invocation */
  char * result = sqlite3_mprintf(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_msize_FUNCTION
#define sqlite3_msize_REQUIRED_ARGC 1
#define sqlite3_msize_OPTIONAL_ARGC 0
/* sqlite3_msize
 *
 * Parameters:
 * - arg1: void *
 * Return Type: sqlite3_uint64
 */
mrb_value
mrb_SQLite_sqlite3_msize(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  TODO_type_check_void_PTR(arg1);


  /* Unbox parameters */
  void * native_arg1 = TODO_mruby_unbox_void_PTR(arg1);

  /* Invocation */
  sqlite3_uint64 result = sqlite3_msize(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_sqlite3_uint64(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_mutex_alloc_FUNCTION
#define sqlite3_mutex_alloc_REQUIRED_ARGC 1
#define sqlite3_mutex_alloc_OPTIONAL_ARGC 0
/* sqlite3_mutex_alloc
 *
 * Parameters:
 * - arg1: int
 * Return Type: sqlite3_mutex *
 */
mrb_value
mrb_SQLite_sqlite3_mutex_alloc(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  sqlite3_mutex * result = sqlite3_mutex_alloc(native_arg1);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_sqlite3_mutex(mrb, result));

  return return_value;
}
#endif

#if BIND_sqlite3_mutex_enter_FUNCTION
#define sqlite3_mutex_enter_REQUIRED_ARGC 1
#define sqlite3_mutex_enter_OPTIONAL_ARGC 0
/* sqlite3_mutex_enter
 *
 * Parameters:
 * - arg1: struct sqlite3_mutex *
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_mutex_enter(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Mutex_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Mutex expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_mutex * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_mutex(arg1));

  /* Invocation */
  sqlite3_mutex_enter(native_arg1);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_mutex_free_FUNCTION
#define sqlite3_mutex_free_REQUIRED_ARGC 1
#define sqlite3_mutex_free_OPTIONAL_ARGC 0
/* sqlite3_mutex_free
 *
 * Parameters:
 * - arg1: struct sqlite3_mutex *
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_mutex_free(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Mutex_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Mutex expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_mutex * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_mutex(arg1));

  /* Invocation */
  sqlite3_mutex_free(native_arg1);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_mutex_held_FUNCTION
#define sqlite3_mutex_held_REQUIRED_ARGC 1
#define sqlite3_mutex_held_OPTIONAL_ARGC 0
/* sqlite3_mutex_held
 *
 * Parameters:
 * - arg1: struct sqlite3_mutex *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_mutex_held(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Mutex_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Mutex expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_mutex * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_mutex(arg1));

  /* Invocation */
  int result = sqlite3_mutex_held(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_mutex_leave_FUNCTION
#define sqlite3_mutex_leave_REQUIRED_ARGC 8
#define sqlite3_mutex_leave_OPTIONAL_ARGC 0
/* sqlite3_mutex_leave
 *
 * Parameters:
 * - arg1: struct sqlite3_mutex *
 * - arg2: int
 * - arg3: struct sqlite3_mutex *
 * - arg4: struct sqlite3_mutex *
 * - arg5: struct sqlite3_mutex *
 * - arg6: struct sqlite3_mutex *
 * - arg7: struct sqlite3_mutex *
 * - arg8: struct sqlite3_mutex *
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_mutex_leave(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value arg6;
  mrb_value arg7;
  mrb_value arg8;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooooo", &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7, &arg8);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Mutex_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Mutex expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, Sqlite3Mutex_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Mutex expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg4, Sqlite3Mutex_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Mutex expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg5, Sqlite3Mutex_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Mutex expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg6, Sqlite3Mutex_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Mutex expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg7, Sqlite3Mutex_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Mutex expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg8, Sqlite3Mutex_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Mutex expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_mutex * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_mutex(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  struct sqlite3_mutex * native_arg3 = (mrb_nil_p(arg3) ? NULL : mruby_unbox_sqlite3_mutex(arg3));

  struct sqlite3_mutex * native_arg4 = (mrb_nil_p(arg4) ? NULL : mruby_unbox_sqlite3_mutex(arg4));

  struct sqlite3_mutex * native_arg5 = (mrb_nil_p(arg5) ? NULL : mruby_unbox_sqlite3_mutex(arg5));

  struct sqlite3_mutex * native_arg6 = (mrb_nil_p(arg6) ? NULL : mruby_unbox_sqlite3_mutex(arg6));

  struct sqlite3_mutex * native_arg7 = (mrb_nil_p(arg7) ? NULL : mruby_unbox_sqlite3_mutex(arg7));

  struct sqlite3_mutex * native_arg8 = (mrb_nil_p(arg8) ? NULL : mruby_unbox_sqlite3_mutex(arg8));

  /* Invocation */
  sqlite3_mutex_leave(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5, native_arg6, native_arg7, native_arg8);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_mutex_notheld_FUNCTION
#define sqlite3_mutex_notheld_REQUIRED_ARGC 1
#define sqlite3_mutex_notheld_OPTIONAL_ARGC 0
/* sqlite3_mutex_notheld
 *
 * Parameters:
 * - arg1: struct sqlite3_mutex *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_mutex_notheld(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Mutex_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Mutex expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_mutex * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_mutex(arg1));

  /* Invocation */
  int result = sqlite3_mutex_notheld(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_mutex_try_FUNCTION
#define sqlite3_mutex_try_REQUIRED_ARGC 1
#define sqlite3_mutex_try_OPTIONAL_ARGC 0
/* sqlite3_mutex_try
 *
 * Parameters:
 * - arg1: struct sqlite3_mutex *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_mutex_try(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Mutex_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Mutex expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_mutex * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_mutex(arg1));

  /* Invocation */
  int result = sqlite3_mutex_try(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_next_stmt_FUNCTION
#define sqlite3_next_stmt_REQUIRED_ARGC 2
#define sqlite3_next_stmt_OPTIONAL_ARGC 0
/* sqlite3_next_stmt
 *
 * Parameters:
 * - pDb: struct sqlite3 *
 * - pStmt: struct sqlite3_stmt *
 * Return Type: sqlite3_stmt *
 */
mrb_value
mrb_SQLite_sqlite3_next_stmt(mrb_state* mrb, mrb_value self) {
  mrb_value pDb;
  mrb_value pStmt;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &pDb, &pStmt);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pDb, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pStmt, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_pDb = (mrb_nil_p(pDb) ? NULL : mruby_unbox_sqlite3(pDb));

  struct sqlite3_stmt * native_pStmt = (mrb_nil_p(pStmt) ? NULL : mruby_unbox_sqlite3_stmt(pStmt));

  /* Invocation */
  sqlite3_stmt * result = sqlite3_next_stmt(native_pDb, native_pStmt);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_sqlite3_stmt(mrb, result));

  return return_value;
}
#endif

#if BIND_sqlite3_open_FUNCTION
#define sqlite3_open_REQUIRED_ARGC 1
#define sqlite3_open_OPTIONAL_ARGC 0
/* sqlite3_open
 *
 * Parameters:
 * - filename: const char *
 * - ppDb: struct sqlite3 **
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_open(mrb_state* mrb, mrb_value self) {
  mrb_value filename;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &filename);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, filename, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }

  /* Unbox parameters */
  const char * native_filename = mrb_string_value_cstr(mrb, &filename);

  /* Invocation */
  struct sqlite3 * native_ppDb = NULL;
  int result = sqlite3_open(native_filename, &native_ppDb);

  /* "Whether or not an error occurs when it is opened, resources associated with
     the database connection handle should be released by passing it to
     sqlite3_close() when it is no longer required.""

     => So always return the pointer instead of nil
  */

  mrb_value result_ary = mrb_ary_new(mrb);
  mrb_ary_push(mrb, result_ary, mrb_fixnum_value(result));
  mrb_ary_push(mrb, result_ary, mruby_giftwrap_sqlite3(mrb, native_ppDb));

  return result_ary;
}
#endif

#if BIND_sqlite3_open16_FUNCTION
#define sqlite3_open16_REQUIRED_ARGC 2
#define sqlite3_open16_OPTIONAL_ARGC 0
/* sqlite3_open16
 *
 * Parameters:
 * - filename: const void *
 * - ppDb: struct sqlite3 **
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_open16(mrb_state* mrb, mrb_value self) {
  mrb_value filename;
  mrb_value ppDb;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &filename, &ppDb);


  /* Type checking */
  TODO_type_check_void_PTR(filename);
  TODO_type_check_sqlite3_PTR_PTR(ppDb);


  /* Unbox parameters */
  const void * native_filename = TODO_mruby_unbox_void_PTR(filename);

  struct sqlite3 ** native_ppDb = TODO_mruby_unbox_sqlite3_PTR_PTR(ppDb);

  /* Invocation */
  int result = sqlite3_open16(native_filename, native_ppDb);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_open_v2_FUNCTION
#define sqlite3_open_v2_REQUIRED_ARGC 4
#define sqlite3_open_v2_OPTIONAL_ARGC 0
/* sqlite3_open_v2
 *
 * Parameters:
 * - filename: const char *
 * - ppDb: struct sqlite3 **
 * - flags: int
 * - zVfs: const char *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_open_v2(mrb_state* mrb, mrb_value self) {
  mrb_value filename;
  mrb_value ppDb;
  mrb_value flags;
  mrb_value zVfs;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &filename, &ppDb, &flags, &zVfs);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, filename, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_sqlite3_PTR_PTR(ppDb);
  if (!mrb_obj_is_kind_of(mrb, flags, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zVfs, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_filename = mrb_string_value_cstr(mrb, &filename);

  struct sqlite3 ** native_ppDb = TODO_mruby_unbox_sqlite3_PTR_PTR(ppDb);

  int native_flags = mrb_fixnum(flags);

  const char * native_zVfs = mrb_string_value_cstr(mrb, &zVfs);

  /* Invocation */
  int result = sqlite3_open_v2(native_filename, native_ppDb, native_flags, native_zVfs);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_os_end_FUNCTION
#define sqlite3_os_end_REQUIRED_ARGC 0
#define sqlite3_os_end_OPTIONAL_ARGC 0
/* sqlite3_os_end
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_os_end(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = sqlite3_os_end();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_os_init_FUNCTION
#define sqlite3_os_init_REQUIRED_ARGC 0
#define sqlite3_os_init_OPTIONAL_ARGC 0
/* sqlite3_os_init
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_os_init(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = sqlite3_os_init();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_overload_function_FUNCTION
#define sqlite3_overload_function_REQUIRED_ARGC 3
#define sqlite3_overload_function_OPTIONAL_ARGC 0
/* sqlite3_overload_function
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - zFuncName: const char *
 * - nArg: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_overload_function(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value zFuncName;
  mrb_value nArg;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &zFuncName, &nArg);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zFuncName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, nArg, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  const char * native_zFuncName = mrb_string_value_cstr(mrb, &zFuncName);

  int native_nArg = mrb_fixnum(nArg);

  /* Invocation */
  int result = sqlite3_overload_function(native_arg1, native_zFuncName, native_nArg);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_prepare_FUNCTION
#define sqlite3_prepare_REQUIRED_ARGC 5
#define sqlite3_prepare_OPTIONAL_ARGC 0
/* sqlite3_prepare
 *
 * Parameters:
 * - db: struct sqlite3 *
 * - zSql: const char *
 * - nByte: int
 * - ppStmt: struct sqlite3_stmt **
 * - pzTail: const char **
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_prepare(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value zSql;
  mrb_value nByte;
  mrb_value ppStmt;
  mrb_value pzTail;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &db, &zSql, &nByte, &ppStmt, &pzTail);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zSql, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, nByte, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_sqlite3_stmt_PTR_PTR(ppStmt);
  TODO_type_check_char_PTR_PTR(pzTail);


  /* Unbox parameters */
  struct sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  const char * native_zSql = mrb_string_value_cstr(mrb, &zSql);

  int native_nByte = mrb_fixnum(nByte);

  struct sqlite3_stmt ** native_ppStmt = TODO_mruby_unbox_sqlite3_stmt_PTR_PTR(ppStmt);

  const char ** native_pzTail = TODO_mruby_unbox_char_PTR_PTR(pzTail);

  /* Invocation */
  int result = sqlite3_prepare(native_db, native_zSql, native_nByte, native_ppStmt, native_pzTail);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_prepare16_FUNCTION
#define sqlite3_prepare16_REQUIRED_ARGC 5
#define sqlite3_prepare16_OPTIONAL_ARGC 0
/* sqlite3_prepare16
 *
 * Parameters:
 * - db: struct sqlite3 *
 * - zSql: const void *
 * - nByte: int
 * - ppStmt: struct sqlite3_stmt **
 * - pzTail: const void **
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_prepare16(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value zSql;
  mrb_value nByte;
  mrb_value ppStmt;
  mrb_value pzTail;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &db, &zSql, &nByte, &ppStmt, &pzTail);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(zSql);
  if (!mrb_obj_is_kind_of(mrb, nByte, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_sqlite3_stmt_PTR_PTR(ppStmt);
  TODO_type_check_void_PTR_PTR(pzTail);


  /* Unbox parameters */
  struct sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  const void * native_zSql = TODO_mruby_unbox_void_PTR(zSql);

  int native_nByte = mrb_fixnum(nByte);

  struct sqlite3_stmt ** native_ppStmt = TODO_mruby_unbox_sqlite3_stmt_PTR_PTR(ppStmt);

  const void ** native_pzTail = TODO_mruby_unbox_void_PTR_PTR(pzTail);

  /* Invocation */
  int result = sqlite3_prepare16(native_db, native_zSql, native_nByte, native_ppStmt, native_pzTail);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_prepare16_v2_FUNCTION
#define sqlite3_prepare16_v2_REQUIRED_ARGC 5
#define sqlite3_prepare16_v2_OPTIONAL_ARGC 0
/* sqlite3_prepare16_v2
 *
 * Parameters:
 * - db: struct sqlite3 *
 * - zSql: const void *
 * - nByte: int
 * - ppStmt: struct sqlite3_stmt **
 * - pzTail: const void **
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_prepare16_v2(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value zSql;
  mrb_value nByte;
  mrb_value ppStmt;
  mrb_value pzTail;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &db, &zSql, &nByte, &ppStmt, &pzTail);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(zSql);
  if (!mrb_obj_is_kind_of(mrb, nByte, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_sqlite3_stmt_PTR_PTR(ppStmt);
  TODO_type_check_void_PTR_PTR(pzTail);


  /* Unbox parameters */
  struct sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  const void * native_zSql = TODO_mruby_unbox_void_PTR(zSql);

  int native_nByte = mrb_fixnum(nByte);

  struct sqlite3_stmt ** native_ppStmt = TODO_mruby_unbox_sqlite3_stmt_PTR_PTR(ppStmt);

  const void ** native_pzTail = TODO_mruby_unbox_void_PTR_PTR(pzTail);

  /* Invocation */
  int result = sqlite3_prepare16_v2(native_db, native_zSql, native_nByte, native_ppStmt, native_pzTail);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_prepare_v2_FUNCTION
#define sqlite3_prepare_v2_REQUIRED_ARGC 3
#define sqlite3_prepare_v2_OPTIONAL_ARGC 0
/* sqlite3_prepare_v2
 *
 * Parameters:
 * - db: struct sqlite3 *
 * - zSql: const char *
 * - nByte: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_prepare_v2(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value zSql;
  mrb_value nByte;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &db, &zSql, &nByte);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zSql, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, nByte, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  /* Unbox parameters */
  struct sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));
  const char * native_zSql = mrb_string_value_cstr(mrb, &zSql);
  int native_nByte = mrb_fixnum(nByte);

  /* Invocation */
  struct sqlite3_stmt * native_ppStmt = NULL;
  const char * native_pzTail = NULL;
  int result = sqlite3_prepare_v2(native_db, native_zSql, native_nByte, &native_ppStmt, &native_pzTail);

  /* Box the return value */
  mrb_value result_ary = mrb_ary_new(mrb);
  mrb_ary_push(mrb, result_ary, mrb_fixnum_value(result));

  if (native_ppStmt == NULL) {
    mrb_ary_push(mrb, result_ary, mrb_nil_value());
  } else {
    mrb_ary_push(mrb, result_ary, mruby_giftwrap_sqlite3_stmt(mrb, native_ppStmt));
  }

  if (native_pzTail == NULL) {
    mrb_ary_push(mrb, result_ary, mrb_nil_value());
  } else {
    mrb_ary_push(mrb, result_ary, mrb_str_new_cstr(mrb, native_pzTail));
  }
  return result_ary;
}
#endif

#if BIND_sqlite3_profile_FUNCTION
#define sqlite3_profile_REQUIRED_ARGC 6
#define sqlite3_profile_OPTIONAL_ARGC 0
/* sqlite3_profile
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - xProfile: void (*)(void *, const char *, unsigned long long)
 * - arg3: void *
 * - arg4: const char *
 * - arg5: unsigned long long
 * - arg6: void *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_profile(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value xProfile;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value arg6;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooo", &arg1, &xProfile, &arg3, &arg4, &arg5, &arg6);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMAchar_PTR_COMMA_unsigned_long_long_RPAREN(xProfile);
  TODO_type_check_void_PTR(arg3);
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_long_long(arg5);
  TODO_type_check_void_PTR(arg6);


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  void (*native_xProfile)(void *, const char *, unsigned long long) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMAchar_PTR_COMMA_unsigned_long_long_RPAREN(xProfile);

  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  const char * native_arg4 = mrb_string_value_cstr(mrb, &arg4);

  unsigned long long native_arg5 = TODO_mruby_unbox_unsigned_long_long(arg5);

  void * native_arg6 = TODO_mruby_unbox_void_PTR(arg6);

  /* Invocation */
  void * result = sqlite3_profile(native_arg1, native_xProfile, native_arg3, native_arg4, native_arg5, native_arg6);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_progress_handler_FUNCTION
#define sqlite3_progress_handler_REQUIRED_ARGC 5
#define sqlite3_progress_handler_OPTIONAL_ARGC 0
/* sqlite3_progress_handler
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - arg2: int
 * - arg3: int (*)(void *)
 * - arg4: void *
 * - arg5: void *
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_progress_handler(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &arg2, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg3);
  TODO_type_check_void_PTR(arg4);
  TODO_type_check_void_PTR(arg5);


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  int (*native_arg3)(void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg3);

  void * native_arg4 = TODO_mruby_unbox_void_PTR(arg4);

  void * native_arg5 = TODO_mruby_unbox_void_PTR(arg5);

  /* Invocation */
  sqlite3_progress_handler(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_randomness_FUNCTION
#define sqlite3_randomness_REQUIRED_ARGC 2
#define sqlite3_randomness_OPTIONAL_ARGC 0
/* sqlite3_randomness
 *
 * Parameters:
 * - N: int
 * - P: void *
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_randomness(mrb_state* mrb, mrb_value self) {
  mrb_value N;
  mrb_value P;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &N, &P);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, N, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(P);


  /* Unbox parameters */
  int native_N = mrb_fixnum(N);

  void * native_P = TODO_mruby_unbox_void_PTR(P);

  /* Invocation */
  sqlite3_randomness(native_N, native_P);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_realloc_FUNCTION
#define sqlite3_realloc_REQUIRED_ARGC 2
#define sqlite3_realloc_OPTIONAL_ARGC 0
/* sqlite3_realloc
 *
 * Parameters:
 * - arg1: void *
 * - arg2: int
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_realloc(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  TODO_type_check_void_PTR(arg1);
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  void * native_arg1 = TODO_mruby_unbox_void_PTR(arg1);

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  void * result = sqlite3_realloc(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_realloc64_FUNCTION
#define sqlite3_realloc64_REQUIRED_ARGC 2
#define sqlite3_realloc64_OPTIONAL_ARGC 0
/* sqlite3_realloc64
 *
 * Parameters:
 * - arg1: void *
 * - arg2: unsigned long long
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_realloc64(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  TODO_type_check_void_PTR(arg1);
  TODO_type_check_unsigned_long_long(arg2);


  /* Unbox parameters */
  void * native_arg1 = TODO_mruby_unbox_void_PTR(arg1);

  unsigned long long native_arg2 = TODO_mruby_unbox_unsigned_long_long(arg2);

  /* Invocation */
  void * result = sqlite3_realloc64(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_release_memory_FUNCTION
#define sqlite3_release_memory_REQUIRED_ARGC 1
#define sqlite3_release_memory_OPTIONAL_ARGC 0
/* sqlite3_release_memory
 *
 * Parameters:
 * - arg1: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_release_memory(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = sqlite3_release_memory(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_reset_FUNCTION
#define sqlite3_reset_REQUIRED_ARGC 1
#define sqlite3_reset_OPTIONAL_ARGC 0
/* sqlite3_reset
 *
 * Parameters:
 * - pStmt: struct sqlite3_stmt *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_reset(mrb_state* mrb, mrb_value self) {
  mrb_value pStmt;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pStmt);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pStmt, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox parameters */
  struct sqlite3_stmt * native_pStmt = (mrb_nil_p(pStmt) ? NULL : mruby_unbox_sqlite3_stmt(pStmt));

  /* Invocation */
  int result = sqlite3_reset(native_pStmt);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_reset_auto_extension_FUNCTION
#define sqlite3_reset_auto_extension_REQUIRED_ARGC 55
#define sqlite3_reset_auto_extension_OPTIONAL_ARGC 0
/* sqlite3_reset_auto_extension
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - pAux: void *
 * - argc: int
 * - argv: const char *const *
 * - ppVTab: struct sqlite3_vtab **
 * - arg6: char **
 * - arg7: struct sqlite3 *
 * - pAux: void *
 * - argc: int
 * - argv: const char *const *
 * - ppVTab: struct sqlite3_vtab **
 * - arg12: char **
 * - pVTab: struct sqlite3_vtab *
 * - arg14: struct sqlite3_index_info *
 * - pVTab: struct sqlite3_vtab *
 * - pVTab: struct sqlite3_vtab *
 * - pVTab: struct sqlite3_vtab *
 * - ppCursor: struct sqlite3_vtab_cursor **
 * - arg19: struct sqlite3_vtab_cursor *
 * - arg20: struct sqlite3_vtab_cursor *
 * - idxNum: int
 * - idxStr: const char *
 * - argc: int
 * - argv: struct Mem **
 * - arg25: struct sqlite3_vtab_cursor *
 * - arg26: struct sqlite3_vtab_cursor *
 * - arg27: struct sqlite3_vtab_cursor *
 * - arg28: struct sqlite3_context *
 * - arg29: int
 * - arg30: struct sqlite3_vtab_cursor *
 * - pRowid: long long *
 * - arg32: struct sqlite3_vtab *
 * - arg33: int
 * - arg34: struct Mem **
 * - arg35: long long *
 * - pVTab: struct sqlite3_vtab *
 * - pVTab: struct sqlite3_vtab *
 * - pVTab: struct sqlite3_vtab *
 * - pVTab: struct sqlite3_vtab *
 * - pVtab: struct sqlite3_vtab *
 * - nArg: int
 * - zName: const char *
 * - pxFunc: void (**)(struct sqlite3_context *, int, struct Mem **)
 * - arg44: struct sqlite3_context *
 * - arg45: int
 * - arg46: struct Mem **
 * - ppArg: void **
 * - pVtab: struct sqlite3_vtab *
 * - zNew: const char *
 * - pVTab: struct sqlite3_vtab *
 * - arg51: int
 * - pVTab: struct sqlite3_vtab *
 * - arg53: int
 * - pVTab: struct sqlite3_vtab *
 * - arg55: int
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_reset_auto_extension(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value pAux;
  mrb_value argc;
  mrb_value argv;
  mrb_value ppVTab;
  mrb_value arg6;
  mrb_value arg7;
  mrb_value pAux;
  mrb_value argc;
  mrb_value argv;
  mrb_value ppVTab;
  mrb_value arg12;
  mrb_value pVTab;
  mrb_value arg14;
  mrb_value pVTab;
  mrb_value pVTab;
  mrb_value pVTab;
  mrb_value ppCursor;
  mrb_value arg19;
  mrb_value arg20;
  mrb_value idxNum;
  mrb_value idxStr;
  mrb_value argc;
  mrb_value argv;
  mrb_value arg25;
  mrb_value arg26;
  mrb_value arg27;
  mrb_value arg28;
  mrb_value arg29;
  mrb_value arg30;
  mrb_value pRowid;
  mrb_value arg32;
  mrb_value arg33;
  mrb_value arg34;
  mrb_value arg35;
  mrb_value pVTab;
  mrb_value pVTab;
  mrb_value pVTab;
  mrb_value pVTab;
  mrb_value pVtab;
  mrb_value nArg;
  mrb_value zName;
  mrb_value pxFunc;
  mrb_value arg44;
  mrb_value arg45;
  mrb_value arg46;
  mrb_value ppArg;
  mrb_value pVtab;
  mrb_value zNew;
  mrb_value pVTab;
  mrb_value arg51;
  mrb_value pVTab;
  mrb_value arg53;
  mrb_value pVTab;
  mrb_value arg55;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooooooooooooooooooooooooooooooooooooooooooooooooooooo", &arg1, &pAux, &argc, &argv, &ppVTab, &arg6, &arg7, &pAux, &argc, &argv, &ppVTab, &arg12, &pVTab, &arg14, &pVTab, &pVTab, &pVTab, &ppCursor, &arg19, &arg20, &idxNum, &idxStr, &argc, &argv, &arg25, &arg26, &arg27, &arg28, &arg29, &arg30, &pRowid, &arg32, &arg33, &arg34, &arg35, &pVTab, &pVTab, &pVTab, &pVTab, &pVtab, &nArg, &zName, &pxFunc, &arg44, &arg45, &arg46, &ppArg, &pVtab, &zNew, &pVTab, &arg51, &pVTab, &arg53, &pVTab, &arg55);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pAux);
  if (!mrb_obj_is_kind_of(mrb, argc, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR_const_PTR(argv);
  TODO_type_check_sqlite3_vtab_PTR_PTR(ppVTab);
  TODO_type_check_char_PTR_PTR(arg6);
  if (!mrb_obj_is_kind_of(mrb, arg7, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pAux);
  if (!mrb_obj_is_kind_of(mrb, argc, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR_const_PTR(argv);
  TODO_type_check_sqlite3_vtab_PTR_PTR(ppVTab);
  TODO_type_check_char_PTR_PTR(arg12);
  if (!mrb_obj_is_kind_of(mrb, pVTab, Sqlite3Vtab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vtab expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg14, Sqlite3IndexInfo_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3IndexInfo expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pVTab, Sqlite3Vtab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vtab expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pVTab, Sqlite3Vtab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vtab expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pVTab, Sqlite3Vtab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vtab expected");
    return mrb_nil_value();
  }
  TODO_type_check_sqlite3_vtab_cursor_PTR_PTR(ppCursor);
  if (!mrb_obj_is_kind_of(mrb, arg19, Sqlite3VtabCursor_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3VtabCursor expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg20, Sqlite3VtabCursor_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3VtabCursor expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, idxNum, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, idxStr, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, argc, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_Mem_PTR_PTR(argv);
  if (!mrb_obj_is_kind_of(mrb, arg25, Sqlite3VtabCursor_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3VtabCursor expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg26, Sqlite3VtabCursor_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3VtabCursor expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg27, Sqlite3VtabCursor_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3VtabCursor expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg28, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg29, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg30, Sqlite3VtabCursor_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3VtabCursor expected");
    return mrb_nil_value();
  }
  TODO_type_check_long_long_PTR(pRowid);
  if (!mrb_obj_is_kind_of(mrb, arg32, Sqlite3Vtab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vtab expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg33, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_Mem_PTR_PTR(arg34);
  TODO_type_check_long_long_PTR(arg35);
  if (!mrb_obj_is_kind_of(mrb, pVTab, Sqlite3Vtab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vtab expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pVTab, Sqlite3Vtab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vtab expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pVTab, Sqlite3Vtab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vtab expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pVTab, Sqlite3Vtab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vtab expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pVtab, Sqlite3Vtab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vtab expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, nArg, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_struct_Mem_PTR_PTR_RPAREN(pxFunc);
  if (!mrb_obj_is_kind_of(mrb, arg44, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg45, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_Mem_PTR_PTR(arg46);
  TODO_type_check_void_PTR_PTR(ppArg);
  if (!mrb_obj_is_kind_of(mrb, pVtab, Sqlite3Vtab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vtab expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zNew, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pVTab, Sqlite3Vtab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vtab expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg51, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pVTab, Sqlite3Vtab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vtab expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg53, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pVTab, Sqlite3Vtab_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vtab expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg55, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  void * native_pAux = TODO_mruby_unbox_void_PTR(pAux);

  int native_argc = mrb_fixnum(argc);

  const char *const * native_argv = TODO_mruby_unbox_char_PTR_const_PTR(argv);

  struct sqlite3_vtab ** native_ppVTab = TODO_mruby_unbox_sqlite3_vtab_PTR_PTR(ppVTab);

  char ** native_arg6 = TODO_mruby_unbox_char_PTR_PTR(arg6);

  struct sqlite3 * native_arg7 = (mrb_nil_p(arg7) ? NULL : mruby_unbox_sqlite3(arg7));

  void * native_pAux = TODO_mruby_unbox_void_PTR(pAux);

  int native_argc = mrb_fixnum(argc);

  const char *const * native_argv = TODO_mruby_unbox_char_PTR_const_PTR(argv);

  struct sqlite3_vtab ** native_ppVTab = TODO_mruby_unbox_sqlite3_vtab_PTR_PTR(ppVTab);

  char ** native_arg12 = TODO_mruby_unbox_char_PTR_PTR(arg12);

  struct sqlite3_vtab * native_pVTab = (mrb_nil_p(pVTab) ? NULL : mruby_unbox_sqlite3_vtab(pVTab));

  struct sqlite3_index_info * native_arg14 = (mrb_nil_p(arg14) ? NULL : mruby_unbox_sqlite3_index_info(arg14));

  struct sqlite3_vtab * native_pVTab = (mrb_nil_p(pVTab) ? NULL : mruby_unbox_sqlite3_vtab(pVTab));

  struct sqlite3_vtab * native_pVTab = (mrb_nil_p(pVTab) ? NULL : mruby_unbox_sqlite3_vtab(pVTab));

  struct sqlite3_vtab * native_pVTab = (mrb_nil_p(pVTab) ? NULL : mruby_unbox_sqlite3_vtab(pVTab));

  struct sqlite3_vtab_cursor ** native_ppCursor = TODO_mruby_unbox_sqlite3_vtab_cursor_PTR_PTR(ppCursor);

  struct sqlite3_vtab_cursor * native_arg19 = (mrb_nil_p(arg19) ? NULL : mruby_unbox_sqlite3_vtab_cursor(arg19));

  struct sqlite3_vtab_cursor * native_arg20 = (mrb_nil_p(arg20) ? NULL : mruby_unbox_sqlite3_vtab_cursor(arg20));

  int native_idxNum = mrb_fixnum(idxNum);

  const char * native_idxStr = mrb_string_value_cstr(mrb, &idxStr);

  int native_argc = mrb_fixnum(argc);

  struct Mem ** native_argv = TODO_mruby_unbox_Mem_PTR_PTR(argv);

  struct sqlite3_vtab_cursor * native_arg25 = (mrb_nil_p(arg25) ? NULL : mruby_unbox_sqlite3_vtab_cursor(arg25));

  struct sqlite3_vtab_cursor * native_arg26 = (mrb_nil_p(arg26) ? NULL : mruby_unbox_sqlite3_vtab_cursor(arg26));

  struct sqlite3_vtab_cursor * native_arg27 = (mrb_nil_p(arg27) ? NULL : mruby_unbox_sqlite3_vtab_cursor(arg27));

  struct sqlite3_context * native_arg28 = (mrb_nil_p(arg28) ? NULL : mruby_unbox_sqlite3_context(arg28));

  int native_arg29 = mrb_fixnum(arg29);

  struct sqlite3_vtab_cursor * native_arg30 = (mrb_nil_p(arg30) ? NULL : mruby_unbox_sqlite3_vtab_cursor(arg30));

  long long * native_pRowid = TODO_mruby_unbox_long_long_PTR(pRowid);

  struct sqlite3_vtab * native_arg32 = (mrb_nil_p(arg32) ? NULL : mruby_unbox_sqlite3_vtab(arg32));

  int native_arg33 = mrb_fixnum(arg33);

  struct Mem ** native_arg34 = TODO_mruby_unbox_Mem_PTR_PTR(arg34);

  long long * native_arg35 = TODO_mruby_unbox_long_long_PTR(arg35);

  struct sqlite3_vtab * native_pVTab = (mrb_nil_p(pVTab) ? NULL : mruby_unbox_sqlite3_vtab(pVTab));

  struct sqlite3_vtab * native_pVTab = (mrb_nil_p(pVTab) ? NULL : mruby_unbox_sqlite3_vtab(pVTab));

  struct sqlite3_vtab * native_pVTab = (mrb_nil_p(pVTab) ? NULL : mruby_unbox_sqlite3_vtab(pVTab));

  struct sqlite3_vtab * native_pVTab = (mrb_nil_p(pVTab) ? NULL : mruby_unbox_sqlite3_vtab(pVTab));

  struct sqlite3_vtab * native_pVtab = (mrb_nil_p(pVtab) ? NULL : mruby_unbox_sqlite3_vtab(pVtab));

  int native_nArg = mrb_fixnum(nArg);

  const char * native_zName = mrb_string_value_cstr(mrb, &zName);

  void (**)(struct sqlite3_context *, int, struct Mem **) native_pxFunc = TODO_mruby_unbox_void_LPAREN_PTR_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_struct_Mem_PTR_PTR_RPAREN(pxFunc);

  struct sqlite3_context * native_arg44 = (mrb_nil_p(arg44) ? NULL : mruby_unbox_sqlite3_context(arg44));

  int native_arg45 = mrb_fixnum(arg45);

  struct Mem ** native_arg46 = TODO_mruby_unbox_Mem_PTR_PTR(arg46);

  void ** native_ppArg = TODO_mruby_unbox_void_PTR_PTR(ppArg);

  struct sqlite3_vtab * native_pVtab = (mrb_nil_p(pVtab) ? NULL : mruby_unbox_sqlite3_vtab(pVtab));

  const char * native_zNew = mrb_string_value_cstr(mrb, &zNew);

  struct sqlite3_vtab * native_pVTab = (mrb_nil_p(pVTab) ? NULL : mruby_unbox_sqlite3_vtab(pVTab));

  int native_arg51 = mrb_fixnum(arg51);

  struct sqlite3_vtab * native_pVTab = (mrb_nil_p(pVTab) ? NULL : mruby_unbox_sqlite3_vtab(pVTab));

  int native_arg53 = mrb_fixnum(arg53);

  struct sqlite3_vtab * native_pVTab = (mrb_nil_p(pVTab) ? NULL : mruby_unbox_sqlite3_vtab(pVTab));

  int native_arg55 = mrb_fixnum(arg55);

  /* Invocation */
  sqlite3_reset_auto_extension(native_arg1, native_pAux, native_argc, native_argv, native_ppVTab, native_arg6, native_arg7, native_pAux, native_argc, native_argv, native_ppVTab, native_arg12, native_pVTab, native_arg14, native_pVTab, native_pVTab, native_pVTab, native_ppCursor, native_arg19, native_arg20, native_idxNum, native_idxStr, native_argc, native_argv, native_arg25, native_arg26, native_arg27, native_arg28, native_arg29, native_arg30, native_pRowid, native_arg32, native_arg33, native_arg34, native_arg35, native_pVTab, native_pVTab, native_pVTab, native_pVTab, native_pVtab, native_nArg, native_zName, native_pxFunc, native_arg44, native_arg45, native_arg46, native_ppArg, native_pVtab, native_zNew, native_pVTab, native_arg51, native_pVTab, native_arg53, native_pVTab, native_arg55);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_result_blob_FUNCTION
#define sqlite3_result_blob_REQUIRED_ARGC 5
#define sqlite3_result_blob_OPTIONAL_ARGC 0
/* sqlite3_result_blob
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * - arg2: const void *
 * - arg3: int
 * - arg4: void (*)(void *)
 * - arg5: void *
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_blob(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &arg2, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);
  TODO_type_check_void_PTR(arg5);


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  const void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  void (*native_arg4)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  void * native_arg5 = TODO_mruby_unbox_void_PTR(arg5);

  /* Invocation */
  sqlite3_result_blob(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_result_blob64_FUNCTION
#define sqlite3_result_blob64_REQUIRED_ARGC 5
#define sqlite3_result_blob64_OPTIONAL_ARGC 0
/* sqlite3_result_blob64
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * - arg2: const void *
 * - arg3: unsigned long long
 * - arg4: void (*)(void *)
 * - arg5: void *
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_blob64(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &arg2, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);
  TODO_type_check_unsigned_long_long(arg3);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);
  TODO_type_check_void_PTR(arg5);


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  const void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  unsigned long long native_arg3 = TODO_mruby_unbox_unsigned_long_long(arg3);

  void (*native_arg4)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  void * native_arg5 = TODO_mruby_unbox_void_PTR(arg5);

  /* Invocation */
  sqlite3_result_blob64(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_result_double_FUNCTION
#define sqlite3_result_double_REQUIRED_ARGC 2
#define sqlite3_result_double_OPTIONAL_ARGC 0
/* sqlite3_result_double
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * - arg2: double
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_double(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->float_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Float expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  double native_arg2 = mrb_float(arg2);

  /* Invocation */
  sqlite3_result_double(native_arg1, native_arg2);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_result_error_FUNCTION
#define sqlite3_result_error_REQUIRED_ARGC 3
#define sqlite3_result_error_OPTIONAL_ARGC 0
/* sqlite3_result_error
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * - arg2: const char *
 * - arg3: int
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_error(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  const char * native_arg2 = mrb_string_value_cstr(mrb, &arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  sqlite3_result_error(native_arg1, native_arg2, native_arg3);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_result_error16_FUNCTION
#define sqlite3_result_error16_REQUIRED_ARGC 3
#define sqlite3_result_error16_OPTIONAL_ARGC 0
/* sqlite3_result_error16
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * - arg2: const void *
 * - arg3: int
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_error16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  const void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  sqlite3_result_error16(native_arg1, native_arg2, native_arg3);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_result_error_code_FUNCTION
#define sqlite3_result_error_code_REQUIRED_ARGC 2
#define sqlite3_result_error_code_OPTIONAL_ARGC 0
/* sqlite3_result_error_code
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * - arg2: int
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_error_code(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  sqlite3_result_error_code(native_arg1, native_arg2);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_result_error_nomem_FUNCTION
#define sqlite3_result_error_nomem_REQUIRED_ARGC 1
#define sqlite3_result_error_nomem_OPTIONAL_ARGC 0
/* sqlite3_result_error_nomem
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_error_nomem(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Invocation */
  sqlite3_result_error_nomem(native_arg1);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_result_error_toobig_FUNCTION
#define sqlite3_result_error_toobig_REQUIRED_ARGC 1
#define sqlite3_result_error_toobig_OPTIONAL_ARGC 0
/* sqlite3_result_error_toobig
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_error_toobig(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Invocation */
  sqlite3_result_error_toobig(native_arg1);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_result_int_FUNCTION
#define sqlite3_result_int_REQUIRED_ARGC 2
#define sqlite3_result_int_OPTIONAL_ARGC 0
/* sqlite3_result_int
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * - arg2: int
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_int(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  int native_arg2 = mrb_fixnum(arg2);

  /* Invocation */
  sqlite3_result_int(native_arg1, native_arg2);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_result_int64_FUNCTION
#define sqlite3_result_int64_REQUIRED_ARGC 2
#define sqlite3_result_int64_OPTIONAL_ARGC 0
/* sqlite3_result_int64
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * - arg2: long long
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_int64(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  TODO_type_check_long_long(arg2);


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  long long native_arg2 = TODO_mruby_unbox_long_long(arg2);

  /* Invocation */
  sqlite3_result_int64(native_arg1, native_arg2);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_result_null_FUNCTION
#define sqlite3_result_null_REQUIRED_ARGC 1
#define sqlite3_result_null_OPTIONAL_ARGC 0
/* sqlite3_result_null
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_null(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Invocation */
  sqlite3_result_null(native_arg1);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_result_text_FUNCTION
#define sqlite3_result_text_REQUIRED_ARGC 5
#define sqlite3_result_text_OPTIONAL_ARGC 0
/* sqlite3_result_text
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * - arg2: const char *
 * - arg3: int
 * - arg4: void (*)(void *)
 * - arg5: void *
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_text(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &arg2, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);
  TODO_type_check_void_PTR(arg5);


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  const char * native_arg2 = mrb_string_value_cstr(mrb, &arg2);

  int native_arg3 = mrb_fixnum(arg3);

  void (*native_arg4)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  void * native_arg5 = TODO_mruby_unbox_void_PTR(arg5);

  /* Invocation */
  sqlite3_result_text(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_result_text16_FUNCTION
#define sqlite3_result_text16_REQUIRED_ARGC 5
#define sqlite3_result_text16_OPTIONAL_ARGC 0
/* sqlite3_result_text16
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * - arg2: const void *
 * - arg3: int
 * - arg4: void (*)(void *)
 * - arg5: void *
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_text16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &arg2, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);
  TODO_type_check_void_PTR(arg5);


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  const void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  void (*native_arg4)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  void * native_arg5 = TODO_mruby_unbox_void_PTR(arg5);

  /* Invocation */
  sqlite3_result_text16(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_result_text16be_FUNCTION
#define sqlite3_result_text16be_REQUIRED_ARGC 5
#define sqlite3_result_text16be_OPTIONAL_ARGC 0
/* sqlite3_result_text16be
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * - arg2: const void *
 * - arg3: int
 * - arg4: void (*)(void *)
 * - arg5: void *
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_text16be(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &arg2, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);
  TODO_type_check_void_PTR(arg5);


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  const void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  void (*native_arg4)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  void * native_arg5 = TODO_mruby_unbox_void_PTR(arg5);

  /* Invocation */
  sqlite3_result_text16be(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_result_text16le_FUNCTION
#define sqlite3_result_text16le_REQUIRED_ARGC 5
#define sqlite3_result_text16le_OPTIONAL_ARGC 0
/* sqlite3_result_text16le
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * - arg2: const void *
 * - arg3: int
 * - arg4: void (*)(void *)
 * - arg5: void *
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_text16le(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &arg2, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);
  TODO_type_check_void_PTR(arg5);


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  const void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  int native_arg3 = mrb_fixnum(arg3);

  void (*native_arg4)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  void * native_arg5 = TODO_mruby_unbox_void_PTR(arg5);

  /* Invocation */
  sqlite3_result_text16le(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_result_text64_FUNCTION
#define sqlite3_result_text64_REQUIRED_ARGC 6
#define sqlite3_result_text64_OPTIONAL_ARGC 0
/* sqlite3_result_text64
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * - arg2: const char *
 * - arg3: unsigned long long
 * - arg4: void (*)(void *)
 * - arg5: void *
 * - encoding: unsigned char
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_text64(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value encoding;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooo", &arg1, &arg2, &arg3, &arg4, &arg5, &encoding);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_long_long(arg3);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);
  TODO_type_check_void_PTR(arg5);
  TODO_type_check_unsigned_char(encoding);


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  const char * native_arg2 = mrb_string_value_cstr(mrb, &arg2);

  unsigned long long native_arg3 = TODO_mruby_unbox_unsigned_long_long(arg3);

  void (*native_arg4)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  void * native_arg5 = TODO_mruby_unbox_void_PTR(arg5);

  unsigned char native_encoding = TODO_mruby_unbox_unsigned_char(encoding);

  /* Invocation */
  sqlite3_result_text64(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5, native_encoding);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_result_value_FUNCTION
#define sqlite3_result_value_REQUIRED_ARGC 2
#define sqlite3_result_value_OPTIONAL_ARGC 0
/* sqlite3_result_value
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * - arg2: struct Mem *
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_value(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, Mem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Mem expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  struct Mem * native_arg2 = (mrb_nil_p(arg2) ? NULL : mruby_unbox_Mem(arg2));

  /* Invocation */
  sqlite3_result_value(native_arg1, native_arg2);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_result_zeroblob_FUNCTION
#define sqlite3_result_zeroblob_REQUIRED_ARGC 2
#define sqlite3_result_zeroblob_OPTIONAL_ARGC 0
/* sqlite3_result_zeroblob
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * - n: int
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_zeroblob(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value n;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &n);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, n, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  int native_n = mrb_fixnum(n);

  /* Invocation */
  sqlite3_result_zeroblob(native_arg1, native_n);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_rollback_hook_FUNCTION
#define sqlite3_rollback_hook_REQUIRED_ARGC 4
#define sqlite3_rollback_hook_OPTIONAL_ARGC 0
/* sqlite3_rollback_hook
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - arg2: void (*)(void *)
 * - arg3: void *
 * - arg4: void *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_rollback_hook(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &arg4);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg2);
  TODO_type_check_void_PTR(arg3);
  TODO_type_check_void_PTR(arg4);


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  void (*native_arg2)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg2);

  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  void * native_arg4 = TODO_mruby_unbox_void_PTR(arg4);

  /* Invocation */
  void * result = sqlite3_rollback_hook(native_arg1, native_arg2, native_arg3, native_arg4);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_rtree_geometry_callback_FUNCTION
#define sqlite3_rtree_geometry_callback_REQUIRED_ARGC 8
#define sqlite3_rtree_geometry_callback_OPTIONAL_ARGC 0
/* sqlite3_rtree_geometry_callback
 *
 * Parameters:
 * - db: struct sqlite3 *
 * - zGeom: const char *
 * - xGeom: int (*)(struct sqlite3_rtree_geometry *, int, double *, int *)
 * - arg4: struct sqlite3_rtree_geometry *
 * - arg5: int
 * - arg6: double *
 * - arg7: int *
 * - pContext: void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_rtree_geometry_callback(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value zGeom;
  mrb_value xGeom;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value arg6;
  mrb_value arg7;
  mrb_value pContext;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooooo", &db, &zGeom, &xGeom, &arg4, &arg5, &arg6, &arg7, &pContext);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zGeom, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_rtree_geometry_PTR_COMMA_intCOMMA_double_PTR_COMMA_int_PTR_RPAREN(xGeom);
  if (!mrb_obj_is_kind_of(mrb, arg4, Sqlite3RtreeGeometry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3RtreeGeometry expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_double_PTR(arg6);
  TODO_type_check_int_PTR(arg7);
  TODO_type_check_void_PTR(pContext);


  /* Unbox parameters */
  struct sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  const char * native_zGeom = mrb_string_value_cstr(mrb, &zGeom);

  int (*native_xGeom)(struct sqlite3_rtree_geometry *, int, double *, int *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_rtree_geometry_PTR_COMMA_intCOMMA_double_PTR_COMMA_int_PTR_RPAREN(xGeom);

  struct sqlite3_rtree_geometry * native_arg4 = (mrb_nil_p(arg4) ? NULL : mruby_unbox_sqlite3_rtree_geometry(arg4));

  int native_arg5 = mrb_fixnum(arg5);

  double * native_arg6 = TODO_mruby_unbox_double_PTR(arg6);

  int * native_arg7 = TODO_mruby_unbox_int_PTR(arg7);

  void * native_pContext = TODO_mruby_unbox_void_PTR(pContext);

  /* Invocation */
  int result = sqlite3_rtree_geometry_callback(native_db, native_zGeom, native_xGeom, native_arg4, native_arg5, native_arg6, native_arg7, native_pContext);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_rtree_query_callback_FUNCTION
#define sqlite3_rtree_query_callback_REQUIRED_ARGC 7
#define sqlite3_rtree_query_callback_OPTIONAL_ARGC 0
/* sqlite3_rtree_query_callback
 *
 * Parameters:
 * - db: struct sqlite3 *
 * - zQueryFunc: const char *
 * - xQueryFunc: int (*)(struct sqlite3_rtree_query_info *)
 * - arg4: struct sqlite3_rtree_query_info *
 * - pContext: void *
 * - xDestructor: void (*)(void *)
 * - arg7: void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_rtree_query_callback(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value zQueryFunc;
  mrb_value xQueryFunc;
  mrb_value arg4;
  mrb_value pContext;
  mrb_value xDestructor;
  mrb_value arg7;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooooo", &db, &zQueryFunc, &xQueryFunc, &arg4, &pContext, &xDestructor, &arg7);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zQueryFunc, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_rtree_query_info_PTR_RPAREN(xQueryFunc);
  if (!mrb_obj_is_kind_of(mrb, arg4, Sqlite3RtreeQueryInfo_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3RtreeQueryInfo expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pContext);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xDestructor);
  TODO_type_check_void_PTR(arg7);


  /* Unbox parameters */
  struct sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  const char * native_zQueryFunc = mrb_string_value_cstr(mrb, &zQueryFunc);

  int (*native_xQueryFunc)(struct sqlite3_rtree_query_info *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_rtree_query_info_PTR_RPAREN(xQueryFunc);

  struct sqlite3_rtree_query_info * native_arg4 = (mrb_nil_p(arg4) ? NULL : mruby_unbox_sqlite3_rtree_query_info(arg4));

  void * native_pContext = TODO_mruby_unbox_void_PTR(pContext);

  void (*native_xDestructor)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xDestructor);

  void * native_arg7 = TODO_mruby_unbox_void_PTR(arg7);

  /* Invocation */
  int result = sqlite3_rtree_query_callback(native_db, native_zQueryFunc, native_xQueryFunc, native_arg4, native_pContext, native_xDestructor, native_arg7);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_set_authorizer_FUNCTION
#define sqlite3_set_authorizer_REQUIRED_ARGC 9
#define sqlite3_set_authorizer_OPTIONAL_ARGC 0
/* sqlite3_set_authorizer
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - xAuth: int (*)(void *, int, const char *, const char *, const char *, const char *)
 * - arg3: void *
 * - arg4: int
 * - arg5: const char *
 * - arg6: const char *
 * - arg7: const char *
 * - arg8: const char *
 * - pUserData: void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_set_authorizer(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value xAuth;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value arg6;
  mrb_value arg7;
  mrb_value arg8;
  mrb_value pUserData;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooooooo", &arg1, &xAuth, &arg3, &arg4, &arg5, &arg6, &arg7, &arg8, &pUserData);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMAchar_PTR_COMMA_const_char_PTR_COMMA_const_char_PTR_COMMA_const_char_PTR_RPAREN(xAuth);
  TODO_type_check_void_PTR(arg3);
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg6, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg7, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg8, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pUserData);


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  int (*native_xAuth)(void *, int, const char *, const char *, const char *, const char *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMAchar_PTR_COMMA_const_char_PTR_COMMA_const_char_PTR_COMMA_const_char_PTR_RPAREN(xAuth);

  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  int native_arg4 = mrb_fixnum(arg4);

  const char * native_arg5 = mrb_string_value_cstr(mrb, &arg5);

  const char * native_arg6 = mrb_string_value_cstr(mrb, &arg6);

  const char * native_arg7 = mrb_string_value_cstr(mrb, &arg7);

  const char * native_arg8 = mrb_string_value_cstr(mrb, &arg8);

  void * native_pUserData = TODO_mruby_unbox_void_PTR(pUserData);

  /* Invocation */
  int result = sqlite3_set_authorizer(native_arg1, native_xAuth, native_arg3, native_arg4, native_arg5, native_arg6, native_arg7, native_arg8, native_pUserData);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_set_auxdata_FUNCTION
#define sqlite3_set_auxdata_REQUIRED_ARGC 6
#define sqlite3_set_auxdata_OPTIONAL_ARGC 0
/* sqlite3_set_auxdata
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * - N: int
 * - arg3: void *
 * - arg4: void (*)(void *)
 * - arg5: void *
 * - arg6: void *
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_set_auxdata(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value N;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value arg6;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooo", &arg1, &N, &arg3, &arg4, &arg5, &arg6);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, N, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg3);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);
  TODO_type_check_void_PTR(arg5);
  TODO_type_check_void_PTR(arg6);


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  int native_N = mrb_fixnum(N);

  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  void (*native_arg4)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  void * native_arg5 = TODO_mruby_unbox_void_PTR(arg5);

  void * native_arg6 = TODO_mruby_unbox_void_PTR(arg6);

  /* Invocation */
  sqlite3_set_auxdata(native_arg1, native_N, native_arg3, native_arg4, native_arg5, native_arg6);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_shutdown_FUNCTION
#define sqlite3_shutdown_REQUIRED_ARGC 0
#define sqlite3_shutdown_OPTIONAL_ARGC 0
/* sqlite3_shutdown
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_shutdown(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = sqlite3_shutdown();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_sleep_FUNCTION
#define sqlite3_sleep_REQUIRED_ARGC 1
#define sqlite3_sleep_OPTIONAL_ARGC 0
/* sqlite3_sleep
 *
 * Parameters:
 * - arg1: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_sleep(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* Invocation */
  int result = sqlite3_sleep(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_snprintf_FUNCTION
#define sqlite3_snprintf_REQUIRED_ARGC 3
#define sqlite3_snprintf_OPTIONAL_ARGC 0
/* sqlite3_snprintf
 *
 * Parameters:
 * - arg1: int
 * - arg2: char *
 * - arg3: const char *
 * Return Type: char *
 */
mrb_value
mrb_SQLite_sqlite3_snprintf(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_arg2 = strdup(mrb_string_value_cstr(mrb, &arg2));

  const char * native_arg3 = mrb_string_value_cstr(mrb, &arg3);

  /* Invocation */
  char * result = sqlite3_snprintf(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_arg2);
  native_arg2 = NULL;

  return return_value;
}
#endif

#if BIND_sqlite3_soft_heap_limit_FUNCTION
#define sqlite3_soft_heap_limit_REQUIRED_ARGC 1
#define sqlite3_soft_heap_limit_OPTIONAL_ARGC 0
/* sqlite3_soft_heap_limit
 *
 * Parameters:
 * - N: int
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_soft_heap_limit(mrb_state* mrb, mrb_value self) {
  mrb_value N;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &N);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, N, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_N = mrb_fixnum(N);

  /* Invocation */
  sqlite3_soft_heap_limit(native_N);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_soft_heap_limit64_FUNCTION
#define sqlite3_soft_heap_limit64_REQUIRED_ARGC 1
#define sqlite3_soft_heap_limit64_OPTIONAL_ARGC 0
/* sqlite3_soft_heap_limit64
 *
 * Parameters:
 * - N: long long
 * Return Type: sqlite3_int64
 */
mrb_value
mrb_SQLite_sqlite3_soft_heap_limit64(mrb_state* mrb, mrb_value self) {
  mrb_value N;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &N);


  /* Type checking */
  TODO_type_check_long_long(N);


  /* Unbox parameters */
  long long native_N = TODO_mruby_unbox_long_long(N);

  /* Invocation */
  sqlite3_int64 result = sqlite3_soft_heap_limit64(native_N);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_sqlite3_int64(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_sourceid_FUNCTION
#define sqlite3_sourceid_REQUIRED_ARGC 0
#define sqlite3_sourceid_OPTIONAL_ARGC 0
/* sqlite3_sourceid
 *
 * Parameters: None
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_sqlite3_sourceid(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  const char * result = sqlite3_sourceid();

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_sql_FUNCTION
#define sqlite3_sql_REQUIRED_ARGC 1
#define sqlite3_sql_OPTIONAL_ARGC 0
/* sqlite3_sql
 *
 * Parameters:
 * - pStmt: struct sqlite3_stmt *
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_sqlite3_sql(mrb_state* mrb, mrb_value self) {
  mrb_value pStmt;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pStmt);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pStmt, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_pStmt = (mrb_nil_p(pStmt) ? NULL : mruby_unbox_sqlite3_stmt(pStmt));

  /* Invocation */
  const char * result = sqlite3_sql(native_pStmt);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_status_FUNCTION
#define sqlite3_status_REQUIRED_ARGC 4
#define sqlite3_status_OPTIONAL_ARGC 0
/* sqlite3_status
 *
 * Parameters:
 * - op: int
 * - pCurrent: int *
 * - pHighwater: int *
 * - resetFlag: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_status(mrb_state* mrb, mrb_value self) {
  mrb_value op;
  mrb_value pCurrent;
  mrb_value pHighwater;
  mrb_value resetFlag;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &op, &pCurrent, &pHighwater, &resetFlag);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, op, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(pCurrent);
  TODO_type_check_int_PTR(pHighwater);
  if (!mrb_obj_is_kind_of(mrb, resetFlag, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_op = mrb_fixnum(op);

  int * native_pCurrent = TODO_mruby_unbox_int_PTR(pCurrent);

  int * native_pHighwater = TODO_mruby_unbox_int_PTR(pHighwater);

  int native_resetFlag = mrb_fixnum(resetFlag);

  /* Invocation */
  int result = sqlite3_status(native_op, native_pCurrent, native_pHighwater, native_resetFlag);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_status64_FUNCTION
#define sqlite3_status64_REQUIRED_ARGC 4
#define sqlite3_status64_OPTIONAL_ARGC 0
/* sqlite3_status64
 *
 * Parameters:
 * - op: int
 * - pCurrent: long long *
 * - pHighwater: long long *
 * - resetFlag: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_status64(mrb_state* mrb, mrb_value self) {
  mrb_value op;
  mrb_value pCurrent;
  mrb_value pHighwater;
  mrb_value resetFlag;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &op, &pCurrent, &pHighwater, &resetFlag);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, op, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_long_long_PTR(pCurrent);
  TODO_type_check_long_long_PTR(pHighwater);
  if (!mrb_obj_is_kind_of(mrb, resetFlag, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_op = mrb_fixnum(op);

  long long * native_pCurrent = TODO_mruby_unbox_long_long_PTR(pCurrent);

  long long * native_pHighwater = TODO_mruby_unbox_long_long_PTR(pHighwater);

  int native_resetFlag = mrb_fixnum(resetFlag);

  /* Invocation */
  int result = sqlite3_status64(native_op, native_pCurrent, native_pHighwater, native_resetFlag);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_step_FUNCTION
#define sqlite3_step_REQUIRED_ARGC 1
#define sqlite3_step_OPTIONAL_ARGC 0
/* sqlite3_step
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_step(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  int result = sqlite3_step(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_stmt_busy_FUNCTION
#define sqlite3_stmt_busy_REQUIRED_ARGC 1
#define sqlite3_stmt_busy_OPTIONAL_ARGC 0
/* sqlite3_stmt_busy
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_stmt_busy(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  int result = sqlite3_stmt_busy(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_stmt_readonly_FUNCTION
#define sqlite3_stmt_readonly_REQUIRED_ARGC 1
#define sqlite3_stmt_readonly_OPTIONAL_ARGC 0
/* sqlite3_stmt_readonly
 *
 * Parameters:
 * - pStmt: struct sqlite3_stmt *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_stmt_readonly(mrb_state* mrb, mrb_value self) {
  mrb_value pStmt;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pStmt);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pStmt, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_pStmt = (mrb_nil_p(pStmt) ? NULL : mruby_unbox_sqlite3_stmt(pStmt));

  /* Invocation */
  int result = sqlite3_stmt_readonly(native_pStmt);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_stmt_scanstatus_FUNCTION
#define sqlite3_stmt_scanstatus_REQUIRED_ARGC 4
#define sqlite3_stmt_scanstatus_OPTIONAL_ARGC 0
/* sqlite3_stmt_scanstatus
 *
 * Parameters:
 * - pStmt: struct sqlite3_stmt *
 * - idx: int
 * - iScanStatusOp: int
 * - pOut: void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_stmt_scanstatus(mrb_state* mrb, mrb_value self) {
  mrb_value pStmt;
  mrb_value idx;
  mrb_value iScanStatusOp;
  mrb_value pOut;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &pStmt, &idx, &iScanStatusOp, &pOut);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pStmt, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, idx, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, iScanStatusOp, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pOut);


  /* Unbox parameters */
  struct sqlite3_stmt * native_pStmt = (mrb_nil_p(pStmt) ? NULL : mruby_unbox_sqlite3_stmt(pStmt));

  int native_idx = mrb_fixnum(idx);

  int native_iScanStatusOp = mrb_fixnum(iScanStatusOp);

  void * native_pOut = TODO_mruby_unbox_void_PTR(pOut);

  /* Invocation */
  int result = sqlite3_stmt_scanstatus(native_pStmt, native_idx, native_iScanStatusOp, native_pOut);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_stmt_scanstatus_reset_FUNCTION
#define sqlite3_stmt_scanstatus_reset_REQUIRED_ARGC 3
#define sqlite3_stmt_scanstatus_reset_OPTIONAL_ARGC 0
/* sqlite3_stmt_scanstatus_reset
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - arg2: void *
 * - arg3: void *
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_stmt_scanstatus_reset(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);
  TODO_type_check_void_PTR(arg3);


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  /* Invocation */
  sqlite3_stmt_scanstatus_reset(native_arg1, native_arg2, native_arg3);

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_stmt_status_FUNCTION
#define sqlite3_stmt_status_REQUIRED_ARGC 45
#define sqlite3_stmt_status_OPTIONAL_ARGC 0
/* sqlite3_stmt_status
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - op: int
 * - resetFlg: int
 * - arg4: void *
 * - arg5: void *
 * - szPage: int
 * - szExtra: int
 * - bPurgeable: int
 * - arg9: struct sqlite3_pcache *
 * - nCachesize: int
 * - arg11: struct sqlite3_pcache *
 * - arg12: struct sqlite3_pcache *
 * - key: unsigned int
 * - createFlag: int
 * - arg15: struct sqlite3_pcache *
 * - arg16: struct sqlite3_pcache_page *
 * - discard: int
 * - arg18: struct sqlite3_pcache *
 * - arg19: struct sqlite3_pcache_page *
 * - oldKey: unsigned int
 * - newKey: unsigned int
 * - arg22: struct sqlite3_pcache *
 * - iLimit: unsigned int
 * - arg24: struct sqlite3_pcache *
 * - arg25: struct sqlite3_pcache *
 * - arg26: void *
 * - arg27: void *
 * - szPage: int
 * - bPurgeable: int
 * - arg30: struct sqlite3_pcache *
 * - nCachesize: int
 * - arg32: struct sqlite3_pcache *
 * - arg33: struct sqlite3_pcache *
 * - key: unsigned int
 * - createFlag: int
 * - arg36: struct sqlite3_pcache *
 * - arg37: void *
 * - discard: int
 * - arg39: struct sqlite3_pcache *
 * - arg40: void *
 * - oldKey: unsigned int
 * - newKey: unsigned int
 * - arg43: struct sqlite3_pcache *
 * - iLimit: unsigned int
 * - arg45: struct sqlite3_pcache *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_stmt_status(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value op;
  mrb_value resetFlg;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value szPage;
  mrb_value szExtra;
  mrb_value bPurgeable;
  mrb_value arg9;
  mrb_value nCachesize;
  mrb_value arg11;
  mrb_value arg12;
  mrb_value key;
  mrb_value createFlag;
  mrb_value arg15;
  mrb_value arg16;
  mrb_value discard;
  mrb_value arg18;
  mrb_value arg19;
  mrb_value oldKey;
  mrb_value newKey;
  mrb_value arg22;
  mrb_value iLimit;
  mrb_value arg24;
  mrb_value arg25;
  mrb_value arg26;
  mrb_value arg27;
  mrb_value szPage;
  mrb_value bPurgeable;
  mrb_value arg30;
  mrb_value nCachesize;
  mrb_value arg32;
  mrb_value arg33;
  mrb_value key;
  mrb_value createFlag;
  mrb_value arg36;
  mrb_value arg37;
  mrb_value discard;
  mrb_value arg39;
  mrb_value arg40;
  mrb_value oldKey;
  mrb_value newKey;
  mrb_value arg43;
  mrb_value iLimit;
  mrb_value arg45;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooooooooooooooooooooooooooooooooooooooooooo", &arg1, &op, &resetFlg, &arg4, &arg5, &szPage, &szExtra, &bPurgeable, &arg9, &nCachesize, &arg11, &arg12, &key, &createFlag, &arg15, &arg16, &discard, &arg18, &arg19, &oldKey, &newKey, &arg22, &iLimit, &arg24, &arg25, &arg26, &arg27, &szPage, &bPurgeable, &arg30, &nCachesize, &arg32, &arg33, &key, &createFlag, &arg36, &arg37, &discard, &arg39, &arg40, &oldKey, &newKey, &arg43, &iLimit, &arg45);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, op, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, resetFlg, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg4);
  TODO_type_check_void_PTR(arg5);
  if (!mrb_obj_is_kind_of(mrb, szPage, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, szExtra, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, bPurgeable, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg9, Sqlite3Pcache_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Pcache expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, nCachesize, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg11, Sqlite3Pcache_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Pcache expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg12, Sqlite3Pcache_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Pcache expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, key, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, createFlag, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg15, Sqlite3Pcache_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Pcache expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg16, Sqlite3PcachePage_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3PcachePage expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, discard, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg18, Sqlite3Pcache_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Pcache expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg19, Sqlite3PcachePage_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3PcachePage expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, oldKey, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, newKey, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg22, Sqlite3Pcache_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Pcache expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, iLimit, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg24, Sqlite3Pcache_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Pcache expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg25, Sqlite3Pcache_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Pcache expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg26);
  TODO_type_check_void_PTR(arg27);
  if (!mrb_obj_is_kind_of(mrb, szPage, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, bPurgeable, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg30, Sqlite3Pcache_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Pcache expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, nCachesize, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg32, Sqlite3Pcache_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Pcache expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg33, Sqlite3Pcache_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Pcache expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, key, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, createFlag, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg36, Sqlite3Pcache_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Pcache expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg37);
  if (!mrb_obj_is_kind_of(mrb, discard, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg39, Sqlite3Pcache_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Pcache expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg40);
  if (!mrb_obj_is_kind_of(mrb, oldKey, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, newKey, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg43, Sqlite3Pcache_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Pcache expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, iLimit, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg45, Sqlite3Pcache_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Pcache expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  int native_op = mrb_fixnum(op);

  int native_resetFlg = mrb_fixnum(resetFlg);

  void * native_arg4 = TODO_mruby_unbox_void_PTR(arg4);

  void * native_arg5 = TODO_mruby_unbox_void_PTR(arg5);

  int native_szPage = mrb_fixnum(szPage);

  int native_szExtra = mrb_fixnum(szExtra);

  int native_bPurgeable = mrb_fixnum(bPurgeable);

  struct sqlite3_pcache * native_arg9 = (mrb_nil_p(arg9) ? NULL : mruby_unbox_sqlite3_pcache(arg9));

  int native_nCachesize = mrb_fixnum(nCachesize);

  struct sqlite3_pcache * native_arg11 = (mrb_nil_p(arg11) ? NULL : mruby_unbox_sqlite3_pcache(arg11));

  struct sqlite3_pcache * native_arg12 = (mrb_nil_p(arg12) ? NULL : mruby_unbox_sqlite3_pcache(arg12));

  unsigned int native_key = mrb_fixnum(key);

  int native_createFlag = mrb_fixnum(createFlag);

  struct sqlite3_pcache * native_arg15 = (mrb_nil_p(arg15) ? NULL : mruby_unbox_sqlite3_pcache(arg15));

  struct sqlite3_pcache_page * native_arg16 = (mrb_nil_p(arg16) ? NULL : mruby_unbox_sqlite3_pcache_page(arg16));

  int native_discard = mrb_fixnum(discard);

  struct sqlite3_pcache * native_arg18 = (mrb_nil_p(arg18) ? NULL : mruby_unbox_sqlite3_pcache(arg18));

  struct sqlite3_pcache_page * native_arg19 = (mrb_nil_p(arg19) ? NULL : mruby_unbox_sqlite3_pcache_page(arg19));

  unsigned int native_oldKey = mrb_fixnum(oldKey);

  unsigned int native_newKey = mrb_fixnum(newKey);

  struct sqlite3_pcache * native_arg22 = (mrb_nil_p(arg22) ? NULL : mruby_unbox_sqlite3_pcache(arg22));

  unsigned int native_iLimit = mrb_fixnum(iLimit);

  struct sqlite3_pcache * native_arg24 = (mrb_nil_p(arg24) ? NULL : mruby_unbox_sqlite3_pcache(arg24));

  struct sqlite3_pcache * native_arg25 = (mrb_nil_p(arg25) ? NULL : mruby_unbox_sqlite3_pcache(arg25));

  void * native_arg26 = TODO_mruby_unbox_void_PTR(arg26);

  void * native_arg27 = TODO_mruby_unbox_void_PTR(arg27);

  int native_szPage = mrb_fixnum(szPage);

  int native_bPurgeable = mrb_fixnum(bPurgeable);

  struct sqlite3_pcache * native_arg30 = (mrb_nil_p(arg30) ? NULL : mruby_unbox_sqlite3_pcache(arg30));

  int native_nCachesize = mrb_fixnum(nCachesize);

  struct sqlite3_pcache * native_arg32 = (mrb_nil_p(arg32) ? NULL : mruby_unbox_sqlite3_pcache(arg32));

  struct sqlite3_pcache * native_arg33 = (mrb_nil_p(arg33) ? NULL : mruby_unbox_sqlite3_pcache(arg33));

  unsigned int native_key = mrb_fixnum(key);

  int native_createFlag = mrb_fixnum(createFlag);

  struct sqlite3_pcache * native_arg36 = (mrb_nil_p(arg36) ? NULL : mruby_unbox_sqlite3_pcache(arg36));

  void * native_arg37 = TODO_mruby_unbox_void_PTR(arg37);

  int native_discard = mrb_fixnum(discard);

  struct sqlite3_pcache * native_arg39 = (mrb_nil_p(arg39) ? NULL : mruby_unbox_sqlite3_pcache(arg39));

  void * native_arg40 = TODO_mruby_unbox_void_PTR(arg40);

  unsigned int native_oldKey = mrb_fixnum(oldKey);

  unsigned int native_newKey = mrb_fixnum(newKey);

  struct sqlite3_pcache * native_arg43 = (mrb_nil_p(arg43) ? NULL : mruby_unbox_sqlite3_pcache(arg43));

  unsigned int native_iLimit = mrb_fixnum(iLimit);

  struct sqlite3_pcache * native_arg45 = (mrb_nil_p(arg45) ? NULL : mruby_unbox_sqlite3_pcache(arg45));

  /* Invocation */
  int result = sqlite3_stmt_status(native_arg1, native_op, native_resetFlg, native_arg4, native_arg5, native_szPage, native_szExtra, native_bPurgeable, native_arg9, native_nCachesize, native_arg11, native_arg12, native_key, native_createFlag, native_arg15, native_arg16, native_discard, native_arg18, native_arg19, native_oldKey, native_newKey, native_arg22, native_iLimit, native_arg24, native_arg25, native_arg26, native_arg27, native_szPage, native_bPurgeable, native_arg30, native_nCachesize, native_arg32, native_arg33, native_key, native_createFlag, native_arg36, native_arg37, native_discard, native_arg39, native_arg40, native_oldKey, native_newKey, native_arg43, native_iLimit, native_arg45);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_strglob_FUNCTION
#define sqlite3_strglob_REQUIRED_ARGC 2
#define sqlite3_strglob_OPTIONAL_ARGC 0
/* sqlite3_strglob
 *
 * Parameters:
 * - zGlob: const char *
 * - zStr: const char *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_strglob(mrb_state* mrb, mrb_value self) {
  mrb_value zGlob;
  mrb_value zStr;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &zGlob, &zStr);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, zGlob, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zStr, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_zGlob = mrb_string_value_cstr(mrb, &zGlob);

  const char * native_zStr = mrb_string_value_cstr(mrb, &zStr);

  /* Invocation */
  int result = sqlite3_strglob(native_zGlob, native_zStr);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_stricmp_FUNCTION
#define sqlite3_stricmp_REQUIRED_ARGC 2
#define sqlite3_stricmp_OPTIONAL_ARGC 0
/* sqlite3_stricmp
 *
 * Parameters:
 * - arg1: const char *
 * - arg2: const char *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_stricmp(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  const char * native_arg2 = mrb_string_value_cstr(mrb, &arg2);

  /* Invocation */
  int result = sqlite3_stricmp(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_strnicmp_FUNCTION
#define sqlite3_strnicmp_REQUIRED_ARGC 3
#define sqlite3_strnicmp_OPTIONAL_ARGC 0
/* sqlite3_strnicmp
 *
 * Parameters:
 * - arg1: const char *
 * - arg2: const char *
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_strnicmp(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  const char * native_arg2 = mrb_string_value_cstr(mrb, &arg2);

  int native_arg3 = mrb_fixnum(arg3);

  /* Invocation */
  int result = sqlite3_strnicmp(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_table_column_metadata_FUNCTION
#define sqlite3_table_column_metadata_REQUIRED_ARGC 9
#define sqlite3_table_column_metadata_OPTIONAL_ARGC 0
/* sqlite3_table_column_metadata
 *
 * Parameters:
 * - db: struct sqlite3 *
 * - zDbName: const char *
 * - zTableName: const char *
 * - zColumnName: const char *
 * - pzDataType: const char **
 * - pzCollSeq: const char **
 * - pNotNull: int *
 * - pPrimaryKey: int *
 * - pAutoinc: int *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_table_column_metadata(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value zDbName;
  mrb_value zTableName;
  mrb_value zColumnName;
  mrb_value pzDataType;
  mrb_value pzCollSeq;
  mrb_value pNotNull;
  mrb_value pPrimaryKey;
  mrb_value pAutoinc;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooooooo", &db, &zDbName, &zTableName, &zColumnName, &pzDataType, &pzCollSeq, &pNotNull, &pPrimaryKey, &pAutoinc);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zDbName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zTableName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zColumnName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR_PTR(pzDataType);
  TODO_type_check_char_PTR_PTR(pzCollSeq);
  TODO_type_check_int_PTR(pNotNull);
  TODO_type_check_int_PTR(pPrimaryKey);
  TODO_type_check_int_PTR(pAutoinc);


  /* Unbox parameters */
  struct sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  const char * native_zDbName = mrb_string_value_cstr(mrb, &zDbName);

  const char * native_zTableName = mrb_string_value_cstr(mrb, &zTableName);

  const char * native_zColumnName = mrb_string_value_cstr(mrb, &zColumnName);

  const char ** native_pzDataType = TODO_mruby_unbox_char_PTR_PTR(pzDataType);

  const char ** native_pzCollSeq = TODO_mruby_unbox_char_PTR_PTR(pzCollSeq);

  int * native_pNotNull = TODO_mruby_unbox_int_PTR(pNotNull);

  int * native_pPrimaryKey = TODO_mruby_unbox_int_PTR(pPrimaryKey);

  int * native_pAutoinc = TODO_mruby_unbox_int_PTR(pAutoinc);

  /* Invocation */
  int result = sqlite3_table_column_metadata(native_db, native_zDbName, native_zTableName, native_zColumnName, native_pzDataType, native_pzCollSeq, native_pNotNull, native_pPrimaryKey, native_pAutoinc);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_test_control_FUNCTION
#define sqlite3_test_control_REQUIRED_ARGC 1
#define sqlite3_test_control_OPTIONAL_ARGC 0
/* sqlite3_test_control
 *
 * Parameters:
 * - op: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_test_control(mrb_state* mrb, mrb_value self) {
  mrb_value op;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &op);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, op, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_op = mrb_fixnum(op);

  /* Invocation */
  int result = sqlite3_test_control(native_op);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_thread_cleanup_FUNCTION
#define sqlite3_thread_cleanup_REQUIRED_ARGC 0
#define sqlite3_thread_cleanup_OPTIONAL_ARGC 0
/* sqlite3_thread_cleanup
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_thread_cleanup(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  sqlite3_thread_cleanup();

  return mrb_nil_value();
}
#endif

#if BIND_sqlite3_threadsafe_FUNCTION
#define sqlite3_threadsafe_REQUIRED_ARGC 0
#define sqlite3_threadsafe_OPTIONAL_ARGC 0
/* sqlite3_threadsafe
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_threadsafe(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = sqlite3_threadsafe();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_total_changes_FUNCTION
#define sqlite3_total_changes_REQUIRED_ARGC 1
#define sqlite3_total_changes_OPTIONAL_ARGC 0
/* sqlite3_total_changes
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_total_changes(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  int result = sqlite3_total_changes(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_trace_FUNCTION
#define sqlite3_trace_REQUIRED_ARGC 5
#define sqlite3_trace_OPTIONAL_ARGC 0
/* sqlite3_trace
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - xTrace: void (*)(void *, const char *)
 * - arg3: void *
 * - arg4: const char *
 * - arg5: void *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_trace(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value xTrace;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &arg1, &xTrace, &arg3, &arg4, &arg5);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMAchar_PTR_RPAREN(xTrace);
  TODO_type_check_void_PTR(arg3);
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg5);


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  void (*native_xTrace)(void *, const char *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMAchar_PTR_RPAREN(xTrace);

  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  const char * native_arg4 = mrb_string_value_cstr(mrb, &arg4);

  void * native_arg5 = TODO_mruby_unbox_void_PTR(arg5);

  /* Invocation */
  void * result = sqlite3_trace(native_arg1, native_xTrace, native_arg3, native_arg4, native_arg5);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_transfer_bindings_FUNCTION
#define sqlite3_transfer_bindings_REQUIRED_ARGC 2
#define sqlite3_transfer_bindings_OPTIONAL_ARGC 0
/* sqlite3_transfer_bindings
 *
 * Parameters:
 * - arg1: struct sqlite3_stmt *
 * - arg2: struct sqlite3_stmt *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_transfer_bindings(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &arg2);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  struct sqlite3_stmt * native_arg2 = (mrb_nil_p(arg2) ? NULL : mruby_unbox_sqlite3_stmt(arg2));

  /* Invocation */
  int result = sqlite3_transfer_bindings(native_arg1, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_unlock_notify_FUNCTION
#define sqlite3_unlock_notify_REQUIRED_ARGC 5
#define sqlite3_unlock_notify_OPTIONAL_ARGC 0
/* sqlite3_unlock_notify
 *
 * Parameters:
 * - pBlocked: struct sqlite3 *
 * - xNotify: void (*)(void **, int)
 * - apArg: void **
 * - nArg: int
 * - pNotifyArg: void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_unlock_notify(mrb_state* mrb, mrb_value self) {
  mrb_value pBlocked;
  mrb_value xNotify;
  mrb_value apArg;
  mrb_value nArg;
  mrb_value pNotifyArg;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &pBlocked, &xNotify, &apArg, &nArg, &pNotifyArg);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pBlocked, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_PTR_COMMA_int_RPAREN(xNotify);
  TODO_type_check_void_PTR_PTR(apArg);
  if (!mrb_obj_is_kind_of(mrb, nArg, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pNotifyArg);


  /* Unbox parameters */
  struct sqlite3 * native_pBlocked = (mrb_nil_p(pBlocked) ? NULL : mruby_unbox_sqlite3(pBlocked));

  void (*native_xNotify)(void **, int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_PTR_COMMA_int_RPAREN(xNotify);

  void ** native_apArg = TODO_mruby_unbox_void_PTR_PTR(apArg);

  int native_nArg = mrb_fixnum(nArg);

  void * native_pNotifyArg = TODO_mruby_unbox_void_PTR(pNotifyArg);

  /* Invocation */
  int result = sqlite3_unlock_notify(native_pBlocked, native_xNotify, native_apArg, native_nArg, native_pNotifyArg);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_update_hook_FUNCTION
#define sqlite3_update_hook_REQUIRED_ARGC 8
#define sqlite3_update_hook_OPTIONAL_ARGC 0
/* sqlite3_update_hook
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - arg2: void (*)(void *, int, const char *, const char *, long long)
 * - arg3: void *
 * - arg4: int
 * - arg5: const char *
 * - arg6: const char *
 * - arg7: long long
 * - arg8: void *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_update_hook(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value arg6;
  mrb_value arg7;
  mrb_value arg8;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooooo", &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7, &arg8);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMAchar_PTR_COMMA_const_char_PTR_COMMA_long_long_RPAREN(arg2);
  TODO_type_check_void_PTR(arg3);
  if (!mrb_obj_is_kind_of(mrb, arg4, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg6, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_long_long(arg7);
  TODO_type_check_void_PTR(arg8);


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  void (*native_arg2)(void *, int, const char *, const char *, long long) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMAchar_PTR_COMMA_const_char_PTR_COMMA_long_long_RPAREN(arg2);

  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  int native_arg4 = mrb_fixnum(arg4);

  const char * native_arg5 = mrb_string_value_cstr(mrb, &arg5);

  const char * native_arg6 = mrb_string_value_cstr(mrb, &arg6);

  long long native_arg7 = TODO_mruby_unbox_long_long(arg7);

  void * native_arg8 = TODO_mruby_unbox_void_PTR(arg8);

  /* Invocation */
  void * result = sqlite3_update_hook(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5, native_arg6, native_arg7, native_arg8);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_uri_boolean_FUNCTION
#define sqlite3_uri_boolean_REQUIRED_ARGC 3
#define sqlite3_uri_boolean_OPTIONAL_ARGC 0
/* sqlite3_uri_boolean
 *
 * Parameters:
 * - zFile: const char *
 * - zParam: const char *
 * - bDefault: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_uri_boolean(mrb_state* mrb, mrb_value self) {
  mrb_value zFile;
  mrb_value zParam;
  mrb_value bDefault;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &zFile, &zParam, &bDefault);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, zFile, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zParam, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, bDefault, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_zFile = mrb_string_value_cstr(mrb, &zFile);

  const char * native_zParam = mrb_string_value_cstr(mrb, &zParam);

  int native_bDefault = mrb_fixnum(bDefault);

  /* Invocation */
  int result = sqlite3_uri_boolean(native_zFile, native_zParam, native_bDefault);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_uri_int64_FUNCTION
#define sqlite3_uri_int64_REQUIRED_ARGC 3
#define sqlite3_uri_int64_OPTIONAL_ARGC 0
/* sqlite3_uri_int64
 *
 * Parameters:
 * - arg1: const char *
 * - arg2: const char *
 * - arg3: long long
 * Return Type: sqlite3_int64
 */
mrb_value
mrb_SQLite_sqlite3_uri_int64(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  TODO_type_check_long_long(arg3);


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  const char * native_arg2 = mrb_string_value_cstr(mrb, &arg2);

  long long native_arg3 = TODO_mruby_unbox_long_long(arg3);

  /* Invocation */
  sqlite3_int64 result = sqlite3_uri_int64(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_sqlite3_int64(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_uri_parameter_FUNCTION
#define sqlite3_uri_parameter_REQUIRED_ARGC 2
#define sqlite3_uri_parameter_OPTIONAL_ARGC 0
/* sqlite3_uri_parameter
 *
 * Parameters:
 * - zFilename: const char *
 * - zParam: const char *
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_sqlite3_uri_parameter(mrb_state* mrb, mrb_value self) {
  mrb_value zFilename;
  mrb_value zParam;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &zFilename, &zParam);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, zFilename, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zParam, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_zFilename = mrb_string_value_cstr(mrb, &zFilename);

  const char * native_zParam = mrb_string_value_cstr(mrb, &zParam);

  /* Invocation */
  const char * result = sqlite3_uri_parameter(native_zFilename, native_zParam);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_user_data_FUNCTION
#define sqlite3_user_data_REQUIRED_ARGC 1
#define sqlite3_user_data_OPTIONAL_ARGC 0
/* sqlite3_user_data
 *
 * Parameters:
 * - arg1: struct sqlite3_context *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_user_data(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Invocation */
  void * result = sqlite3_user_data(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_value_blob_FUNCTION
#define sqlite3_value_blob_REQUIRED_ARGC 1
#define sqlite3_value_blob_OPTIONAL_ARGC 0
/* sqlite3_value_blob
 *
 * Parameters:
 * - arg1: struct Mem *
 * Return Type: const void *
 */
mrb_value
mrb_SQLite_sqlite3_value_blob(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Mem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Mem expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct Mem * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  const void * result = sqlite3_value_blob(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_value_bytes_FUNCTION
#define sqlite3_value_bytes_REQUIRED_ARGC 1
#define sqlite3_value_bytes_OPTIONAL_ARGC 0
/* sqlite3_value_bytes
 *
 * Parameters:
 * - arg1: struct Mem *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_value_bytes(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Mem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Mem expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct Mem * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  int result = sqlite3_value_bytes(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_value_bytes16_FUNCTION
#define sqlite3_value_bytes16_REQUIRED_ARGC 1
#define sqlite3_value_bytes16_OPTIONAL_ARGC 0
/* sqlite3_value_bytes16
 *
 * Parameters:
 * - arg1: struct Mem *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_value_bytes16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Mem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Mem expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct Mem * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  int result = sqlite3_value_bytes16(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_value_double_FUNCTION
#define sqlite3_value_double_REQUIRED_ARGC 1
#define sqlite3_value_double_OPTIONAL_ARGC 0
/* sqlite3_value_double
 *
 * Parameters:
 * - arg1: struct Mem *
 * Return Type: double
 */
mrb_value
mrb_SQLite_sqlite3_value_double(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Mem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Mem expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct Mem * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  double result = sqlite3_value_double(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_value_int_FUNCTION
#define sqlite3_value_int_REQUIRED_ARGC 1
#define sqlite3_value_int_OPTIONAL_ARGC 0
/* sqlite3_value_int
 *
 * Parameters:
 * - arg1: struct Mem *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_value_int(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Mem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Mem expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct Mem * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  int result = sqlite3_value_int(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_value_int64_FUNCTION
#define sqlite3_value_int64_REQUIRED_ARGC 1
#define sqlite3_value_int64_OPTIONAL_ARGC 0
/* sqlite3_value_int64
 *
 * Parameters:
 * - arg1: struct Mem *
 * Return Type: sqlite3_int64
 */
mrb_value
mrb_SQLite_sqlite3_value_int64(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Mem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Mem expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct Mem * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  sqlite3_int64 result = sqlite3_value_int64(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_sqlite3_int64(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_value_numeric_type_FUNCTION
#define sqlite3_value_numeric_type_REQUIRED_ARGC 1
#define sqlite3_value_numeric_type_OPTIONAL_ARGC 0
/* sqlite3_value_numeric_type
 *
 * Parameters:
 * - arg1: struct Mem *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_value_numeric_type(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Mem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Mem expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct Mem * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  int result = sqlite3_value_numeric_type(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_value_text_FUNCTION
#define sqlite3_value_text_REQUIRED_ARGC 1
#define sqlite3_value_text_OPTIONAL_ARGC 0
/* sqlite3_value_text
 *
 * Parameters:
 * - arg1: struct Mem *
 * Return Type: const unsigned char *
 */
mrb_value
mrb_SQLite_sqlite3_value_text(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Mem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Mem expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct Mem * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  const unsigned char * result = sqlite3_value_text(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_unsigned_char_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_value_text16_FUNCTION
#define sqlite3_value_text16_REQUIRED_ARGC 1
#define sqlite3_value_text16_OPTIONAL_ARGC 0
/* sqlite3_value_text16
 *
 * Parameters:
 * - arg1: struct Mem *
 * Return Type: const void *
 */
mrb_value
mrb_SQLite_sqlite3_value_text16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Mem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Mem expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct Mem * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  const void * result = sqlite3_value_text16(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_value_text16be_FUNCTION
#define sqlite3_value_text16be_REQUIRED_ARGC 1
#define sqlite3_value_text16be_OPTIONAL_ARGC 0
/* sqlite3_value_text16be
 *
 * Parameters:
 * - arg1: struct Mem *
 * Return Type: const void *
 */
mrb_value
mrb_SQLite_sqlite3_value_text16be(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Mem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Mem expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct Mem * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  const void * result = sqlite3_value_text16be(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_value_text16le_FUNCTION
#define sqlite3_value_text16le_REQUIRED_ARGC 1
#define sqlite3_value_text16le_OPTIONAL_ARGC 0
/* sqlite3_value_text16le
 *
 * Parameters:
 * - arg1: struct Mem *
 * Return Type: const void *
 */
mrb_value
mrb_SQLite_sqlite3_value_text16le(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Mem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Mem expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct Mem * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  const void * result = sqlite3_value_text16le(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_value_type_FUNCTION
#define sqlite3_value_type_REQUIRED_ARGC 1
#define sqlite3_value_type_OPTIONAL_ARGC 0
/* sqlite3_value_type
 *
 * Parameters:
 * - arg1: struct Mem *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_value_type(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Mem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Mem expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct Mem * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  int result = sqlite3_value_type(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_vfs_find_FUNCTION
#define sqlite3_vfs_find_REQUIRED_ARGC 1
#define sqlite3_vfs_find_OPTIONAL_ARGC 0
/* sqlite3_vfs_find
 *
 * Parameters:
 * - zVfsName: const char *
 * Return Type: sqlite3_vfs *
 */
mrb_value
mrb_SQLite_sqlite3_vfs_find(mrb_state* mrb, mrb_value self) {
  mrb_value zVfsName;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &zVfsName);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, zVfsName, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_zVfsName = mrb_string_value_cstr(mrb, &zVfsName);

  /* Invocation */
  sqlite3_vfs * result = sqlite3_vfs_find(native_zVfsName);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_sqlite3_vfs(mrb, result));

  return return_value;
}
#endif

#if BIND_sqlite3_vfs_register_FUNCTION
#define sqlite3_vfs_register_REQUIRED_ARGC 2
#define sqlite3_vfs_register_OPTIONAL_ARGC 0
/* sqlite3_vfs_register
 *
 * Parameters:
 * - arg1: struct sqlite3_vfs *
 * - makeDflt: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_vfs_register(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value makeDflt;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &makeDflt);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Vfs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vfs expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, makeDflt, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_vfs * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_vfs(arg1));

  int native_makeDflt = mrb_fixnum(makeDflt);

  /* Invocation */
  int result = sqlite3_vfs_register(native_arg1, native_makeDflt);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_vfs_unregister_FUNCTION
#define sqlite3_vfs_unregister_REQUIRED_ARGC 1
#define sqlite3_vfs_unregister_OPTIONAL_ARGC 0
/* sqlite3_vfs_unregister
 *
 * Parameters:
 * - arg1: struct sqlite3_vfs *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_vfs_unregister(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Vfs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vfs expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3_vfs * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_vfs(arg1));

  /* Invocation */
  int result = sqlite3_vfs_unregister(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_vmprintf_FUNCTION
#define sqlite3_vmprintf_REQUIRED_ARGC 2
#define sqlite3_vmprintf_OPTIONAL_ARGC 0
/* sqlite3_vmprintf
 *
 * Parameters:
 * - arg1: const char *
 * - va_list: int
 * Return Type: char *
 */
mrb_value
mrb_SQLite_sqlite3_vmprintf(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value va_list;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &va_list);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, va_list, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  const char * native_arg1 = mrb_string_value_cstr(mrb, &arg1);

  int native_va_list = mrb_fixnum(va_list);

  /* Invocation */
  char * result = sqlite3_vmprintf(native_arg1, native_va_list);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  return return_value;
}
#endif

#if BIND_sqlite3_vsnprintf_FUNCTION
#define sqlite3_vsnprintf_REQUIRED_ARGC 4
#define sqlite3_vsnprintf_OPTIONAL_ARGC 0
/* sqlite3_vsnprintf
 *
 * Parameters:
 * - arg1: int
 * - arg2: char *
 * - arg3: const char *
 * - va_list: int
 * Return Type: char *
 */
mrb_value
mrb_SQLite_sqlite3_vsnprintf(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value va_list;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &arg1, &arg2, &arg3, &va_list);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg2, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, va_list, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_arg1 = mrb_fixnum(arg1);

  /* WARNING: Allocating new memory to create 'char *' from 'const char *'.
   *          Please verify that this memory is cleaned up correctly.
   *
   *          Has this been verified? [No]
   */
  char * native_arg2 = strdup(mrb_string_value_cstr(mrb, &arg2));

  const char * native_arg3 = mrb_string_value_cstr(mrb, &arg3);

  int native_va_list = mrb_fixnum(va_list);

  /* Invocation */
  char * result = sqlite3_vsnprintf(native_arg1, native_arg2, native_arg3, native_va_list);

  /* Box the return value */
  mrb_value return_value = mrb_str_new_cstr(mrb, result);

  /* WARNING: Assuming that the new string can be deallocated after the function call.
   *          Please verify that this is correct (the function does not save this parameter).
   *
   *          Has this been verified? [No]
   */
  free(native_arg2);
  native_arg2 = NULL;

  return return_value;
}
#endif

#if BIND_sqlite3_vtab_config_FUNCTION
#define sqlite3_vtab_config_REQUIRED_ARGC 2
#define sqlite3_vtab_config_OPTIONAL_ARGC 0
/* sqlite3_vtab_config
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - op: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_vtab_config(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value op;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &arg1, &op);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, op, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  int native_op = mrb_fixnum(op);

  /* Invocation */
  int result = sqlite3_vtab_config(native_arg1, native_op);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_vtab_on_conflict_FUNCTION
#define sqlite3_vtab_on_conflict_REQUIRED_ARGC 1
#define sqlite3_vtab_on_conflict_OPTIONAL_ARGC 0
/* sqlite3_vtab_on_conflict
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_vtab_on_conflict(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  int result = sqlite3_vtab_on_conflict(native_arg1);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_wal_autocheckpoint_FUNCTION
#define sqlite3_wal_autocheckpoint_REQUIRED_ARGC 2
#define sqlite3_wal_autocheckpoint_OPTIONAL_ARGC 0
/* sqlite3_wal_autocheckpoint
 *
 * Parameters:
 * - db: struct sqlite3 *
 * - N: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_wal_autocheckpoint(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value N;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &db, &N);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, N, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  int native_N = mrb_fixnum(N);

  /* Invocation */
  int result = sqlite3_wal_autocheckpoint(native_db, native_N);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_wal_checkpoint_FUNCTION
#define sqlite3_wal_checkpoint_REQUIRED_ARGC 2
#define sqlite3_wal_checkpoint_OPTIONAL_ARGC 0
/* sqlite3_wal_checkpoint
 *
 * Parameters:
 * - db: struct sqlite3 *
 * - zDb: const char *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_wal_checkpoint(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value zDb;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &db, &zDb);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zDb, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  struct sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  const char * native_zDb = mrb_string_value_cstr(mrb, &zDb);

  /* Invocation */
  int result = sqlite3_wal_checkpoint(native_db, native_zDb);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_wal_checkpoint_v2_FUNCTION
#define sqlite3_wal_checkpoint_v2_REQUIRED_ARGC 5
#define sqlite3_wal_checkpoint_v2_OPTIONAL_ARGC 0
/* sqlite3_wal_checkpoint_v2
 *
 * Parameters:
 * - db: struct sqlite3 *
 * - zDb: const char *
 * - eMode: int
 * - pnLog: int *
 * - pnCkpt: int *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_wal_checkpoint_v2(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value zDb;
  mrb_value eMode;
  mrb_value pnLog;
  mrb_value pnCkpt;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &db, &zDb, &eMode, &pnLog, &pnCkpt);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, zDb, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, eMode, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(pnLog);
  TODO_type_check_int_PTR(pnCkpt);


  /* Unbox parameters */
  struct sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  const char * native_zDb = mrb_string_value_cstr(mrb, &zDb);

  int native_eMode = mrb_fixnum(eMode);

  int * native_pnLog = TODO_mruby_unbox_int_PTR(pnLog);

  int * native_pnCkpt = TODO_mruby_unbox_int_PTR(pnCkpt);

  /* Invocation */
  int result = sqlite3_wal_checkpoint_v2(native_db, native_zDb, native_eMode, native_pnLog, native_pnCkpt);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_sqlite3_wal_hook_FUNCTION
#define sqlite3_wal_hook_REQUIRED_ARGC 7
#define sqlite3_wal_hook_OPTIONAL_ARGC 0
/* sqlite3_wal_hook
 *
 * Parameters:
 * - arg1: struct sqlite3 *
 * - arg2: int (*)(void *, struct sqlite3 *, const char *, int)
 * - arg3: void *
 * - arg4: struct sqlite3 *
 * - arg5: const char *
 * - arg6: int
 * - arg7: void *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_wal_hook(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;
  mrb_value arg4;
  mrb_value arg5;
  mrb_value arg6;
  mrb_value arg7;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooooo", &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMAsqlite3_PTR_COMMAchar_PTR_COMMA_int_RPAREN(arg2);
  TODO_type_check_void_PTR(arg3);
  if (!mrb_obj_is_kind_of(mrb, arg4, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg5, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg6, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg7);


  /* Unbox parameters */
  struct sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  int (*native_arg2)(void *, struct sqlite3 *, const char *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMAsqlite3_PTR_COMMAchar_PTR_COMMA_int_RPAREN(arg2);

  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  struct sqlite3 * native_arg4 = (mrb_nil_p(arg4) ? NULL : mruby_unbox_sqlite3(arg4));

  const char * native_arg5 = mrb_string_value_cstr(mrb, &arg5);

  int native_arg6 = mrb_fixnum(arg6);

  void * native_arg7 = TODO_mruby_unbox_void_PTR(arg7);

  /* Invocation */
  void * result = sqlite3_wal_hook(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5, native_arg6, native_arg7);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, result);

  return return_value;
}
#endif


void mrb_mruby_sqlite_gem_init(mrb_state* mrb) {
  RClass* SQLite_module = mrb_define_module(mrb, "SQLite");
  mruby_SQLite_define_macro_constants(mrb);

  /*
   * Initialize class bindings
   */
#if BIND_Mem_TYPE
  mrb_SQLite_Mem_init(mrb);
#endif
#if BIND_Sqlite3_TYPE
  mrb_SQLite_Sqlite3_init(mrb);
#endif
#if BIND_Sqlite3Backup_TYPE
  mrb_SQLite_Sqlite3Backup_init(mrb);
#endif
#if BIND_Sqlite3Blob_TYPE
  mrb_SQLite_Sqlite3Blob_init(mrb);
#endif
#if BIND_Sqlite3Context_TYPE
  mrb_SQLite_Sqlite3Context_init(mrb);
#endif
#if BIND_Sqlite3File_TYPE
  mrb_SQLite_Sqlite3File_init(mrb);
#endif
#if BIND_Sqlite3IndexConstraint_TYPE
  mrb_SQLite_Sqlite3IndexConstraint_init(mrb);
#endif
#if BIND_Sqlite3IndexConstraintUsage_TYPE
  mrb_SQLite_Sqlite3IndexConstraintUsage_init(mrb);
#endif
#if BIND_Sqlite3IndexInfo_TYPE
  mrb_SQLite_Sqlite3IndexInfo_init(mrb);
#endif
#if BIND_Sqlite3IndexOrderby_TYPE
  mrb_SQLite_Sqlite3IndexOrderby_init(mrb);
#endif
#if BIND_Sqlite3IoMethods_TYPE
  mrb_SQLite_Sqlite3IoMethods_init(mrb);
#endif
#if BIND_Sqlite3MemMethods_TYPE
  mrb_SQLite_Sqlite3MemMethods_init(mrb);
#endif
#if BIND_Sqlite3Module_TYPE
  mrb_SQLite_Sqlite3Module_init(mrb);
#endif
#if BIND_Sqlite3Mutex_TYPE
  mrb_SQLite_Sqlite3Mutex_init(mrb);
#endif
#if BIND_Sqlite3MutexMethods_TYPE
  mrb_SQLite_Sqlite3MutexMethods_init(mrb);
#endif
#if BIND_Sqlite3Pcache_TYPE
  mrb_SQLite_Sqlite3Pcache_init(mrb);
#endif
#if BIND_Sqlite3PcacheMethods_TYPE
  mrb_SQLite_Sqlite3PcacheMethods_init(mrb);
#endif
#if BIND_Sqlite3PcacheMethods2_TYPE
  mrb_SQLite_Sqlite3PcacheMethods2_init(mrb);
#endif
#if BIND_Sqlite3PcachePage_TYPE
  mrb_SQLite_Sqlite3PcachePage_init(mrb);
#endif
#if BIND_Sqlite3RtreeGeometry_TYPE
  mrb_SQLite_Sqlite3RtreeGeometry_init(mrb);
#endif
#if BIND_Sqlite3RtreeQueryInfo_TYPE
  mrb_SQLite_Sqlite3RtreeQueryInfo_init(mrb);
#endif
#if BIND_Sqlite3Stmt_TYPE
  mrb_SQLite_Sqlite3Stmt_init(mrb);
#endif
#if BIND_Sqlite3Vfs_TYPE
  mrb_SQLite_Sqlite3Vfs_init(mrb);
#endif
#if BIND_Sqlite3Vtab_TYPE
  mrb_SQLite_Sqlite3Vtab_init(mrb);
#endif
#if BIND_Sqlite3VtabCursor_TYPE
  mrb_SQLite_Sqlite3VtabCursor_init(mrb);
#endif

  /*
   * Global Functions
   */
#if BIND_sqlite3_aggregate_context_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_aggregate_context", mrb_SQLite_sqlite3_aggregate_context, MRB_ARGS_ARG(sqlite3_aggregate_context_REQUIRED_ARGC, sqlite3_aggregate_context_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_aggregate_count_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_aggregate_count", mrb_SQLite_sqlite3_aggregate_count, MRB_ARGS_ARG(sqlite3_aggregate_count_REQUIRED_ARGC, sqlite3_aggregate_count_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_auto_extension_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_auto_extension", mrb_SQLite_sqlite3_auto_extension, MRB_ARGS_ARG(sqlite3_auto_extension_REQUIRED_ARGC, sqlite3_auto_extension_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_backup_finish_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_backup_finish", mrb_SQLite_sqlite3_backup_finish, MRB_ARGS_ARG(sqlite3_backup_finish_REQUIRED_ARGC, sqlite3_backup_finish_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_backup_init_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_backup_init", mrb_SQLite_sqlite3_backup_init, MRB_ARGS_ARG(sqlite3_backup_init_REQUIRED_ARGC, sqlite3_backup_init_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_backup_pagecount_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_backup_pagecount", mrb_SQLite_sqlite3_backup_pagecount, MRB_ARGS_ARG(sqlite3_backup_pagecount_REQUIRED_ARGC, sqlite3_backup_pagecount_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_backup_remaining_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_backup_remaining", mrb_SQLite_sqlite3_backup_remaining, MRB_ARGS_ARG(sqlite3_backup_remaining_REQUIRED_ARGC, sqlite3_backup_remaining_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_backup_step_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_backup_step", mrb_SQLite_sqlite3_backup_step, MRB_ARGS_ARG(sqlite3_backup_step_REQUIRED_ARGC, sqlite3_backup_step_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_blob_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_bind_blob", mrb_SQLite_sqlite3_bind_blob, MRB_ARGS_ARG(sqlite3_bind_blob_REQUIRED_ARGC, sqlite3_bind_blob_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_blob64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_bind_blob64", mrb_SQLite_sqlite3_bind_blob64, MRB_ARGS_ARG(sqlite3_bind_blob64_REQUIRED_ARGC, sqlite3_bind_blob64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_double_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_bind_double", mrb_SQLite_sqlite3_bind_double, MRB_ARGS_ARG(sqlite3_bind_double_REQUIRED_ARGC, sqlite3_bind_double_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_int_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_bind_int", mrb_SQLite_sqlite3_bind_int, MRB_ARGS_ARG(sqlite3_bind_int_REQUIRED_ARGC, sqlite3_bind_int_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_int64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_bind_int64", mrb_SQLite_sqlite3_bind_int64, MRB_ARGS_ARG(sqlite3_bind_int64_REQUIRED_ARGC, sqlite3_bind_int64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_null_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_bind_null", mrb_SQLite_sqlite3_bind_null, MRB_ARGS_ARG(sqlite3_bind_null_REQUIRED_ARGC, sqlite3_bind_null_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_parameter_count_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_bind_parameter_count", mrb_SQLite_sqlite3_bind_parameter_count, MRB_ARGS_ARG(sqlite3_bind_parameter_count_REQUIRED_ARGC, sqlite3_bind_parameter_count_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_parameter_index_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_bind_parameter_index", mrb_SQLite_sqlite3_bind_parameter_index, MRB_ARGS_ARG(sqlite3_bind_parameter_index_REQUIRED_ARGC, sqlite3_bind_parameter_index_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_parameter_name_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_bind_parameter_name", mrb_SQLite_sqlite3_bind_parameter_name, MRB_ARGS_ARG(sqlite3_bind_parameter_name_REQUIRED_ARGC, sqlite3_bind_parameter_name_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_text_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_bind_text", mrb_SQLite_sqlite3_bind_text, MRB_ARGS_ARG(sqlite3_bind_text_REQUIRED_ARGC, sqlite3_bind_text_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_text16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_bind_text16", mrb_SQLite_sqlite3_bind_text16, MRB_ARGS_ARG(sqlite3_bind_text16_REQUIRED_ARGC, sqlite3_bind_text16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_text64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_bind_text64", mrb_SQLite_sqlite3_bind_text64, MRB_ARGS_ARG(sqlite3_bind_text64_REQUIRED_ARGC, sqlite3_bind_text64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_value_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_bind_value", mrb_SQLite_sqlite3_bind_value, MRB_ARGS_ARG(sqlite3_bind_value_REQUIRED_ARGC, sqlite3_bind_value_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_zeroblob_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_bind_zeroblob", mrb_SQLite_sqlite3_bind_zeroblob, MRB_ARGS_ARG(sqlite3_bind_zeroblob_REQUIRED_ARGC, sqlite3_bind_zeroblob_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_blob_bytes_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_blob_bytes", mrb_SQLite_sqlite3_blob_bytes, MRB_ARGS_ARG(sqlite3_blob_bytes_REQUIRED_ARGC, sqlite3_blob_bytes_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_blob_close_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_blob_close", mrb_SQLite_sqlite3_blob_close, MRB_ARGS_ARG(sqlite3_blob_close_REQUIRED_ARGC, sqlite3_blob_close_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_blob_open_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_blob_open", mrb_SQLite_sqlite3_blob_open, MRB_ARGS_ARG(sqlite3_blob_open_REQUIRED_ARGC, sqlite3_blob_open_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_blob_read_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_blob_read", mrb_SQLite_sqlite3_blob_read, MRB_ARGS_ARG(sqlite3_blob_read_REQUIRED_ARGC, sqlite3_blob_read_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_blob_reopen_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_blob_reopen", mrb_SQLite_sqlite3_blob_reopen, MRB_ARGS_ARG(sqlite3_blob_reopen_REQUIRED_ARGC, sqlite3_blob_reopen_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_blob_write_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_blob_write", mrb_SQLite_sqlite3_blob_write, MRB_ARGS_ARG(sqlite3_blob_write_REQUIRED_ARGC, sqlite3_blob_write_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_busy_handler_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_busy_handler", mrb_SQLite_sqlite3_busy_handler, MRB_ARGS_ARG(sqlite3_busy_handler_REQUIRED_ARGC, sqlite3_busy_handler_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_busy_timeout_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_busy_timeout", mrb_SQLite_sqlite3_busy_timeout, MRB_ARGS_ARG(sqlite3_busy_timeout_REQUIRED_ARGC, sqlite3_busy_timeout_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_cancel_auto_extension_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_cancel_auto_extension", mrb_SQLite_sqlite3_cancel_auto_extension, MRB_ARGS_ARG(sqlite3_cancel_auto_extension_REQUIRED_ARGC, sqlite3_cancel_auto_extension_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_changes_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_changes", mrb_SQLite_sqlite3_changes, MRB_ARGS_ARG(sqlite3_changes_REQUIRED_ARGC, sqlite3_changes_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_clear_bindings_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_clear_bindings", mrb_SQLite_sqlite3_clear_bindings, MRB_ARGS_ARG(sqlite3_clear_bindings_REQUIRED_ARGC, sqlite3_clear_bindings_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_close_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_close", mrb_SQLite_sqlite3_close, MRB_ARGS_ARG(sqlite3_close_REQUIRED_ARGC, sqlite3_close_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_close_v2_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_close_v2", mrb_SQLite_sqlite3_close_v2, MRB_ARGS_ARG(sqlite3_close_v2_REQUIRED_ARGC, sqlite3_close_v2_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_collation_needed_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_collation_needed", mrb_SQLite_sqlite3_collation_needed, MRB_ARGS_ARG(sqlite3_collation_needed_REQUIRED_ARGC, sqlite3_collation_needed_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_collation_needed16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_collation_needed16", mrb_SQLite_sqlite3_collation_needed16, MRB_ARGS_ARG(sqlite3_collation_needed16_REQUIRED_ARGC, sqlite3_collation_needed16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_blob_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_column_blob", mrb_SQLite_sqlite3_column_blob, MRB_ARGS_ARG(sqlite3_column_blob_REQUIRED_ARGC, sqlite3_column_blob_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_bytes_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_column_bytes", mrb_SQLite_sqlite3_column_bytes, MRB_ARGS_ARG(sqlite3_column_bytes_REQUIRED_ARGC, sqlite3_column_bytes_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_bytes16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_column_bytes16", mrb_SQLite_sqlite3_column_bytes16, MRB_ARGS_ARG(sqlite3_column_bytes16_REQUIRED_ARGC, sqlite3_column_bytes16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_count_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_column_count", mrb_SQLite_sqlite3_column_count, MRB_ARGS_ARG(sqlite3_column_count_REQUIRED_ARGC, sqlite3_column_count_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_database_name_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_column_database_name", mrb_SQLite_sqlite3_column_database_name, MRB_ARGS_ARG(sqlite3_column_database_name_REQUIRED_ARGC, sqlite3_column_database_name_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_database_name16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_column_database_name16", mrb_SQLite_sqlite3_column_database_name16, MRB_ARGS_ARG(sqlite3_column_database_name16_REQUIRED_ARGC, sqlite3_column_database_name16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_decltype_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_column_decltype", mrb_SQLite_sqlite3_column_decltype, MRB_ARGS_ARG(sqlite3_column_decltype_REQUIRED_ARGC, sqlite3_column_decltype_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_decltype16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_column_decltype16", mrb_SQLite_sqlite3_column_decltype16, MRB_ARGS_ARG(sqlite3_column_decltype16_REQUIRED_ARGC, sqlite3_column_decltype16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_double_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_column_double", mrb_SQLite_sqlite3_column_double, MRB_ARGS_ARG(sqlite3_column_double_REQUIRED_ARGC, sqlite3_column_double_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_int_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_column_int", mrb_SQLite_sqlite3_column_int, MRB_ARGS_ARG(sqlite3_column_int_REQUIRED_ARGC, sqlite3_column_int_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_int64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_column_int64", mrb_SQLite_sqlite3_column_int64, MRB_ARGS_ARG(sqlite3_column_int64_REQUIRED_ARGC, sqlite3_column_int64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_name_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_column_name", mrb_SQLite_sqlite3_column_name, MRB_ARGS_ARG(sqlite3_column_name_REQUIRED_ARGC, sqlite3_column_name_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_name16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_column_name16", mrb_SQLite_sqlite3_column_name16, MRB_ARGS_ARG(sqlite3_column_name16_REQUIRED_ARGC, sqlite3_column_name16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_origin_name_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_column_origin_name", mrb_SQLite_sqlite3_column_origin_name, MRB_ARGS_ARG(sqlite3_column_origin_name_REQUIRED_ARGC, sqlite3_column_origin_name_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_origin_name16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_column_origin_name16", mrb_SQLite_sqlite3_column_origin_name16, MRB_ARGS_ARG(sqlite3_column_origin_name16_REQUIRED_ARGC, sqlite3_column_origin_name16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_table_name_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_column_table_name", mrb_SQLite_sqlite3_column_table_name, MRB_ARGS_ARG(sqlite3_column_table_name_REQUIRED_ARGC, sqlite3_column_table_name_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_table_name16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_column_table_name16", mrb_SQLite_sqlite3_column_table_name16, MRB_ARGS_ARG(sqlite3_column_table_name16_REQUIRED_ARGC, sqlite3_column_table_name16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_text_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_column_text", mrb_SQLite_sqlite3_column_text, MRB_ARGS_ARG(sqlite3_column_text_REQUIRED_ARGC, sqlite3_column_text_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_text16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_column_text16", mrb_SQLite_sqlite3_column_text16, MRB_ARGS_ARG(sqlite3_column_text16_REQUIRED_ARGC, sqlite3_column_text16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_type_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_column_type", mrb_SQLite_sqlite3_column_type, MRB_ARGS_ARG(sqlite3_column_type_REQUIRED_ARGC, sqlite3_column_type_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_value_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_column_value", mrb_SQLite_sqlite3_column_value, MRB_ARGS_ARG(sqlite3_column_value_REQUIRED_ARGC, sqlite3_column_value_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_commit_hook_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_commit_hook", mrb_SQLite_sqlite3_commit_hook, MRB_ARGS_ARG(sqlite3_commit_hook_REQUIRED_ARGC, sqlite3_commit_hook_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_compileoption_get_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_compileoption_get", mrb_SQLite_sqlite3_compileoption_get, MRB_ARGS_ARG(sqlite3_compileoption_get_REQUIRED_ARGC, sqlite3_compileoption_get_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_compileoption_used_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_compileoption_used", mrb_SQLite_sqlite3_compileoption_used, MRB_ARGS_ARG(sqlite3_compileoption_used_REQUIRED_ARGC, sqlite3_compileoption_used_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_complete_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_complete", mrb_SQLite_sqlite3_complete, MRB_ARGS_ARG(sqlite3_complete_REQUIRED_ARGC, sqlite3_complete_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_complete16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_complete16", mrb_SQLite_sqlite3_complete16, MRB_ARGS_ARG(sqlite3_complete16_REQUIRED_ARGC, sqlite3_complete16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_config_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_config", mrb_SQLite_sqlite3_config, MRB_ARGS_ARG(sqlite3_config_REQUIRED_ARGC, sqlite3_config_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_context_db_handle_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_context_db_handle", mrb_SQLite_sqlite3_context_db_handle, MRB_ARGS_ARG(sqlite3_context_db_handle_REQUIRED_ARGC, sqlite3_context_db_handle_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_create_collation_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_create_collation", mrb_SQLite_sqlite3_create_collation, MRB_ARGS_ARG(sqlite3_create_collation_REQUIRED_ARGC, sqlite3_create_collation_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_create_collation16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_create_collation16", mrb_SQLite_sqlite3_create_collation16, MRB_ARGS_ARG(sqlite3_create_collation16_REQUIRED_ARGC, sqlite3_create_collation16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_create_collation_v2_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_create_collation_v2", mrb_SQLite_sqlite3_create_collation_v2, MRB_ARGS_ARG(sqlite3_create_collation_v2_REQUIRED_ARGC, sqlite3_create_collation_v2_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_create_function_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_create_function", mrb_SQLite_sqlite3_create_function, MRB_ARGS_ARG(sqlite3_create_function_REQUIRED_ARGC, sqlite3_create_function_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_create_function16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_create_function16", mrb_SQLite_sqlite3_create_function16, MRB_ARGS_ARG(sqlite3_create_function16_REQUIRED_ARGC, sqlite3_create_function16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_create_function_v2_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_create_function_v2", mrb_SQLite_sqlite3_create_function_v2, MRB_ARGS_ARG(sqlite3_create_function_v2_REQUIRED_ARGC, sqlite3_create_function_v2_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_create_module_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_create_module", mrb_SQLite_sqlite3_create_module, MRB_ARGS_ARG(sqlite3_create_module_REQUIRED_ARGC, sqlite3_create_module_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_create_module_v2_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_create_module_v2", mrb_SQLite_sqlite3_create_module_v2, MRB_ARGS_ARG(sqlite3_create_module_v2_REQUIRED_ARGC, sqlite3_create_module_v2_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_data_count_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_data_count", mrb_SQLite_sqlite3_data_count, MRB_ARGS_ARG(sqlite3_data_count_REQUIRED_ARGC, sqlite3_data_count_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_db_config_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_db_config", mrb_SQLite_sqlite3_db_config, MRB_ARGS_ARG(sqlite3_db_config_REQUIRED_ARGC, sqlite3_db_config_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_db_filename_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_db_filename", mrb_SQLite_sqlite3_db_filename, MRB_ARGS_ARG(sqlite3_db_filename_REQUIRED_ARGC, sqlite3_db_filename_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_db_handle_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_db_handle", mrb_SQLite_sqlite3_db_handle, MRB_ARGS_ARG(sqlite3_db_handle_REQUIRED_ARGC, sqlite3_db_handle_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_db_mutex_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_db_mutex", mrb_SQLite_sqlite3_db_mutex, MRB_ARGS_ARG(sqlite3_db_mutex_REQUIRED_ARGC, sqlite3_db_mutex_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_db_readonly_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_db_readonly", mrb_SQLite_sqlite3_db_readonly, MRB_ARGS_ARG(sqlite3_db_readonly_REQUIRED_ARGC, sqlite3_db_readonly_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_db_release_memory_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_db_release_memory", mrb_SQLite_sqlite3_db_release_memory, MRB_ARGS_ARG(sqlite3_db_release_memory_REQUIRED_ARGC, sqlite3_db_release_memory_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_db_status_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_db_status", mrb_SQLite_sqlite3_db_status, MRB_ARGS_ARG(sqlite3_db_status_REQUIRED_ARGC, sqlite3_db_status_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_declare_vtab_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_declare_vtab", mrb_SQLite_sqlite3_declare_vtab, MRB_ARGS_ARG(sqlite3_declare_vtab_REQUIRED_ARGC, sqlite3_declare_vtab_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_enable_load_extension_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_enable_load_extension", mrb_SQLite_sqlite3_enable_load_extension, MRB_ARGS_ARG(sqlite3_enable_load_extension_REQUIRED_ARGC, sqlite3_enable_load_extension_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_enable_shared_cache_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_enable_shared_cache", mrb_SQLite_sqlite3_enable_shared_cache, MRB_ARGS_ARG(sqlite3_enable_shared_cache_REQUIRED_ARGC, sqlite3_enable_shared_cache_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_errcode_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_errcode", mrb_SQLite_sqlite3_errcode, MRB_ARGS_ARG(sqlite3_errcode_REQUIRED_ARGC, sqlite3_errcode_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_errmsg_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_errmsg", mrb_SQLite_sqlite3_errmsg, MRB_ARGS_ARG(sqlite3_errmsg_REQUIRED_ARGC, sqlite3_errmsg_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_errmsg16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_errmsg16", mrb_SQLite_sqlite3_errmsg16, MRB_ARGS_ARG(sqlite3_errmsg16_REQUIRED_ARGC, sqlite3_errmsg16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_errstr_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_errstr", mrb_SQLite_sqlite3_errstr, MRB_ARGS_ARG(sqlite3_errstr_REQUIRED_ARGC, sqlite3_errstr_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_exec_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_exec", mrb_SQLite_sqlite3_exec, MRB_ARGS_ARG(sqlite3_exec_REQUIRED_ARGC, sqlite3_exec_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_expired_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_expired", mrb_SQLite_sqlite3_expired, MRB_ARGS_ARG(sqlite3_expired_REQUIRED_ARGC, sqlite3_expired_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_extended_errcode_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_extended_errcode", mrb_SQLite_sqlite3_extended_errcode, MRB_ARGS_ARG(sqlite3_extended_errcode_REQUIRED_ARGC, sqlite3_extended_errcode_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_extended_result_codes_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_extended_result_codes", mrb_SQLite_sqlite3_extended_result_codes, MRB_ARGS_ARG(sqlite3_extended_result_codes_REQUIRED_ARGC, sqlite3_extended_result_codes_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_file_control_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_file_control", mrb_SQLite_sqlite3_file_control, MRB_ARGS_ARG(sqlite3_file_control_REQUIRED_ARGC, sqlite3_file_control_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_finalize_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_finalize", mrb_SQLite_sqlite3_finalize, MRB_ARGS_ARG(sqlite3_finalize_REQUIRED_ARGC, sqlite3_finalize_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_free_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_free", mrb_SQLite_sqlite3_free, MRB_ARGS_ARG(sqlite3_free_REQUIRED_ARGC, sqlite3_free_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_free_table_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_free_table", mrb_SQLite_sqlite3_free_table, MRB_ARGS_ARG(sqlite3_free_table_REQUIRED_ARGC, sqlite3_free_table_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_get_autocommit_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_get_autocommit", mrb_SQLite_sqlite3_get_autocommit, MRB_ARGS_ARG(sqlite3_get_autocommit_REQUIRED_ARGC, sqlite3_get_autocommit_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_get_auxdata_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_get_auxdata", mrb_SQLite_sqlite3_get_auxdata, MRB_ARGS_ARG(sqlite3_get_auxdata_REQUIRED_ARGC, sqlite3_get_auxdata_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_get_table_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_get_table", mrb_SQLite_sqlite3_get_table, MRB_ARGS_ARG(sqlite3_get_table_REQUIRED_ARGC, sqlite3_get_table_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_global_recover_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_global_recover", mrb_SQLite_sqlite3_global_recover, MRB_ARGS_ARG(sqlite3_global_recover_REQUIRED_ARGC, sqlite3_global_recover_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_initialize_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_initialize", mrb_SQLite_sqlite3_initialize, MRB_ARGS_ARG(sqlite3_initialize_REQUIRED_ARGC, sqlite3_initialize_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_interrupt_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_interrupt", mrb_SQLite_sqlite3_interrupt, MRB_ARGS_ARG(sqlite3_interrupt_REQUIRED_ARGC, sqlite3_interrupt_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_last_insert_rowid_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_last_insert_rowid", mrb_SQLite_sqlite3_last_insert_rowid, MRB_ARGS_ARG(sqlite3_last_insert_rowid_REQUIRED_ARGC, sqlite3_last_insert_rowid_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_libversion_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_libversion", mrb_SQLite_sqlite3_libversion, MRB_ARGS_ARG(sqlite3_libversion_REQUIRED_ARGC, sqlite3_libversion_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_libversion_number_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_libversion_number", mrb_SQLite_sqlite3_libversion_number, MRB_ARGS_ARG(sqlite3_libversion_number_REQUIRED_ARGC, sqlite3_libversion_number_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_limit_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_limit", mrb_SQLite_sqlite3_limit, MRB_ARGS_ARG(sqlite3_limit_REQUIRED_ARGC, sqlite3_limit_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_load_extension_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_load_extension", mrb_SQLite_sqlite3_load_extension, MRB_ARGS_ARG(sqlite3_load_extension_REQUIRED_ARGC, sqlite3_load_extension_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_log_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_log", mrb_SQLite_sqlite3_log, MRB_ARGS_ARG(sqlite3_log_REQUIRED_ARGC, sqlite3_log_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_malloc_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_malloc", mrb_SQLite_sqlite3_malloc, MRB_ARGS_ARG(sqlite3_malloc_REQUIRED_ARGC, sqlite3_malloc_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_malloc64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_malloc64", mrb_SQLite_sqlite3_malloc64, MRB_ARGS_ARG(sqlite3_malloc64_REQUIRED_ARGC, sqlite3_malloc64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_memory_alarm_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_memory_alarm", mrb_SQLite_sqlite3_memory_alarm, MRB_ARGS_ARG(sqlite3_memory_alarm_REQUIRED_ARGC, sqlite3_memory_alarm_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_memory_highwater_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_memory_highwater", mrb_SQLite_sqlite3_memory_highwater, MRB_ARGS_ARG(sqlite3_memory_highwater_REQUIRED_ARGC, sqlite3_memory_highwater_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_memory_used_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_memory_used", mrb_SQLite_sqlite3_memory_used, MRB_ARGS_ARG(sqlite3_memory_used_REQUIRED_ARGC, sqlite3_memory_used_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_mprintf_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_mprintf", mrb_SQLite_sqlite3_mprintf, MRB_ARGS_ARG(sqlite3_mprintf_REQUIRED_ARGC, sqlite3_mprintf_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_msize_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_msize", mrb_SQLite_sqlite3_msize, MRB_ARGS_ARG(sqlite3_msize_REQUIRED_ARGC, sqlite3_msize_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_mutex_alloc_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_mutex_alloc", mrb_SQLite_sqlite3_mutex_alloc, MRB_ARGS_ARG(sqlite3_mutex_alloc_REQUIRED_ARGC, sqlite3_mutex_alloc_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_mutex_enter_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_mutex_enter", mrb_SQLite_sqlite3_mutex_enter, MRB_ARGS_ARG(sqlite3_mutex_enter_REQUIRED_ARGC, sqlite3_mutex_enter_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_mutex_free_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_mutex_free", mrb_SQLite_sqlite3_mutex_free, MRB_ARGS_ARG(sqlite3_mutex_free_REQUIRED_ARGC, sqlite3_mutex_free_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_mutex_held_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_mutex_held", mrb_SQLite_sqlite3_mutex_held, MRB_ARGS_ARG(sqlite3_mutex_held_REQUIRED_ARGC, sqlite3_mutex_held_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_mutex_leave_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_mutex_leave", mrb_SQLite_sqlite3_mutex_leave, MRB_ARGS_ARG(sqlite3_mutex_leave_REQUIRED_ARGC, sqlite3_mutex_leave_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_mutex_notheld_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_mutex_notheld", mrb_SQLite_sqlite3_mutex_notheld, MRB_ARGS_ARG(sqlite3_mutex_notheld_REQUIRED_ARGC, sqlite3_mutex_notheld_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_mutex_try_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_mutex_try", mrb_SQLite_sqlite3_mutex_try, MRB_ARGS_ARG(sqlite3_mutex_try_REQUIRED_ARGC, sqlite3_mutex_try_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_next_stmt_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_next_stmt", mrb_SQLite_sqlite3_next_stmt, MRB_ARGS_ARG(sqlite3_next_stmt_REQUIRED_ARGC, sqlite3_next_stmt_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_open_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_open", mrb_SQLite_sqlite3_open, MRB_ARGS_ARG(sqlite3_open_REQUIRED_ARGC, sqlite3_open_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_open16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_open16", mrb_SQLite_sqlite3_open16, MRB_ARGS_ARG(sqlite3_open16_REQUIRED_ARGC, sqlite3_open16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_open_v2_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_open_v2", mrb_SQLite_sqlite3_open_v2, MRB_ARGS_ARG(sqlite3_open_v2_REQUIRED_ARGC, sqlite3_open_v2_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_os_end_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_os_end", mrb_SQLite_sqlite3_os_end, MRB_ARGS_ARG(sqlite3_os_end_REQUIRED_ARGC, sqlite3_os_end_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_os_init_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_os_init", mrb_SQLite_sqlite3_os_init, MRB_ARGS_ARG(sqlite3_os_init_REQUIRED_ARGC, sqlite3_os_init_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_overload_function_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_overload_function", mrb_SQLite_sqlite3_overload_function, MRB_ARGS_ARG(sqlite3_overload_function_REQUIRED_ARGC, sqlite3_overload_function_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_prepare_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_prepare", mrb_SQLite_sqlite3_prepare, MRB_ARGS_ARG(sqlite3_prepare_REQUIRED_ARGC, sqlite3_prepare_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_prepare16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_prepare16", mrb_SQLite_sqlite3_prepare16, MRB_ARGS_ARG(sqlite3_prepare16_REQUIRED_ARGC, sqlite3_prepare16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_prepare16_v2_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_prepare16_v2", mrb_SQLite_sqlite3_prepare16_v2, MRB_ARGS_ARG(sqlite3_prepare16_v2_REQUIRED_ARGC, sqlite3_prepare16_v2_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_prepare_v2_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_prepare_v2", mrb_SQLite_sqlite3_prepare_v2, MRB_ARGS_ARG(sqlite3_prepare_v2_REQUIRED_ARGC, sqlite3_prepare_v2_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_profile_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_profile", mrb_SQLite_sqlite3_profile, MRB_ARGS_ARG(sqlite3_profile_REQUIRED_ARGC, sqlite3_profile_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_progress_handler_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_progress_handler", mrb_SQLite_sqlite3_progress_handler, MRB_ARGS_ARG(sqlite3_progress_handler_REQUIRED_ARGC, sqlite3_progress_handler_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_randomness_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_randomness", mrb_SQLite_sqlite3_randomness, MRB_ARGS_ARG(sqlite3_randomness_REQUIRED_ARGC, sqlite3_randomness_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_realloc_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_realloc", mrb_SQLite_sqlite3_realloc, MRB_ARGS_ARG(sqlite3_realloc_REQUIRED_ARGC, sqlite3_realloc_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_realloc64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_realloc64", mrb_SQLite_sqlite3_realloc64, MRB_ARGS_ARG(sqlite3_realloc64_REQUIRED_ARGC, sqlite3_realloc64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_release_memory_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_release_memory", mrb_SQLite_sqlite3_release_memory, MRB_ARGS_ARG(sqlite3_release_memory_REQUIRED_ARGC, sqlite3_release_memory_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_reset_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_reset", mrb_SQLite_sqlite3_reset, MRB_ARGS_ARG(sqlite3_reset_REQUIRED_ARGC, sqlite3_reset_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_reset_auto_extension_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_reset_auto_extension", mrb_SQLite_sqlite3_reset_auto_extension, MRB_ARGS_ARG(sqlite3_reset_auto_extension_REQUIRED_ARGC, sqlite3_reset_auto_extension_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_blob_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_result_blob", mrb_SQLite_sqlite3_result_blob, MRB_ARGS_ARG(sqlite3_result_blob_REQUIRED_ARGC, sqlite3_result_blob_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_blob64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_result_blob64", mrb_SQLite_sqlite3_result_blob64, MRB_ARGS_ARG(sqlite3_result_blob64_REQUIRED_ARGC, sqlite3_result_blob64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_double_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_result_double", mrb_SQLite_sqlite3_result_double, MRB_ARGS_ARG(sqlite3_result_double_REQUIRED_ARGC, sqlite3_result_double_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_error_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_result_error", mrb_SQLite_sqlite3_result_error, MRB_ARGS_ARG(sqlite3_result_error_REQUIRED_ARGC, sqlite3_result_error_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_error16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_result_error16", mrb_SQLite_sqlite3_result_error16, MRB_ARGS_ARG(sqlite3_result_error16_REQUIRED_ARGC, sqlite3_result_error16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_error_code_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_result_error_code", mrb_SQLite_sqlite3_result_error_code, MRB_ARGS_ARG(sqlite3_result_error_code_REQUIRED_ARGC, sqlite3_result_error_code_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_error_nomem_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_result_error_nomem", mrb_SQLite_sqlite3_result_error_nomem, MRB_ARGS_ARG(sqlite3_result_error_nomem_REQUIRED_ARGC, sqlite3_result_error_nomem_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_error_toobig_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_result_error_toobig", mrb_SQLite_sqlite3_result_error_toobig, MRB_ARGS_ARG(sqlite3_result_error_toobig_REQUIRED_ARGC, sqlite3_result_error_toobig_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_int_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_result_int", mrb_SQLite_sqlite3_result_int, MRB_ARGS_ARG(sqlite3_result_int_REQUIRED_ARGC, sqlite3_result_int_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_int64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_result_int64", mrb_SQLite_sqlite3_result_int64, MRB_ARGS_ARG(sqlite3_result_int64_REQUIRED_ARGC, sqlite3_result_int64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_null_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_result_null", mrb_SQLite_sqlite3_result_null, MRB_ARGS_ARG(sqlite3_result_null_REQUIRED_ARGC, sqlite3_result_null_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_text_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_result_text", mrb_SQLite_sqlite3_result_text, MRB_ARGS_ARG(sqlite3_result_text_REQUIRED_ARGC, sqlite3_result_text_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_text16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_result_text16", mrb_SQLite_sqlite3_result_text16, MRB_ARGS_ARG(sqlite3_result_text16_REQUIRED_ARGC, sqlite3_result_text16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_text16be_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_result_text16be", mrb_SQLite_sqlite3_result_text16be, MRB_ARGS_ARG(sqlite3_result_text16be_REQUIRED_ARGC, sqlite3_result_text16be_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_text16le_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_result_text16le", mrb_SQLite_sqlite3_result_text16le, MRB_ARGS_ARG(sqlite3_result_text16le_REQUIRED_ARGC, sqlite3_result_text16le_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_text64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_result_text64", mrb_SQLite_sqlite3_result_text64, MRB_ARGS_ARG(sqlite3_result_text64_REQUIRED_ARGC, sqlite3_result_text64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_value_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_result_value", mrb_SQLite_sqlite3_result_value, MRB_ARGS_ARG(sqlite3_result_value_REQUIRED_ARGC, sqlite3_result_value_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_zeroblob_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_result_zeroblob", mrb_SQLite_sqlite3_result_zeroblob, MRB_ARGS_ARG(sqlite3_result_zeroblob_REQUIRED_ARGC, sqlite3_result_zeroblob_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_rollback_hook_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_rollback_hook", mrb_SQLite_sqlite3_rollback_hook, MRB_ARGS_ARG(sqlite3_rollback_hook_REQUIRED_ARGC, sqlite3_rollback_hook_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_rtree_geometry_callback_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_rtree_geometry_callback", mrb_SQLite_sqlite3_rtree_geometry_callback, MRB_ARGS_ARG(sqlite3_rtree_geometry_callback_REQUIRED_ARGC, sqlite3_rtree_geometry_callback_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_rtree_query_callback_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_rtree_query_callback", mrb_SQLite_sqlite3_rtree_query_callback, MRB_ARGS_ARG(sqlite3_rtree_query_callback_REQUIRED_ARGC, sqlite3_rtree_query_callback_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_set_authorizer_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_set_authorizer", mrb_SQLite_sqlite3_set_authorizer, MRB_ARGS_ARG(sqlite3_set_authorizer_REQUIRED_ARGC, sqlite3_set_authorizer_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_set_auxdata_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_set_auxdata", mrb_SQLite_sqlite3_set_auxdata, MRB_ARGS_ARG(sqlite3_set_auxdata_REQUIRED_ARGC, sqlite3_set_auxdata_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_shutdown_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_shutdown", mrb_SQLite_sqlite3_shutdown, MRB_ARGS_ARG(sqlite3_shutdown_REQUIRED_ARGC, sqlite3_shutdown_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_sleep_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_sleep", mrb_SQLite_sqlite3_sleep, MRB_ARGS_ARG(sqlite3_sleep_REQUIRED_ARGC, sqlite3_sleep_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_snprintf_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_snprintf", mrb_SQLite_sqlite3_snprintf, MRB_ARGS_ARG(sqlite3_snprintf_REQUIRED_ARGC, sqlite3_snprintf_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_soft_heap_limit_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_soft_heap_limit", mrb_SQLite_sqlite3_soft_heap_limit, MRB_ARGS_ARG(sqlite3_soft_heap_limit_REQUIRED_ARGC, sqlite3_soft_heap_limit_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_soft_heap_limit64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_soft_heap_limit64", mrb_SQLite_sqlite3_soft_heap_limit64, MRB_ARGS_ARG(sqlite3_soft_heap_limit64_REQUIRED_ARGC, sqlite3_soft_heap_limit64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_sourceid_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_sourceid", mrb_SQLite_sqlite3_sourceid, MRB_ARGS_ARG(sqlite3_sourceid_REQUIRED_ARGC, sqlite3_sourceid_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_sql_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_sql", mrb_SQLite_sqlite3_sql, MRB_ARGS_ARG(sqlite3_sql_REQUIRED_ARGC, sqlite3_sql_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_status_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_status", mrb_SQLite_sqlite3_status, MRB_ARGS_ARG(sqlite3_status_REQUIRED_ARGC, sqlite3_status_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_status64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_status64", mrb_SQLite_sqlite3_status64, MRB_ARGS_ARG(sqlite3_status64_REQUIRED_ARGC, sqlite3_status64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_step_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_step", mrb_SQLite_sqlite3_step, MRB_ARGS_ARG(sqlite3_step_REQUIRED_ARGC, sqlite3_step_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_stmt_busy_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_stmt_busy", mrb_SQLite_sqlite3_stmt_busy, MRB_ARGS_ARG(sqlite3_stmt_busy_REQUIRED_ARGC, sqlite3_stmt_busy_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_stmt_readonly_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_stmt_readonly", mrb_SQLite_sqlite3_stmt_readonly, MRB_ARGS_ARG(sqlite3_stmt_readonly_REQUIRED_ARGC, sqlite3_stmt_readonly_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_stmt_scanstatus_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_stmt_scanstatus", mrb_SQLite_sqlite3_stmt_scanstatus, MRB_ARGS_ARG(sqlite3_stmt_scanstatus_REQUIRED_ARGC, sqlite3_stmt_scanstatus_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_stmt_scanstatus_reset_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_stmt_scanstatus_reset", mrb_SQLite_sqlite3_stmt_scanstatus_reset, MRB_ARGS_ARG(sqlite3_stmt_scanstatus_reset_REQUIRED_ARGC, sqlite3_stmt_scanstatus_reset_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_stmt_status_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_stmt_status", mrb_SQLite_sqlite3_stmt_status, MRB_ARGS_ARG(sqlite3_stmt_status_REQUIRED_ARGC, sqlite3_stmt_status_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_strglob_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_strglob", mrb_SQLite_sqlite3_strglob, MRB_ARGS_ARG(sqlite3_strglob_REQUIRED_ARGC, sqlite3_strglob_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_stricmp_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_stricmp", mrb_SQLite_sqlite3_stricmp, MRB_ARGS_ARG(sqlite3_stricmp_REQUIRED_ARGC, sqlite3_stricmp_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_strnicmp_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_strnicmp", mrb_SQLite_sqlite3_strnicmp, MRB_ARGS_ARG(sqlite3_strnicmp_REQUIRED_ARGC, sqlite3_strnicmp_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_table_column_metadata_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_table_column_metadata", mrb_SQLite_sqlite3_table_column_metadata, MRB_ARGS_ARG(sqlite3_table_column_metadata_REQUIRED_ARGC, sqlite3_table_column_metadata_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_test_control_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_test_control", mrb_SQLite_sqlite3_test_control, MRB_ARGS_ARG(sqlite3_test_control_REQUIRED_ARGC, sqlite3_test_control_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_thread_cleanup_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_thread_cleanup", mrb_SQLite_sqlite3_thread_cleanup, MRB_ARGS_ARG(sqlite3_thread_cleanup_REQUIRED_ARGC, sqlite3_thread_cleanup_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_threadsafe_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_threadsafe", mrb_SQLite_sqlite3_threadsafe, MRB_ARGS_ARG(sqlite3_threadsafe_REQUIRED_ARGC, sqlite3_threadsafe_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_total_changes_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_total_changes", mrb_SQLite_sqlite3_total_changes, MRB_ARGS_ARG(sqlite3_total_changes_REQUIRED_ARGC, sqlite3_total_changes_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_trace_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_trace", mrb_SQLite_sqlite3_trace, MRB_ARGS_ARG(sqlite3_trace_REQUIRED_ARGC, sqlite3_trace_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_transfer_bindings_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_transfer_bindings", mrb_SQLite_sqlite3_transfer_bindings, MRB_ARGS_ARG(sqlite3_transfer_bindings_REQUIRED_ARGC, sqlite3_transfer_bindings_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_unlock_notify_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_unlock_notify", mrb_SQLite_sqlite3_unlock_notify, MRB_ARGS_ARG(sqlite3_unlock_notify_REQUIRED_ARGC, sqlite3_unlock_notify_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_update_hook_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_update_hook", mrb_SQLite_sqlite3_update_hook, MRB_ARGS_ARG(sqlite3_update_hook_REQUIRED_ARGC, sqlite3_update_hook_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_uri_boolean_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_uri_boolean", mrb_SQLite_sqlite3_uri_boolean, MRB_ARGS_ARG(sqlite3_uri_boolean_REQUIRED_ARGC, sqlite3_uri_boolean_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_uri_int64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_uri_int64", mrb_SQLite_sqlite3_uri_int64, MRB_ARGS_ARG(sqlite3_uri_int64_REQUIRED_ARGC, sqlite3_uri_int64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_uri_parameter_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_uri_parameter", mrb_SQLite_sqlite3_uri_parameter, MRB_ARGS_ARG(sqlite3_uri_parameter_REQUIRED_ARGC, sqlite3_uri_parameter_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_user_data_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_user_data", mrb_SQLite_sqlite3_user_data, MRB_ARGS_ARG(sqlite3_user_data_REQUIRED_ARGC, sqlite3_user_data_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_blob_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_value_blob", mrb_SQLite_sqlite3_value_blob, MRB_ARGS_ARG(sqlite3_value_blob_REQUIRED_ARGC, sqlite3_value_blob_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_bytes_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_value_bytes", mrb_SQLite_sqlite3_value_bytes, MRB_ARGS_ARG(sqlite3_value_bytes_REQUIRED_ARGC, sqlite3_value_bytes_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_bytes16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_value_bytes16", mrb_SQLite_sqlite3_value_bytes16, MRB_ARGS_ARG(sqlite3_value_bytes16_REQUIRED_ARGC, sqlite3_value_bytes16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_double_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_value_double", mrb_SQLite_sqlite3_value_double, MRB_ARGS_ARG(sqlite3_value_double_REQUIRED_ARGC, sqlite3_value_double_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_int_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_value_int", mrb_SQLite_sqlite3_value_int, MRB_ARGS_ARG(sqlite3_value_int_REQUIRED_ARGC, sqlite3_value_int_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_int64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_value_int64", mrb_SQLite_sqlite3_value_int64, MRB_ARGS_ARG(sqlite3_value_int64_REQUIRED_ARGC, sqlite3_value_int64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_numeric_type_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_value_numeric_type", mrb_SQLite_sqlite3_value_numeric_type, MRB_ARGS_ARG(sqlite3_value_numeric_type_REQUIRED_ARGC, sqlite3_value_numeric_type_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_text_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_value_text", mrb_SQLite_sqlite3_value_text, MRB_ARGS_ARG(sqlite3_value_text_REQUIRED_ARGC, sqlite3_value_text_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_text16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_value_text16", mrb_SQLite_sqlite3_value_text16, MRB_ARGS_ARG(sqlite3_value_text16_REQUIRED_ARGC, sqlite3_value_text16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_text16be_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_value_text16be", mrb_SQLite_sqlite3_value_text16be, MRB_ARGS_ARG(sqlite3_value_text16be_REQUIRED_ARGC, sqlite3_value_text16be_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_text16le_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_value_text16le", mrb_SQLite_sqlite3_value_text16le, MRB_ARGS_ARG(sqlite3_value_text16le_REQUIRED_ARGC, sqlite3_value_text16le_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_type_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_value_type", mrb_SQLite_sqlite3_value_type, MRB_ARGS_ARG(sqlite3_value_type_REQUIRED_ARGC, sqlite3_value_type_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_vfs_find_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_vfs_find", mrb_SQLite_sqlite3_vfs_find, MRB_ARGS_ARG(sqlite3_vfs_find_REQUIRED_ARGC, sqlite3_vfs_find_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_vfs_register_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_vfs_register", mrb_SQLite_sqlite3_vfs_register, MRB_ARGS_ARG(sqlite3_vfs_register_REQUIRED_ARGC, sqlite3_vfs_register_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_vfs_unregister_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_vfs_unregister", mrb_SQLite_sqlite3_vfs_unregister, MRB_ARGS_ARG(sqlite3_vfs_unregister_REQUIRED_ARGC, sqlite3_vfs_unregister_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_vmprintf_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_vmprintf", mrb_SQLite_sqlite3_vmprintf, MRB_ARGS_ARG(sqlite3_vmprintf_REQUIRED_ARGC, sqlite3_vmprintf_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_vsnprintf_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_vsnprintf", mrb_SQLite_sqlite3_vsnprintf, MRB_ARGS_ARG(sqlite3_vsnprintf_REQUIRED_ARGC, sqlite3_vsnprintf_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_vtab_config_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_vtab_config", mrb_SQLite_sqlite3_vtab_config, MRB_ARGS_ARG(sqlite3_vtab_config_REQUIRED_ARGC, sqlite3_vtab_config_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_vtab_on_conflict_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_vtab_on_conflict", mrb_SQLite_sqlite3_vtab_on_conflict, MRB_ARGS_ARG(sqlite3_vtab_on_conflict_REQUIRED_ARGC, sqlite3_vtab_on_conflict_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_wal_autocheckpoint_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_wal_autocheckpoint", mrb_SQLite_sqlite3_wal_autocheckpoint, MRB_ARGS_ARG(sqlite3_wal_autocheckpoint_REQUIRED_ARGC, sqlite3_wal_autocheckpoint_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_wal_checkpoint_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_wal_checkpoint", mrb_SQLite_sqlite3_wal_checkpoint, MRB_ARGS_ARG(sqlite3_wal_checkpoint_REQUIRED_ARGC, sqlite3_wal_checkpoint_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_wal_checkpoint_v2_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_wal_checkpoint_v2", mrb_SQLite_sqlite3_wal_checkpoint_v2, MRB_ARGS_ARG(sqlite3_wal_checkpoint_v2_REQUIRED_ARGC, sqlite3_wal_checkpoint_v2_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_wal_hook_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sqlite3_wal_hook", mrb_SQLite_sqlite3_wal_hook, MRB_ARGS_ARG(sqlite3_wal_hook_REQUIRED_ARGC, sqlite3_wal_hook_OPTIONAL_ARGC));
#endif

}

void mrb_mruby_sqlite_gem_final(mrb_state* mrb){

}

#ifdef __cplusplus
}
#endif
