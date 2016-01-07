#include "mruby_SQLite.h"

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

#ifdef __cplusplus
extern "C" {
#endif

/* MRUBY_BINDING: sqlite3_aggregate_context */
/* sha: 52286965d7110e78323f823340ab3703404b3215dbf7ab310c567b4328dcd670 */
#if BIND_sqlite3_aggregate_context_FUNCTION
#define sqlite3_aggregate_context_REQUIRED_ARGC 2
#define sqlite3_aggregate_context_OPTIONAL_ARGC 0
/* sqlite3_aggregate_context
 *
 * Parameters:
 * - arg1: sqlite3_context *
 * - nBytes: int
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_aggregate_context(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_nBytes;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_nBytes);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Invocation */
  void * native_return_value = sqlite3_aggregate_context(native_arg1, native_nBytes);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_aggregate_count */
/* sha: 534339078746c7c481db4f7d6cd36e5d5b9e741b6f95f2fde107efbf708149cd */
#if BIND_sqlite3_aggregate_count_FUNCTION
#define sqlite3_aggregate_count_REQUIRED_ARGC 1
#define sqlite3_aggregate_count_OPTIONAL_ARGC 0
/* sqlite3_aggregate_count
 *
 * Parameters:
 * - arg1: sqlite3_context *
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

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Invocation */
  int native_return_value = sqlite3_aggregate_count(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_auto_extension */
/* sha: 25d84afb7c9f58cef3126a0e8558a2ea373b8d6b5917035179e4220a621dea8f */
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

  /* Unbox param: xEntryPoint */
  void (*native_xEntryPoint)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(xEntryPoint);

  /* Invocation */
  int native_return_value = sqlite3_auto_extension(native_xEntryPoint);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_backup_finish */
/* sha: c6185c3db583ea5b6e61c7fc0a4da78ef86017d22dfe9646744ef0ce4a972699 */
#if BIND_sqlite3_backup_finish_FUNCTION
#define sqlite3_backup_finish_REQUIRED_ARGC 1
#define sqlite3_backup_finish_OPTIONAL_ARGC 0
/* sqlite3_backup_finish
 *
 * Parameters:
 * - p: sqlite3_backup *
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

  /* Unbox param: p */
  sqlite3_backup * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_sqlite3_backup(p));

  /* Invocation */
  int native_return_value = sqlite3_backup_finish(native_p);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_backup_init */
/* sha: 2d66e3a9667bc968357fab66d24265a3fb77a30fd907c3cca5757cc5a56d7340 */
#if BIND_sqlite3_backup_init_FUNCTION
#define sqlite3_backup_init_REQUIRED_ARGC 4
#define sqlite3_backup_init_OPTIONAL_ARGC 0
/* sqlite3_backup_init
 *
 * Parameters:
 * - pDest: sqlite3 *
 * - zDestName: const char *
 * - pSource: sqlite3 *
 * - zSourceName: const char *
 * Return Type: sqlite3_backup *
 */
mrb_value
mrb_SQLite_sqlite3_backup_init(mrb_state* mrb, mrb_value self) {
  mrb_value pDest;
  char * native_zDestName = NULL;
  mrb_value pSource;
  char * native_zSourceName = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozoz", &pDest, &native_zDestName, &pSource, &native_zSourceName);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pDest, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pSource, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }

  /* Unbox param: pDest */
  sqlite3 * native_pDest = (mrb_nil_p(pDest) ? NULL : mruby_unbox_sqlite3(pDest));

  /* Unbox param: pSource */
  sqlite3 * native_pSource = (mrb_nil_p(pSource) ? NULL : mruby_unbox_sqlite3(pSource));

  /* Invocation */
  sqlite3_backup * native_return_value = sqlite3_backup_init(native_pDest, native_zDestName, native_pSource, native_zSourceName);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_sqlite3_backup(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_backup_pagecount */
/* sha: d5e8a78f87a73449eb62727a9dc1035d831e9c44861b57d908037db1a331faef */
#if BIND_sqlite3_backup_pagecount_FUNCTION
#define sqlite3_backup_pagecount_REQUIRED_ARGC 1
#define sqlite3_backup_pagecount_OPTIONAL_ARGC 0
/* sqlite3_backup_pagecount
 *
 * Parameters:
 * - p: sqlite3_backup *
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

  /* Unbox param: p */
  sqlite3_backup * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_sqlite3_backup(p));

  /* Invocation */
  int native_return_value = sqlite3_backup_pagecount(native_p);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_backup_remaining */
/* sha: e4c50849e4846d8d167cb712348e4fa2b42bc64d1287269274e6e8ca7dd051cb */
#if BIND_sqlite3_backup_remaining_FUNCTION
#define sqlite3_backup_remaining_REQUIRED_ARGC 1
#define sqlite3_backup_remaining_OPTIONAL_ARGC 0
/* sqlite3_backup_remaining
 *
 * Parameters:
 * - p: sqlite3_backup *
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

  /* Unbox param: p */
  sqlite3_backup * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_sqlite3_backup(p));

  /* Invocation */
  int native_return_value = sqlite3_backup_remaining(native_p);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_backup_step */
/* sha: 8fe40cd2c805f42bb4e615a2ed9fbe76582c52cbb180414c360eff9af4d2cb9f */
#if BIND_sqlite3_backup_step_FUNCTION
#define sqlite3_backup_step_REQUIRED_ARGC 2
#define sqlite3_backup_step_OPTIONAL_ARGC 0
/* sqlite3_backup_step
 *
 * Parameters:
 * - p: sqlite3_backup *
 * - nPage: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_backup_step(mrb_state* mrb, mrb_value self) {
  mrb_value p;
  mrb_int native_nPage;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &p, &native_nPage);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, p, Sqlite3Backup_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Backup expected");
    return mrb_nil_value();
  }

  /* Unbox param: p */
  sqlite3_backup * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_sqlite3_backup(p));

  /* Invocation */
  int native_return_value = sqlite3_backup_step(native_p, native_nPage);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_bind_blob */
/* sha: 531b26f1ede6bea7f57a0d5e15b91a269579a6682a2bdc82bcad4f446673c798 */
#if BIND_sqlite3_bind_blob_FUNCTION
#define sqlite3_bind_blob_REQUIRED_ARGC 4
#define sqlite3_bind_blob_OPTIONAL_ARGC 0
/* sqlite3_bind_blob
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - arg2: int
 * - arg3: const void *
 * - n: int
 * - arg5: void (*)(void *)
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_blob(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;
  mrb_value arg3;
  mrb_int native_n = 0;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "oiSi", &arg1, &native_arg2, &arg3, &native_n);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Unbox param: arg3 */
  void * native_arg3 = RSTRING_PTR(arg3);

  /* Unbox param: arg5 */
  void * native_arg5 = NULL; /* Unused parameter */

  /* Invocation */
  int native_return_value = sqlite3_bind_blob(native_arg1, native_arg2, native_arg3, native_n, native_arg5);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_bind_blob64 */
/* sha: 55580bf963b89243eac63d89a39a833cb526e8e51f7cf4587cb5fb8432b72941 */
#if BIND_sqlite3_bind_blob64_FUNCTION
#define sqlite3_bind_blob64_REQUIRED_ARGC 5
#define sqlite3_bind_blob64_OPTIONAL_ARGC 0
/* sqlite3_bind_blob64
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - arg2: int
 * - arg3: const void *
 * - arg4: sqlite3_uint64
 * - arg5: void (*)(void *)
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_blob64(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;
  mrb_value arg3;
  mrb_int native_arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "oioio", &arg1, &native_arg2, &arg3, &native_arg4, &arg5);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg3);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg5);

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Unbox param: arg3 */
  const void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  /* Unbox param: arg5 */
  void (*native_arg5)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg5);

  /* Invocation */
  int native_return_value = sqlite3_bind_blob64(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_bind_double */
/* sha: fddecc3656cac20dc01a2a55199f89174d85b9ade123c58b695474f67db024cb */
#if BIND_sqlite3_bind_double_FUNCTION
#define sqlite3_bind_double_REQUIRED_ARGC 3
#define sqlite3_bind_double_OPTIONAL_ARGC 0
/* sqlite3_bind_double
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - arg2: int
 * - arg3: double
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_double(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;
  mrb_float native_arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "oif", &arg1, &native_arg2, &native_arg3);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  int native_return_value = sqlite3_bind_double(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_bind_int */
/* sha: 6cb11570b0ae42afcd4a2c9f61bacf5b68b30c2b2c6946a2609adad8c8ff5686 */
#if BIND_sqlite3_bind_int_FUNCTION
#define sqlite3_bind_int_REQUIRED_ARGC 3
#define sqlite3_bind_int_OPTIONAL_ARGC 0
/* sqlite3_bind_int
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - arg2: int
 * - arg3: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_int(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;
  mrb_int native_arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "oii", &arg1, &native_arg2, &native_arg3);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  int native_return_value = sqlite3_bind_int(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_bind_int64 */
/* sha: a72cb424e4c61b9f05bb13f6c371832119e1fc25620f7da1d00f6499ed32a3f4 */
#if BIND_sqlite3_bind_int64_FUNCTION
#define sqlite3_bind_int64_REQUIRED_ARGC 3
#define sqlite3_bind_int64_OPTIONAL_ARGC 0
/* sqlite3_bind_int64
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - arg2: int
 * - arg3: sqlite3_int64
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_int64(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;
  mrb_int native_arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "oii", &arg1, &native_arg2, &native_arg3);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  int native_return_value = sqlite3_bind_int64(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_bind_null */
/* sha: 0d8df68831f725f77509e098a860502b7c39f02337de6b101ba788c7e2524dec */
#if BIND_sqlite3_bind_null_FUNCTION
#define sqlite3_bind_null_REQUIRED_ARGC 2
#define sqlite3_bind_null_OPTIONAL_ARGC 0
/* sqlite3_bind_null
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - arg2: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_null(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_arg2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  int native_return_value = sqlite3_bind_null(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_bind_parameter_count */
/* sha: a95fa3264742bf9d74c401c25a2f1aac1cac2aeb1d206afcc37b0abdcc4b11f5 */
#if BIND_sqlite3_bind_parameter_count_FUNCTION
#define sqlite3_bind_parameter_count_REQUIRED_ARGC 1
#define sqlite3_bind_parameter_count_OPTIONAL_ARGC 0
/* sqlite3_bind_parameter_count
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
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

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  int native_return_value = sqlite3_bind_parameter_count(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_bind_parameter_index */
/* sha: 84199d7bb060fc2342358f06c6af5370852997a31961639d3ebf3639d3945817 */
#if BIND_sqlite3_bind_parameter_index_FUNCTION
#define sqlite3_bind_parameter_index_REQUIRED_ARGC 2
#define sqlite3_bind_parameter_index_OPTIONAL_ARGC 0
/* sqlite3_bind_parameter_index
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - zName: const char *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_parameter_index(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  char * native_zName = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &arg1, &native_zName);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  int native_return_value = sqlite3_bind_parameter_index(native_arg1, native_zName);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_bind_parameter_name */
/* sha: 3f21ca4bd1c1b81bf34f0a008efd21a854aad59e8555c2d5cab6e619a77756d2 */
#if BIND_sqlite3_bind_parameter_name_FUNCTION
#define sqlite3_bind_parameter_name_REQUIRED_ARGC 2
#define sqlite3_bind_parameter_name_OPTIONAL_ARGC 0
/* sqlite3_bind_parameter_name
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - arg2: int
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_sqlite3_bind_parameter_name(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_arg2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  const char * native_return_value = sqlite3_bind_parameter_name(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_bind_text */
/* sha: dea5ee78405358753bd4e00816263ad7da2d1dd292646b3670af6553471012ea */
#if BIND_sqlite3_bind_text_FUNCTION
#define sqlite3_bind_text_REQUIRED_ARGC 4
#define sqlite3_bind_text_OPTIONAL_ARGC 0
/* sqlite3_bind_text
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - arg2: int
 * - arg3: const char *
 * - arg4: int
 * - arg5: void (*)(void *)
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_text(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;
  char * native_arg3 = NULL;
  mrb_int native_arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oiz!i", &arg1, &native_arg2, &native_arg3, &native_arg4);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Unbox param: arg5 */
  void * native_arg5 = NULL; /* Unused parameter */

  /* Invocation */
  int native_return_value = sqlite3_bind_text(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_bind_text16 */
/* sha: 946c3bc7be0b9ca061039e79bb3c883110b01130713a575a004e9a867dd2ef69 */
#if BIND_sqlite3_bind_text16_FUNCTION
#define sqlite3_bind_text16_REQUIRED_ARGC 5
#define sqlite3_bind_text16_OPTIONAL_ARGC 0
/* sqlite3_bind_text16
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - arg2: int
 * - arg3: const void *
 * - arg4: int
 * - arg5: void (*)(void *)
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_text16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;
  mrb_value arg3;
  mrb_int native_arg4;
  mrb_value arg5;

  /* Fetch the args */
  mrb_get_args(mrb, "oioio", &arg1, &native_arg2, &arg3, &native_arg4, &arg5);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg3);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg5);

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Unbox param: arg3 */
  const void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  /* Unbox param: arg5 */
  void (*native_arg5)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg5);

  /* Invocation */
  int native_return_value = sqlite3_bind_text16(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_bind_text64 */
/* sha: 38775bc32e9a0b9ebc110e8ea13bb83023e114822657f64eab49764fb999671c */
#if BIND_sqlite3_bind_text64_FUNCTION
#define sqlite3_bind_text64_REQUIRED_ARGC 6
#define sqlite3_bind_text64_OPTIONAL_ARGC 0
/* sqlite3_bind_text64
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - arg2: int
 * - arg3: const char *
 * - arg4: sqlite3_uint64
 * - arg5: void (*)(void *)
 * - encoding: unsigned char
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_text64(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;
  char * native_arg3 = NULL;
  mrb_int native_arg4;
  mrb_value arg5;
  mrb_int native_encoding;

  /* Fetch the args */
  mrb_get_args(mrb, "oizioi", &arg1, &native_arg2, &native_arg3, &native_arg4, &arg5, &native_encoding);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg5);

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Unbox param: arg5 */
  void (*native_arg5)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg5);

  /* Invocation */
  int native_return_value = sqlite3_bind_text64(native_arg1, native_arg2, native_arg3, native_arg4, native_arg5, native_encoding);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_bind_value */
/* sha: 0af2a5607cabfd484d72cde13bacc68d866c62d75e018f831936fbbc0e51659c */
#if BIND_sqlite3_bind_value_FUNCTION
#define sqlite3_bind_value_REQUIRED_ARGC 3
#define sqlite3_bind_value_OPTIONAL_ARGC 0
/* sqlite3_bind_value
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - arg2: int
 * - arg3: const sqlite3_value *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_value(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "oio", &arg1, &native_arg2, &arg3);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, arg3, Mem_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Mem expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Unbox param: arg3 */
  const sqlite3_value * native_arg3 = (mrb_nil_p(arg3) ? NULL : mruby_unbox_Mem(arg3));

  /* Invocation */
  int native_return_value = sqlite3_bind_value(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_bind_zeroblob */
/* sha: dfbe671ed51d41e0d29d32142866be872532339b09919bbcc54b3fc3cef2789d */
#if BIND_sqlite3_bind_zeroblob_FUNCTION
#define sqlite3_bind_zeroblob_REQUIRED_ARGC 3
#define sqlite3_bind_zeroblob_OPTIONAL_ARGC 0
/* sqlite3_bind_zeroblob
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - arg2: int
 * - n: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_bind_zeroblob(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;
  mrb_int native_n;

  /* Fetch the args */
  mrb_get_args(mrb, "oii", &arg1, &native_arg2, &native_n);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  int native_return_value = sqlite3_bind_zeroblob(native_arg1, native_arg2, native_n);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_blob_bytes */
/* sha: aa45d55dcc7f94fc5a452ca002fe89b240dc14164e72da20a84dd0a669054ba9 */
#if BIND_sqlite3_blob_bytes_FUNCTION
#define sqlite3_blob_bytes_REQUIRED_ARGC 1
#define sqlite3_blob_bytes_OPTIONAL_ARGC 0
/* sqlite3_blob_bytes
 *
 * Parameters:
 * - arg1: sqlite3_blob *
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

  /* Unbox param: arg1 */
  sqlite3_blob * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_blob(arg1));

  /* Invocation */
  int native_return_value = sqlite3_blob_bytes(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_blob_close */
/* sha: 2d6c969a80697051bfd7652e36c9d9a97b6231fd2b9c54510cf4b90c5f2dde17 */
#if BIND_sqlite3_blob_close_FUNCTION
#define sqlite3_blob_close_REQUIRED_ARGC 1
#define sqlite3_blob_close_OPTIONAL_ARGC 0
/* sqlite3_blob_close
 *
 * Parameters:
 * - arg1: sqlite3_blob *
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

  /* Unbox param: arg1 */
  sqlite3_blob * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_blob(arg1));

  /* Invocation */
  int native_return_value = sqlite3_blob_close(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_blob_open */
/* sha: 06ec8887146bea86d5ef67e168f6eb18f70423136831a2bad4700e567f5424a4 */
#if BIND_sqlite3_blob_open_FUNCTION
#define sqlite3_blob_open_REQUIRED_ARGC 7
#define sqlite3_blob_open_OPTIONAL_ARGC 0
/* sqlite3_blob_open
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - zDb: const char *
 * - zTable: const char *
 * - zColumn: const char *
 * - iRow: sqlite3_int64
 * - flags: int
 * - ppBlob: sqlite3_blob **
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_blob_open(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  char * native_zDb = NULL;
  char * native_zTable = NULL;
  char * native_zColumn = NULL;
  mrb_int native_iRow;
  mrb_int native_flags;
  mrb_value ppBlob;

  /* Fetch the args */
  mrb_get_args(mrb, "ozzziio", &arg1, &native_zDb, &native_zTable, &native_zColumn, &native_iRow, &native_flags, &ppBlob);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_sqlite3_blob_PTR_PTR(ppBlob);

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Unbox param: ppBlob */
  sqlite3_blob ** native_ppBlob = TODO_mruby_unbox_sqlite3_blob_PTR_PTR(ppBlob);

  /* Invocation */
  int native_return_value = sqlite3_blob_open(native_arg1, native_zDb, native_zTable, native_zColumn, native_iRow, native_flags, native_ppBlob);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_blob_read */
/* sha: de88daa3c2e7e11f53e9d872384b691d1468aa4bc9cc5b2a40aff11fef8676ff */
#if BIND_sqlite3_blob_read_FUNCTION
#define sqlite3_blob_read_REQUIRED_ARGC 4
#define sqlite3_blob_read_OPTIONAL_ARGC 0
/* sqlite3_blob_read
 *
 * Parameters:
 * - arg1: sqlite3_blob *
 * - Z: void *
 * - N: int
 * - iOffset: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_blob_read(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value Z;
  mrb_int native_N;
  mrb_int native_iOffset;

  /* Fetch the args */
  mrb_get_args(mrb, "ooii", &arg1, &Z, &native_N, &native_iOffset);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Blob expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(Z);

  /* Unbox param: arg1 */
  sqlite3_blob * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_blob(arg1));

  /* Unbox param: Z */
  void * native_Z = TODO_mruby_unbox_void_PTR(Z);

  /* Invocation */
  int native_return_value = sqlite3_blob_read(native_arg1, native_Z, native_N, native_iOffset);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_blob_reopen */
/* sha: 4eb006e6f6e128c10230313ce406327b35070451faa19d1629cd1d2b604b6475 */
#if BIND_sqlite3_blob_reopen_FUNCTION
#define sqlite3_blob_reopen_REQUIRED_ARGC 2
#define sqlite3_blob_reopen_OPTIONAL_ARGC 0
/* sqlite3_blob_reopen
 *
 * Parameters:
 * - arg1: sqlite3_blob *
 * - arg2: sqlite3_int64
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_blob_reopen(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_arg2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Blob expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_blob * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_blob(arg1));

  /* Invocation */
  int native_return_value = sqlite3_blob_reopen(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_blob_write */
/* sha: 8000d71627f3591451474f2059e69da07c4e2eeccaad62c1c2300804e35eb9a3 */
#if BIND_sqlite3_blob_write_FUNCTION
#define sqlite3_blob_write_REQUIRED_ARGC 4
#define sqlite3_blob_write_OPTIONAL_ARGC 0
/* sqlite3_blob_write
 *
 * Parameters:
 * - arg1: sqlite3_blob *
 * - z: const void *
 * - n: int
 * - iOffset: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_blob_write(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value z;
  mrb_int native_n;
  mrb_int native_iOffset;

  /* Fetch the args */
  mrb_get_args(mrb, "ooii", &arg1, &z, &native_n, &native_iOffset);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Blob expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(z);

  /* Unbox param: arg1 */
  sqlite3_blob * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_blob(arg1));

  /* Unbox param: z */
  const void * native_z = TODO_mruby_unbox_void_PTR(z);

  /* Invocation */
  int native_return_value = sqlite3_blob_write(native_arg1, native_z, native_n, native_iOffset);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_busy_handler */
/* sha: 4bb74a6f158dd2ae0d7256b6caafd3aa50755dd7a20cfc9a474a3993bae32f58 */
#if BIND_sqlite3_busy_handler_FUNCTION
#define sqlite3_busy_handler_REQUIRED_ARGC 3
#define sqlite3_busy_handler_OPTIONAL_ARGC 0
/* sqlite3_busy_handler
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - arg2: int (*)(void *, int)
 * - arg3: void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_busy_handler(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_int_RPAREN(arg2);
  TODO_type_check_void_PTR(arg3);

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Unbox param: arg2 */
  int (*native_arg2)(void *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_int_RPAREN(arg2);

  /* Unbox param: arg3 */
  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  /* Invocation */
  int native_return_value = sqlite3_busy_handler(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_busy_timeout */
/* sha: 4168bdfb0dc65a873b938b9a047eae53296aec315a65d62fd9fb0a27fbf62329 */
#if BIND_sqlite3_busy_timeout_FUNCTION
#define sqlite3_busy_timeout_REQUIRED_ARGC 2
#define sqlite3_busy_timeout_OPTIONAL_ARGC 0
/* sqlite3_busy_timeout
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - ms: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_busy_timeout(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_ms;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_ms);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  int native_return_value = sqlite3_busy_timeout(native_arg1, native_ms);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_cancel_auto_extension */
/* sha: 8ca4cdcd1b1f8cbb39886c732d4c2f9e9527f00f2eb21fb341362f1fb8651ceb */
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

  /* Unbox param: xEntryPoint */
  void (*native_xEntryPoint)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(xEntryPoint);

  /* Invocation */
  int native_return_value = sqlite3_cancel_auto_extension(native_xEntryPoint);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_changes */
/* sha: 1caf2c4113b01ce86d318c9ceea8f65c88ef7d83b3e6fa0e4fdcaff812cf76f1 */
#if BIND_sqlite3_changes_FUNCTION
#define sqlite3_changes_REQUIRED_ARGC 1
#define sqlite3_changes_OPTIONAL_ARGC 0
/* sqlite3_changes
 *
 * Parameters:
 * - arg1: sqlite3 *
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

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  int native_return_value = sqlite3_changes(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_clear_bindings */
/* sha: 4a5a98f1d1177989cef011be6daeaf11275f109c539dcf3ea112bb2daa973494 */
#if BIND_sqlite3_clear_bindings_FUNCTION
#define sqlite3_clear_bindings_REQUIRED_ARGC 1
#define sqlite3_clear_bindings_OPTIONAL_ARGC 0
/* sqlite3_clear_bindings
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
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

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  int native_return_value = sqlite3_clear_bindings(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_close */
/* sha: 24fac32717225146f7877d217c139d9d70e548e00ea266b701e89d2f4d7d973b */
#if BIND_sqlite3_close_FUNCTION
#define sqlite3_close_REQUIRED_ARGC 1
#define sqlite3_close_OPTIONAL_ARGC 0
/* sqlite3_close
 *
 * Parameters:
 * - arg1: sqlite3 *
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

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  int native_return_value = sqlite3_close(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_close_v2 */
/* sha: 3f87608fb3b913421da50b122d6a4ea08573de9924ed21aa745ab4ba676c03fc */
#if BIND_sqlite3_close_v2_FUNCTION
#define sqlite3_close_v2_REQUIRED_ARGC 1
#define sqlite3_close_v2_OPTIONAL_ARGC 0
/* sqlite3_close_v2
 *
 * Parameters:
 * - arg1: sqlite3 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_close_v2(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  int native_return_value = sqlite3_close_v2(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_collation_needed */
/* sha: 232eb7e783a69add2b412b5d5b58ed8a5a0cadf411b45e95847c6569885f0d84 */
#if BIND_sqlite3_collation_needed_FUNCTION
#define sqlite3_collation_needed_REQUIRED_ARGC 3
#define sqlite3_collation_needed_OPTIONAL_ARGC 0
/* sqlite3_collation_needed
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - arg2: void *
 * - arg3: void (*)(void *, sqlite3 *, int, const char *)
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_collation_needed(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_sqlite3_PTR_COMMA_intCOMMAchar_PTR_RPAREN(arg3);

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Unbox param: arg2 */
  void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  /* Unbox param: arg3 */
  void (*native_arg3)(void *, sqlite3 *, int, const char *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_sqlite3_PTR_COMMA_intCOMMAchar_PTR_RPAREN(arg3);

  /* Invocation */
  int native_return_value = sqlite3_collation_needed(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_collation_needed16 */
/* sha: 0c05b58abb3c769722ec0cfefa188bf53a1e7de2cb28b5c0d15e6cc87bc37634 */
#if BIND_sqlite3_collation_needed16_FUNCTION
#define sqlite3_collation_needed16_REQUIRED_ARGC 3
#define sqlite3_collation_needed16_OPTIONAL_ARGC 0
/* sqlite3_collation_needed16
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - arg2: void *
 * - arg3: void (*)(void *, sqlite3 *, int, const void *)
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_collation_needed16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_sqlite3_PTR_COMMA_intCOMMAvoid_PTR_RPAREN(arg3);

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Unbox param: arg2 */
  void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  /* Unbox param: arg3 */
  void (*native_arg3)(void *, sqlite3 *, int, const void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_sqlite3_PTR_COMMA_intCOMMAvoid_PTR_RPAREN(arg3);

  /* Invocation */
  int native_return_value = sqlite3_collation_needed16(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_column_blob */
/* sha: 26d23e0a86f3c8bf1f72fa9d544a37e5bed5cd957d2db8f29eaa2b0b1a5a5c97 */
#if BIND_sqlite3_column_blob_FUNCTION
#define sqlite3_column_blob_REQUIRED_ARGC 2
#define sqlite3_column_blob_OPTIONAL_ARGC 0
/* sqlite3_column_blob
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - iCol: int
 * Return Type: const void *
 */
mrb_value
mrb_SQLite_sqlite3_column_blob(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_iCol;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_iCol);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  const void * native_return_value = sqlite3_column_blob(native_arg1, native_iCol);

  /* Box the return value */
  int num_bytes = sqlite3_column_bytes(native_arg1, native_iCol);
  mrb_value return_value = mrb_str_new(mrb, (char*)native_return_value, num_bytes);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_column_bytes */
/* sha: 0c8a2123e293cddeb9e758b480c0c92df2fa0963320e76ef2b5e2c24ad56570a */
#if BIND_sqlite3_column_bytes_FUNCTION
#define sqlite3_column_bytes_REQUIRED_ARGC 2
#define sqlite3_column_bytes_OPTIONAL_ARGC 0
/* sqlite3_column_bytes
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - iCol: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_column_bytes(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_iCol;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_iCol);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  int native_return_value = sqlite3_column_bytes(native_arg1, native_iCol);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_column_bytes16 */
/* sha: 7f15c4eb9d3427c5589bf91f4c1043b70bd2aff6b0d126002e31b7c041b7b1bb */
#if BIND_sqlite3_column_bytes16_FUNCTION
#define sqlite3_column_bytes16_REQUIRED_ARGC 2
#define sqlite3_column_bytes16_OPTIONAL_ARGC 0
/* sqlite3_column_bytes16
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - iCol: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_column_bytes16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_iCol;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_iCol);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  int native_return_value = sqlite3_column_bytes16(native_arg1, native_iCol);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_column_count */
/* sha: c4cfc3189e5531132ffb000a7d7fe0f1248e715f8093c6835000d79bd6920cd7 */
#if BIND_sqlite3_column_count_FUNCTION
#define sqlite3_column_count_REQUIRED_ARGC 1
#define sqlite3_column_count_OPTIONAL_ARGC 0
/* sqlite3_column_count
 *
 * Parameters:
 * - pStmt: sqlite3_stmt *
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

  /* Unbox param: pStmt */
  sqlite3_stmt * native_pStmt = (mrb_nil_p(pStmt) ? NULL : mruby_unbox_sqlite3_stmt(pStmt));

  /* Invocation */
  int native_return_value = sqlite3_column_count(native_pStmt);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_column_database_name */
/* sha: a3140aef7b6ca50f905e7cb9e34a03aecd070bbd01d9658e64a7add362e84d2d */
#if BIND_sqlite3_column_database_name_FUNCTION
#define sqlite3_column_database_name_REQUIRED_ARGC 2
#define sqlite3_column_database_name_OPTIONAL_ARGC 0
/* sqlite3_column_database_name
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - arg2: int
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_sqlite3_column_database_name(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_arg2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  const char * native_return_value = sqlite3_column_database_name(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_column_database_name16 */
/* sha: 66cab32fca3c5bf05312cf0b5bcef31bda288c0fab2c5bccbfa8b0fc2b0632f4 */
#if BIND_sqlite3_column_database_name16_FUNCTION
#define sqlite3_column_database_name16_REQUIRED_ARGC 2
#define sqlite3_column_database_name16_OPTIONAL_ARGC 0
/* sqlite3_column_database_name16
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - arg2: int
 * Return Type: const void *
 */
mrb_value
mrb_SQLite_sqlite3_column_database_name16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_arg2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  const void * native_return_value = sqlite3_column_database_name16(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_column_decltype */
/* sha: f5b470dcfad9ebbd0f28d5b71aa6438f4e58d50ea998c5f9bba4d38914612277 */
#if BIND_sqlite3_column_decltype_FUNCTION
#define sqlite3_column_decltype_REQUIRED_ARGC 2
#define sqlite3_column_decltype_OPTIONAL_ARGC 0
/* sqlite3_column_decltype
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - arg2: int
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_sqlite3_column_decltype(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_arg2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  const char * native_return_value = sqlite3_column_decltype(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_column_decltype16 */
/* sha: 57485d84d06e5396f42da86e92b9d0542f31c5bba2e109d8057d912f550cd6d1 */
#if BIND_sqlite3_column_decltype16_FUNCTION
#define sqlite3_column_decltype16_REQUIRED_ARGC 2
#define sqlite3_column_decltype16_OPTIONAL_ARGC 0
/* sqlite3_column_decltype16
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - arg2: int
 * Return Type: const void *
 */
mrb_value
mrb_SQLite_sqlite3_column_decltype16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_arg2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  const void * native_return_value = sqlite3_column_decltype16(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_column_double */
/* sha: 10057ab418a7f6f5c36b232239726f1a597ca40c1247347849c22d47b06be0a9 */
#if BIND_sqlite3_column_double_FUNCTION
#define sqlite3_column_double_REQUIRED_ARGC 2
#define sqlite3_column_double_OPTIONAL_ARGC 0
/* sqlite3_column_double
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - iCol: int
 * Return Type: double
 */
mrb_value
mrb_SQLite_sqlite3_column_double(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_iCol;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_iCol);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  double native_return_value = sqlite3_column_double(native_arg1, native_iCol);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_column_int */
/* sha: 6edc3e4d4d0fd5a5569d910a58a8a95a5c61ee095158f11978a3288c8074fed0 */
#if BIND_sqlite3_column_int_FUNCTION
#define sqlite3_column_int_REQUIRED_ARGC 2
#define sqlite3_column_int_OPTIONAL_ARGC 0
/* sqlite3_column_int
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - iCol: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_column_int(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_iCol;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_iCol);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  int native_return_value = sqlite3_column_int(native_arg1, native_iCol);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_column_int64 */
/* sha: eb4d725e36349a8e67b49f7f8f7fdbca5fdfb418c230a87262792c694e7f94bf */
#if BIND_sqlite3_column_int64_FUNCTION
#define sqlite3_column_int64_REQUIRED_ARGC 2
#define sqlite3_column_int64_OPTIONAL_ARGC 0
/* sqlite3_column_int64
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - iCol: int
 * Return Type: sqlite3_int64
 */
mrb_value
mrb_SQLite_sqlite3_column_int64(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_iCol;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_iCol);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  sqlite3_int64 native_return_value = sqlite3_column_int64(native_arg1, native_iCol);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_column_name */
/* sha: eeafccf478487bf1d5ad9cf3a8f7a63929b00ce035a186e1e31d4da9cdf53161 */
#if BIND_sqlite3_column_name_FUNCTION
#define sqlite3_column_name_REQUIRED_ARGC 2
#define sqlite3_column_name_OPTIONAL_ARGC 0
/* sqlite3_column_name
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - N: int
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_sqlite3_column_name(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_N;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_N);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  const char * native_return_value = sqlite3_column_name(native_arg1, native_N);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_column_name16 */
/* sha: 7aa5f1a676d3740be49a3be4f303606a6e5ca8bb25fb5074a145fe57776baf4a */
#if BIND_sqlite3_column_name16_FUNCTION
#define sqlite3_column_name16_REQUIRED_ARGC 2
#define sqlite3_column_name16_OPTIONAL_ARGC 0
/* sqlite3_column_name16
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - N: int
 * Return Type: const void *
 */
mrb_value
mrb_SQLite_sqlite3_column_name16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_N;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_N);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  const void * native_return_value = sqlite3_column_name16(native_arg1, native_N);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_column_origin_name */
/* sha: 4822ee5eba9e73386a209466fbb747982e33ec3c884cfa6b88744777dc831f01 */
#if BIND_sqlite3_column_origin_name_FUNCTION
#define sqlite3_column_origin_name_REQUIRED_ARGC 2
#define sqlite3_column_origin_name_OPTIONAL_ARGC 0
/* sqlite3_column_origin_name
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - arg2: int
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_sqlite3_column_origin_name(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_arg2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  const char * native_return_value = sqlite3_column_origin_name(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_column_origin_name16 */
/* sha: ce2c15a5401be25d38002f03725eba16dea4e2bd48c38b095375e8ca7e58b1e2 */
#if BIND_sqlite3_column_origin_name16_FUNCTION
#define sqlite3_column_origin_name16_REQUIRED_ARGC 2
#define sqlite3_column_origin_name16_OPTIONAL_ARGC 0
/* sqlite3_column_origin_name16
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - arg2: int
 * Return Type: const void *
 */
mrb_value
mrb_SQLite_sqlite3_column_origin_name16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_arg2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  const void * native_return_value = sqlite3_column_origin_name16(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_column_table_name */
/* sha: 58f33b2274bce4233308061703424a86b4aba9df9b43a33bff25bd75cb35070d */
#if BIND_sqlite3_column_table_name_FUNCTION
#define sqlite3_column_table_name_REQUIRED_ARGC 2
#define sqlite3_column_table_name_OPTIONAL_ARGC 0
/* sqlite3_column_table_name
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - arg2: int
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_sqlite3_column_table_name(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_arg2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  const char * native_return_value = sqlite3_column_table_name(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_column_table_name16 */
/* sha: a5c17f09712bdd4d094dad743e985bcd2b42f45b1f6aca4d44600419d221a619 */
#if BIND_sqlite3_column_table_name16_FUNCTION
#define sqlite3_column_table_name16_REQUIRED_ARGC 2
#define sqlite3_column_table_name16_OPTIONAL_ARGC 0
/* sqlite3_column_table_name16
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - arg2: int
 * Return Type: const void *
 */
mrb_value
mrb_SQLite_sqlite3_column_table_name16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_arg2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  const void * native_return_value = sqlite3_column_table_name16(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_column_text */
/* sha: 416435f1f998d20e3f6c084f53c0fa02b826fd58ae6eadc2947ce454b1867461 */
#if BIND_sqlite3_column_text_FUNCTION
#define sqlite3_column_text_REQUIRED_ARGC 2
#define sqlite3_column_text_OPTIONAL_ARGC 0
/* sqlite3_column_text
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - iCol: int
 * Return Type: const unsigned char *
 */
mrb_value
mrb_SQLite_sqlite3_column_text(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_iCol;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_iCol);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  const unsigned char * native_return_value = sqlite3_column_text(native_arg1, native_iCol);

  /* Box the return value */
  int num_bytes = sqlite3_column_bytes(native_arg1, native_iCol);
  mrb_value return_value = mrb_str_new(mrb, (char*)native_return_value, num_bytes);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_column_text16 */
/* sha: e6fd1bf5c588031f68cc21b767e06ea35de990b12d1df87b1fdff829924742e0 */
#if BIND_sqlite3_column_text16_FUNCTION
#define sqlite3_column_text16_REQUIRED_ARGC 2
#define sqlite3_column_text16_OPTIONAL_ARGC 0
/* sqlite3_column_text16
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - iCol: int
 * Return Type: const void *
 */
mrb_value
mrb_SQLite_sqlite3_column_text16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_iCol;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_iCol);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  const void * native_return_value = sqlite3_column_text16(native_arg1, native_iCol);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_column_type */
/* sha: 231c6410b64dbb65d615f3c1b36d6dae026866e974cb205e6342fd0e59b453d7 */
#if BIND_sqlite3_column_type_FUNCTION
#define sqlite3_column_type_REQUIRED_ARGC 2
#define sqlite3_column_type_OPTIONAL_ARGC 0
/* sqlite3_column_type
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - iCol: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_column_type(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_iCol;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_iCol);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  int native_return_value = sqlite3_column_type(native_arg1, native_iCol);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_column_value */
/* sha: dac20c9faeb79bd55621a7e9628bf6683e56526c8d5b0adccc5442e693782d46 */
#if BIND_sqlite3_column_value_FUNCTION
#define sqlite3_column_value_REQUIRED_ARGC 2
#define sqlite3_column_value_OPTIONAL_ARGC 0
/* sqlite3_column_value
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - iCol: int
 * Return Type: sqlite3_value *
 */
mrb_value
mrb_SQLite_sqlite3_column_value(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_iCol;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_iCol);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  sqlite3_value * native_return_value = sqlite3_column_value(native_arg1, native_iCol);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_Mem(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_commit_hook */
/* sha: f630a6cda8f06f7469c44688823e3c481be004ce598d8ab79ecc234b4b0bd031 */
#if BIND_sqlite3_commit_hook_FUNCTION
#define sqlite3_commit_hook_REQUIRED_ARGC 3
#define sqlite3_commit_hook_OPTIONAL_ARGC 0
/* sqlite3_commit_hook
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - arg2: int (*)(void *)
 * - arg3: void *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_commit_hook(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg2);
  TODO_type_check_void_PTR(arg3);

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Unbox param: arg2 */
  int (*native_arg2)(void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg2);

  /* Unbox param: arg3 */
  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  /* Invocation */
  void * native_return_value = sqlite3_commit_hook(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_compileoption_get */
/* sha: 59b6867142db816d5e6d5ece70921fcfea542455bd533d30724fd657dc7af64d */
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
  mrb_int native_N;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_N);

  /* Invocation */
  const char * native_return_value = sqlite3_compileoption_get(native_N);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_compileoption_used */
/* sha: a70ca6a72de6d2d83a4341e7f91934041caf8ee3b2be10199a0c814844a33de5 */
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
  char * native_zOptName = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_zOptName);

  /* Invocation */
  int native_return_value = sqlite3_compileoption_used(native_zOptName);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_complete */
/* sha: 9ba868ebe24bd5eee6f5d398a964c156d94f427f7aca8c8fdbc4773f0273d637 */
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
  char * native_sql = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_sql);

  /* Invocation */
  int native_return_value = sqlite3_complete(native_sql);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_complete16 */
/* sha: 470b0ca8be5fca4c9ef590eced173edde5ec8bb28504d16c892c407e65ed1de6 */
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

  /* Unbox param: sql */
  const void * native_sql = TODO_mruby_unbox_void_PTR(sql);

  /* Invocation */
  int native_return_value = sqlite3_complete16(native_sql);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_config */
/* sha: d2cddd6016dfe6cb4b367f6da6c4cc29cc7eaec9dca154a2629d0534508f2d12 */
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
  mrb_int native_arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_arg1);

  /* Invocation */
  int native_return_value = sqlite3_config(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_context_db_handle */
/* sha: 34be861cc3cdc8eb9952c6e99a2eb058062dc1ee474b19dadf153bc428f8aced */
#if BIND_sqlite3_context_db_handle_FUNCTION
#define sqlite3_context_db_handle_REQUIRED_ARGC 1
#define sqlite3_context_db_handle_OPTIONAL_ARGC 0
/* sqlite3_context_db_handle
 *
 * Parameters:
 * - arg1: sqlite3_context *
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

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Invocation */
  sqlite3 * native_return_value = sqlite3_context_db_handle(native_arg1);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_sqlite3(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_create_collation */
/* sha: c01d391594033533eaecb82ad79186c1119ddd20c386665302e0682693ead54a */
#if BIND_sqlite3_create_collation_FUNCTION
#define sqlite3_create_collation_REQUIRED_ARGC 5
#define sqlite3_create_collation_OPTIONAL_ARGC 0
/* sqlite3_create_collation
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - zName: const char *
 * - eTextRep: int
 * - pArg: void *
 * - xCompare: int (*)(void *, int, const void *, int, const void *)
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_create_collation(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  char * native_zName = NULL;
  mrb_int native_eTextRep;
  mrb_value pArg;
  mrb_value xCompare;

  /* Fetch the args */
  mrb_get_args(mrb, "ozioo", &arg1, &native_zName, &native_eTextRep, &pArg, &xCompare);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pArg);
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMAvoid_PTR_COMMA_intCOMMA_const_void_PTR_RPAREN(xCompare);

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Unbox param: pArg */
  void * native_pArg = TODO_mruby_unbox_void_PTR(pArg);

  /* Unbox param: xCompare */
  int (*native_xCompare)(void *, int, const void *, int, const void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMAvoid_PTR_COMMA_intCOMMA_const_void_PTR_RPAREN(xCompare);

  /* Invocation */
  int native_return_value = sqlite3_create_collation(native_arg1, native_zName, native_eTextRep, native_pArg, native_xCompare);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_create_collation16 */
/* sha: b032258cdda49c0b7ea8922f7c2a1941cbfa914039df557f6d45de71fa9c636b */
#if BIND_sqlite3_create_collation16_FUNCTION
#define sqlite3_create_collation16_REQUIRED_ARGC 5
#define sqlite3_create_collation16_OPTIONAL_ARGC 0
/* sqlite3_create_collation16
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - zName: const void *
 * - eTextRep: int
 * - pArg: void *
 * - xCompare: int (*)(void *, int, const void *, int, const void *)
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_create_collation16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value zName;
  mrb_int native_eTextRep;
  mrb_value pArg;
  mrb_value xCompare;

  /* Fetch the args */
  mrb_get_args(mrb, "ooioo", &arg1, &zName, &native_eTextRep, &pArg, &xCompare);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(zName);
  TODO_type_check_void_PTR(pArg);
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMAvoid_PTR_COMMA_intCOMMA_const_void_PTR_RPAREN(xCompare);

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Unbox param: zName */
  const void * native_zName = TODO_mruby_unbox_void_PTR(zName);

  /* Unbox param: pArg */
  void * native_pArg = TODO_mruby_unbox_void_PTR(pArg);

  /* Unbox param: xCompare */
  int (*native_xCompare)(void *, int, const void *, int, const void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMAvoid_PTR_COMMA_intCOMMA_const_void_PTR_RPAREN(xCompare);

  /* Invocation */
  int native_return_value = sqlite3_create_collation16(native_arg1, native_zName, native_eTextRep, native_pArg, native_xCompare);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_create_collation_v2 */
/* sha: 6109eb97ad5ac18eac887c115f1c19850047181140be033f2eb7c1616fd55c54 */
#if BIND_sqlite3_create_collation_v2_FUNCTION
#define sqlite3_create_collation_v2_REQUIRED_ARGC 6
#define sqlite3_create_collation_v2_OPTIONAL_ARGC 0
/* sqlite3_create_collation_v2
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - zName: const char *
 * - eTextRep: int
 * - pArg: void *
 * - xCompare: int (*)(void *, int, const void *, int, const void *)
 * - xDestroy: void (*)(void *)
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_create_collation_v2(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  char * native_zName = NULL;
  mrb_int native_eTextRep;
  mrb_value pArg;
  mrb_value xCompare;
  mrb_value xDestroy;

  /* Fetch the args */
  mrb_get_args(mrb, "oziooo", &arg1, &native_zName, &native_eTextRep, &pArg, &xCompare, &xDestroy);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pArg);
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMAvoid_PTR_COMMA_intCOMMA_const_void_PTR_RPAREN(xCompare);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xDestroy);

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Unbox param: pArg */
  void * native_pArg = TODO_mruby_unbox_void_PTR(pArg);

  /* Unbox param: xCompare */
  int (*native_xCompare)(void *, int, const void *, int, const void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMAvoid_PTR_COMMA_intCOMMA_const_void_PTR_RPAREN(xCompare);

  /* Unbox param: xDestroy */
  void (*native_xDestroy)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xDestroy);

  /* Invocation */
  int native_return_value = sqlite3_create_collation_v2(native_arg1, native_zName, native_eTextRep, native_pArg, native_xCompare, native_xDestroy);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_create_function */
/* sha: 50eb196c4682f93649fbc516f67925be5520092cac8764e702f2645942f3733b */
#if BIND_sqlite3_create_function_FUNCTION
#define sqlite3_create_function_REQUIRED_ARGC 8
#define sqlite3_create_function_OPTIONAL_ARGC 0
/* sqlite3_create_function
 *
 * Parameters:
 * - db: sqlite3 *
 * - zFunctionName: const char *
 * - nArg: int
 * - eTextRep: int
 * - pApp: void *
 * - xFunc: void (*)(sqlite3_context *, int, sqlite3_value **)
 * - xStep: void (*)(sqlite3_context *, int, sqlite3_value **)
 * - xFinal: void (*)(sqlite3_context *)
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_create_function(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  char * native_zFunctionName = NULL;
  mrb_int native_nArg;
  mrb_int native_eTextRep;
  mrb_value pApp;
  mrb_value xFunc;
  mrb_value xStep;
  mrb_value xFinal;

  /* Fetch the args */
  mrb_get_args(mrb, "oziioooo", &db, &native_zFunctionName, &native_nArg, &native_eTextRep, &pApp, &xFunc, &xStep, &xFinal);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pApp);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(xFunc);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(xStep);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_RPAREN(xFinal);

  /* Unbox param: db */
  sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Unbox param: pApp */
  void * native_pApp = TODO_mruby_unbox_void_PTR(pApp);

  /* Unbox param: xFunc */
  void (*native_xFunc)(sqlite3_context *, int, sqlite3_value **) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(xFunc);

  /* Unbox param: xStep */
  void (*native_xStep)(sqlite3_context *, int, sqlite3_value **) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(xStep);

  /* Unbox param: xFinal */
  void (*native_xFinal)(sqlite3_context *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_RPAREN(xFinal);

  /* Invocation */
  int native_return_value = sqlite3_create_function(native_db, native_zFunctionName, native_nArg, native_eTextRep, native_pApp, native_xFunc, native_xStep, native_xFinal);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_create_function16 */
/* sha: ca30ec6ef6e832c4cf3cae242b7271ba997a543f9c522f83cb3c48e00a9ad57a */
#if BIND_sqlite3_create_function16_FUNCTION
#define sqlite3_create_function16_REQUIRED_ARGC 8
#define sqlite3_create_function16_OPTIONAL_ARGC 0
/* sqlite3_create_function16
 *
 * Parameters:
 * - db: sqlite3 *
 * - zFunctionName: const void *
 * - nArg: int
 * - eTextRep: int
 * - pApp: void *
 * - xFunc: void (*)(sqlite3_context *, int, sqlite3_value **)
 * - xStep: void (*)(sqlite3_context *, int, sqlite3_value **)
 * - xFinal: void (*)(sqlite3_context *)
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_create_function16(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value zFunctionName;
  mrb_int native_nArg;
  mrb_int native_eTextRep;
  mrb_value pApp;
  mrb_value xFunc;
  mrb_value xStep;
  mrb_value xFinal;

  /* Fetch the args */
  mrb_get_args(mrb, "ooiioooo", &db, &zFunctionName, &native_nArg, &native_eTextRep, &pApp, &xFunc, &xStep, &xFinal);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(zFunctionName);
  TODO_type_check_void_PTR(pApp);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(xFunc);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(xStep);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_RPAREN(xFinal);

  /* Unbox param: db */
  sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Unbox param: zFunctionName */
  const void * native_zFunctionName = TODO_mruby_unbox_void_PTR(zFunctionName);

  /* Unbox param: pApp */
  void * native_pApp = TODO_mruby_unbox_void_PTR(pApp);

  /* Unbox param: xFunc */
  void (*native_xFunc)(sqlite3_context *, int, sqlite3_value **) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(xFunc);

  /* Unbox param: xStep */
  void (*native_xStep)(sqlite3_context *, int, sqlite3_value **) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(xStep);

  /* Unbox param: xFinal */
  void (*native_xFinal)(sqlite3_context *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_RPAREN(xFinal);

  /* Invocation */
  int native_return_value = sqlite3_create_function16(native_db, native_zFunctionName, native_nArg, native_eTextRep, native_pApp, native_xFunc, native_xStep, native_xFinal);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_create_function_v2 */
/* sha: 34fae102a815b29cd18f4f02e973aee110cd2413044a099b8ff7e8d3cb381573 */
#if BIND_sqlite3_create_function_v2_FUNCTION
#define sqlite3_create_function_v2_REQUIRED_ARGC 9
#define sqlite3_create_function_v2_OPTIONAL_ARGC 0
/* sqlite3_create_function_v2
 *
 * Parameters:
 * - db: sqlite3 *
 * - zFunctionName: const char *
 * - nArg: int
 * - eTextRep: int
 * - pApp: void *
 * - xFunc: void (*)(sqlite3_context *, int, sqlite3_value **)
 * - xStep: void (*)(sqlite3_context *, int, sqlite3_value **)
 * - xFinal: void (*)(sqlite3_context *)
 * - xDestroy: void (*)(void *)
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_create_function_v2(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  char * native_zFunctionName = NULL;
  mrb_int native_nArg;
  mrb_int native_eTextRep;
  mrb_value pApp;
  mrb_value xFunc;
  mrb_value xStep;
  mrb_value xFinal;
  mrb_value xDestroy;

  /* Fetch the args */
  mrb_get_args(mrb, "oziiooooo", &db, &native_zFunctionName, &native_nArg, &native_eTextRep, &pApp, &xFunc, &xStep, &xFinal, &xDestroy);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pApp);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(xFunc);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(xStep);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_RPAREN(xFinal);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xDestroy);

  /* Unbox param: db */
  sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Unbox param: pApp */
  void * native_pApp = TODO_mruby_unbox_void_PTR(pApp);

  /* Unbox param: xFunc */
  void (*native_xFunc)(sqlite3_context *, int, sqlite3_value **) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(xFunc);

  /* Unbox param: xStep */
  void (*native_xStep)(sqlite3_context *, int, sqlite3_value **) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(xStep);

  /* Unbox param: xFinal */
  void (*native_xFinal)(sqlite3_context *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_context_PTR_RPAREN(xFinal);

  /* Unbox param: xDestroy */
  void (*native_xDestroy)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xDestroy);

  /* Invocation */
  int native_return_value = sqlite3_create_function_v2(native_db, native_zFunctionName, native_nArg, native_eTextRep, native_pApp, native_xFunc, native_xStep, native_xFinal, native_xDestroy);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_create_module */
/* sha: 3d01ff227cb32078296830650e2ee33bbfff8af45a74513fcd319392437b8d7b */
#if BIND_sqlite3_create_module_FUNCTION
#define sqlite3_create_module_REQUIRED_ARGC 4
#define sqlite3_create_module_OPTIONAL_ARGC 0
/* sqlite3_create_module
 *
 * Parameters:
 * - db: sqlite3 *
 * - zName: const char *
 * - p: const sqlite3_module *
 * - pClientData: void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_create_module(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  char * native_zName = NULL;
  mrb_value p;
  mrb_value pClientData;

  /* Fetch the args */
  mrb_get_args(mrb, "ozoo", &db, &native_zName, &p, &pClientData);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, p, Sqlite3Module_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Module expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pClientData);

  /* Unbox param: db */
  sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Unbox param: p */
  const sqlite3_module * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_sqlite3_module(p));

  /* Unbox param: pClientData */
  void * native_pClientData = TODO_mruby_unbox_void_PTR(pClientData);

  /* Invocation */
  int native_return_value = sqlite3_create_module(native_db, native_zName, native_p, native_pClientData);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_create_module_v2 */
/* sha: 6059b93dc770032603ddaa05fd15650c47487391d214a867cbbefffc72049dd8 */
#if BIND_sqlite3_create_module_v2_FUNCTION
#define sqlite3_create_module_v2_REQUIRED_ARGC 5
#define sqlite3_create_module_v2_OPTIONAL_ARGC 0
/* sqlite3_create_module_v2
 *
 * Parameters:
 * - db: sqlite3 *
 * - zName: const char *
 * - p: const sqlite3_module *
 * - pClientData: void *
 * - xDestroy: void (*)(void *)
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_create_module_v2(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  char * native_zName = NULL;
  mrb_value p;
  mrb_value pClientData;
  mrb_value xDestroy;

  /* Fetch the args */
  mrb_get_args(mrb, "ozooo", &db, &native_zName, &p, &pClientData, &xDestroy);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, p, Sqlite3Module_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Module expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pClientData);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xDestroy);

  /* Unbox param: db */
  sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Unbox param: p */
  const sqlite3_module * native_p = (mrb_nil_p(p) ? NULL : mruby_unbox_sqlite3_module(p));

  /* Unbox param: pClientData */
  void * native_pClientData = TODO_mruby_unbox_void_PTR(pClientData);

  /* Unbox param: xDestroy */
  void (*native_xDestroy)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xDestroy);

  /* Invocation */
  int native_return_value = sqlite3_create_module_v2(native_db, native_zName, native_p, native_pClientData, native_xDestroy);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_data_count */
/* sha: 1606e1636596bff85c525cdd1283e2cfb12d106fd526aa70e3acb2c143e00cdf */
#if BIND_sqlite3_data_count_FUNCTION
#define sqlite3_data_count_REQUIRED_ARGC 1
#define sqlite3_data_count_OPTIONAL_ARGC 0
/* sqlite3_data_count
 *
 * Parameters:
 * - pStmt: sqlite3_stmt *
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

  /* Unbox param: pStmt */
  sqlite3_stmt * native_pStmt = (mrb_nil_p(pStmt) ? NULL : mruby_unbox_sqlite3_stmt(pStmt));

  /* Invocation */
  int native_return_value = sqlite3_data_count(native_pStmt);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_db_config */
/* sha: 7111806e7f058477426483be357f31a2aae9cb8009197ed4b46841f9546ae4f8 */
#if BIND_sqlite3_db_config_FUNCTION
#define sqlite3_db_config_REQUIRED_ARGC 2
#define sqlite3_db_config_OPTIONAL_ARGC 0
/* sqlite3_db_config
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - op: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_db_config(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_op;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_op);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  int native_return_value = sqlite3_db_config(native_arg1, native_op);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_db_filename */
/* sha: f22e8504fad00738271029000560e6b7ad011d214b9d49b53d97d9eb2024ac39 */
#if BIND_sqlite3_db_filename_FUNCTION
#define sqlite3_db_filename_REQUIRED_ARGC 2
#define sqlite3_db_filename_OPTIONAL_ARGC 0
/* sqlite3_db_filename
 *
 * Parameters:
 * - db: sqlite3 *
 * - zDbName: const char *
 * Return Type: const char *
 */
mrb_value
mrb_SQLite_sqlite3_db_filename(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  char * native_zDbName = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &db, &native_zDbName);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }

  /* Unbox param: db */
  sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Invocation */
  const char * native_return_value = sqlite3_db_filename(native_db, native_zDbName);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_db_handle */
/* sha: e6e5857d701e71c27de9aae6f772ef629ea05827fd4bad4168445951e8383189 */
#if BIND_sqlite3_db_handle_FUNCTION
#define sqlite3_db_handle_REQUIRED_ARGC 1
#define sqlite3_db_handle_OPTIONAL_ARGC 0
/* sqlite3_db_handle
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
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

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  sqlite3 * native_return_value = sqlite3_db_handle(native_arg1);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_sqlite3(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_db_readonly */
/* sha: fbfd6054f953f475a85544c603aa02f95a612b006a1ed518377d661e8fdd37b9 */
#if BIND_sqlite3_db_readonly_FUNCTION
#define sqlite3_db_readonly_REQUIRED_ARGC 2
#define sqlite3_db_readonly_OPTIONAL_ARGC 0
/* sqlite3_db_readonly
 *
 * Parameters:
 * - db: sqlite3 *
 * - zDbName: const char *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_db_readonly(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  char * native_zDbName = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &db, &native_zDbName);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }

  /* Unbox param: db */
  sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Invocation */
  int native_return_value = sqlite3_db_readonly(native_db, native_zDbName);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_db_release_memory */
/* sha: 287cfc1155001ec17e4dc77051bd6ca06a451d22a4abdaafca2c163e9b39cb25 */
#if BIND_sqlite3_db_release_memory_FUNCTION
#define sqlite3_db_release_memory_REQUIRED_ARGC 1
#define sqlite3_db_release_memory_OPTIONAL_ARGC 0
/* sqlite3_db_release_memory
 *
 * Parameters:
 * - arg1: sqlite3 *
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

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  int native_return_value = sqlite3_db_release_memory(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_db_status */
/* sha: f0d3660b37e7afb831957c4cfa15aae516f0b65cb4f6e8e1581ae6351f8d4df4 */
#if BIND_sqlite3_db_status_FUNCTION
#define sqlite3_db_status_REQUIRED_ARGC 5
#define sqlite3_db_status_OPTIONAL_ARGC 0
/* sqlite3_db_status
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - op: int
 * - pCur: int *
 * - pHiwtr: int *
 * - resetFlg: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_db_status(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_op;
  mrb_value pCur;
  mrb_value pHiwtr;
  mrb_int native_resetFlg;

  /* Fetch the args */
  mrb_get_args(mrb, "oiooi", &arg1, &native_op, &pCur, &pHiwtr, &native_resetFlg);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(pCur);
  TODO_type_check_int_PTR(pHiwtr);

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Unbox param: pCur */
  int * native_pCur = TODO_mruby_unbox_int_PTR(pCur);

  /* Unbox param: pHiwtr */
  int * native_pHiwtr = TODO_mruby_unbox_int_PTR(pHiwtr);

  /* Invocation */
  int native_return_value = sqlite3_db_status(native_arg1, native_op, native_pCur, native_pHiwtr, native_resetFlg);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_declare_vtab */
/* sha: a340ca55f448c21c96f942fc6b1de355c91d48debf5e4b744a77ae742a090bf6 */
#if BIND_sqlite3_declare_vtab_FUNCTION
#define sqlite3_declare_vtab_REQUIRED_ARGC 2
#define sqlite3_declare_vtab_OPTIONAL_ARGC 0
/* sqlite3_declare_vtab
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - zSQL: const char *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_declare_vtab(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  char * native_zSQL = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &arg1, &native_zSQL);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  int native_return_value = sqlite3_declare_vtab(native_arg1, native_zSQL);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_enable_load_extension */
/* sha: 10390835bacfcf0f10c54882fd4f51944330d352011c11de17d83181b240c822 */
#if BIND_sqlite3_enable_load_extension_FUNCTION
#define sqlite3_enable_load_extension_REQUIRED_ARGC 2
#define sqlite3_enable_load_extension_OPTIONAL_ARGC 0
/* sqlite3_enable_load_extension
 *
 * Parameters:
 * - db: sqlite3 *
 * - onoff: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_enable_load_extension(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_int native_onoff;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &db, &native_onoff);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }

  /* Unbox param: db */
  sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Invocation */
  int native_return_value = sqlite3_enable_load_extension(native_db, native_onoff);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_enable_shared_cache */
/* sha: e89c8b2aa8338502602a861240624a335ee94bdd459f97d520a2b4bb8d9dc31a */
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
  mrb_int native_arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_arg1);

  /* Invocation */
  int native_return_value = sqlite3_enable_shared_cache(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_errcode */
/* sha: faa752490f26c9ac4b62912d6042cbf3d589ba316783bab635b39fd81b127f96 */
#if BIND_sqlite3_errcode_FUNCTION
#define sqlite3_errcode_REQUIRED_ARGC 1
#define sqlite3_errcode_OPTIONAL_ARGC 0
/* sqlite3_errcode
 *
 * Parameters:
 * - db: sqlite3 *
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

  /* Unbox param: db */
  sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Invocation */
  int native_return_value = sqlite3_errcode(native_db);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_errmsg */
/* sha: c3a1c78b2fb4ad303bb2604c554293800c878db8811e0becb8ca6f599c0cd756 */
#if BIND_sqlite3_errmsg_FUNCTION
#define sqlite3_errmsg_REQUIRED_ARGC 1
#define sqlite3_errmsg_OPTIONAL_ARGC 0
/* sqlite3_errmsg
 *
 * Parameters:
 * - arg1: sqlite3 *
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

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  const char * native_return_value = sqlite3_errmsg(native_arg1);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_errmsg16 */
/* sha: fd82168bbec4c525938d0870652f5716f9d7dd13a4db2ba11d081f29c36a85e3 */
#if BIND_sqlite3_errmsg16_FUNCTION
#define sqlite3_errmsg16_REQUIRED_ARGC 1
#define sqlite3_errmsg16_OPTIONAL_ARGC 0
/* sqlite3_errmsg16
 *
 * Parameters:
 * - arg1: sqlite3 *
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

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  const void * native_return_value = sqlite3_errmsg16(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_errstr */
/* sha: b7eb9464937fd0b1987c94a58a3531028d7fdb070230b90184d9b353515db16b */
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
  mrb_int native_arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_arg1);

  /* Invocation */
  const char * native_return_value = sqlite3_errstr(native_arg1);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_exec */
/* sha: 7300a8a878f429849576b6600f134c386da61e6cc9a543ff4aeb2343a615dd9d */
#if BIND_sqlite3_exec_FUNCTION
#define sqlite3_exec_REQUIRED_ARGC 5
#define sqlite3_exec_OPTIONAL_ARGC 0
/* sqlite3_exec
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - sql: const char *
 * - callback: int (*)(void *, int, char **, char **)
 * - arg4: void *
 * - errmsg: char **
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_exec(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  char * native_sql = NULL;
  mrb_value callback;
  mrb_value arg4;
  mrb_value errmsg;

  /* Fetch the args */
  mrb_get_args(mrb, "ozooo", &arg1, &native_sql, &callback, &arg4, &errmsg);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMA_char_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(callback);
  TODO_type_check_void_PTR(arg4);
  TODO_type_check_char_PTR_PTR(errmsg);

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Unbox param: callback */
  int (*native_callback)(void *, int, char **, char **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMA_char_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(callback);

  /* Unbox param: arg4 */
  void * native_arg4 = TODO_mruby_unbox_void_PTR(arg4);

  /* Unbox param: errmsg */
  char ** native_errmsg = TODO_mruby_unbox_char_PTR_PTR(errmsg);

  /* Invocation */
  int native_return_value = sqlite3_exec(native_arg1, native_sql, native_callback, native_arg4, native_errmsg);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_expired */
/* sha: f301dab6d2512a1b61553ef9e303d42a92bb1c412bc4fd2a7bcef54c70854b59 */
#if BIND_sqlite3_expired_FUNCTION
#define sqlite3_expired_REQUIRED_ARGC 1
#define sqlite3_expired_OPTIONAL_ARGC 0
/* sqlite3_expired
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
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

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  int native_return_value = sqlite3_expired(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_extended_errcode */
/* sha: 49b0b9ba8565d39cba0202c97c11ddba4a5a2ac23dd13289beea4496ff3464d9 */
#if BIND_sqlite3_extended_errcode_FUNCTION
#define sqlite3_extended_errcode_REQUIRED_ARGC 1
#define sqlite3_extended_errcode_OPTIONAL_ARGC 0
/* sqlite3_extended_errcode
 *
 * Parameters:
 * - db: sqlite3 *
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

  /* Unbox param: db */
  sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Invocation */
  int native_return_value = sqlite3_extended_errcode(native_db);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_extended_result_codes */
/* sha: e54be5cd4ed816f5263ec44b2083b2e3e4b243f93f1661fc29893a9abb324416 */
#if BIND_sqlite3_extended_result_codes_FUNCTION
#define sqlite3_extended_result_codes_REQUIRED_ARGC 2
#define sqlite3_extended_result_codes_OPTIONAL_ARGC 0
/* sqlite3_extended_result_codes
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - onoff: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_extended_result_codes(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_onoff;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_onoff);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  int native_return_value = sqlite3_extended_result_codes(native_arg1, native_onoff);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_file_control */
/* sha: 93ff3a60877a637ee4bf160db99ae65c6b23691a791edab783e48f2c10fd6cf2 */
#if BIND_sqlite3_file_control_FUNCTION
#define sqlite3_file_control_REQUIRED_ARGC 4
#define sqlite3_file_control_OPTIONAL_ARGC 0
/* sqlite3_file_control
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - zDbName: const char *
 * - op: int
 * - arg4: void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_file_control(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  char * native_zDbName = NULL;
  mrb_int native_op;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "ozio", &arg1, &native_zDbName, &native_op, &arg4);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg4);

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Unbox param: arg4 */
  void * native_arg4 = TODO_mruby_unbox_void_PTR(arg4);

  /* Invocation */
  int native_return_value = sqlite3_file_control(native_arg1, native_zDbName, native_op, native_arg4);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_finalize */
/* sha: 3c1ffa1bd9352b5a3251f38e5349b60c29bdca26ee5b4d2761fbe473f4e4dabf */
#if BIND_sqlite3_finalize_FUNCTION
#define sqlite3_finalize_REQUIRED_ARGC 1
#define sqlite3_finalize_OPTIONAL_ARGC 0
/* sqlite3_finalize
 *
 * Parameters:
 * - pStmt: sqlite3_stmt *
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

  /* Unbox param: pStmt */
  sqlite3_stmt * native_pStmt = (mrb_nil_p(pStmt) ? NULL : mruby_unbox_sqlite3_stmt(pStmt));

  /* Invocation */
  int native_return_value = sqlite3_finalize(native_pStmt);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_free */
/* sha: 46095b268608ba2fa6a8c5c29a78336c038172507c7d9c9539e85c1dd7f92b82 */
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

  /* Unbox param: arg1 */
  void * native_arg1 = TODO_mruby_unbox_void_PTR(arg1);

  /* Invocation */
  sqlite3_free(native_arg1);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_free_table */
/* sha: 0981b9aabf0712025ac99a3519071a4e7275da7ca3ccbead3a71430cb9fdd9da */
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

  /* Unbox param: result */
  char ** native_result = TODO_mruby_unbox_char_PTR_PTR(result);

  /* Invocation */
  sqlite3_free_table(native_result);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_get_autocommit */
/* sha: d88e3e76e3913e69d7898767ad2e5da744f1e478f57ab5fd3878179060388bf4 */
#if BIND_sqlite3_get_autocommit_FUNCTION
#define sqlite3_get_autocommit_REQUIRED_ARGC 1
#define sqlite3_get_autocommit_OPTIONAL_ARGC 0
/* sqlite3_get_autocommit
 *
 * Parameters:
 * - arg1: sqlite3 *
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

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  int native_return_value = sqlite3_get_autocommit(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_get_auxdata */
/* sha: 1a8a25bb24b64b2bc5bb11cf82a3a3efd78d7e431f682851d2391c5d7c31f461 */
#if BIND_sqlite3_get_auxdata_FUNCTION
#define sqlite3_get_auxdata_REQUIRED_ARGC 2
#define sqlite3_get_auxdata_OPTIONAL_ARGC 0
/* sqlite3_get_auxdata
 *
 * Parameters:
 * - arg1: sqlite3_context *
 * - N: int
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_get_auxdata(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_N;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_N);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Invocation */
  void * native_return_value = sqlite3_get_auxdata(native_arg1, native_N);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_get_table */
/* sha: f374ec9c6d13b9806d5b58c69ee872eccb2de75dd27d9dd299d0eafcd8da84c3 */
#if BIND_sqlite3_get_table_FUNCTION
#define sqlite3_get_table_REQUIRED_ARGC 6
#define sqlite3_get_table_OPTIONAL_ARGC 0
/* sqlite3_get_table
 *
 * Parameters:
 * - db: sqlite3 *
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
  char * native_zSql = NULL;
  mrb_value pazResult;
  mrb_value pnRow;
  mrb_value pnColumn;
  mrb_value pzErrmsg;

  /* Fetch the args */
  mrb_get_args(mrb, "ozoooo", &db, &native_zSql, &pazResult, &pnRow, &pnColumn, &pzErrmsg);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR_PTR_PTR(pazResult);
  TODO_type_check_int_PTR(pnRow);
  TODO_type_check_int_PTR(pnColumn);
  TODO_type_check_char_PTR_PTR(pzErrmsg);

  /* Unbox param: db */
  sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Unbox param: pazResult */
  char *** native_pazResult = TODO_mruby_unbox_char_PTR_PTR_PTR(pazResult);

  /* Unbox param: pnRow */
  int * native_pnRow = TODO_mruby_unbox_int_PTR(pnRow);

  /* Unbox param: pnColumn */
  int * native_pnColumn = TODO_mruby_unbox_int_PTR(pnColumn);

  /* Unbox param: pzErrmsg */
  char ** native_pzErrmsg = TODO_mruby_unbox_char_PTR_PTR(pzErrmsg);

  /* Invocation */
  int native_return_value = sqlite3_get_table(native_db, native_zSql, native_pazResult, native_pnRow, native_pnColumn, native_pzErrmsg);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_global_recover */
/* sha: 05b4c153da0d177c2effec94b8e0a7d87c3776b2644d1605241d376f35ac1fbe */
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
  int native_return_value = sqlite3_global_recover();

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_initialize */
/* sha: 24da52c90998d3e2a8a6d30099a9fae08d24e34c460ee2004031af294e114ea8 */
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
  int native_return_value = sqlite3_initialize();

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_interrupt */
/* sha: 4bc1e5c196db6280194774863d92bc8178351b95c225ee41bb47f08d7ca4430c */
#if BIND_sqlite3_interrupt_FUNCTION
#define sqlite3_interrupt_REQUIRED_ARGC 1
#define sqlite3_interrupt_OPTIONAL_ARGC 0
/* sqlite3_interrupt
 *
 * Parameters:
 * - arg1: sqlite3 *
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

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  sqlite3_interrupt(native_arg1);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_last_insert_rowid */
/* sha: 5bdd3ef34c9fddc3d673647c23666d63f5053f76a445e2ed891aed62384e012b */
#if BIND_sqlite3_last_insert_rowid_FUNCTION
#define sqlite3_last_insert_rowid_REQUIRED_ARGC 1
#define sqlite3_last_insert_rowid_OPTIONAL_ARGC 0
/* sqlite3_last_insert_rowid
 *
 * Parameters:
 * - arg1: sqlite3 *
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

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  sqlite3_int64 native_return_value = sqlite3_last_insert_rowid(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_libversion */
/* sha: 1085bf69e8a65bf058350d36c8c9c466fa3531fd517d2b076d449693fb8004ab */
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
  const char * native_return_value = sqlite3_libversion();

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_libversion_number */
/* sha: 71dd281c2ef3fe876c8c064744b40ea1e1b7d9514d1c153a1b0514c23a5010c9 */
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
  int native_return_value = sqlite3_libversion_number();

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_limit */
/* sha: d2d2b25d51d4cc0500fda7f8cd3c8c7df6317c844d26c12835c3a3ed56e53eb8 */
#if BIND_sqlite3_limit_FUNCTION
#define sqlite3_limit_REQUIRED_ARGC 3
#define sqlite3_limit_OPTIONAL_ARGC 0
/* sqlite3_limit
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - id: int
 * - newVal: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_limit(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_id;
  mrb_int native_newVal;

  /* Fetch the args */
  mrb_get_args(mrb, "oii", &arg1, &native_id, &native_newVal);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  int native_return_value = sqlite3_limit(native_arg1, native_id, native_newVal);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_load_extension */
/* sha: ea45eb48289a580d3e04710aee0f4e243be6c542032000222f09d15bed8fde3e */
#if BIND_sqlite3_load_extension_FUNCTION
#define sqlite3_load_extension_REQUIRED_ARGC 4
#define sqlite3_load_extension_OPTIONAL_ARGC 0
/* sqlite3_load_extension
 *
 * Parameters:
 * - db: sqlite3 *
 * - zFile: const char *
 * - zProc: const char *
 * - pzErrMsg: char **
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_load_extension(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  char * native_zFile = NULL;
  char * native_zProc = NULL;
  mrb_value pzErrMsg;

  /* Fetch the args */
  mrb_get_args(mrb, "ozzo", &db, &native_zFile, &native_zProc, &pzErrMsg);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR_PTR(pzErrMsg);

  /* Unbox param: db */
  sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Unbox param: pzErrMsg */
  char ** native_pzErrMsg = TODO_mruby_unbox_char_PTR_PTR(pzErrMsg);

  /* Invocation */
  int native_return_value = sqlite3_load_extension(native_db, native_zFile, native_zProc, native_pzErrMsg);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_log */
/* sha: fae61e44244f7f3f7a39fb0b00d640d803f84d53627ed828b100f6e1d885799c */
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
  mrb_int native_iErrCode;
  char * native_zFormat = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "iz", &native_iErrCode, &native_zFormat);

  /* Invocation */
  sqlite3_log(native_iErrCode, native_zFormat);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_malloc */
/* sha: 8f64f11c7f6ab1f7fa06eb794615388a72da58517a8efd0fe94a859f89d9e872 */
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
  mrb_int native_arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_arg1);

  /* Invocation */
  void * native_return_value = sqlite3_malloc(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_malloc64 */
/* sha: 0c07f2e97f3ae13b04c8008b2e578a5fa3b4b7ea9a3f29c521569a4bd073625e */
#if BIND_sqlite3_malloc64_FUNCTION
#define sqlite3_malloc64_REQUIRED_ARGC 1
#define sqlite3_malloc64_OPTIONAL_ARGC 0
/* sqlite3_malloc64
 *
 * Parameters:
 * - arg1: sqlite3_uint64
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_malloc64(mrb_state* mrb, mrb_value self) {
  mrb_int native_arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_arg1);

  /* Invocation */
  void * native_return_value = sqlite3_malloc64(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_memory_alarm */
/* sha: 97366cde7b7a5458e8f819329460706cc88369ae3746c2239a981503d36098c0 */
#if BIND_sqlite3_memory_alarm_FUNCTION
#define sqlite3_memory_alarm_REQUIRED_ARGC 3
#define sqlite3_memory_alarm_OPTIONAL_ARGC 0
/* sqlite3_memory_alarm
 *
 * Parameters:
 * - arg1: void (*)(void *, sqlite3_int64, int)
 * - arg2: void *
 * - arg3: sqlite3_int64
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_memory_alarm(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_int native_arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &arg1, &arg2, &native_arg3);

  /* Type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_sqlite3_int64COMMA_int_RPAREN(arg1);
  TODO_type_check_void_PTR(arg2);

  /* Unbox param: arg1 */
  void (*native_arg1)(void *, sqlite3_int64, int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_sqlite3_int64COMMA_int_RPAREN(arg1);

  /* Unbox param: arg2 */
  void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  /* Invocation */
  int native_return_value = sqlite3_memory_alarm(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_memory_highwater */
/* sha: 8ef0e3bdbef35070454cf4d3c3826976464bd5a819384f8c59ae6b1c71848392 */
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
  mrb_int native_resetFlag;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_resetFlag);

  /* Invocation */
  sqlite3_int64 native_return_value = sqlite3_memory_highwater(native_resetFlag);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_memory_used */
/* sha: b548a58f951b037bdc50e6437e5ec2f5cdffc4d7bf0c565f9d62d0951182dc13 */
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
  sqlite3_int64 native_return_value = sqlite3_memory_used();

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_mprintf */
/* sha: 0daed60260bfcdc4ea63668418fa1d207a4af0d932084da768859023ffe4efd7 */
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
  char * native_arg1 = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_arg1);

  /* Invocation */
  char * native_return_value = sqlite3_mprintf(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_char_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_msize */
/* sha: fed76fac7340dc2f10827bbde8c20b8e39c3f19680c3651990c984235a090089 */
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

  /* Unbox param: arg1 */
  void * native_arg1 = TODO_mruby_unbox_void_PTR(arg1);

  /* Invocation */
  sqlite3_uint64 native_return_value = sqlite3_msize(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_next_stmt */
/* sha: fa00b90ef2ba1325ac5cb233864220f5a1e67a8ddd57676a8523697fa9f107e4 */
#if BIND_sqlite3_next_stmt_FUNCTION
#define sqlite3_next_stmt_REQUIRED_ARGC 2
#define sqlite3_next_stmt_OPTIONAL_ARGC 0
/* sqlite3_next_stmt
 *
 * Parameters:
 * - pDb: sqlite3 *
 * - pStmt: sqlite3_stmt *
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

  /* Unbox param: pDb */
  sqlite3 * native_pDb = (mrb_nil_p(pDb) ? NULL : mruby_unbox_sqlite3(pDb));

  /* Unbox param: pStmt */
  sqlite3_stmt * native_pStmt = (mrb_nil_p(pStmt) ? NULL : mruby_unbox_sqlite3_stmt(pStmt));

  /* Invocation */
  sqlite3_stmt * native_return_value = sqlite3_next_stmt(native_pDb, native_pStmt);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_sqlite3_stmt(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_open */
/* sha: 62caa14f38e8a12e28276366ff6f7b8c75b4f40c32da424136e706b895a840f4 */
#if BIND_sqlite3_open_FUNCTION
#define sqlite3_open_REQUIRED_ARGC 1
#define sqlite3_open_OPTIONAL_ARGC 0
/* sqlite3_open
 *
 * Parameters:
 * - filename: const char *
 * - ppDb: sqlite3 **
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_open(mrb_state* mrb, mrb_value self) {
  mrb_value results = mrb_ary_new(mrb);
  char * native_filename = NULL;
  sqlite3 * native_ppDb;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_filename);

  /* Invocation */
  int native_return_value = sqlite3_open(native_filename, &native_ppDb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  mrb_ary_push(mrb, results, return_value);
  
  /* Box out param: ppDb */
  mrb_value ppDb = mruby_giftwrap_sqlite3(mrb, native_ppDb);

  /* Add out params to results */
  mrb_ary_push(mrb, results, ppDb);

  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_open16 */
/* sha: e79bf32728dd2d408da27c8d586578f7a612e2d39c084f4f0e97c87848a35e38 */
#if BIND_sqlite3_open16_FUNCTION
#define sqlite3_open16_REQUIRED_ARGC 2
#define sqlite3_open16_OPTIONAL_ARGC 0
/* sqlite3_open16
 *
 * Parameters:
 * - filename: const void *
 * - ppDb: sqlite3 **
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

  /* Unbox param: filename */
  const void * native_filename = TODO_mruby_unbox_void_PTR(filename);

  /* Unbox param: ppDb */
  sqlite3 ** native_ppDb = TODO_mruby_unbox_sqlite3_PTR_PTR(ppDb);

  /* Invocation */
  int native_return_value = sqlite3_open16(native_filename, native_ppDb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_open_v2 */
/* sha: f366c3251556343824dcc2065dae54de44758d28c35cd52f5e57d2a01dfc0ac3 */
#if BIND_sqlite3_open_v2_FUNCTION
#define sqlite3_open_v2_REQUIRED_ARGC 4
#define sqlite3_open_v2_OPTIONAL_ARGC 0
/* sqlite3_open_v2
 *
 * Parameters:
 * - filename: const char *
 * - ppDb: sqlite3 **
 * - flags: int
 * - zVfs: const char *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_open_v2(mrb_state* mrb, mrb_value self) {
  char * native_filename = NULL;
  mrb_value ppDb;
  mrb_int native_flags;
  char * native_zVfs = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "zoiz", &native_filename, &ppDb, &native_flags, &native_zVfs);

  /* Type checking */
  TODO_type_check_sqlite3_PTR_PTR(ppDb);

  /* Unbox param: ppDb */
  sqlite3 ** native_ppDb = TODO_mruby_unbox_sqlite3_PTR_PTR(ppDb);

  /* Invocation */
  int native_return_value = sqlite3_open_v2(native_filename, native_ppDb, native_flags, native_zVfs);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_os_end */
/* sha: 465f2a414bafe11afb40615460ce400391339ee7c48c8e54a523385ecc037512 */
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
  int native_return_value = sqlite3_os_end();

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_os_init */
/* sha: 844d7278d130100ffcd43bbf23e9a0ee952aee7c82ebd72bb2e70f16499261fe */
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
  int native_return_value = sqlite3_os_init();

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_overload_function */
/* sha: 17f4ebb83bf1229360976449fdc4473eeb00eb769796fd28a976f513874b785a */
#if BIND_sqlite3_overload_function_FUNCTION
#define sqlite3_overload_function_REQUIRED_ARGC 3
#define sqlite3_overload_function_OPTIONAL_ARGC 0
/* sqlite3_overload_function
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - zFuncName: const char *
 * - nArg: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_overload_function(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  char * native_zFuncName = NULL;
  mrb_int native_nArg;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &arg1, &native_zFuncName, &native_nArg);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  int native_return_value = sqlite3_overload_function(native_arg1, native_zFuncName, native_nArg);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_prepare */
/* sha: 9157c336fdd716b617c89aa66fe8079972a3c94e066f3aef807b609022afd606 */
#if BIND_sqlite3_prepare_FUNCTION
#define sqlite3_prepare_REQUIRED_ARGC 5
#define sqlite3_prepare_OPTIONAL_ARGC 0
/* sqlite3_prepare
 *
 * Parameters:
 * - db: sqlite3 *
 * - zSql: const char *
 * - nByte: int
 * - ppStmt: sqlite3_stmt **
 * - pzTail: const char **
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_prepare(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  char * native_zSql = NULL;
  mrb_int native_nByte;
  mrb_value ppStmt;
  mrb_value pzTail;

  /* Fetch the args */
  mrb_get_args(mrb, "ozioo", &db, &native_zSql, &native_nByte, &ppStmt, &pzTail);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_sqlite3_stmt_PTR_PTR(ppStmt);
  TODO_type_check_char_PTR_PTR(pzTail);

  /* Unbox param: db */
  sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Unbox param: ppStmt */
  sqlite3_stmt ** native_ppStmt = TODO_mruby_unbox_sqlite3_stmt_PTR_PTR(ppStmt);

  /* Unbox param: pzTail */
  const char ** native_pzTail = TODO_mruby_unbox_char_PTR_PTR(pzTail);

  /* Invocation */
  int native_return_value = sqlite3_prepare(native_db, native_zSql, native_nByte, native_ppStmt, native_pzTail);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_prepare16 */
/* sha: 07f3102292c0f6a34aabe54b3210db72376b001edaf4b455748cf2088a29286a */
#if BIND_sqlite3_prepare16_FUNCTION
#define sqlite3_prepare16_REQUIRED_ARGC 5
#define sqlite3_prepare16_OPTIONAL_ARGC 0
/* sqlite3_prepare16
 *
 * Parameters:
 * - db: sqlite3 *
 * - zSql: const void *
 * - nByte: int
 * - ppStmt: sqlite3_stmt **
 * - pzTail: const void **
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_prepare16(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value zSql;
  mrb_int native_nByte;
  mrb_value ppStmt;
  mrb_value pzTail;

  /* Fetch the args */
  mrb_get_args(mrb, "ooioo", &db, &zSql, &native_nByte, &ppStmt, &pzTail);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(zSql);
  TODO_type_check_sqlite3_stmt_PTR_PTR(ppStmt);
  TODO_type_check_void_PTR_PTR(pzTail);

  /* Unbox param: db */
  sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Unbox param: zSql */
  const void * native_zSql = TODO_mruby_unbox_void_PTR(zSql);

  /* Unbox param: ppStmt */
  sqlite3_stmt ** native_ppStmt = TODO_mruby_unbox_sqlite3_stmt_PTR_PTR(ppStmt);

  /* Unbox param: pzTail */
  const void ** native_pzTail = TODO_mruby_unbox_void_PTR_PTR(pzTail);

  /* Invocation */
  int native_return_value = sqlite3_prepare16(native_db, native_zSql, native_nByte, native_ppStmt, native_pzTail);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_prepare16_v2 */
/* sha: 774abea57c221ae43caeda86cdc4dbe7efdc25409003d7a1ca26dfa27f498223 */
#if BIND_sqlite3_prepare16_v2_FUNCTION
#define sqlite3_prepare16_v2_REQUIRED_ARGC 5
#define sqlite3_prepare16_v2_OPTIONAL_ARGC 0
/* sqlite3_prepare16_v2
 *
 * Parameters:
 * - db: sqlite3 *
 * - zSql: const void *
 * - nByte: int
 * - ppStmt: sqlite3_stmt **
 * - pzTail: const void **
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_prepare16_v2(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value zSql;
  mrb_int native_nByte;
  mrb_value ppStmt;
  mrb_value pzTail;

  /* Fetch the args */
  mrb_get_args(mrb, "ooioo", &db, &zSql, &native_nByte, &ppStmt, &pzTail);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(zSql);
  TODO_type_check_sqlite3_stmt_PTR_PTR(ppStmt);
  TODO_type_check_void_PTR_PTR(pzTail);

  /* Unbox param: db */
  sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Unbox param: zSql */
  const void * native_zSql = TODO_mruby_unbox_void_PTR(zSql);

  /* Unbox param: ppStmt */
  sqlite3_stmt ** native_ppStmt = TODO_mruby_unbox_sqlite3_stmt_PTR_PTR(ppStmt);

  /* Unbox param: pzTail */
  const void ** native_pzTail = TODO_mruby_unbox_void_PTR_PTR(pzTail);

  /* Invocation */
  int native_return_value = sqlite3_prepare16_v2(native_db, native_zSql, native_nByte, native_ppStmt, native_pzTail);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_prepare_v2 */
/* sha: 10c68dbc841f642c6fef8279cc14302be110ccd9e6a0c972e603e434db90ab39 */
#if BIND_sqlite3_prepare_v2_FUNCTION
#define sqlite3_prepare_v2_REQUIRED_ARGC 3
#define sqlite3_prepare_v2_OPTIONAL_ARGC 0
/* sqlite3_prepare_v2
 *
 * Parameters:
 * - db: sqlite3 *
 * - zSql: const char *
 * - nByte: int
 * - ppStmt: sqlite3_stmt **
 * - pzTail: const char **
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_prepare_v2(mrb_state* mrb, mrb_value self) {
  mrb_value results = mrb_ary_new(mrb);
  mrb_value db;
  char * native_zSql = NULL;
  mrb_int native_nByte;
  sqlite3_stmt * native_ppStmt;
  const char * native_pzTail = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz!i", &db, &native_zSql, &native_nByte);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }

  /* Unbox param: db */
  sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Invocation */
  int native_return_value = sqlite3_prepare_v2(native_db, native_zSql, native_nByte, &native_ppStmt, &native_pzTail);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  mrb_ary_push(mrb, results, return_value);
  
  /* Box out param: ppStmt */
  mrb_value ppStmt = mruby_giftwrap_sqlite3_stmt(mrb, native_ppStmt);
  /* Box out param: pzTail */
  mrb_value pzTail = mrb_str_new_cstr(mrb, native_pzTail);

  /* Add out params to results */
  mrb_ary_push(mrb, results, ppStmt);
  mrb_ary_push(mrb, results, pzTail);

  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_profile */
/* sha: 579d7b58bdb26596c6971e6442a5ee04e03dbe282a272726f60be68ebbc42917 */
#if BIND_sqlite3_profile_FUNCTION
#define sqlite3_profile_REQUIRED_ARGC 3
#define sqlite3_profile_OPTIONAL_ARGC 0
/* sqlite3_profile
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - xProfile: void (*)(void *, const char *, sqlite3_uint64)
 * - arg3: void *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_profile(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value xProfile;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &xProfile, &arg3);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMAchar_PTR_COMMA_sqlite3_uint64_RPAREN(xProfile);
  TODO_type_check_void_PTR(arg3);

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Unbox param: xProfile */
  void (*native_xProfile)(void *, const char *, sqlite3_uint64) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMAchar_PTR_COMMA_sqlite3_uint64_RPAREN(xProfile);

  /* Unbox param: arg3 */
  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  /* Invocation */
  void * native_return_value = sqlite3_profile(native_arg1, native_xProfile, native_arg3);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_progress_handler */
/* sha: 097552f2884648b61efd09ee10ba4d9d4acd2fba88c4b8c5af75207b77d50bee */
#if BIND_sqlite3_progress_handler_FUNCTION
#define sqlite3_progress_handler_REQUIRED_ARGC 4
#define sqlite3_progress_handler_OPTIONAL_ARGC 0
/* sqlite3_progress_handler
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - arg2: int
 * - arg3: int (*)(void *)
 * - arg4: void *
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_progress_handler(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oioo", &arg1, &native_arg2, &arg3, &arg4);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg3);
  TODO_type_check_void_PTR(arg4);

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Unbox param: arg3 */
  int (*native_arg3)(void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg3);

  /* Unbox param: arg4 */
  void * native_arg4 = TODO_mruby_unbox_void_PTR(arg4);

  /* Invocation */
  sqlite3_progress_handler(native_arg1, native_arg2, native_arg3, native_arg4);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_randomness */
/* sha: 98c4923a9349cbb2282ede7b76e1f903d28706b30a8c8ac94b0817386f8892a6 */
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
  mrb_int native_N;
  mrb_value P;

  /* Fetch the args */
  mrb_get_args(mrb, "io", &native_N, &P);

  /* Type checking */
  TODO_type_check_void_PTR(P);

  /* Unbox param: P */
  void * native_P = TODO_mruby_unbox_void_PTR(P);

  /* Invocation */
  sqlite3_randomness(native_N, native_P);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_realloc */
/* sha: 9182f3e5ca3e3f48122ade1149769f306b5e5bdf81291c1a0dd03d51b74b8f11 */
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
  mrb_int native_arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_arg2);

  /* Type checking */
  TODO_type_check_void_PTR(arg1);

  /* Unbox param: arg1 */
  void * native_arg1 = TODO_mruby_unbox_void_PTR(arg1);

  /* Invocation */
  void * native_return_value = sqlite3_realloc(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_realloc64 */
/* sha: f1be2ea2b6d7066df832fa1c18b125adff9d75a407a023166708040d1ecc0b45 */
#if BIND_sqlite3_realloc64_FUNCTION
#define sqlite3_realloc64_REQUIRED_ARGC 2
#define sqlite3_realloc64_OPTIONAL_ARGC 0
/* sqlite3_realloc64
 *
 * Parameters:
 * - arg1: void *
 * - arg2: sqlite3_uint64
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_realloc64(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_arg2);

  /* Type checking */
  TODO_type_check_void_PTR(arg1);

  /* Unbox param: arg1 */
  void * native_arg1 = TODO_mruby_unbox_void_PTR(arg1);

  /* Invocation */
  void * native_return_value = sqlite3_realloc64(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_release_memory */
/* sha: 40029f145054a13e39da55863edd3879d6ee67ba2e16935f5e8366fa7c1f6ba9 */
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
  mrb_int native_arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_arg1);

  /* Invocation */
  int native_return_value = sqlite3_release_memory(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_reset */
/* sha: aae6ec067b73ba4847d15ca9296eb2b5341ba967c10d370c50ea6795ed25655b */
#if BIND_sqlite3_reset_FUNCTION
#define sqlite3_reset_REQUIRED_ARGC 1
#define sqlite3_reset_OPTIONAL_ARGC 0
/* sqlite3_reset
 *
 * Parameters:
 * - pStmt: sqlite3_stmt *
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

  /* Unbox param: pStmt */
  sqlite3_stmt * native_pStmt = (mrb_nil_p(pStmt) ? NULL : mruby_unbox_sqlite3_stmt(pStmt));

  /* Invocation */
  int native_return_value = sqlite3_reset(native_pStmt);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_reset_auto_extension */
/* sha: a096b046f7efbbb14a33d5e9c2138b82164eee580d02fb2a567b1db7d3aa42d9 */
#if BIND_sqlite3_reset_auto_extension_FUNCTION
#define sqlite3_reset_auto_extension_REQUIRED_ARGC 0
#define sqlite3_reset_auto_extension_OPTIONAL_ARGC 0
/* sqlite3_reset_auto_extension
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_reset_auto_extension(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  sqlite3_reset_auto_extension();

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_result_blob */
/* sha: 80f5688d09261c46ff869da005782f1277ae0fca38f09b5151972db488424a84 */
#if BIND_sqlite3_result_blob_FUNCTION
#define sqlite3_result_blob_REQUIRED_ARGC 4
#define sqlite3_result_blob_OPTIONAL_ARGC 0
/* sqlite3_result_blob
 *
 * Parameters:
 * - arg1: sqlite3_context *
 * - arg2: const void *
 * - arg3: int
 * - arg4: void (*)(void *)
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_blob(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_int native_arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "ooio", &arg1, &arg2, &native_arg3, &arg4);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Unbox param: arg2 */
  const void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  /* Unbox param: arg4 */
  void (*native_arg4)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  /* Invocation */
  sqlite3_result_blob(native_arg1, native_arg2, native_arg3, native_arg4);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_result_blob64 */
/* sha: adf2e717453fcda2dbc0778aaecaa21e6eef9009c2c6a76c5b215889dbf311cb */
#if BIND_sqlite3_result_blob64_FUNCTION
#define sqlite3_result_blob64_REQUIRED_ARGC 4
#define sqlite3_result_blob64_OPTIONAL_ARGC 0
/* sqlite3_result_blob64
 *
 * Parameters:
 * - arg1: sqlite3_context *
 * - arg2: const void *
 * - arg3: sqlite3_uint64
 * - arg4: void (*)(void *)
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_blob64(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_int native_arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "ooio", &arg1, &arg2, &native_arg3, &arg4);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Unbox param: arg2 */
  const void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  /* Unbox param: arg4 */
  void (*native_arg4)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  /* Invocation */
  sqlite3_result_blob64(native_arg1, native_arg2, native_arg3, native_arg4);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_result_double */
/* sha: c8640f02d8c926d4d554b1fd22e55d73005a3957a09226b2aaec4635d52bf165 */
#if BIND_sqlite3_result_double_FUNCTION
#define sqlite3_result_double_REQUIRED_ARGC 2
#define sqlite3_result_double_OPTIONAL_ARGC 0
/* sqlite3_result_double
 *
 * Parameters:
 * - arg1: sqlite3_context *
 * - arg2: double
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_double(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_float native_arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "of", &arg1, &native_arg2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Invocation */
  sqlite3_result_double(native_arg1, native_arg2);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_result_error */
/* sha: 8a1889be7a21d5ce8d991518a759d0eb32d6a51c6c6b8a3c949985faf2ede5f6 */
#if BIND_sqlite3_result_error_FUNCTION
#define sqlite3_result_error_REQUIRED_ARGC 3
#define sqlite3_result_error_OPTIONAL_ARGC 0
/* sqlite3_result_error
 *
 * Parameters:
 * - arg1: sqlite3_context *
 * - arg2: const char *
 * - arg3: int
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_error(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  char * native_arg2 = NULL;
  mrb_int native_arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &arg1, &native_arg2, &native_arg3);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Invocation */
  sqlite3_result_error(native_arg1, native_arg2, native_arg3);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_result_error16 */
/* sha: 2b5e2a94c4ece654c9c363247b8bc2e2f51309220a20202c4063e8311e01b1ed */
#if BIND_sqlite3_result_error16_FUNCTION
#define sqlite3_result_error16_REQUIRED_ARGC 3
#define sqlite3_result_error16_OPTIONAL_ARGC 0
/* sqlite3_result_error16
 *
 * Parameters:
 * - arg1: sqlite3_context *
 * - arg2: const void *
 * - arg3: int
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_error16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_int native_arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &arg1, &arg2, &native_arg3);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Unbox param: arg2 */
  const void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  /* Invocation */
  sqlite3_result_error16(native_arg1, native_arg2, native_arg3);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_result_error_code */
/* sha: af7052b135204b36d1092f2fda1f4573029c85aa845bc73376193add9325aec7 */
#if BIND_sqlite3_result_error_code_FUNCTION
#define sqlite3_result_error_code_REQUIRED_ARGC 2
#define sqlite3_result_error_code_OPTIONAL_ARGC 0
/* sqlite3_result_error_code
 *
 * Parameters:
 * - arg1: sqlite3_context *
 * - arg2: int
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_error_code(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_arg2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Invocation */
  sqlite3_result_error_code(native_arg1, native_arg2);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_result_error_nomem */
/* sha: b275b9edb166543006a135ba151414f0f303548f1be587166043837394a6d843 */
#if BIND_sqlite3_result_error_nomem_FUNCTION
#define sqlite3_result_error_nomem_REQUIRED_ARGC 1
#define sqlite3_result_error_nomem_OPTIONAL_ARGC 0
/* sqlite3_result_error_nomem
 *
 * Parameters:
 * - arg1: sqlite3_context *
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

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Invocation */
  sqlite3_result_error_nomem(native_arg1);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_result_error_toobig */
/* sha: a3807a22a40531c53b546c6a5cc702a42e84ec19f5ec82e5cb360fb3de990bab */
#if BIND_sqlite3_result_error_toobig_FUNCTION
#define sqlite3_result_error_toobig_REQUIRED_ARGC 1
#define sqlite3_result_error_toobig_OPTIONAL_ARGC 0
/* sqlite3_result_error_toobig
 *
 * Parameters:
 * - arg1: sqlite3_context *
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

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Invocation */
  sqlite3_result_error_toobig(native_arg1);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_result_int */
/* sha: b517baa4de908a57a02b1e6d985662054ec70bda6f370300ae681b1ed028e4b7 */
#if BIND_sqlite3_result_int_FUNCTION
#define sqlite3_result_int_REQUIRED_ARGC 2
#define sqlite3_result_int_OPTIONAL_ARGC 0
/* sqlite3_result_int
 *
 * Parameters:
 * - arg1: sqlite3_context *
 * - arg2: int
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_int(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_arg2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Invocation */
  sqlite3_result_int(native_arg1, native_arg2);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_result_int64 */
/* sha: 906e1cef90b730c2f734e7c90dad9e43c6e3e3bdb77721aca3bbd740379a88d7 */
#if BIND_sqlite3_result_int64_FUNCTION
#define sqlite3_result_int64_REQUIRED_ARGC 2
#define sqlite3_result_int64_OPTIONAL_ARGC 0
/* sqlite3_result_int64
 *
 * Parameters:
 * - arg1: sqlite3_context *
 * - arg2: sqlite3_int64
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_int64(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_arg2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Invocation */
  sqlite3_result_int64(native_arg1, native_arg2);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_result_null */
/* sha: 0cd1785d376a61ec74bc528e20855001df95b43852e3e48a0ff98bd970ec3099 */
#if BIND_sqlite3_result_null_FUNCTION
#define sqlite3_result_null_REQUIRED_ARGC 1
#define sqlite3_result_null_OPTIONAL_ARGC 0
/* sqlite3_result_null
 *
 * Parameters:
 * - arg1: sqlite3_context *
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

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Invocation */
  sqlite3_result_null(native_arg1);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_result_text */
/* sha: 3fa2d984d68c873037ff491f921da04e5512ceb4ab3089e7c096a2819ab70d0f */
#if BIND_sqlite3_result_text_FUNCTION
#define sqlite3_result_text_REQUIRED_ARGC 4
#define sqlite3_result_text_OPTIONAL_ARGC 0
/* sqlite3_result_text
 *
 * Parameters:
 * - arg1: sqlite3_context *
 * - arg2: const char *
 * - arg3: int
 * - arg4: void (*)(void *)
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_text(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  char * native_arg2 = NULL;
  mrb_int native_arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "ozio", &arg1, &native_arg2, &native_arg3, &arg4);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Unbox param: arg4 */
  void (*native_arg4)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  /* Invocation */
  sqlite3_result_text(native_arg1, native_arg2, native_arg3, native_arg4);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_result_text16 */
/* sha: 8b9dc9e9ba74f31827c7d2154b1456b35a1585ca4e3a1dab38e613ea4ade4700 */
#if BIND_sqlite3_result_text16_FUNCTION
#define sqlite3_result_text16_REQUIRED_ARGC 4
#define sqlite3_result_text16_OPTIONAL_ARGC 0
/* sqlite3_result_text16
 *
 * Parameters:
 * - arg1: sqlite3_context *
 * - arg2: const void *
 * - arg3: int
 * - arg4: void (*)(void *)
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_text16(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_int native_arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "ooio", &arg1, &arg2, &native_arg3, &arg4);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Unbox param: arg2 */
  const void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  /* Unbox param: arg4 */
  void (*native_arg4)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  /* Invocation */
  sqlite3_result_text16(native_arg1, native_arg2, native_arg3, native_arg4);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_result_text16be */
/* sha: 83bcf6108bd2ccdf2e246ebadb086b771be716cea439d0e22b7f6c2ccc3c2134 */
#if BIND_sqlite3_result_text16be_FUNCTION
#define sqlite3_result_text16be_REQUIRED_ARGC 4
#define sqlite3_result_text16be_OPTIONAL_ARGC 0
/* sqlite3_result_text16be
 *
 * Parameters:
 * - arg1: sqlite3_context *
 * - arg2: const void *
 * - arg3: int
 * - arg4: void (*)(void *)
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_text16be(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_int native_arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "ooio", &arg1, &arg2, &native_arg3, &arg4);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Unbox param: arg2 */
  const void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  /* Unbox param: arg4 */
  void (*native_arg4)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  /* Invocation */
  sqlite3_result_text16be(native_arg1, native_arg2, native_arg3, native_arg4);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_result_text16le */
/* sha: 95a3330f444a68ad1b4dda07946ec64c282e40eeabf3dfe20ca6f316e50e8db7 */
#if BIND_sqlite3_result_text16le_FUNCTION
#define sqlite3_result_text16le_REQUIRED_ARGC 4
#define sqlite3_result_text16le_OPTIONAL_ARGC 0
/* sqlite3_result_text16le
 *
 * Parameters:
 * - arg1: sqlite3_context *
 * - arg2: const void *
 * - arg3: int
 * - arg4: void (*)(void *)
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_text16le(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_int native_arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "ooio", &arg1, &arg2, &native_arg3, &arg4);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg2);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Unbox param: arg2 */
  const void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  /* Unbox param: arg4 */
  void (*native_arg4)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  /* Invocation */
  sqlite3_result_text16le(native_arg1, native_arg2, native_arg3, native_arg4);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_result_text64 */
/* sha: 5514c01b4126ea4a72a4ac34028c9f6153b03480db02e6702ffb6ecbca9d40dc */
#if BIND_sqlite3_result_text64_FUNCTION
#define sqlite3_result_text64_REQUIRED_ARGC 5
#define sqlite3_result_text64_OPTIONAL_ARGC 0
/* sqlite3_result_text64
 *
 * Parameters:
 * - arg1: sqlite3_context *
 * - arg2: const char *
 * - arg3: sqlite3_uint64
 * - arg4: void (*)(void *)
 * - encoding: unsigned char
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_text64(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  char * native_arg2 = NULL;
  mrb_int native_arg3;
  mrb_value arg4;
  mrb_int native_encoding;

  /* Fetch the args */
  mrb_get_args(mrb, "ozioi", &arg1, &native_arg2, &native_arg3, &arg4, &native_encoding);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Unbox param: arg4 */
  void (*native_arg4)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  /* Invocation */
  sqlite3_result_text64(native_arg1, native_arg2, native_arg3, native_arg4, native_encoding);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_result_value */
/* sha: fedf819a8c7d349629e53ba968737062f1729456a67065fc0c4d983527c98c7e */
#if BIND_sqlite3_result_value_FUNCTION
#define sqlite3_result_value_REQUIRED_ARGC 2
#define sqlite3_result_value_OPTIONAL_ARGC 0
/* sqlite3_result_value
 *
 * Parameters:
 * - arg1: sqlite3_context *
 * - arg2: sqlite3_value *
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

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Unbox param: arg2 */
  sqlite3_value * native_arg2 = (mrb_nil_p(arg2) ? NULL : mruby_unbox_Mem(arg2));

  /* Invocation */
  sqlite3_result_value(native_arg1, native_arg2);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_result_zeroblob */
/* sha: eb712faca39ace03f3bbcbe7d71a79e11fa7a8f5d7213ade55dcfa2bd279ca2e */
#if BIND_sqlite3_result_zeroblob_FUNCTION
#define sqlite3_result_zeroblob_REQUIRED_ARGC 2
#define sqlite3_result_zeroblob_OPTIONAL_ARGC 0
/* sqlite3_result_zeroblob
 *
 * Parameters:
 * - arg1: sqlite3_context *
 * - n: int
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_result_zeroblob(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_n;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_n);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Invocation */
  sqlite3_result_zeroblob(native_arg1, native_n);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_rollback_hook */
/* sha: 2c4d40b52e3209206716e19093668c699931acdd2d63282ab29e79bd93da446f */
#if BIND_sqlite3_rollback_hook_FUNCTION
#define sqlite3_rollback_hook_REQUIRED_ARGC 3
#define sqlite3_rollback_hook_OPTIONAL_ARGC 0
/* sqlite3_rollback_hook
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - arg2: void (*)(void *)
 * - arg3: void *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_rollback_hook(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg2);
  TODO_type_check_void_PTR(arg3);

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Unbox param: arg2 */
  void (*native_arg2)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg2);

  /* Unbox param: arg3 */
  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  /* Invocation */
  void * native_return_value = sqlite3_rollback_hook(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_rtree_geometry_callback */
/* sha: 9031a0251e0c2db5c4aa28d54c0b858c24a8f858f99ea3656841563d0a41c198 */
#if BIND_sqlite3_rtree_geometry_callback_FUNCTION
#define sqlite3_rtree_geometry_callback_REQUIRED_ARGC 4
#define sqlite3_rtree_geometry_callback_OPTIONAL_ARGC 0
/* sqlite3_rtree_geometry_callback
 *
 * Parameters:
 * - db: sqlite3 *
 * - zGeom: const char *
 * - xGeom: int (*)(sqlite3_rtree_geometry *, int, sqlite3_rtree_dbl *, int *)
 * - pContext: void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_rtree_geometry_callback(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  char * native_zGeom = NULL;
  mrb_value xGeom;
  mrb_value pContext;

  /* Fetch the args */
  mrb_get_args(mrb, "ozoo", &db, &native_zGeom, &xGeom, &pContext);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_rtree_geometry_PTR_COMMA_intCOMMA_sqlite3_rtree_dbl_PTR_COMMA_int_PTR_RPAREN(xGeom);
  TODO_type_check_void_PTR(pContext);

  /* Unbox param: db */
  sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Unbox param: xGeom */
  int (*native_xGeom)(sqlite3_rtree_geometry *, int, sqlite3_rtree_dbl *, int *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_rtree_geometry_PTR_COMMA_intCOMMA_sqlite3_rtree_dbl_PTR_COMMA_int_PTR_RPAREN(xGeom);

  /* Unbox param: pContext */
  void * native_pContext = TODO_mruby_unbox_void_PTR(pContext);

  /* Invocation */
  int native_return_value = sqlite3_rtree_geometry_callback(native_db, native_zGeom, native_xGeom, native_pContext);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_rtree_query_callback */
/* sha: b466c022a5cf2a1b8d7e55311089a0538567f4e1880341c032aaa4fd0a4bbe88 */
#if BIND_sqlite3_rtree_query_callback_FUNCTION
#define sqlite3_rtree_query_callback_REQUIRED_ARGC 5
#define sqlite3_rtree_query_callback_OPTIONAL_ARGC 0
/* sqlite3_rtree_query_callback
 *
 * Parameters:
 * - db: sqlite3 *
 * - zQueryFunc: const char *
 * - xQueryFunc: int (*)(sqlite3_rtree_query_info *)
 * - pContext: void *
 * - xDestructor: void (*)(void *)
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_rtree_query_callback(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  char * native_zQueryFunc = NULL;
  mrb_value xQueryFunc;
  mrb_value pContext;
  mrb_value xDestructor;

  /* Fetch the args */
  mrb_get_args(mrb, "ozooo", &db, &native_zQueryFunc, &xQueryFunc, &pContext, &xDestructor);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_rtree_query_info_PTR_RPAREN(xQueryFunc);
  TODO_type_check_void_PTR(pContext);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xDestructor);

  /* Unbox param: db */
  sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Unbox param: xQueryFunc */
  int (*native_xQueryFunc)(sqlite3_rtree_query_info *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_rtree_query_info_PTR_RPAREN(xQueryFunc);

  /* Unbox param: pContext */
  void * native_pContext = TODO_mruby_unbox_void_PTR(pContext);

  /* Unbox param: xDestructor */
  void (*native_xDestructor)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xDestructor);

  /* Invocation */
  int native_return_value = sqlite3_rtree_query_callback(native_db, native_zQueryFunc, native_xQueryFunc, native_pContext, native_xDestructor);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_set_authorizer */
/* sha: 4b42e2eadcc5c5d2cb7a29ef1bd35f54a65dd43673a78c6a27ede36f00f1ca97 */
#if BIND_sqlite3_set_authorizer_FUNCTION
#define sqlite3_set_authorizer_REQUIRED_ARGC 3
#define sqlite3_set_authorizer_OPTIONAL_ARGC 0
/* sqlite3_set_authorizer
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - xAuth: int (*)(void *, int, const char *, const char *, const char *, const char *)
 * - pUserData: void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_set_authorizer(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value xAuth;
  mrb_value pUserData;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &xAuth, &pUserData);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMAchar_PTR_COMMA_const_char_PTR_COMMA_const_char_PTR_COMMA_const_char_PTR_RPAREN(xAuth);
  TODO_type_check_void_PTR(pUserData);

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Unbox param: xAuth */
  int (*native_xAuth)(void *, int, const char *, const char *, const char *, const char *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMAchar_PTR_COMMA_const_char_PTR_COMMA_const_char_PTR_COMMA_const_char_PTR_RPAREN(xAuth);

  /* Unbox param: pUserData */
  void * native_pUserData = TODO_mruby_unbox_void_PTR(pUserData);

  /* Invocation */
  int native_return_value = sqlite3_set_authorizer(native_arg1, native_xAuth, native_pUserData);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_set_auxdata */
/* sha: 507ddaa59fcca2dad77fad79c9e8e1f4c7d9c9faa81fd8d270cfb1053c9d4a49 */
#if BIND_sqlite3_set_auxdata_FUNCTION
#define sqlite3_set_auxdata_REQUIRED_ARGC 4
#define sqlite3_set_auxdata_OPTIONAL_ARGC 0
/* sqlite3_set_auxdata
 *
 * Parameters:
 * - arg1: sqlite3_context *
 * - N: int
 * - arg3: void *
 * - arg4: void (*)(void *)
 * Return Type: void
 */
mrb_value
mrb_SQLite_sqlite3_set_auxdata(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_N;
  mrb_value arg3;
  mrb_value arg4;

  /* Fetch the args */
  mrb_get_args(mrb, "oioo", &arg1, &native_N, &arg3, &arg4);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Context_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Context expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(arg3);
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Unbox param: arg3 */
  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  /* Unbox param: arg4 */
  void (*native_arg4)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(arg4);

  /* Invocation */
  sqlite3_set_auxdata(native_arg1, native_N, native_arg3, native_arg4);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_shutdown */
/* sha: 49ac3996444cb9908b8d0ccf7d82c3be1e5cb6c5cab7823d06221711bec98986 */
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
  int native_return_value = sqlite3_shutdown();

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_sleep */
/* sha: fef784d495c0678efd1ac82bc4933bcb18c7965ed072248bbea93f609516164c */
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
  mrb_int native_arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_arg1);

  /* Invocation */
  int native_return_value = sqlite3_sleep(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_snprintf */
/* sha: 22a8ec8127f489624c17b5728cf72d8bb7808b76cda31f0b60c3201bdbfffb22 */
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
  mrb_int native_arg1;
  mrb_value arg2;
  char * native_arg3 = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ioz", &native_arg1, &arg2, &native_arg3);

  /* Type checking */
  TODO_type_check_char_PTR(arg2);

  /* Unbox param: arg2 */
  char * native_arg2 = TODO_mruby_unbox_char_PTR(arg2);

  /* Invocation */
  char * native_return_value = sqlite3_snprintf(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_char_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_soft_heap_limit */
/* sha: 401eb1543bfe0df52df879f1454469aabfd20c50635277fb33e3051c7fd99639 */
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
  mrb_int native_N;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_N);

  /* Invocation */
  sqlite3_soft_heap_limit(native_N);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_soft_heap_limit64 */
/* sha: 2c34c34edafee745cae48376f60f07b4103575104ce9dd6e4bcb502c1039e88c */
#if BIND_sqlite3_soft_heap_limit64_FUNCTION
#define sqlite3_soft_heap_limit64_REQUIRED_ARGC 1
#define sqlite3_soft_heap_limit64_OPTIONAL_ARGC 0
/* sqlite3_soft_heap_limit64
 *
 * Parameters:
 * - N: sqlite3_int64
 * Return Type: sqlite3_int64
 */
mrb_value
mrb_SQLite_sqlite3_soft_heap_limit64(mrb_state* mrb, mrb_value self) {
  mrb_int native_N;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_N);

  /* Invocation */
  sqlite3_int64 native_return_value = sqlite3_soft_heap_limit64(native_N);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_sourceid */
/* sha: 3c6f8a6ac6dd3357c951ea93379ec0e82a68698917a3d8d2664008d009e37a1a */
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
  const char * native_return_value = sqlite3_sourceid();

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_sql */
/* sha: e9b4f1bc90872f7e10e39c51849a09b3e196971a25f0b8245bcc5fc25d516737 */
#if BIND_sqlite3_sql_FUNCTION
#define sqlite3_sql_REQUIRED_ARGC 1
#define sqlite3_sql_OPTIONAL_ARGC 0
/* sqlite3_sql
 *
 * Parameters:
 * - pStmt: sqlite3_stmt *
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

  /* Unbox param: pStmt */
  sqlite3_stmt * native_pStmt = (mrb_nil_p(pStmt) ? NULL : mruby_unbox_sqlite3_stmt(pStmt));

  /* Invocation */
  const char * native_return_value = sqlite3_sql(native_pStmt);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_status */
/* sha: 72a1b98680e921fe482e30c4da048c23fa522eaf5eda32118d9c4860bb544ec2 */
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
  mrb_int native_op;
  mrb_value pCurrent;
  mrb_value pHighwater;
  mrb_int native_resetFlag;

  /* Fetch the args */
  mrb_get_args(mrb, "iooi", &native_op, &pCurrent, &pHighwater, &native_resetFlag);

  /* Type checking */
  TODO_type_check_int_PTR(pCurrent);
  TODO_type_check_int_PTR(pHighwater);

  /* Unbox param: pCurrent */
  int * native_pCurrent = TODO_mruby_unbox_int_PTR(pCurrent);

  /* Unbox param: pHighwater */
  int * native_pHighwater = TODO_mruby_unbox_int_PTR(pHighwater);

  /* Invocation */
  int native_return_value = sqlite3_status(native_op, native_pCurrent, native_pHighwater, native_resetFlag);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_status64 */
/* sha: f26e1554e265a4bf8ca2ed7bb91d4d6619383beda4b6d06fb51e791894a7b16e */
#if BIND_sqlite3_status64_FUNCTION
#define sqlite3_status64_REQUIRED_ARGC 4
#define sqlite3_status64_OPTIONAL_ARGC 0
/* sqlite3_status64
 *
 * Parameters:
 * - op: int
 * - pCurrent: sqlite3_int64 *
 * - pHighwater: sqlite3_int64 *
 * - resetFlag: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_status64(mrb_state* mrb, mrb_value self) {
  mrb_int native_op;
  mrb_value pCurrent;
  mrb_value pHighwater;
  mrb_int native_resetFlag;

  /* Fetch the args */
  mrb_get_args(mrb, "iooi", &native_op, &pCurrent, &pHighwater, &native_resetFlag);

  /* Type checking */
  TODO_type_check_sqlite3_int64_PTR(pCurrent);
  TODO_type_check_sqlite3_int64_PTR(pHighwater);

  /* Unbox param: pCurrent */
  sqlite3_int64 * native_pCurrent = TODO_mruby_unbox_sqlite3_int64_PTR(pCurrent);

  /* Unbox param: pHighwater */
  sqlite3_int64 * native_pHighwater = TODO_mruby_unbox_sqlite3_int64_PTR(pHighwater);

  /* Invocation */
  int native_return_value = sqlite3_status64(native_op, native_pCurrent, native_pHighwater, native_resetFlag);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_step */
/* sha: e4bc8b8adb96c5eef42a30e001b2d587b85069e03a05c3e62acdfddc6a4afe79 */
#if BIND_sqlite3_step_FUNCTION
#define sqlite3_step_REQUIRED_ARGC 1
#define sqlite3_step_OPTIONAL_ARGC 0
/* sqlite3_step
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
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

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  int native_return_value = sqlite3_step(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_stmt_busy */
/* sha: 3bc17a537087ff8ab32d00abeddf45be8e2a1549b18285c16b063a4f56bada79 */
#if BIND_sqlite3_stmt_busy_FUNCTION
#define sqlite3_stmt_busy_REQUIRED_ARGC 1
#define sqlite3_stmt_busy_OPTIONAL_ARGC 0
/* sqlite3_stmt_busy
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
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

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  int native_return_value = sqlite3_stmt_busy(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_stmt_readonly */
/* sha: 9aacbde40fe84df2e2b58ed4f4969ef3f980793257a696b0d00a497da47f5682 */
#if BIND_sqlite3_stmt_readonly_FUNCTION
#define sqlite3_stmt_readonly_REQUIRED_ARGC 1
#define sqlite3_stmt_readonly_OPTIONAL_ARGC 0
/* sqlite3_stmt_readonly
 *
 * Parameters:
 * - pStmt: sqlite3_stmt *
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

  /* Unbox param: pStmt */
  sqlite3_stmt * native_pStmt = (mrb_nil_p(pStmt) ? NULL : mruby_unbox_sqlite3_stmt(pStmt));

  /* Invocation */
  int native_return_value = sqlite3_stmt_readonly(native_pStmt);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_stmt_status */
/* sha: 69853b659f56f3fff10ce03e5dfa90bf93af28d7786dc8db2329911dc7d3af9c */
#if BIND_sqlite3_stmt_status_FUNCTION
#define sqlite3_stmt_status_REQUIRED_ARGC 3
#define sqlite3_stmt_status_OPTIONAL_ARGC 0
/* sqlite3_stmt_status
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - op: int
 * - resetFlg: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_stmt_status(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_op;
  mrb_int native_resetFlg;

  /* Fetch the args */
  mrb_get_args(mrb, "oii", &arg1, &native_op, &native_resetFlg);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Invocation */
  int native_return_value = sqlite3_stmt_status(native_arg1, native_op, native_resetFlg);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_strglob */
/* sha: 6c13700e21f2b2c020e5d68101dd34cfb684ae67a94bc10c34c4c1ec297e09ba */
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
  char * native_zGlob = NULL;
  char * native_zStr = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "zz", &native_zGlob, &native_zStr);

  /* Invocation */
  int native_return_value = sqlite3_strglob(native_zGlob, native_zStr);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_stricmp */
/* sha: 76a6f5e11b8ec58aec41047162fb7228b0b4186c95352af704d4c28f536a8686 */
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
  char * native_arg1 = NULL;
  char * native_arg2 = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "zz", &native_arg1, &native_arg2);

  /* Invocation */
  int native_return_value = sqlite3_stricmp(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_strnicmp */
/* sha: 07f137a44f2e67bb00a632f6613404e5a561f736311f182e8cde15ad9ee13737 */
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
  char * native_arg1 = NULL;
  char * native_arg2 = NULL;
  mrb_int native_arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "zzi", &native_arg1, &native_arg2, &native_arg3);

  /* Invocation */
  int native_return_value = sqlite3_strnicmp(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_table_column_metadata */
/* sha: c902dd6bdfcc6564b3a0732188065f939099c6fbdea9b0945179cb5db4e065b9 */
#if BIND_sqlite3_table_column_metadata_FUNCTION
#define sqlite3_table_column_metadata_REQUIRED_ARGC 9
#define sqlite3_table_column_metadata_OPTIONAL_ARGC 0
/* sqlite3_table_column_metadata
 *
 * Parameters:
 * - db: sqlite3 *
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
  char * native_zDbName = NULL;
  char * native_zTableName = NULL;
  char * native_zColumnName = NULL;
  mrb_value pzDataType;
  mrb_value pzCollSeq;
  mrb_value pNotNull;
  mrb_value pPrimaryKey;
  mrb_value pAutoinc;

  /* Fetch the args */
  mrb_get_args(mrb, "ozzzooooo", &db, &native_zDbName, &native_zTableName, &native_zColumnName, &pzDataType, &pzCollSeq, &pNotNull, &pPrimaryKey, &pAutoinc);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR_PTR(pzDataType);
  TODO_type_check_char_PTR_PTR(pzCollSeq);
  TODO_type_check_int_PTR(pNotNull);
  TODO_type_check_int_PTR(pPrimaryKey);
  TODO_type_check_int_PTR(pAutoinc);

  /* Unbox param: db */
  sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Unbox param: pzDataType */
  const char ** native_pzDataType = TODO_mruby_unbox_char_PTR_PTR(pzDataType);

  /* Unbox param: pzCollSeq */
  const char ** native_pzCollSeq = TODO_mruby_unbox_char_PTR_PTR(pzCollSeq);

  /* Unbox param: pNotNull */
  int * native_pNotNull = TODO_mruby_unbox_int_PTR(pNotNull);

  /* Unbox param: pPrimaryKey */
  int * native_pPrimaryKey = TODO_mruby_unbox_int_PTR(pPrimaryKey);

  /* Unbox param: pAutoinc */
  int * native_pAutoinc = TODO_mruby_unbox_int_PTR(pAutoinc);

  /* Invocation */
  int native_return_value = sqlite3_table_column_metadata(native_db, native_zDbName, native_zTableName, native_zColumnName, native_pzDataType, native_pzCollSeq, native_pNotNull, native_pPrimaryKey, native_pAutoinc);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_test_control */
/* sha: 5728a9ba52d1f9dbc9e501bd2e4c59670f003b03ac4cd4853d094d87a33dc073 */
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
  mrb_int native_op;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_op);

  /* Invocation */
  int native_return_value = sqlite3_test_control(native_op);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_thread_cleanup */
/* sha: 9efa39544221763790f1de1de40c90c7ba108e05ffa1ffe93ded66e85b01fd45 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_threadsafe */
/* sha: c3c0fbfae687aa5ca7fdffb06c68de0b1dc3f47d0238b0c7d057ee10494a6b02 */
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
  int native_return_value = sqlite3_threadsafe();

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_total_changes */
/* sha: 9afcdb4d0db9de2c06c4713d23280e693c39af905cad33fb471b0ef521167ac1 */
#if BIND_sqlite3_total_changes_FUNCTION
#define sqlite3_total_changes_REQUIRED_ARGC 1
#define sqlite3_total_changes_OPTIONAL_ARGC 0
/* sqlite3_total_changes
 *
 * Parameters:
 * - arg1: sqlite3 *
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

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  int native_return_value = sqlite3_total_changes(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_trace */
/* sha: 8598daa00d5706dca09e6086f1f9fe87f3cac34434d37ba70e1192cf2b6b65f4 */
#if BIND_sqlite3_trace_FUNCTION
#define sqlite3_trace_REQUIRED_ARGC 3
#define sqlite3_trace_OPTIONAL_ARGC 0
/* sqlite3_trace
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - xTrace: void (*)(void *, const char *)
 * - arg3: void *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_trace(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value xTrace;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &xTrace, &arg3);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMAchar_PTR_RPAREN(xTrace);
  TODO_type_check_void_PTR(arg3);

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Unbox param: xTrace */
  void (*native_xTrace)(void *, const char *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMAchar_PTR_RPAREN(xTrace);

  /* Unbox param: arg3 */
  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  /* Invocation */
  void * native_return_value = sqlite3_trace(native_arg1, native_xTrace, native_arg3);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_transfer_bindings */
/* sha: a7d23e8e1be2557976880295442ddd40534889efb9813d6d306085109c2949f1 */
#if BIND_sqlite3_transfer_bindings_FUNCTION
#define sqlite3_transfer_bindings_REQUIRED_ARGC 2
#define sqlite3_transfer_bindings_OPTIONAL_ARGC 0
/* sqlite3_transfer_bindings
 *
 * Parameters:
 * - arg1: sqlite3_stmt *
 * - arg2: sqlite3_stmt *
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

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Unbox param: arg2 */
  sqlite3_stmt * native_arg2 = (mrb_nil_p(arg2) ? NULL : mruby_unbox_sqlite3_stmt(arg2));

  /* Invocation */
  int native_return_value = sqlite3_transfer_bindings(native_arg1, native_arg2);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_unlock_notify */
/* sha: 8e684a0f6130d4f9a66bc71b1fe154939e722f5ae465722b829fc005c458b4f5 */
#if BIND_sqlite3_unlock_notify_FUNCTION
#define sqlite3_unlock_notify_REQUIRED_ARGC 3
#define sqlite3_unlock_notify_OPTIONAL_ARGC 0
/* sqlite3_unlock_notify
 *
 * Parameters:
 * - pBlocked: sqlite3 *
 * - xNotify: void (*)(void **, int)
 * - pNotifyArg: void *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_unlock_notify(mrb_state* mrb, mrb_value self) {
  mrb_value pBlocked;
  mrb_value xNotify;
  mrb_value pNotifyArg;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &pBlocked, &xNotify, &pNotifyArg);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pBlocked, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_PTR_COMMA_int_RPAREN(xNotify);
  TODO_type_check_void_PTR(pNotifyArg);

  /* Unbox param: pBlocked */
  sqlite3 * native_pBlocked = (mrb_nil_p(pBlocked) ? NULL : mruby_unbox_sqlite3(pBlocked));

  /* Unbox param: xNotify */
  void (*native_xNotify)(void **, int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_PTR_COMMA_int_RPAREN(xNotify);

  /* Unbox param: pNotifyArg */
  void * native_pNotifyArg = TODO_mruby_unbox_void_PTR(pNotifyArg);

  /* Invocation */
  int native_return_value = sqlite3_unlock_notify(native_pBlocked, native_xNotify, native_pNotifyArg);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_update_hook */
/* sha: 281019ef03108841e480e5d37ea007222117a31b2fb0c69878c83b6762559099 */
#if BIND_sqlite3_update_hook_FUNCTION
#define sqlite3_update_hook_REQUIRED_ARGC 3
#define sqlite3_update_hook_OPTIONAL_ARGC 0
/* sqlite3_update_hook
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - arg2: void (*)(void *, int, const char *, const char *, sqlite3_int64)
 * - arg3: void *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_update_hook(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMAchar_PTR_COMMA_const_char_PTR_COMMA_sqlite3_int64_RPAREN(arg2);
  TODO_type_check_void_PTR(arg3);

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Unbox param: arg2 */
  void (*native_arg2)(void *, int, const char *, const char *, sqlite3_int64) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_intCOMMAchar_PTR_COMMA_const_char_PTR_COMMA_sqlite3_int64_RPAREN(arg2);

  /* Unbox param: arg3 */
  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  /* Invocation */
  void * native_return_value = sqlite3_update_hook(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_uri_boolean */
/* sha: d3606648591356d7e48fedcd607bf1b3bdfe6ed6579ad2e06467c401382062f9 */
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
  char * native_zFile = NULL;
  char * native_zParam = NULL;
  mrb_int native_bDefault;

  /* Fetch the args */
  mrb_get_args(mrb, "zzi", &native_zFile, &native_zParam, &native_bDefault);

  /* Invocation */
  int native_return_value = sqlite3_uri_boolean(native_zFile, native_zParam, native_bDefault);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_uri_int64 */
/* sha: a71e4ef6495d8f0487d4cc658d31dd09c286935f1a9500d0537c25e86c35e4b1 */
#if BIND_sqlite3_uri_int64_FUNCTION
#define sqlite3_uri_int64_REQUIRED_ARGC 3
#define sqlite3_uri_int64_OPTIONAL_ARGC 0
/* sqlite3_uri_int64
 *
 * Parameters:
 * - arg1: const char *
 * - arg2: const char *
 * - arg3: sqlite3_int64
 * Return Type: sqlite3_int64
 */
mrb_value
mrb_SQLite_sqlite3_uri_int64(mrb_state* mrb, mrb_value self) {
  char * native_arg1 = NULL;
  char * native_arg2 = NULL;
  mrb_int native_arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "zzi", &native_arg1, &native_arg2, &native_arg3);

  /* Invocation */
  sqlite3_int64 native_return_value = sqlite3_uri_int64(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_uri_parameter */
/* sha: 2ee6991df2f3097f2c238984ea8d7febf07e9249e422a889c3aa964d34aeb7c3 */
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
  char * native_zFilename = NULL;
  char * native_zParam = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "zz", &native_zFilename, &native_zParam);

  /* Invocation */
  const char * native_return_value = sqlite3_uri_parameter(native_zFilename, native_zParam);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_user_data */
/* sha: 2c1cd127b5fd0d420d48b1d6c0d394ade7ff59ee877e2d98cd50fdd42a1dbd94 */
#if BIND_sqlite3_user_data_FUNCTION
#define sqlite3_user_data_REQUIRED_ARGC 1
#define sqlite3_user_data_OPTIONAL_ARGC 0
/* sqlite3_user_data
 *
 * Parameters:
 * - arg1: sqlite3_context *
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

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Invocation */
  void * native_return_value = sqlite3_user_data(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_blob */
/* sha: d24f60c5c48d7b6c6ec2bc68dd3c99fcf3ff10148ef7cabddad9f5b2fde71631 */
#if BIND_sqlite3_value_blob_FUNCTION
#define sqlite3_value_blob_REQUIRED_ARGC 1
#define sqlite3_value_blob_OPTIONAL_ARGC 0
/* sqlite3_value_blob
 *
 * Parameters:
 * - arg1: sqlite3_value *
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

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  const void * native_return_value = sqlite3_value_blob(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_bytes */
/* sha: a8df22eb637d8cbc69afb0a64fc94e9b74a4c174523381e91c4a913b16d68243 */
#if BIND_sqlite3_value_bytes_FUNCTION
#define sqlite3_value_bytes_REQUIRED_ARGC 1
#define sqlite3_value_bytes_OPTIONAL_ARGC 0
/* sqlite3_value_bytes
 *
 * Parameters:
 * - arg1: sqlite3_value *
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

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  int native_return_value = sqlite3_value_bytes(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_bytes16 */
/* sha: 2d2e71cf4024cd6b37915504b1b8de650f62e48da5a3694435bef68a91d75fba */
#if BIND_sqlite3_value_bytes16_FUNCTION
#define sqlite3_value_bytes16_REQUIRED_ARGC 1
#define sqlite3_value_bytes16_OPTIONAL_ARGC 0
/* sqlite3_value_bytes16
 *
 * Parameters:
 * - arg1: sqlite3_value *
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

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  int native_return_value = sqlite3_value_bytes16(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_double */
/* sha: 43c4afdb6d6b9da1567acbd1b06acfaeb7d931f20a024e160da4882e42d9f1b4 */
#if BIND_sqlite3_value_double_FUNCTION
#define sqlite3_value_double_REQUIRED_ARGC 1
#define sqlite3_value_double_OPTIONAL_ARGC 0
/* sqlite3_value_double
 *
 * Parameters:
 * - arg1: sqlite3_value *
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

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  double native_return_value = sqlite3_value_double(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_int */
/* sha: ce36148ebdd5ac604d78fea6d9e50a1700aa17b95a1110ce0260c764661ba689 */
#if BIND_sqlite3_value_int_FUNCTION
#define sqlite3_value_int_REQUIRED_ARGC 1
#define sqlite3_value_int_OPTIONAL_ARGC 0
/* sqlite3_value_int
 *
 * Parameters:
 * - arg1: sqlite3_value *
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

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  int native_return_value = sqlite3_value_int(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_int64 */
/* sha: 8fa437dd4028a98919c4978ae532509dd3ee3a6ffa31203f9630f5bbf2bd78e6 */
#if BIND_sqlite3_value_int64_FUNCTION
#define sqlite3_value_int64_REQUIRED_ARGC 1
#define sqlite3_value_int64_OPTIONAL_ARGC 0
/* sqlite3_value_int64
 *
 * Parameters:
 * - arg1: sqlite3_value *
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

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  sqlite3_int64 native_return_value = sqlite3_value_int64(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_numeric_type */
/* sha: 64c07e43e1aaee6430ed5a5e8d995563715c115b48afe5a312935a34333b9cca */
#if BIND_sqlite3_value_numeric_type_FUNCTION
#define sqlite3_value_numeric_type_REQUIRED_ARGC 1
#define sqlite3_value_numeric_type_OPTIONAL_ARGC 0
/* sqlite3_value_numeric_type
 *
 * Parameters:
 * - arg1: sqlite3_value *
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

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  int native_return_value = sqlite3_value_numeric_type(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_text */
/* sha: 971d9a353fb1799ebb1f1f0dc11389bb14a4319190a6097b9c6d52b785ec516a */
#if BIND_sqlite3_value_text_FUNCTION
#define sqlite3_value_text_REQUIRED_ARGC 1
#define sqlite3_value_text_OPTIONAL_ARGC 0
/* sqlite3_value_text
 *
 * Parameters:
 * - arg1: sqlite3_value *
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

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  const unsigned char * native_return_value = sqlite3_value_text(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_unsigned_char_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_text16 */
/* sha: dbfb3d892cdeb1d3e4f7d5f3849d8b657283b409b24c7c0d7c47d51d81c8a53a */
#if BIND_sqlite3_value_text16_FUNCTION
#define sqlite3_value_text16_REQUIRED_ARGC 1
#define sqlite3_value_text16_OPTIONAL_ARGC 0
/* sqlite3_value_text16
 *
 * Parameters:
 * - arg1: sqlite3_value *
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

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  const void * native_return_value = sqlite3_value_text16(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_text16be */
/* sha: b110c052dc79468c7a4f40b4742ad9fff5adf23c44002d69bacd83da16329bd2 */
#if BIND_sqlite3_value_text16be_FUNCTION
#define sqlite3_value_text16be_REQUIRED_ARGC 1
#define sqlite3_value_text16be_OPTIONAL_ARGC 0
/* sqlite3_value_text16be
 *
 * Parameters:
 * - arg1: sqlite3_value *
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

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  const void * native_return_value = sqlite3_value_text16be(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_text16le */
/* sha: bf9fd57a07dce8ac40ee1d496a7fa9673260fc562f3a13ffe68c7720933b74fb */
#if BIND_sqlite3_value_text16le_FUNCTION
#define sqlite3_value_text16le_REQUIRED_ARGC 1
#define sqlite3_value_text16le_OPTIONAL_ARGC 0
/* sqlite3_value_text16le
 *
 * Parameters:
 * - arg1: sqlite3_value *
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

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  const void * native_return_value = sqlite3_value_text16le(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_type */
/* sha: ccbd6af9c109fe76faf10ff3eb2b602c09ca98cb6402defc479d2ec3b3d3e317 */
#if BIND_sqlite3_value_type_FUNCTION
#define sqlite3_value_type_REQUIRED_ARGC 1
#define sqlite3_value_type_OPTIONAL_ARGC 0
/* sqlite3_value_type
 *
 * Parameters:
 * - arg1: sqlite3_value *
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

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_Mem(arg1));

  /* Invocation */
  int native_return_value = sqlite3_value_type(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_vfs_find */
/* sha: f60944041b1f3f8b8cfb22653aaa664bb9228520f69ed948362ae8f77d8a462c */
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
  char * native_zVfsName = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_zVfsName);

  /* Invocation */
  sqlite3_vfs * native_return_value = sqlite3_vfs_find(native_zVfsName);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_sqlite3_vfs(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_vfs_register */
/* sha: de34ca22acf7fa74498c4aa8a440e8e3d982e59fcd16acc1ac430bf956a63137 */
#if BIND_sqlite3_vfs_register_FUNCTION
#define sqlite3_vfs_register_REQUIRED_ARGC 2
#define sqlite3_vfs_register_OPTIONAL_ARGC 0
/* sqlite3_vfs_register
 *
 * Parameters:
 * - arg1: sqlite3_vfs *
 * - makeDflt: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_vfs_register(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_makeDflt;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_makeDflt);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Vfs_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Vfs expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_vfs * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_vfs(arg1));

  /* Invocation */
  int native_return_value = sqlite3_vfs_register(native_arg1, native_makeDflt);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_vfs_unregister */
/* sha: 2efb4517a64469ac95a07c27d9a078f5d690eb9f2c4f144a7d028cff5a5ef654 */
#if BIND_sqlite3_vfs_unregister_FUNCTION
#define sqlite3_vfs_unregister_REQUIRED_ARGC 1
#define sqlite3_vfs_unregister_OPTIONAL_ARGC 0
/* sqlite3_vfs_unregister
 *
 * Parameters:
 * - arg1: sqlite3_vfs *
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

  /* Unbox param: arg1 */
  sqlite3_vfs * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_vfs(arg1));

  /* Invocation */
  int native_return_value = sqlite3_vfs_unregister(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_vmprintf */
/* sha: ddbfbb5146cc57590d269c92fec37742aea39dbe57067eb6250904f31fd9ecc2 */
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
  char * native_arg1 = NULL;
  mrb_int native_va_list;

  /* Fetch the args */
  mrb_get_args(mrb, "zi", &native_arg1, &native_va_list);

  /* Invocation */
  char * native_return_value = sqlite3_vmprintf(native_arg1, native_va_list);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_char_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_vsnprintf */
/* sha: 070ad9a37040deecf8c7ba29857d007357676fd096871af328799baadfb83edd */
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
  mrb_int native_arg1;
  mrb_value arg2;
  char * native_arg3 = NULL;
  mrb_int native_va_list;

  /* Fetch the args */
  mrb_get_args(mrb, "iozi", &native_arg1, &arg2, &native_arg3, &native_va_list);

  /* Type checking */
  TODO_type_check_char_PTR(arg2);

  /* Unbox param: arg2 */
  char * native_arg2 = TODO_mruby_unbox_char_PTR(arg2);

  /* Invocation */
  char * native_return_value = sqlite3_vsnprintf(native_arg1, native_arg2, native_arg3, native_va_list);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_char_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_vtab_config */
/* sha: bc917fefcfad36d2d142f896dafc0029cf8590af35150b9ad2518b5348de0fb1 */
#if BIND_sqlite3_vtab_config_FUNCTION
#define sqlite3_vtab_config_REQUIRED_ARGC 2
#define sqlite3_vtab_config_OPTIONAL_ARGC 0
/* sqlite3_vtab_config
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - op: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_vtab_config(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_int native_op;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &arg1, &native_op);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  int native_return_value = sqlite3_vtab_config(native_arg1, native_op);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_vtab_on_conflict */
/* sha: 5d57c9005d11918add63059a6f84623cf18c67591f6d49ced314714bac5f66a3 */
#if BIND_sqlite3_vtab_on_conflict_FUNCTION
#define sqlite3_vtab_on_conflict_REQUIRED_ARGC 1
#define sqlite3_vtab_on_conflict_OPTIONAL_ARGC 0
/* sqlite3_vtab_on_conflict
 *
 * Parameters:
 * - arg1: sqlite3 *
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

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Invocation */
  int native_return_value = sqlite3_vtab_on_conflict(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_wal_autocheckpoint */
/* sha: 280b54b803db17081a679103b593ada28a0094fdd5b3b18f1532f3dd4f84e6f5 */
#if BIND_sqlite3_wal_autocheckpoint_FUNCTION
#define sqlite3_wal_autocheckpoint_REQUIRED_ARGC 2
#define sqlite3_wal_autocheckpoint_OPTIONAL_ARGC 0
/* sqlite3_wal_autocheckpoint
 *
 * Parameters:
 * - db: sqlite3 *
 * - N: int
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_wal_autocheckpoint(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_int native_N;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &db, &native_N);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }

  /* Unbox param: db */
  sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Invocation */
  int native_return_value = sqlite3_wal_autocheckpoint(native_db, native_N);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_wal_checkpoint */
/* sha: fc021553df76f9a2ec606db0bcc653c9d70e794957fe7f4bd56f251709aed51d */
#if BIND_sqlite3_wal_checkpoint_FUNCTION
#define sqlite3_wal_checkpoint_REQUIRED_ARGC 2
#define sqlite3_wal_checkpoint_OPTIONAL_ARGC 0
/* sqlite3_wal_checkpoint
 *
 * Parameters:
 * - db: sqlite3 *
 * - zDb: const char *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_wal_checkpoint(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  char * native_zDb = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &db, &native_zDb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }

  /* Unbox param: db */
  sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Invocation */
  int native_return_value = sqlite3_wal_checkpoint(native_db, native_zDb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_wal_checkpoint_v2 */
/* sha: d5620569e1beb03289ead1736197f5424d224eba0a036b082b902a33a6c77154 */
#if BIND_sqlite3_wal_checkpoint_v2_FUNCTION
#define sqlite3_wal_checkpoint_v2_REQUIRED_ARGC 5
#define sqlite3_wal_checkpoint_v2_OPTIONAL_ARGC 0
/* sqlite3_wal_checkpoint_v2
 *
 * Parameters:
 * - db: sqlite3 *
 * - zDb: const char *
 * - eMode: int
 * - pnLog: int *
 * - pnCkpt: int *
 * Return Type: int
 */
mrb_value
mrb_SQLite_sqlite3_wal_checkpoint_v2(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  char * native_zDb = NULL;
  mrb_int native_eMode;
  mrb_value pnLog;
  mrb_value pnCkpt;

  /* Fetch the args */
  mrb_get_args(mrb, "ozioo", &db, &native_zDb, &native_eMode, &pnLog, &pnCkpt);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_PTR(pnLog);
  TODO_type_check_int_PTR(pnCkpt);

  /* Unbox param: db */
  sqlite3 * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_sqlite3(db));

  /* Unbox param: pnLog */
  int * native_pnLog = TODO_mruby_unbox_int_PTR(pnLog);

  /* Unbox param: pnCkpt */
  int * native_pnCkpt = TODO_mruby_unbox_int_PTR(pnCkpt);

  /* Invocation */
  int native_return_value = sqlite3_wal_checkpoint_v2(native_db, native_zDb, native_eMode, native_pnLog, native_pnCkpt);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_wal_hook */
/* sha: fe792e84d8c6c67e022df2d74811b39c073fec1add2003594c35e4fbac7be0b0 */
#if BIND_sqlite3_wal_hook_FUNCTION
#define sqlite3_wal_hook_REQUIRED_ARGC 3
#define sqlite3_wal_hook_OPTIONAL_ARGC 0
/* sqlite3_wal_hook
 *
 * Parameters:
 * - arg1: sqlite3 *
 * - arg2: int (*)(void *, sqlite3 *, const char *, int)
 * - arg3: void *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_sqlite3_wal_hook(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;
  mrb_value arg2;
  mrb_value arg3;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &arg1, &arg2, &arg3);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3 expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_sqlite3_PTR_COMMAchar_PTR_COMMA_int_RPAREN(arg2);
  TODO_type_check_void_PTR(arg3);

  /* Unbox param: arg1 */
  sqlite3 * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3(arg1));

  /* Unbox param: arg2 */
  int (*native_arg2)(void *, sqlite3 *, const char *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_sqlite3_PTR_COMMAchar_PTR_COMMA_int_RPAREN(arg2);

  /* Unbox param: arg3 */
  void * native_arg3 = TODO_mruby_unbox_void_PTR(arg3);

  /* Invocation */
  void * native_return_value = sqlite3_wal_hook(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_mruby_sqlite_gem_init(mrb_state* mrb) {
  struct RClass* SQLite_module = mrb_define_module(mrb, "SQLite");
  mruby_SQLite_define_macro_constants(mrb);

/* MRUBY_BINDING: class_initializations */
/* sha: 627773eafb34098b2323c95732eee0fcf708cad7e4c22908a9670e1dc7ea85fc */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: global_function_definitions */
/* sha: 40bb808d78804b745dc799c6262d1119e0f62c9a0eab76f7e2cf3d89e58592a4 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: custom_module_init */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

}

void mrb_mruby_sqlite_gem_final(mrb_state* mrb){
/* MRUBY_BINDING: custom_module_final */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#ifdef __cplusplus
}
#endif
