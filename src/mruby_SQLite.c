#include "mruby_SQLite.h"

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

#ifdef __cplusplus
extern "C" {
#endif

/* MRUBY_BINDING: sqlite3_aggregate_context */
/* sha: c51d990d1e0b1f8a58623ea1236f7a3a74fa541de98378c6c55f364cad0d3f73 */
#if BIND_sqlite3_aggregate_context_FUNCTION
#define sqlite3_aggregate_context_REQUIRED_ARGC 2
#define sqlite3_aggregate_context_OPTIONAL_ARGC 0
/* void * sqlite3_aggregate_context(sqlite3_context * arg1, int nBytes) */
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
/* sha: e31161c9fdd1e2846ec6aa494c25ead580a70c9789141abd00676e9960bcf535 */
#if BIND_sqlite3_aggregate_count_FUNCTION
#define sqlite3_aggregate_count_REQUIRED_ARGC 1
#define sqlite3_aggregate_count_OPTIONAL_ARGC 0
/* int sqlite3_aggregate_count(sqlite3_context * arg1) */
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
/* sha: 66c5da22e0342f99d4b11ccd9d5353512f75ae2c6b56f50c631bf8cd5b489be0 */
#if BIND_sqlite3_auto_extension_FUNCTION
#define sqlite3_auto_extension_REQUIRED_ARGC 1
#define sqlite3_auto_extension_OPTIONAL_ARGC 0
/* int sqlite3_auto_extension(void (*)(void) xEntryPoint) */
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
/* sha: 0d59fbef3dc804c1084c766a41405e0274af47089b512e020ad10961b1d90b98 */
#if BIND_sqlite3_backup_finish_FUNCTION
#define sqlite3_backup_finish_REQUIRED_ARGC 1
#define sqlite3_backup_finish_OPTIONAL_ARGC 0
/* int sqlite3_backup_finish(sqlite3_backup * p) */
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
/* sha: d415a48ceb9eef96ca72ed7e87ab4fb46b131d6f377e55fbe664a3ce53cb05b2 */
#if BIND_sqlite3_backup_init_FUNCTION
#define sqlite3_backup_init_REQUIRED_ARGC 4
#define sqlite3_backup_init_OPTIONAL_ARGC 0
/* sqlite3_backup * sqlite3_backup_init(sqlite3 * pDest, const char * zDestName, sqlite3 * pSource, const char * zSourceName) */
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
/* sha: dd2e5dc611b0718c554e4407dccf42d620778f1a1ad75cf9543f3292b868835b */
#if BIND_sqlite3_backup_pagecount_FUNCTION
#define sqlite3_backup_pagecount_REQUIRED_ARGC 1
#define sqlite3_backup_pagecount_OPTIONAL_ARGC 0
/* int sqlite3_backup_pagecount(sqlite3_backup * p) */
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
/* sha: 80280b72d88d44bc6871498e3f79fcc21483a1df3ef2699621489708fd4d14e8 */
#if BIND_sqlite3_backup_remaining_FUNCTION
#define sqlite3_backup_remaining_REQUIRED_ARGC 1
#define sqlite3_backup_remaining_OPTIONAL_ARGC 0
/* int sqlite3_backup_remaining(sqlite3_backup * p) */
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
/* sha: 2833d06011720797c19db460d21488acd7957f661c8a6c56beaf4b2ff037d340 */
#if BIND_sqlite3_backup_step_FUNCTION
#define sqlite3_backup_step_REQUIRED_ARGC 2
#define sqlite3_backup_step_OPTIONAL_ARGC 0
/* int sqlite3_backup_step(sqlite3_backup * p, int nPage) */
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
/* sha: 2dfb5b718f9b667dc40f3260e7a6d841464199bca4c97288280ccf106222eade */
#if BIND_sqlite3_bind_blob64_FUNCTION
#define sqlite3_bind_blob64_REQUIRED_ARGC 5
#define sqlite3_bind_blob64_OPTIONAL_ARGC 0
/* int sqlite3_bind_blob64(sqlite3_stmt * arg1, int arg2, const void * arg3, sqlite3_uint64 arg4, void (*)(void *) arg5) */
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
/* sha: 4bdb9a2552b589ec9feb47e40d76b9d7b02a7c87db9d802adf6a55f1a09c3485 */
#if BIND_sqlite3_bind_double_FUNCTION
#define sqlite3_bind_double_REQUIRED_ARGC 3
#define sqlite3_bind_double_OPTIONAL_ARGC 0
/* int sqlite3_bind_double(sqlite3_stmt * arg1, int arg2, double arg3) */
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
/* sha: 1b1023433994db5f92239a8a0d0e45e8bdb7582cb201f3f2b169c5441f781479 */
#if BIND_sqlite3_bind_int_FUNCTION
#define sqlite3_bind_int_REQUIRED_ARGC 3
#define sqlite3_bind_int_OPTIONAL_ARGC 0
/* int sqlite3_bind_int(sqlite3_stmt * arg1, int arg2, int arg3) */
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
/* sha: f602c453ae14d5270fd5e81321aa2996a2c03ecea8d1157db998ce35243cb66d */
#if BIND_sqlite3_bind_int64_FUNCTION
#define sqlite3_bind_int64_REQUIRED_ARGC 3
#define sqlite3_bind_int64_OPTIONAL_ARGC 0
/* int sqlite3_bind_int64(sqlite3_stmt * arg1, int arg2, sqlite3_int64 arg3) */
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
/* sha: f90cc676a0199d2945ad73261c398d147cace6337fec25850f414a095d6f3263 */
#if BIND_sqlite3_bind_null_FUNCTION
#define sqlite3_bind_null_REQUIRED_ARGC 2
#define sqlite3_bind_null_OPTIONAL_ARGC 0
/* int sqlite3_bind_null(sqlite3_stmt * arg1, int arg2) */
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
/* sha: f9e6cce940b95d51fa5bba5e07568455a8da1d23384a4a54381f757db9cf1c3e */
#if BIND_sqlite3_bind_parameter_count_FUNCTION
#define sqlite3_bind_parameter_count_REQUIRED_ARGC 1
#define sqlite3_bind_parameter_count_OPTIONAL_ARGC 0
/* int sqlite3_bind_parameter_count(sqlite3_stmt * arg1) */
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
/* sha: 8f73416f634a8881d26c4b9fab7477fa31bbd1fd6275253ef8288f2f6913243f */
#if BIND_sqlite3_bind_parameter_index_FUNCTION
#define sqlite3_bind_parameter_index_REQUIRED_ARGC 2
#define sqlite3_bind_parameter_index_OPTIONAL_ARGC 0
/* int sqlite3_bind_parameter_index(sqlite3_stmt * arg1, const char * zName) */
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
/* sha: 1633bc6be95376cf47aae46cbed5d3547fa7f11d002214988f9bacdeac59026a */
#if BIND_sqlite3_bind_parameter_name_FUNCTION
#define sqlite3_bind_parameter_name_REQUIRED_ARGC 2
#define sqlite3_bind_parameter_name_OPTIONAL_ARGC 0
/* const char * sqlite3_bind_parameter_name(sqlite3_stmt * arg1, int arg2) */
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
/* sha: cdd80accd01dc1a1e0357202eafd4e35c6f21fc724387c862258ad4392bd73fb */
#if BIND_sqlite3_bind_text16_FUNCTION
#define sqlite3_bind_text16_REQUIRED_ARGC 5
#define sqlite3_bind_text16_OPTIONAL_ARGC 0
/* int sqlite3_bind_text16(sqlite3_stmt * arg1, int arg2, const void * arg3, int arg4, void (*)(void *) arg5) */
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
/* sha: 3710fdb3cf7ff2cac492215afff590cca0cbbb72d83cfb0f762293bcae42d0ed */
#if BIND_sqlite3_bind_text64_FUNCTION
#define sqlite3_bind_text64_REQUIRED_ARGC 6
#define sqlite3_bind_text64_OPTIONAL_ARGC 0
/* int sqlite3_bind_text64(sqlite3_stmt * arg1, int arg2, const char * arg3, sqlite3_uint64 arg4, void (*)(void *) arg5, unsigned char encoding) */
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
/* sha: 5fec91de685a890ac2f44277624941f4a29b4f977886a9e1e7c5cc5e2667bcef */
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
  if (!mrb_obj_is_kind_of(mrb, arg3, Sqlite3Value_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Value expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_stmt * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_stmt(arg1));

  /* Unbox param: arg3 */
  const sqlite3_value * native_arg3 = (mrb_nil_p(arg3) ? NULL : TODO_TODO_mruby_unbox_Mem(arg3));

  /* Invocation */
  int native_return_value = sqlite3_bind_value(native_arg1, native_arg2, native_arg3);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_bind_zeroblob */
/* sha: 53068e741ceeb5e24ba8b7098fd01ea7521317ce14a4fbfdee4e134ccb1983c1 */
#if BIND_sqlite3_bind_zeroblob_FUNCTION
#define sqlite3_bind_zeroblob_REQUIRED_ARGC 3
#define sqlite3_bind_zeroblob_OPTIONAL_ARGC 0
/* int sqlite3_bind_zeroblob(sqlite3_stmt * arg1, int arg2, int n) */
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
/* sha: 840667951173d295d7ad4df2b6c301083906449a91cd8f128d945e7de67a8a5d */
#if BIND_sqlite3_blob_bytes_FUNCTION
#define sqlite3_blob_bytes_REQUIRED_ARGC 1
#define sqlite3_blob_bytes_OPTIONAL_ARGC 0
/* int sqlite3_blob_bytes(sqlite3_blob * arg1) */
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
/* sha: 1ebb854bc1d97dff0dc426d0278bb9dfe51c91830beda206b3a40bc4c5d20fd7 */
#if BIND_sqlite3_blob_close_FUNCTION
#define sqlite3_blob_close_REQUIRED_ARGC 1
#define sqlite3_blob_close_OPTIONAL_ARGC 0
/* int sqlite3_blob_close(sqlite3_blob * arg1) */
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
/* sha: 7221814d3572a75e2c24fb8309f1f88dbdcdc2b7ffb084da8ae4ff32acbf1cbd */
#if BIND_sqlite3_blob_open_FUNCTION
#define sqlite3_blob_open_REQUIRED_ARGC 7
#define sqlite3_blob_open_OPTIONAL_ARGC 0
/* int sqlite3_blob_open(sqlite3 * arg1, const char * zDb, const char * zTable, const char * zColumn, sqlite3_int64 iRow, int flags, sqlite3_blob ** ppBlob) */
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
/* sha: ab59334f80a47781a8a578d4d8d53ad848a370b3d0d5698fd134d9f5e474be6f */
#if BIND_sqlite3_blob_read_FUNCTION
#define sqlite3_blob_read_REQUIRED_ARGC 4
#define sqlite3_blob_read_OPTIONAL_ARGC 0
/* int sqlite3_blob_read(sqlite3_blob * arg1, void * Z, int N, int iOffset) */
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
/* sha: 4e246e10de6508469c60f5eab616a786e38a7aa1ac72d31a5535c7119fa19d87 */
#if BIND_sqlite3_blob_reopen_FUNCTION
#define sqlite3_blob_reopen_REQUIRED_ARGC 2
#define sqlite3_blob_reopen_OPTIONAL_ARGC 0
/* int sqlite3_blob_reopen(sqlite3_blob * arg1, sqlite3_int64 arg2) */
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
/* sha: 5d7313d5f3c73518c75f06c97c02d549c0dd2b9c12f58633add3ee0e203ddf92 */
#if BIND_sqlite3_blob_write_FUNCTION
#define sqlite3_blob_write_REQUIRED_ARGC 4
#define sqlite3_blob_write_OPTIONAL_ARGC 0
/* int sqlite3_blob_write(sqlite3_blob * arg1, const void * z, int n, int iOffset) */
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
/* sha: 492c8d3f79489e89babe57181a3db8eb233833692c760c961e428d4d83c0ca1b */
#if BIND_sqlite3_busy_handler_FUNCTION
#define sqlite3_busy_handler_REQUIRED_ARGC 3
#define sqlite3_busy_handler_OPTIONAL_ARGC 0
/* int sqlite3_busy_handler(sqlite3 * arg1, int (*)(void *, int) arg2, void * arg3) */
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
/* sha: 5558e05619af3da39a508443cfff2a83dc831de92454e7483b67f59549ed913c */
#if BIND_sqlite3_busy_timeout_FUNCTION
#define sqlite3_busy_timeout_REQUIRED_ARGC 2
#define sqlite3_busy_timeout_OPTIONAL_ARGC 0
/* int sqlite3_busy_timeout(sqlite3 * arg1, int ms) */
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
/* sha: b58cb21dda8d03d6320d12a841f00965d487306941a7ca0de39710fe744dfff8 */
#if BIND_sqlite3_cancel_auto_extension_FUNCTION
#define sqlite3_cancel_auto_extension_REQUIRED_ARGC 1
#define sqlite3_cancel_auto_extension_OPTIONAL_ARGC 0
/* int sqlite3_cancel_auto_extension(void (*)(void) xEntryPoint) */
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
/* sha: 71ed4a29b2e7ee1c3779f051dd8fd6d15d274a86560c0d443330b33654973b8a */
#if BIND_sqlite3_changes_FUNCTION
#define sqlite3_changes_REQUIRED_ARGC 1
#define sqlite3_changes_OPTIONAL_ARGC 0
/* int sqlite3_changes(sqlite3 * arg1) */
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
/* sha: 0561ad1f9b32adc9f69bb21043a5630ebd123b4aad5fd1a81c69b3ae18ac0c5b */
#if BIND_sqlite3_clear_bindings_FUNCTION
#define sqlite3_clear_bindings_REQUIRED_ARGC 1
#define sqlite3_clear_bindings_OPTIONAL_ARGC 0
/* int sqlite3_clear_bindings(sqlite3_stmt * arg1) */
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
/* sha: 53be8e9e80bd6c9eafbf99e2226f0fbe45310ca0bca53609be5daa94bcf312bb */
#if BIND_sqlite3_close_FUNCTION
#define sqlite3_close_REQUIRED_ARGC 1
#define sqlite3_close_OPTIONAL_ARGC 0
/* int sqlite3_close(sqlite3 * arg1) */
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
  MRUBY_BOX_CLEAR(arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_collation_needed */
/* sha: 4c51a2fbaedec3774f8d3cd4f145661c4e77e6e13fcb40ce6c80617b8e2b47b2 */
#if BIND_sqlite3_collation_needed_FUNCTION
#define sqlite3_collation_needed_REQUIRED_ARGC 3
#define sqlite3_collation_needed_OPTIONAL_ARGC 0
/* int sqlite3_collation_needed(sqlite3 * arg1, void * arg2, void (*)(void *, sqlite3 *, int, const char *) arg3) */
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
/* sha: e34c30bf3bdbe460ae06e71f9223509d8e99ef0a96a15052e3a88039395833a8 */
#if BIND_sqlite3_collation_needed16_FUNCTION
#define sqlite3_collation_needed16_REQUIRED_ARGC 3
#define sqlite3_collation_needed16_OPTIONAL_ARGC 0
/* int sqlite3_collation_needed16(sqlite3 * arg1, void * arg2, void (*)(void *, sqlite3 *, int, const void *) arg3) */
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
/* sha: 3806d709a98b3620b2d7d8eae96ce4f52834eabdc47e2dc978f0a9fc765da477 */
#if BIND_sqlite3_column_bytes_FUNCTION
#define sqlite3_column_bytes_REQUIRED_ARGC 2
#define sqlite3_column_bytes_OPTIONAL_ARGC 0
/* int sqlite3_column_bytes(sqlite3_stmt * arg1, int iCol) */
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
/* sha: c85465a1daecea872d57f80c46fdfcd7c3883e268f66a3192cc0116287258d5e */
#if BIND_sqlite3_column_bytes16_FUNCTION
#define sqlite3_column_bytes16_REQUIRED_ARGC 2
#define sqlite3_column_bytes16_OPTIONAL_ARGC 0
/* int sqlite3_column_bytes16(sqlite3_stmt * arg1, int iCol) */
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
/* sha: ed48f6b0b1f62794575ac07f7888c1dfe3cacc073fa0949c8be0d8a56601972d */
#if BIND_sqlite3_column_count_FUNCTION
#define sqlite3_column_count_REQUIRED_ARGC 1
#define sqlite3_column_count_OPTIONAL_ARGC 0
/* int sqlite3_column_count(sqlite3_stmt * pStmt) */
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
/* sha: 228fe81bf26f69aac348d174789a9754441537a611960b5865b3665a31dfe51e */
#if BIND_sqlite3_column_database_name_FUNCTION
#define sqlite3_column_database_name_REQUIRED_ARGC 2
#define sqlite3_column_database_name_OPTIONAL_ARGC 0
/* const char * sqlite3_column_database_name(sqlite3_stmt * arg1, int arg2) */
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
/* sha: a122f612d577a7f56d11313040f20a48f816d735d7387a46050e79a5b362934e */
#if BIND_sqlite3_column_database_name16_FUNCTION
#define sqlite3_column_database_name16_REQUIRED_ARGC 2
#define sqlite3_column_database_name16_OPTIONAL_ARGC 0
/* const void * sqlite3_column_database_name16(sqlite3_stmt * arg1, int arg2) */
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
/* sha: 065a7a9134e699565921aa637a10ff8ffa1f0254f3f6021d76ec6b0151e794fd */
#if BIND_sqlite3_column_decltype_FUNCTION
#define sqlite3_column_decltype_REQUIRED_ARGC 2
#define sqlite3_column_decltype_OPTIONAL_ARGC 0
/* const char * sqlite3_column_decltype(sqlite3_stmt * arg1, int arg2) */
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
/* sha: 254614a253e16abfb182094f19ef08bf5ba45baf47f9f90828185b329041460e */
#if BIND_sqlite3_column_decltype16_FUNCTION
#define sqlite3_column_decltype16_REQUIRED_ARGC 2
#define sqlite3_column_decltype16_OPTIONAL_ARGC 0
/* const void * sqlite3_column_decltype16(sqlite3_stmt * arg1, int arg2) */
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
/* sha: b72c9c7614bd0dfa689d6051a03c2f0814d7cc2dafe1d6a1917e1e07a00adb70 */
#if BIND_sqlite3_column_double_FUNCTION
#define sqlite3_column_double_REQUIRED_ARGC 2
#define sqlite3_column_double_OPTIONAL_ARGC 0
/* double sqlite3_column_double(sqlite3_stmt * arg1, int iCol) */
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
/* sha: 0196c056058f11d8626a88b075195f5ffe886def3791398de7def0ae6738ff57 */
#if BIND_sqlite3_column_int_FUNCTION
#define sqlite3_column_int_REQUIRED_ARGC 2
#define sqlite3_column_int_OPTIONAL_ARGC 0
/* int sqlite3_column_int(sqlite3_stmt * arg1, int iCol) */
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
/* sha: de1d89fb151789a6b4c59dcc74fd6cc57548c391a0923ddce0c2132da0b94db3 */
#if BIND_sqlite3_column_int64_FUNCTION
#define sqlite3_column_int64_REQUIRED_ARGC 2
#define sqlite3_column_int64_OPTIONAL_ARGC 0
/* sqlite3_int64 sqlite3_column_int64(sqlite3_stmt * arg1, int iCol) */
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
/* sha: 11bb213609b1a1c5f748c1bf75f3de1a206d6a54f56942d2ff8268076254bfbe */
#if BIND_sqlite3_column_name_FUNCTION
#define sqlite3_column_name_REQUIRED_ARGC 2
#define sqlite3_column_name_OPTIONAL_ARGC 0
/* const char * sqlite3_column_name(sqlite3_stmt * arg1, int N) */
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
/* sha: a94fc6b15685b926978f77c849b21dd162f53e36fdbfc48a67fec50d5aa861b7 */
#if BIND_sqlite3_column_name16_FUNCTION
#define sqlite3_column_name16_REQUIRED_ARGC 2
#define sqlite3_column_name16_OPTIONAL_ARGC 0
/* const void * sqlite3_column_name16(sqlite3_stmt * arg1, int N) */
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
/* sha: 78d1c149c35084769e7092f58fb7ae721d80fe129b970fee6ae0a3cc009b47f7 */
#if BIND_sqlite3_column_origin_name_FUNCTION
#define sqlite3_column_origin_name_REQUIRED_ARGC 2
#define sqlite3_column_origin_name_OPTIONAL_ARGC 0
/* const char * sqlite3_column_origin_name(sqlite3_stmt * arg1, int arg2) */
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
/* sha: 4b8f6c20e670d5605268c0b9272c9249a2646a1317a5ec79abba4d7eadf86fa1 */
#if BIND_sqlite3_column_origin_name16_FUNCTION
#define sqlite3_column_origin_name16_REQUIRED_ARGC 2
#define sqlite3_column_origin_name16_OPTIONAL_ARGC 0
/* const void * sqlite3_column_origin_name16(sqlite3_stmt * arg1, int arg2) */
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
/* sha: cf618094bbcc348ee2f24dc85c6670c3d2ff1859ea18b650e5b8a8c7177a26ae */
#if BIND_sqlite3_column_table_name_FUNCTION
#define sqlite3_column_table_name_REQUIRED_ARGC 2
#define sqlite3_column_table_name_OPTIONAL_ARGC 0
/* const char * sqlite3_column_table_name(sqlite3_stmt * arg1, int arg2) */
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
/* sha: 2e1f12bcfb58735f2ec7ca520c7c2207fcfcd6757ff1880ee2e4a38f5f67e6b0 */
#if BIND_sqlite3_column_table_name16_FUNCTION
#define sqlite3_column_table_name16_REQUIRED_ARGC 2
#define sqlite3_column_table_name16_OPTIONAL_ARGC 0
/* const void * sqlite3_column_table_name16(sqlite3_stmt * arg1, int arg2) */
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
/* sha: a85eadac00632de788850a9fb6835b2a4314b2f52dd10bd7f0426c5804e44a4d */
#if BIND_sqlite3_column_text16_FUNCTION
#define sqlite3_column_text16_REQUIRED_ARGC 2
#define sqlite3_column_text16_OPTIONAL_ARGC 0
/* const void * sqlite3_column_text16(sqlite3_stmt * arg1, int iCol) */
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
/* sha: d676f9b42ab9e09d63bfa7c663648470708b7ae444cef6107eb957e1d8185e0d */
#if BIND_sqlite3_column_type_FUNCTION
#define sqlite3_column_type_REQUIRED_ARGC 2
#define sqlite3_column_type_OPTIONAL_ARGC 0
/* int sqlite3_column_type(sqlite3_stmt * arg1, int iCol) */
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
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : TODO_mruby_box_Mem(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_commit_hook */
/* sha: ea67814cdeb77138b38a64a00a4f388db65a57e935f7146bdacaf91ba486a60f */
#if BIND_sqlite3_commit_hook_FUNCTION
#define sqlite3_commit_hook_REQUIRED_ARGC 3
#define sqlite3_commit_hook_OPTIONAL_ARGC 0
/* void * sqlite3_commit_hook(sqlite3 * arg1, int (*)(void *) arg2, void * arg3) */
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
/* sha: 9a781f88feabc63550c977d79596ee8d221b6ea6309a0ba37a2c6e241198aadd */
#if BIND_sqlite3_compileoption_get_FUNCTION
#define sqlite3_compileoption_get_REQUIRED_ARGC 1
#define sqlite3_compileoption_get_OPTIONAL_ARGC 0
/* const char * sqlite3_compileoption_get(int N) */
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
/* sha: 1408356acf582ff31186b1517867622ac0072fe08bd824bd86c7a7b171a7243c */
#if BIND_sqlite3_compileoption_used_FUNCTION
#define sqlite3_compileoption_used_REQUIRED_ARGC 1
#define sqlite3_compileoption_used_OPTIONAL_ARGC 0
/* int sqlite3_compileoption_used(const char * zOptName) */
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
/* sha: d8559ffe5587f8016a30b6c23eebad7a41517319f4f05f5056bbe8fa8d7018e5 */
#if BIND_sqlite3_complete_FUNCTION
#define sqlite3_complete_REQUIRED_ARGC 1
#define sqlite3_complete_OPTIONAL_ARGC 0
/* int sqlite3_complete(const char * sql) */
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
/* sha: 40a70c10b43bad23f243402710ab9efbcc76f60f060d3e091d04e06d4b2157a0 */
#if BIND_sqlite3_complete16_FUNCTION
#define sqlite3_complete16_REQUIRED_ARGC 1
#define sqlite3_complete16_OPTIONAL_ARGC 0
/* int sqlite3_complete16(const void * sql) */
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
/* sha: f87f9d02d33dfa559273cc502a2d24b728682f88f59b35bdc1fe8317f90d5e0f */
#if BIND_sqlite3_config_FUNCTION
#define sqlite3_config_REQUIRED_ARGC 1
#define sqlite3_config_OPTIONAL_ARGC 0
/* int sqlite3_config(int arg1) */
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
/* sha: 88647a375ab68017705b165d0c9832931ec957d11ffbf84c1481c0bcf2eaf247 */
#if BIND_sqlite3_context_db_handle_FUNCTION
#define sqlite3_context_db_handle_REQUIRED_ARGC 1
#define sqlite3_context_db_handle_OPTIONAL_ARGC 0
/* sqlite3 * sqlite3_context_db_handle(sqlite3_context * arg1) */
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
/* sha: 8f89e57be03694aa42f430fae6f6702a3c2d80259d7ed95d7a3c4783b3eada73 */
#if BIND_sqlite3_create_collation_FUNCTION
#define sqlite3_create_collation_REQUIRED_ARGC 5
#define sqlite3_create_collation_OPTIONAL_ARGC 0
/* int sqlite3_create_collation(sqlite3 * arg1, const char * zName, int eTextRep, void * pArg, int (*)(void *, int, const void *, int, const void *) xCompare) */
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
/* sha: 37eb01c4f84a4b099e4ea85cffdfd115e947a2206e9879589e30a9c9b8dd1234 */
#if BIND_sqlite3_create_collation16_FUNCTION
#define sqlite3_create_collation16_REQUIRED_ARGC 5
#define sqlite3_create_collation16_OPTIONAL_ARGC 0
/* int sqlite3_create_collation16(sqlite3 * arg1, const void * zName, int eTextRep, void * pArg, int (*)(void *, int, const void *, int, const void *) xCompare) */
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
/* sha: 49e593e8365839bac54f2ac3a540a7a3faf680360e0da3ac53d5a9e6cab2ef7b */
#if BIND_sqlite3_create_collation_v2_FUNCTION
#define sqlite3_create_collation_v2_REQUIRED_ARGC 6
#define sqlite3_create_collation_v2_OPTIONAL_ARGC 0
/* int sqlite3_create_collation_v2(sqlite3 * arg1, const char * zName, int eTextRep, void * pArg, int (*)(void *, int, const void *, int, const void *) xCompare, void (*)(void *) xDestroy) */
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
/* sha: a6f1c914c1e2ef2da82613977dca8b970248576f89652cc79b0a0f3f8d86134a */
#if BIND_sqlite3_create_function_FUNCTION
#define sqlite3_create_function_REQUIRED_ARGC 8
#define sqlite3_create_function_OPTIONAL_ARGC 0
/* int sqlite3_create_function(sqlite3 * db, const char * zFunctionName, int nArg, int eTextRep, void * pApp, void (*)(sqlite3_context *, int, sqlite3_value **) xFunc, void (*)(sqlite3_context *, int, sqlite3_value **) xStep, void (*)(sqlite3_context *) xFinal) */
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
/* sha: ecb1f5542c7f584deafe472af7268ec8423597891bf8447685557c1bfc578177 */
#if BIND_sqlite3_create_function16_FUNCTION
#define sqlite3_create_function16_REQUIRED_ARGC 8
#define sqlite3_create_function16_OPTIONAL_ARGC 0
/* int sqlite3_create_function16(sqlite3 * db, const void * zFunctionName, int nArg, int eTextRep, void * pApp, void (*)(sqlite3_context *, int, sqlite3_value **) xFunc, void (*)(sqlite3_context *, int, sqlite3_value **) xStep, void (*)(sqlite3_context *) xFinal) */
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
/* sha: 5c0393abbcb0c177d4e94cd9dcfc0fb6073d0cc63e1f8eab79f471454eb12df2 */
#if BIND_sqlite3_create_function_v2_FUNCTION
#define sqlite3_create_function_v2_REQUIRED_ARGC 9
#define sqlite3_create_function_v2_OPTIONAL_ARGC 0
/* int sqlite3_create_function_v2(sqlite3 * db, const char * zFunctionName, int nArg, int eTextRep, void * pApp, void (*)(sqlite3_context *, int, sqlite3_value **) xFunc, void (*)(sqlite3_context *, int, sqlite3_value **) xStep, void (*)(sqlite3_context *) xFinal, void (*)(void *) xDestroy) */
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
/* sha: a00cdc44fb8bf65350676624ea40fc07d19d4ea0e257ea42ee6e8a93e44d52c1 */
#if BIND_sqlite3_create_module_FUNCTION
#define sqlite3_create_module_REQUIRED_ARGC 4
#define sqlite3_create_module_OPTIONAL_ARGC 0
/* int sqlite3_create_module(sqlite3 * db, const char * zName, const sqlite3_module * p, void * pClientData) */
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
/* sha: bc3102a815d3ba3743c42e1716a8c4e626581df834baa99dd2cdfe8e2883a796 */
#if BIND_sqlite3_create_module_v2_FUNCTION
#define sqlite3_create_module_v2_REQUIRED_ARGC 5
#define sqlite3_create_module_v2_OPTIONAL_ARGC 0
/* int sqlite3_create_module_v2(sqlite3 * db, const char * zName, const sqlite3_module * p, void * pClientData, void (*)(void *) xDestroy) */
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
/* sha: fc3af2af7bb3bebbc0c8aeccc6676a93755934e142d44893e1f45adf44a92c62 */
#if BIND_sqlite3_data_count_FUNCTION
#define sqlite3_data_count_REQUIRED_ARGC 1
#define sqlite3_data_count_OPTIONAL_ARGC 0
/* int sqlite3_data_count(sqlite3_stmt * pStmt) */
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
/* sha: aa4f5e7e5d24cf729758ec811d1d58a70ebee523a2ee1812995f0bee953a6021 */
#if BIND_sqlite3_db_config_FUNCTION
#define sqlite3_db_config_REQUIRED_ARGC 2
#define sqlite3_db_config_OPTIONAL_ARGC 0
/* int sqlite3_db_config(sqlite3 * arg1, int op) */
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
/* sha: 30d8d8da94ac8689f39c506dab4c7243eccce28fb171949cea6c302c128a573a */
#if BIND_sqlite3_db_filename_FUNCTION
#define sqlite3_db_filename_REQUIRED_ARGC 2
#define sqlite3_db_filename_OPTIONAL_ARGC 0
/* const char * sqlite3_db_filename(sqlite3 * db, const char * zDbName) */
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
/* sha: d3de87feb97cb5ac1f7c9b5b8d722f2398fae438e324bf6ae3e49ea73bfdfab8 */
#if BIND_sqlite3_db_handle_FUNCTION
#define sqlite3_db_handle_REQUIRED_ARGC 1
#define sqlite3_db_handle_OPTIONAL_ARGC 0
/* sqlite3 * sqlite3_db_handle(sqlite3_stmt * arg1) */
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
/* sha: 2c47045d1b8b67f0436c3cdbe9d9b84f3324c0bcc20a14f58d961f7e680fec5a */
#if BIND_sqlite3_db_readonly_FUNCTION
#define sqlite3_db_readonly_REQUIRED_ARGC 2
#define sqlite3_db_readonly_OPTIONAL_ARGC 0
/* int sqlite3_db_readonly(sqlite3 * db, const char * zDbName) */
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
/* sha: 3e2c8585365c856b48e25f8609747cf64ec119e4dac98a2ec7b66b50b0543448 */
#if BIND_sqlite3_db_release_memory_FUNCTION
#define sqlite3_db_release_memory_REQUIRED_ARGC 1
#define sqlite3_db_release_memory_OPTIONAL_ARGC 0
/* int sqlite3_db_release_memory(sqlite3 * arg1) */
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
/* sha: 3c896026ea1e0f6446d8e3af60d84fe8d0869687ba53f4cafa3094c0513b9fa7 */
#if BIND_sqlite3_db_status_FUNCTION
#define sqlite3_db_status_REQUIRED_ARGC 5
#define sqlite3_db_status_OPTIONAL_ARGC 0
/* int sqlite3_db_status(sqlite3 * arg1, int op, int * pCur, int * pHiwtr, int resetFlg) */
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
/* sha: ede4456794aece6d1423da5d02a653ea27b04e8ef33b0797b6e6dd7fa556146e */
#if BIND_sqlite3_declare_vtab_FUNCTION
#define sqlite3_declare_vtab_REQUIRED_ARGC 2
#define sqlite3_declare_vtab_OPTIONAL_ARGC 0
/* int sqlite3_declare_vtab(sqlite3 * arg1, const char * zSQL) */
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
/* sha: e9a9ce926a210d12a9e0993f1726eb6f17b64b0a4e85ed65c25ec431e3cd2d94 */
#if BIND_sqlite3_enable_load_extension_FUNCTION
#define sqlite3_enable_load_extension_REQUIRED_ARGC 2
#define sqlite3_enable_load_extension_OPTIONAL_ARGC 0
/* int sqlite3_enable_load_extension(sqlite3 * db, int onoff) */
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
/* sha: 6ef2098e65f30c75fd9b0245504350db5141e773d26e1fc69d0a4537f0655e3f */
#if BIND_sqlite3_enable_shared_cache_FUNCTION
#define sqlite3_enable_shared_cache_REQUIRED_ARGC 1
#define sqlite3_enable_shared_cache_OPTIONAL_ARGC 0
/* int sqlite3_enable_shared_cache(int arg1) */
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
/* sha: b3ca4036d0367fe416c9d1b0c1a453ccf28f77bcf3f2591d99a5895be8b8a2ad */
#if BIND_sqlite3_errcode_FUNCTION
#define sqlite3_errcode_REQUIRED_ARGC 1
#define sqlite3_errcode_OPTIONAL_ARGC 0
/* int sqlite3_errcode(sqlite3 * db) */
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
/* sha: e9bde58962001f000b957c446673f74167938a8cf6ebd19c1db969ad80e2a2fd */
#if BIND_sqlite3_errmsg_FUNCTION
#define sqlite3_errmsg_REQUIRED_ARGC 1
#define sqlite3_errmsg_OPTIONAL_ARGC 0
/* const char * sqlite3_errmsg(sqlite3 * arg1) */
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
/* sha: 10309b8667263a83ba380132432e2d957443a7d52bdce3ce0bf4eb3a4838cde6 */
#if BIND_sqlite3_errmsg16_FUNCTION
#define sqlite3_errmsg16_REQUIRED_ARGC 1
#define sqlite3_errmsg16_OPTIONAL_ARGC 0
/* const void * sqlite3_errmsg16(sqlite3 * arg1) */
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
/* sha: ea6e87693380c08d3317b5cc6eb405312182703d0cb5476d2b2cbd6b94ee85a0 */
#if BIND_sqlite3_errstr_FUNCTION
#define sqlite3_errstr_REQUIRED_ARGC 1
#define sqlite3_errstr_OPTIONAL_ARGC 0
/* const char * sqlite3_errstr(int arg1) */
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
/* sha: b37bf2553f491d6f6ececb8a26c7924b38977a60c122cf96412337530cd49cd1 */
#if BIND_sqlite3_exec_FUNCTION
#define sqlite3_exec_REQUIRED_ARGC 5
#define sqlite3_exec_OPTIONAL_ARGC 0
/* int sqlite3_exec(sqlite3 * arg1, const char * sql, int (*)(void *, int, char **, char **) callback, void * arg4, char ** errmsg) */
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
/* sha: 997031553e82d0380783af71bbe43266c8686e0535d6316f9bc382d79e12774e */
#if BIND_sqlite3_expired_FUNCTION
#define sqlite3_expired_REQUIRED_ARGC 1
#define sqlite3_expired_OPTIONAL_ARGC 0
/* int sqlite3_expired(sqlite3_stmt * arg1) */
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
/* sha: bd065ccc326da05263d8aa004356ba9179034767860ae4cdd03e9b7dc296dc1d */
#if BIND_sqlite3_extended_errcode_FUNCTION
#define sqlite3_extended_errcode_REQUIRED_ARGC 1
#define sqlite3_extended_errcode_OPTIONAL_ARGC 0
/* int sqlite3_extended_errcode(sqlite3 * db) */
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
/* sha: 84e364793979323e30d59cb3459994f82f814fe3fa4e47b9f1dd273a120c9115 */
#if BIND_sqlite3_extended_result_codes_FUNCTION
#define sqlite3_extended_result_codes_REQUIRED_ARGC 2
#define sqlite3_extended_result_codes_OPTIONAL_ARGC 0
/* int sqlite3_extended_result_codes(sqlite3 * arg1, int onoff) */
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
/* sha: 2b6bf7caa2b7914cfe49aa77d1e2a5b465853dadb525ea10bc99c0218702d88e */
#if BIND_sqlite3_file_control_FUNCTION
#define sqlite3_file_control_REQUIRED_ARGC 4
#define sqlite3_file_control_OPTIONAL_ARGC 0
/* int sqlite3_file_control(sqlite3 * arg1, const char * zDbName, int op, void * arg4) */
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
  MRUBY_BOX_CLEAR(pStmt);

  /* Invocation */
  int native_return_value = sqlite3_finalize(native_pStmt);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_free */
/* sha: 0f9265e93b40d82a43275d11fa5a0cd35da9dda72043e4057a982f797ddac89e */
#if BIND_sqlite3_free_FUNCTION
#define sqlite3_free_REQUIRED_ARGC 1
#define sqlite3_free_OPTIONAL_ARGC 0
/* void sqlite3_free(void * arg1) */
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
/* sha: f31fa860380db00acdfef635a4fc4d02679ac4cca2f4790ab9fd8aaf7398beb5 */
#if BIND_sqlite3_free_table_FUNCTION
#define sqlite3_free_table_REQUIRED_ARGC 1
#define sqlite3_free_table_OPTIONAL_ARGC 0
/* void sqlite3_free_table(char ** result) */
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
/* sha: f73d610a3455fb27a6b3d66f3bad80e959c6c6b93a11690a0e7a9e2fe25f2239 */
#if BIND_sqlite3_get_autocommit_FUNCTION
#define sqlite3_get_autocommit_REQUIRED_ARGC 1
#define sqlite3_get_autocommit_OPTIONAL_ARGC 0
/* int sqlite3_get_autocommit(sqlite3 * arg1) */
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
/* sha: 03fac1e79dd251ffa3867cc6cb62073d52341c1eb4f278d46017e14f3389082c */
#if BIND_sqlite3_get_auxdata_FUNCTION
#define sqlite3_get_auxdata_REQUIRED_ARGC 2
#define sqlite3_get_auxdata_OPTIONAL_ARGC 0
/* void * sqlite3_get_auxdata(sqlite3_context * arg1, int N) */
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
/* sha: 2c7090e1f2a787f2b2823fbdc09756e66a7062a36859303a31d07f40ae35bd33 */
#if BIND_sqlite3_get_table_FUNCTION
#define sqlite3_get_table_REQUIRED_ARGC 6
#define sqlite3_get_table_OPTIONAL_ARGC 0
/* int sqlite3_get_table(sqlite3 * db, const char * zSql, char *** pazResult, int * pnRow, int * pnColumn, char ** pzErrmsg) */
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
/* sha: d683ff959f44f3cc771bc47c2613d6dbd0cdee0004e51b1baf886e0d10af6afc */
#if BIND_sqlite3_global_recover_FUNCTION
#define sqlite3_global_recover_REQUIRED_ARGC 0
#define sqlite3_global_recover_OPTIONAL_ARGC 0
/* int sqlite3_global_recover() */
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
/* sha: f1fd691ab7537c5d96aa55d9a8166f4b293ab02db5a9a4fcc5855d3d335a0a45 */
#if BIND_sqlite3_initialize_FUNCTION
#define sqlite3_initialize_REQUIRED_ARGC 0
#define sqlite3_initialize_OPTIONAL_ARGC 0
/* int sqlite3_initialize() */
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
/* sha: a26663f7d0f9b485568f2b97929d9d6707afd61085bbf1ab338f023afde7ff99 */
#if BIND_sqlite3_interrupt_FUNCTION
#define sqlite3_interrupt_REQUIRED_ARGC 1
#define sqlite3_interrupt_OPTIONAL_ARGC 0
/* void sqlite3_interrupt(sqlite3 * arg1) */
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
/* sha: 16db8ec0673e5c8b3f74469359ea6379bd55fb28db0d4c1c88033399c0260b48 */
#if BIND_sqlite3_last_insert_rowid_FUNCTION
#define sqlite3_last_insert_rowid_REQUIRED_ARGC 1
#define sqlite3_last_insert_rowid_OPTIONAL_ARGC 0
/* sqlite3_int64 sqlite3_last_insert_rowid(sqlite3 * arg1) */
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
/* sha: e93225d293a632296bbcb0bb53feaf17812abd9a0d3f966a162f8e4640aa713b */
#if BIND_sqlite3_libversion_FUNCTION
#define sqlite3_libversion_REQUIRED_ARGC 0
#define sqlite3_libversion_OPTIONAL_ARGC 0
/* const char * sqlite3_libversion() */
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
/* sha: 5218123b1fa0938a003d35194d99738608ae6f56483c36c57f02a6aa02ec6c2f */
#if BIND_sqlite3_libversion_number_FUNCTION
#define sqlite3_libversion_number_REQUIRED_ARGC 0
#define sqlite3_libversion_number_OPTIONAL_ARGC 0
/* int sqlite3_libversion_number() */
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
/* sha: 2d4b454dcaff56df58bf427dadf8d6ad89d1355fb19b108cf9797997fe1a45f6 */
#if BIND_sqlite3_limit_FUNCTION
#define sqlite3_limit_REQUIRED_ARGC 3
#define sqlite3_limit_OPTIONAL_ARGC 0
/* int sqlite3_limit(sqlite3 * arg1, int id, int newVal) */
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
/* sha: 430282d65d6d4b6594b48402f04ce55f4ff42ae987c396b187e36157a104acaa */
#if BIND_sqlite3_load_extension_FUNCTION
#define sqlite3_load_extension_REQUIRED_ARGC 4
#define sqlite3_load_extension_OPTIONAL_ARGC 0
/* int sqlite3_load_extension(sqlite3 * db, const char * zFile, const char * zProc, char ** pzErrMsg) */
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
/* sha: 78f45b7ea0e28f93849214ab2c1431753364913ca1f3a348bed62b9b13844af7 */
#if BIND_sqlite3_log_FUNCTION
#define sqlite3_log_REQUIRED_ARGC 2
#define sqlite3_log_OPTIONAL_ARGC 0
/* void sqlite3_log(int iErrCode, const char * zFormat) */
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
/* sha: 264509162f96a9f835ad72a2edd387f3568014aac1ba41d7df32e5f47161b62c */
#if BIND_sqlite3_malloc_FUNCTION
#define sqlite3_malloc_REQUIRED_ARGC 1
#define sqlite3_malloc_OPTIONAL_ARGC 0
/* void * sqlite3_malloc(int arg1) */
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
/* sha: 5ed89921f6327689d888e005729a532f01ff8c72eccb6c46fc659a4c1c377aec */
#if BIND_sqlite3_malloc64_FUNCTION
#define sqlite3_malloc64_REQUIRED_ARGC 1
#define sqlite3_malloc64_OPTIONAL_ARGC 0
/* void * sqlite3_malloc64(sqlite3_uint64 arg1) */
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
/* sha: 16d426adecd4fa7b772146b1ee9765ef352ec1848824572848941c51554e98d8 */
#if BIND_sqlite3_memory_alarm_FUNCTION
#define sqlite3_memory_alarm_REQUIRED_ARGC 3
#define sqlite3_memory_alarm_OPTIONAL_ARGC 0
/* int sqlite3_memory_alarm(void (*)(void *, sqlite3_int64, int) arg1, void * arg2, sqlite3_int64 arg3) */
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
/* sha: 58b3744f84fb7f3467920dd6d9dad048bb989e4eb41961f029ac1fcfc8255f35 */
#if BIND_sqlite3_memory_highwater_FUNCTION
#define sqlite3_memory_highwater_REQUIRED_ARGC 1
#define sqlite3_memory_highwater_OPTIONAL_ARGC 0
/* sqlite3_int64 sqlite3_memory_highwater(int resetFlag) */
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
/* sha: 7b523a7534a3aa00a41e5dc4601bb7e4b4929c307f20b0c6a00389e454827298 */
#if BIND_sqlite3_memory_used_FUNCTION
#define sqlite3_memory_used_REQUIRED_ARGC 0
#define sqlite3_memory_used_OPTIONAL_ARGC 0
/* sqlite3_int64 sqlite3_memory_used() */
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
/* sha: bee18fab26dee4a2b29a4186cfdadd19f1e614a4503f271365b20b1414766bd8 */
#if BIND_sqlite3_mprintf_FUNCTION
#define sqlite3_mprintf_REQUIRED_ARGC 1
#define sqlite3_mprintf_OPTIONAL_ARGC 0
/* char * sqlite3_mprintf(const char * arg1) */
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
/* sha: 339eff8f50eae8a8bda4e22d2bc300b31a268dae6d39e1fed1921f60b6c84a4a */
#if BIND_sqlite3_msize_FUNCTION
#define sqlite3_msize_REQUIRED_ARGC 1
#define sqlite3_msize_OPTIONAL_ARGC 0
/* sqlite3_uint64 sqlite3_msize(void * arg1) */
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
/* sha: bd72c114b03472a4f584a675ab22a1a8ae6c7c1f6d22fc34e0f592b121377e15 */
#if BIND_sqlite3_next_stmt_FUNCTION
#define sqlite3_next_stmt_REQUIRED_ARGC 2
#define sqlite3_next_stmt_OPTIONAL_ARGC 0
/* sqlite3_stmt * sqlite3_next_stmt(sqlite3 * pDb, sqlite3_stmt * pStmt) */
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
/* sha: 3c64ac9b56708f4f9348fce985c9622aa5bc1dbbaf6ae0ecee8bd046772578f3 */
#if BIND_sqlite3_open16_FUNCTION
#define sqlite3_open16_REQUIRED_ARGC 2
#define sqlite3_open16_OPTIONAL_ARGC 0
/* int sqlite3_open16(const void * filename, sqlite3 ** ppDb) */
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
/* sha: 0c2f5d9b591d3986626a3588c297a9451f3011a51a1f3880f63ed871fdfcf9d2 */
#if BIND_sqlite3_open_v2_FUNCTION
#define sqlite3_open_v2_REQUIRED_ARGC 4
#define sqlite3_open_v2_OPTIONAL_ARGC 0
/* int sqlite3_open_v2(const char * filename, sqlite3 ** ppDb, int flags, const char * zVfs) */
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
/* sha: fd9f90fdf3bc3d661eac0346fba1a13a7c47bcedac757807bacd4b4302fb795f */
#if BIND_sqlite3_os_end_FUNCTION
#define sqlite3_os_end_REQUIRED_ARGC 0
#define sqlite3_os_end_OPTIONAL_ARGC 0
/* int sqlite3_os_end() */
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
/* sha: 5c90d2eba4762fcf3477aef68e134f84599fec4050080aa3c1d597f25ef82f91 */
#if BIND_sqlite3_os_init_FUNCTION
#define sqlite3_os_init_REQUIRED_ARGC 0
#define sqlite3_os_init_OPTIONAL_ARGC 0
/* int sqlite3_os_init() */
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
/* sha: 94cbad688b49f769ee09569dfd5c3ac0917b4ff7b682ca82e5032916b41244a6 */
#if BIND_sqlite3_overload_function_FUNCTION
#define sqlite3_overload_function_REQUIRED_ARGC 3
#define sqlite3_overload_function_OPTIONAL_ARGC 0
/* int sqlite3_overload_function(sqlite3 * arg1, const char * zFuncName, int nArg) */
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
/* sha: 22a2c82fd65d295453371bf1a0199930bc985a73603ede9183191de16a1846ee */
#if BIND_sqlite3_prepare_FUNCTION
#define sqlite3_prepare_REQUIRED_ARGC 5
#define sqlite3_prepare_OPTIONAL_ARGC 0
/* int sqlite3_prepare(sqlite3 * db, const char * zSql, int nByte, sqlite3_stmt ** ppStmt, const char ** pzTail) */
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
/* sha: 9ba144e109abf84ebc7b94f33beee1ff71f4104ac894a34083168df0326b1301 */
#if BIND_sqlite3_prepare16_FUNCTION
#define sqlite3_prepare16_REQUIRED_ARGC 5
#define sqlite3_prepare16_OPTIONAL_ARGC 0
/* int sqlite3_prepare16(sqlite3 * db, const void * zSql, int nByte, sqlite3_stmt ** ppStmt, const void ** pzTail) */
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
/* sha: 50d53798f8a99662f4263722da8ec7018ea74c6bd382b366ee569a8e642f8833 */
#if BIND_sqlite3_prepare16_v2_FUNCTION
#define sqlite3_prepare16_v2_REQUIRED_ARGC 5
#define sqlite3_prepare16_v2_OPTIONAL_ARGC 0
/* int sqlite3_prepare16_v2(sqlite3 * db, const void * zSql, int nByte, sqlite3_stmt ** ppStmt, const void ** pzTail) */
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
  mrb_get_args(mrb, "ozi", &db, &native_zSql, &native_nByte);

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
  mrb_value ppStmt = native_ppStmt == NULL 
    ? mrb_nil_value() 
    : mruby_giftwrap_sqlite3_stmt(mrb, native_ppStmt);
    
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
/* sha: dc9746b3bfb076f2ecc1edafb29dbd80cff82fc2d39d294189e8ba9c32850719 */
#if BIND_sqlite3_profile_FUNCTION
#define sqlite3_profile_REQUIRED_ARGC 3
#define sqlite3_profile_OPTIONAL_ARGC 0
/* void * sqlite3_profile(sqlite3 * arg1, void (*)(void *, const char *, sqlite3_uint64) xProfile, void * arg3) */
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
/* sha: 76d41dd40aa7316b1712d74e27ea4c79636e7415a7ccf23af0f66d3a9b6ca42e */
#if BIND_sqlite3_progress_handler_FUNCTION
#define sqlite3_progress_handler_REQUIRED_ARGC 4
#define sqlite3_progress_handler_OPTIONAL_ARGC 0
/* void sqlite3_progress_handler(sqlite3 * arg1, int arg2, int (*)(void *) arg3, void * arg4) */
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
/* sha: e98eba63b9c112ea228a9eb3023ddd5b9b3c2905c116abd92cc0e751d6ed1f3c */
#if BIND_sqlite3_randomness_FUNCTION
#define sqlite3_randomness_REQUIRED_ARGC 2
#define sqlite3_randomness_OPTIONAL_ARGC 0
/* void sqlite3_randomness(int N, void * P) */
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
/* sha: 185b8ca497a592d60bf3d332f9517b75fac5ce48ceac9c14c18b6fe55dc8246e */
#if BIND_sqlite3_realloc_FUNCTION
#define sqlite3_realloc_REQUIRED_ARGC 2
#define sqlite3_realloc_OPTIONAL_ARGC 0
/* void * sqlite3_realloc(void * arg1, int arg2) */
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
/* sha: 07d2b86119193258487f55c5b4d403403f88562aef1f915aff26920f95a81c14 */
#if BIND_sqlite3_realloc64_FUNCTION
#define sqlite3_realloc64_REQUIRED_ARGC 2
#define sqlite3_realloc64_OPTIONAL_ARGC 0
/* void * sqlite3_realloc64(void * arg1, sqlite3_uint64 arg2) */
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
/* sha: d6d0b12a6c1272e85fd00089eb814510112a69a74dcdf870216af62bdbc0c707 */
#if BIND_sqlite3_release_memory_FUNCTION
#define sqlite3_release_memory_REQUIRED_ARGC 1
#define sqlite3_release_memory_OPTIONAL_ARGC 0
/* int sqlite3_release_memory(int arg1) */
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
/* sha: b42da81e400fd8ee75635cfe5de61f65a10c0e7c512e1750784951cf9181662e */
#if BIND_sqlite3_reset_FUNCTION
#define sqlite3_reset_REQUIRED_ARGC 1
#define sqlite3_reset_OPTIONAL_ARGC 0
/* int sqlite3_reset(sqlite3_stmt * pStmt) */
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
/* sha: 89dd4bf90ab9a10e525ca5ab8d7cb256fb0a6683286be70b1002b82f2b11983b */
#if BIND_sqlite3_reset_auto_extension_FUNCTION
#define sqlite3_reset_auto_extension_REQUIRED_ARGC 0
#define sqlite3_reset_auto_extension_OPTIONAL_ARGC 0
/* void sqlite3_reset_auto_extension() */
mrb_value
mrb_SQLite_sqlite3_reset_auto_extension(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  sqlite3_reset_auto_extension();

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_result_blob */
/* sha: eb6a695ffbc44289f41872cdf34c2d3af8cae5483ce77000c8059b12aabb0ceb */
#if BIND_sqlite3_result_blob_FUNCTION
#define sqlite3_result_blob_REQUIRED_ARGC 4
#define sqlite3_result_blob_OPTIONAL_ARGC 0
/* void sqlite3_result_blob(sqlite3_context * arg1, const void * arg2, int arg3, void (*)(void *) arg4) */
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
/* sha: 3d572345306138dc7824f2de74ae09035d978a751356ce6babbb786ca62f198d */
#if BIND_sqlite3_result_blob64_FUNCTION
#define sqlite3_result_blob64_REQUIRED_ARGC 4
#define sqlite3_result_blob64_OPTIONAL_ARGC 0
/* void sqlite3_result_blob64(sqlite3_context * arg1, const void * arg2, sqlite3_uint64 arg3, void (*)(void *) arg4) */
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
/* sha: 657139cf7396fe7ddaf583772c59ccdc9db98cb68055845811cbd1ab5f7a7b49 */
#if BIND_sqlite3_result_double_FUNCTION
#define sqlite3_result_double_REQUIRED_ARGC 2
#define sqlite3_result_double_OPTIONAL_ARGC 0
/* void sqlite3_result_double(sqlite3_context * arg1, double arg2) */
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
/* sha: b70da70bec3585578e8c8010783025e254922cbc1eda152d2d56f41fc4b4c0d8 */
#if BIND_sqlite3_result_error_FUNCTION
#define sqlite3_result_error_REQUIRED_ARGC 3
#define sqlite3_result_error_OPTIONAL_ARGC 0
/* void sqlite3_result_error(sqlite3_context * arg1, const char * arg2, int arg3) */
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
/* sha: 46a1fb49d56b0a8a022526ee53519ca6a8397d95ae9a40be5668583165be3e19 */
#if BIND_sqlite3_result_error16_FUNCTION
#define sqlite3_result_error16_REQUIRED_ARGC 3
#define sqlite3_result_error16_OPTIONAL_ARGC 0
/* void sqlite3_result_error16(sqlite3_context * arg1, const void * arg2, int arg3) */
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
/* sha: 61f7bd250fc6b6dc659b0046ab68e479f29030a079e2cc97a60929cfbf0f63fb */
#if BIND_sqlite3_result_error_code_FUNCTION
#define sqlite3_result_error_code_REQUIRED_ARGC 2
#define sqlite3_result_error_code_OPTIONAL_ARGC 0
/* void sqlite3_result_error_code(sqlite3_context * arg1, int arg2) */
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
/* sha: bcf761fdcf64cd185e889e6aa6d07583f9c82f620d9183cf109a2f0fb0cccfd4 */
#if BIND_sqlite3_result_error_nomem_FUNCTION
#define sqlite3_result_error_nomem_REQUIRED_ARGC 1
#define sqlite3_result_error_nomem_OPTIONAL_ARGC 0
/* void sqlite3_result_error_nomem(sqlite3_context * arg1) */
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
/* sha: c56228b99cd1788ba9d9635b2716c60b374c38ab2b8c9b125dd8621573999de0 */
#if BIND_sqlite3_result_error_toobig_FUNCTION
#define sqlite3_result_error_toobig_REQUIRED_ARGC 1
#define sqlite3_result_error_toobig_OPTIONAL_ARGC 0
/* void sqlite3_result_error_toobig(sqlite3_context * arg1) */
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
/* sha: de8f74ddbd5117f4298deef2d8ccbbc167333e5d09121fb0a4043b300f9b054c */
#if BIND_sqlite3_result_int_FUNCTION
#define sqlite3_result_int_REQUIRED_ARGC 2
#define sqlite3_result_int_OPTIONAL_ARGC 0
/* void sqlite3_result_int(sqlite3_context * arg1, int arg2) */
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
/* sha: e34d41c69d9c153145bae623b8848d895493ee744b0ac4f558c146c2f7507748 */
#if BIND_sqlite3_result_int64_FUNCTION
#define sqlite3_result_int64_REQUIRED_ARGC 2
#define sqlite3_result_int64_OPTIONAL_ARGC 0
/* void sqlite3_result_int64(sqlite3_context * arg1, sqlite3_int64 arg2) */
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
/* sha: eaa881c491a2baf357ae749bd1697a0c3bc8f7b6d4a5366dddecb6f5079210ab */
#if BIND_sqlite3_result_null_FUNCTION
#define sqlite3_result_null_REQUIRED_ARGC 1
#define sqlite3_result_null_OPTIONAL_ARGC 0
/* void sqlite3_result_null(sqlite3_context * arg1) */
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
/* sha: b4c2286aa2aa3d5d09416aebd0442a7855f2e99c887a757d0a8c54724da9c0ce */
#if BIND_sqlite3_result_text_FUNCTION
#define sqlite3_result_text_REQUIRED_ARGC 4
#define sqlite3_result_text_OPTIONAL_ARGC 0
/* void sqlite3_result_text(sqlite3_context * arg1, const char * arg2, int arg3, void (*)(void *) arg4) */
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
/* sha: cdcf6c2f48a402bc357e651fa1fb824bbf62936281d0ac41d67065f0a4ff8148 */
#if BIND_sqlite3_result_text16_FUNCTION
#define sqlite3_result_text16_REQUIRED_ARGC 4
#define sqlite3_result_text16_OPTIONAL_ARGC 0
/* void sqlite3_result_text16(sqlite3_context * arg1, const void * arg2, int arg3, void (*)(void *) arg4) */
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
/* sha: f08b117a038febc5212de1e595cac1548dcbd11fe206f9b5c907905cc5fe5cca */
#if BIND_sqlite3_result_text16be_FUNCTION
#define sqlite3_result_text16be_REQUIRED_ARGC 4
#define sqlite3_result_text16be_OPTIONAL_ARGC 0
/* void sqlite3_result_text16be(sqlite3_context * arg1, const void * arg2, int arg3, void (*)(void *) arg4) */
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
/* sha: 1430988528dd2acc89b23832c4017ef664281be54f7a10d7ea91c94e13e3da48 */
#if BIND_sqlite3_result_text16le_FUNCTION
#define sqlite3_result_text16le_REQUIRED_ARGC 4
#define sqlite3_result_text16le_OPTIONAL_ARGC 0
/* void sqlite3_result_text16le(sqlite3_context * arg1, const void * arg2, int arg3, void (*)(void *) arg4) */
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
/* sha: da107ed5e63f5bf301ac55c51996281b445ac15277e1d1711ecaf3f5aed884b2 */
#if BIND_sqlite3_result_text64_FUNCTION
#define sqlite3_result_text64_REQUIRED_ARGC 5
#define sqlite3_result_text64_OPTIONAL_ARGC 0
/* void sqlite3_result_text64(sqlite3_context * arg1, const char * arg2, sqlite3_uint64 arg3, void (*)(void *) arg4, unsigned char encoding) */
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
/* sha: 9195a502e93c1642de041f6689c05e90a07bd77b1b6878cee878414288b07b7f */
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
  if (!mrb_obj_is_kind_of(mrb, arg2, Sqlite3Value_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Value expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_context * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_sqlite3_context(arg1));

  /* Unbox param: arg2 */
  sqlite3_value * native_arg2 = (mrb_nil_p(arg2) ? NULL : TODO_mruby_unbox_Mem(arg2));

  /* Invocation */
  sqlite3_result_value(native_arg1, native_arg2);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_result_zeroblob */
/* sha: fccdbaa091aee6c21d33eb8a407bf490b5df3abdac966fa5361978f684ad0d89 */
#if BIND_sqlite3_result_zeroblob_FUNCTION
#define sqlite3_result_zeroblob_REQUIRED_ARGC 2
#define sqlite3_result_zeroblob_OPTIONAL_ARGC 0
/* void sqlite3_result_zeroblob(sqlite3_context * arg1, int n) */
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
/* sha: 648fe4d5a83508b5d6081c9788f1309e608cd1fd60160c7a59b4bb2cc50f8e47 */
#if BIND_sqlite3_rollback_hook_FUNCTION
#define sqlite3_rollback_hook_REQUIRED_ARGC 3
#define sqlite3_rollback_hook_OPTIONAL_ARGC 0
/* void * sqlite3_rollback_hook(sqlite3 * arg1, void (*)(void *) arg2, void * arg3) */
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
/* sha: abad08887cbc2d9cd05364880692186abc17271847f24adb6c1b830628ae7b3a */
#if BIND_sqlite3_rtree_geometry_callback_FUNCTION
#define sqlite3_rtree_geometry_callback_REQUIRED_ARGC 4
#define sqlite3_rtree_geometry_callback_OPTIONAL_ARGC 0
/* int sqlite3_rtree_geometry_callback(sqlite3 * db, const char * zGeom, int (*)(sqlite3_rtree_geometry *, int, sqlite3_rtree_dbl *, int *) xGeom, void * pContext) */
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
/* sha: 0efc64d996370d1dc12b39e1e7d63d1c76cec2eb8bcc216ca19f2e681289d4ba */
#if BIND_sqlite3_rtree_query_callback_FUNCTION
#define sqlite3_rtree_query_callback_REQUIRED_ARGC 5
#define sqlite3_rtree_query_callback_OPTIONAL_ARGC 0
/* int sqlite3_rtree_query_callback(sqlite3 * db, const char * zQueryFunc, int (*)(sqlite3_rtree_query_info *) xQueryFunc, void * pContext, void (*)(void *) xDestructor) */
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
/* sha: dc7229aede0fc67b9c745c8e30fc447b9818872172a4392226014c2b267a2004 */
#if BIND_sqlite3_set_authorizer_FUNCTION
#define sqlite3_set_authorizer_REQUIRED_ARGC 3
#define sqlite3_set_authorizer_OPTIONAL_ARGC 0
/* int sqlite3_set_authorizer(sqlite3 * arg1, int (*)(void *, int, const char *, const char *, const char *, const char *) xAuth, void * pUserData) */
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
/* sha: 1bf2df02703177ebfb1ffd6fad7b02be55a64991e40d41ff3bef8302f7181f4b */
#if BIND_sqlite3_set_auxdata_FUNCTION
#define sqlite3_set_auxdata_REQUIRED_ARGC 4
#define sqlite3_set_auxdata_OPTIONAL_ARGC 0
/* void sqlite3_set_auxdata(sqlite3_context * arg1, int N, void * arg3, void (*)(void *) arg4) */
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
/* sha: edf3e98a2f767cd3c1063839841612384f621eb16f979f8e33dccd1d0d78e75b */
#if BIND_sqlite3_shutdown_FUNCTION
#define sqlite3_shutdown_REQUIRED_ARGC 0
#define sqlite3_shutdown_OPTIONAL_ARGC 0
/* int sqlite3_shutdown() */
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
/* sha: bdbb7bd87d8cf443f338101ccbb3e7c6c732fa6f5aa24d7256feda13858506e6 */
#if BIND_sqlite3_sleep_FUNCTION
#define sqlite3_sleep_REQUIRED_ARGC 1
#define sqlite3_sleep_OPTIONAL_ARGC 0
/* int sqlite3_sleep(int arg1) */
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
/* sha: bb509bf2bfceb0f8a6389efa58315e09bba18a4d5baeaf2a0deddbf86b8211cf */
#if BIND_sqlite3_snprintf_FUNCTION
#define sqlite3_snprintf_REQUIRED_ARGC 3
#define sqlite3_snprintf_OPTIONAL_ARGC 0
/* char * sqlite3_snprintf(int arg1, char * arg2, const char * arg3) */
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
/* sha: 847da9cb6431065946ec07d0aef28bd10dbd3bc94839ec9faa935184810b94f7 */
#if BIND_sqlite3_soft_heap_limit_FUNCTION
#define sqlite3_soft_heap_limit_REQUIRED_ARGC 1
#define sqlite3_soft_heap_limit_OPTIONAL_ARGC 0
/* void sqlite3_soft_heap_limit(int N) */
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
/* sha: e77e65e390899e3d20304da0eff1fb6ef15913de858a26724409d48dd4260694 */
#if BIND_sqlite3_soft_heap_limit64_FUNCTION
#define sqlite3_soft_heap_limit64_REQUIRED_ARGC 1
#define sqlite3_soft_heap_limit64_OPTIONAL_ARGC 0
/* sqlite3_int64 sqlite3_soft_heap_limit64(sqlite3_int64 N) */
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
/* sha: 08ad896f0e66a5b32a131293c31cabd0a0455b9bfea8f56198d5934b16d0c748 */
#if BIND_sqlite3_sourceid_FUNCTION
#define sqlite3_sourceid_REQUIRED_ARGC 0
#define sqlite3_sourceid_OPTIONAL_ARGC 0
/* const char * sqlite3_sourceid() */
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
/* sha: 9d9db44b087aed5858117cbce4ce00f2a5263361aa463408c7bb08057d927382 */
#if BIND_sqlite3_sql_FUNCTION
#define sqlite3_sql_REQUIRED_ARGC 1
#define sqlite3_sql_OPTIONAL_ARGC 0
/* const char * sqlite3_sql(sqlite3_stmt * pStmt) */
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
/* sha: b9ec47fbdf28c192ccd9866eb799d385fb65cc72ee7e0e6ab7ac194d05041fe2 */
#if BIND_sqlite3_status_FUNCTION
#define sqlite3_status_REQUIRED_ARGC 4
#define sqlite3_status_OPTIONAL_ARGC 0
/* int sqlite3_status(int op, int * pCurrent, int * pHighwater, int resetFlag) */
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
/* sha: 4ca18c09e1d94c784b11e80c21f45638f061e3cd95ff77496c7e3498160cf076 */
#if BIND_sqlite3_status64_FUNCTION
#define sqlite3_status64_REQUIRED_ARGC 4
#define sqlite3_status64_OPTIONAL_ARGC 0
/* int sqlite3_status64(int op, sqlite3_int64 * pCurrent, sqlite3_int64 * pHighwater, int resetFlag) */
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
/* sha: c0990c32dc76d73b38dd4f10995e2dd0d61cd7045f406aa62cc18d444f7d42bb */
#if BIND_sqlite3_step_FUNCTION
#define sqlite3_step_REQUIRED_ARGC 1
#define sqlite3_step_OPTIONAL_ARGC 0
/* int sqlite3_step(sqlite3_stmt * arg1) */
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
/* sha: a23828a6185659068a70ac5f09eb341dda50367b53c9fa36c8b0a20325e72749 */
#if BIND_sqlite3_stmt_busy_FUNCTION
#define sqlite3_stmt_busy_REQUIRED_ARGC 1
#define sqlite3_stmt_busy_OPTIONAL_ARGC 0
/* int sqlite3_stmt_busy(sqlite3_stmt * arg1) */
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
/* sha: 75687439cc4db0b2b10207f477ad2bcd441e1f6a2198d4f897813320ff457904 */
#if BIND_sqlite3_stmt_readonly_FUNCTION
#define sqlite3_stmt_readonly_REQUIRED_ARGC 1
#define sqlite3_stmt_readonly_OPTIONAL_ARGC 0
/* int sqlite3_stmt_readonly(sqlite3_stmt * pStmt) */
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

/* MRUBY_BINDING: sqlite3_stmt_scanstatus */
/* sha: 320d8abcd4ef4013a678145cac00ae477b9dbbde333d1ce4a5fe3115bc921266 */
#if BIND_sqlite3_stmt_scanstatus_FUNCTION
#define sqlite3_stmt_scanstatus_REQUIRED_ARGC 4
#define sqlite3_stmt_scanstatus_OPTIONAL_ARGC 0
/* int sqlite3_stmt_scanstatus(sqlite3_stmt * pStmt, int idx, int iScanStatusOp, void * pOut) */
mrb_value
mrb_SQLite_sqlite3_stmt_scanstatus(mrb_state* mrb, mrb_value self) {
  mrb_value pStmt;
  mrb_int native_idx;
  mrb_int native_iScanStatusOp;
  mrb_value pOut;

  /* Fetch the args */
  mrb_get_args(mrb, "oiio", &pStmt, &native_idx, &native_iScanStatusOp, &pOut);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pStmt, Sqlite3Stmt_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Stmt expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(pOut);

  /* Unbox param: pStmt */
  sqlite3_stmt * native_pStmt = (mrb_nil_p(pStmt) ? NULL : mruby_unbox_sqlite3_stmt(pStmt));

  /* Unbox param: pOut */
  void * native_pOut = TODO_mruby_unbox_void_PTR(pOut);

  /* Invocation */
  int native_return_value = sqlite3_stmt_scanstatus(native_pStmt, native_idx, native_iScanStatusOp, native_pOut);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_stmt_status */
/* sha: f9dcd1234348485ac65e052dff70e6eaccc8ab33527739784246ad274e9e86b4 */
#if BIND_sqlite3_stmt_status_FUNCTION
#define sqlite3_stmt_status_REQUIRED_ARGC 3
#define sqlite3_stmt_status_OPTIONAL_ARGC 0
/* int sqlite3_stmt_status(sqlite3_stmt * arg1, int op, int resetFlg) */
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
/* sha: d98012f0eecc8b6889890797ea2dcd1b5cb61f6986bc05efa202353ad590017e */
#if BIND_sqlite3_strglob_FUNCTION
#define sqlite3_strglob_REQUIRED_ARGC 2
#define sqlite3_strglob_OPTIONAL_ARGC 0
/* int sqlite3_strglob(const char * zGlob, const char * zStr) */
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
/* sha: 2e9f1cbf7b4f7552c153fc19ab6f28ecaec7d188b3b4ec852adfd32af09f7fc9 */
#if BIND_sqlite3_stricmp_FUNCTION
#define sqlite3_stricmp_REQUIRED_ARGC 2
#define sqlite3_stricmp_OPTIONAL_ARGC 0
/* int sqlite3_stricmp(const char * arg1, const char * arg2) */
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
/* sha: 7f56ce94dff43aecbd1a70cdbce39a740f1298db5cd61628c04c4e12ef08ed64 */
#if BIND_sqlite3_strnicmp_FUNCTION
#define sqlite3_strnicmp_REQUIRED_ARGC 3
#define sqlite3_strnicmp_OPTIONAL_ARGC 0
/* int sqlite3_strnicmp(const char * arg1, const char * arg2, int arg3) */
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
/* sha: 81de8c44c20e50eb346e541b40def678fa33b55064e6263c0ea3490f18cb5c99 */
#if BIND_sqlite3_table_column_metadata_FUNCTION
#define sqlite3_table_column_metadata_REQUIRED_ARGC 9
#define sqlite3_table_column_metadata_OPTIONAL_ARGC 0
/* int sqlite3_table_column_metadata(sqlite3 * db, const char * zDbName, const char * zTableName, const char * zColumnName, const char ** pzDataType, const char ** pzCollSeq, int * pNotNull, int * pPrimaryKey, int * pAutoinc) */
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
/* sha: f0ef66b81c98b090cdb5b8fa8ca9497f29f8b489c52ef792f5f29db8f7d0d0b0 */
#if BIND_sqlite3_test_control_FUNCTION
#define sqlite3_test_control_REQUIRED_ARGC 1
#define sqlite3_test_control_OPTIONAL_ARGC 0
/* int sqlite3_test_control(int op) */
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
/* sha: f78cdf313776e0512e57bf7e587f610340413d73a4e9149c3269668f2c133292 */
#if BIND_sqlite3_thread_cleanup_FUNCTION
#define sqlite3_thread_cleanup_REQUIRED_ARGC 0
#define sqlite3_thread_cleanup_OPTIONAL_ARGC 0
/* void sqlite3_thread_cleanup() */
mrb_value
mrb_SQLite_sqlite3_thread_cleanup(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  sqlite3_thread_cleanup();

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_threadsafe */
/* sha: b2d8ea74efb10c0a80b79dccda9253a3926ec8604242e1fbed53f11f92a15320 */
#if BIND_sqlite3_threadsafe_FUNCTION
#define sqlite3_threadsafe_REQUIRED_ARGC 0
#define sqlite3_threadsafe_OPTIONAL_ARGC 0
/* int sqlite3_threadsafe() */
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
/* sha: 660cbfa8070ca9d61a04350eb7a0ec2c3534dfa7ad9aa0654889991584e03499 */
#if BIND_sqlite3_total_changes_FUNCTION
#define sqlite3_total_changes_REQUIRED_ARGC 1
#define sqlite3_total_changes_OPTIONAL_ARGC 0
/* int sqlite3_total_changes(sqlite3 * arg1) */
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
/* sha: 0923b8f0a8ae70b6ff2eebaa9e3e1b2bb43dd242984f32e4c1bac98313abeec7 */
#if BIND_sqlite3_trace_FUNCTION
#define sqlite3_trace_REQUIRED_ARGC 3
#define sqlite3_trace_OPTIONAL_ARGC 0
/* void * sqlite3_trace(sqlite3 * arg1, void (*)(void *, const char *) xTrace, void * arg3) */
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
/* sha: bfaf6777bfccd7f758c9d8a6d3e68006e1afa9986976d968ec79121fa3a3e2cb */
#if BIND_sqlite3_transfer_bindings_FUNCTION
#define sqlite3_transfer_bindings_REQUIRED_ARGC 2
#define sqlite3_transfer_bindings_OPTIONAL_ARGC 0
/* int sqlite3_transfer_bindings(sqlite3_stmt * arg1, sqlite3_stmt * arg2) */
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
/* sha: 906b24a3a54c1f44863fff80ddc52799a5c4993509405c22577af1d8643050e4 */
#if BIND_sqlite3_unlock_notify_FUNCTION
#define sqlite3_unlock_notify_REQUIRED_ARGC 3
#define sqlite3_unlock_notify_OPTIONAL_ARGC 0
/* int sqlite3_unlock_notify(sqlite3 * pBlocked, void (*)(void **, int) xNotify, void * pNotifyArg) */
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
/* sha: 36cf6788ef22401d6b366177e4340732787357da26486cd243588cb84007065e */
#if BIND_sqlite3_update_hook_FUNCTION
#define sqlite3_update_hook_REQUIRED_ARGC 3
#define sqlite3_update_hook_OPTIONAL_ARGC 0
/* void * sqlite3_update_hook(sqlite3 * arg1, void (*)(void *, int, const char *, const char *, sqlite3_int64) arg2, void * arg3) */
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
/* sha: 9ec8362dd818760e3c3022c50e12c743b01a4da80f4546f41a39e20d6e0c4d58 */
#if BIND_sqlite3_uri_boolean_FUNCTION
#define sqlite3_uri_boolean_REQUIRED_ARGC 3
#define sqlite3_uri_boolean_OPTIONAL_ARGC 0
/* int sqlite3_uri_boolean(const char * zFile, const char * zParam, int bDefault) */
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
/* sha: 218a527db40ab3477b682a55b60722abf22766c662f6f9982f2da70c2b18c51e */
#if BIND_sqlite3_uri_int64_FUNCTION
#define sqlite3_uri_int64_REQUIRED_ARGC 3
#define sqlite3_uri_int64_OPTIONAL_ARGC 0
/* sqlite3_int64 sqlite3_uri_int64(const char * arg1, const char * arg2, sqlite3_int64 arg3) */
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
/* sha: 170d1c981969a1e9f6e6d45c6afdae76da3bc82bc518605b850c105ade27b668 */
#if BIND_sqlite3_uri_parameter_FUNCTION
#define sqlite3_uri_parameter_REQUIRED_ARGC 2
#define sqlite3_uri_parameter_OPTIONAL_ARGC 0
/* const char * sqlite3_uri_parameter(const char * zFilename, const char * zParam) */
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
/* sha: c9173864b937e8cae30e581ab47714b74a8d743c97767dee7da4eb59375d054c */
#if BIND_sqlite3_user_data_FUNCTION
#define sqlite3_user_data_REQUIRED_ARGC 1
#define sqlite3_user_data_OPTIONAL_ARGC 0
/* void * sqlite3_user_data(sqlite3_context * arg1) */
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
/* sha: 321624fcb4498a3ec01fc9ba9c10598b91a8bba4e2927104b81ea3acc70b6a63 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Value_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Value expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : TODO_mruby_unbox_Mem(arg1));

  /* Invocation */
  const void * native_return_value = sqlite3_value_blob(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_bytes */
/* sha: ed5ff234a010c1fc959bf6240bd16babc02f6c11f384b0e1f42687804bdc5b68 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Value_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Value expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : TODO_mruby_unbox_Mem(arg1));

  /* Invocation */
  int native_return_value = sqlite3_value_bytes(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_bytes16 */
/* sha: d7c1ec04ef9687d0456069d0dcd041b43a5b75335112b6673788dda338cb0b46 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Value_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Value expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : TODO_mruby_unbox_Mem(arg1));

  /* Invocation */
  int native_return_value = sqlite3_value_bytes16(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_double */
/* sha: 598d22fb8502dc6cd136c1fb751863680cb0036c44f84183e285b66bc8328960 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Value_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Value expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : TODO_mruby_unbox_Mem(arg1));

  /* Invocation */
  double native_return_value = sqlite3_value_double(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_float_value(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_int */
/* sha: f34a0ffefb80e09bdce678e76b4ec983cee9c61229b418f3d054c51c6f44b610 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Value_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Value expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : TODO_mruby_unbox_Mem(arg1));

  /* Invocation */
  int native_return_value = sqlite3_value_int(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_int64 */
/* sha: 7279eb1aade5bd784ae0285e1ba8dd3606d2631de228cfcbe9c93c72dc19d9a1 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Value_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Value expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : TODO_mruby_unbox_Mem(arg1));

  /* Invocation */
  sqlite3_int64 native_return_value = sqlite3_value_int64(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_numeric_type */
/* sha: 250dd9beaaa003956bebf9204c7a9b220f80c66775d119cec1987bf8a5af3a08 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Value_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Value expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : TODO_mruby_unbox_Mem(arg1));

  /* Invocation */
  int native_return_value = sqlite3_value_numeric_type(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_text */
/* sha: 5df0a59d4963b60ee3c01a2abb99c26a5d2444823897ec6acae5ca2f63efa1c1 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Value_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Value expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : TODO_mruby_unbox_Mem(arg1));

  /* Invocation */
  const unsigned char * native_return_value = sqlite3_value_text(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_unsigned_char_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_text16 */
/* sha: 2eeb59076236391aed99317b89a902037c6b744fd435ea39cdff2205b3bbbe3d */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Value_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Value expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : TODO_mruby_unbox_Mem(arg1));

  /* Invocation */
  const void * native_return_value = sqlite3_value_text16(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_text16be */
/* sha: 25ea8846c69526a722b1b5eda9f5696337477c73c842ea4ef08c66c3c80882e8 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Value_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Value expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : TODO_mruby_unbox_Mem(arg1));

  /* Invocation */
  const void * native_return_value = sqlite3_value_text16be(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_text16le */
/* sha: 35d2b691b0be7d789b764fa0b9f918ce4d891f4f34307f8faf643e5c43d355c1 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Value_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Value expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : TODO_mruby_unbox_Mem(arg1));

  /* Invocation */
  const void * native_return_value = sqlite3_value_text16le(native_arg1);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_value_type */
/* sha: 0d06aac7294faaca46a2d5a9f181c58224ba3f12610c258d98ea0bfd65407603 */
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
  if (!mrb_obj_is_kind_of(mrb, arg1, Sqlite3Value_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Sqlite3Value expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  sqlite3_value * native_arg1 = (mrb_nil_p(arg1) ? NULL : TODO_mruby_unbox_Mem(arg1));

  /* Invocation */
  int native_return_value = sqlite3_value_type(native_arg1);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: sqlite3_vfs_find */
/* sha: 849a5c1150d2b60e9071541c3f5cbb1802aa87a2b7ee31497940c69093b0e4db */
#if BIND_sqlite3_vfs_find_FUNCTION
#define sqlite3_vfs_find_REQUIRED_ARGC 1
#define sqlite3_vfs_find_OPTIONAL_ARGC 0
/* sqlite3_vfs * sqlite3_vfs_find(const char * zVfsName) */
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
/* sha: 5f82d9df48a200094eb956ac377fdb7f4551a714fe42d319beeb0e2169b16bb7 */
#if BIND_sqlite3_vfs_register_FUNCTION
#define sqlite3_vfs_register_REQUIRED_ARGC 2
#define sqlite3_vfs_register_OPTIONAL_ARGC 0
/* int sqlite3_vfs_register(sqlite3_vfs * arg1, int makeDflt) */
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
/* sha: 7a7805a01feabad7584a89050f2cde50397e8c4dfbb74880cd45f79413bd8b9c */
#if BIND_sqlite3_vfs_unregister_FUNCTION
#define sqlite3_vfs_unregister_REQUIRED_ARGC 1
#define sqlite3_vfs_unregister_OPTIONAL_ARGC 0
/* int sqlite3_vfs_unregister(sqlite3_vfs * arg1) */
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
/* sha: c86140d2b2a36c58966e47cbc9614efe2a91d62471251b6c2aa3a3af1c9fe8e6 */
#if BIND_sqlite3_vmprintf_FUNCTION
#define sqlite3_vmprintf_REQUIRED_ARGC 2
#define sqlite3_vmprintf_OPTIONAL_ARGC 0
/* char * sqlite3_vmprintf(const char * arg1, int va_list) */
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
/* sha: ecbd69db72c06d890a51f885da26aca4420814406a5e82cd8e009e6ecd6a4e19 */
#if BIND_sqlite3_vsnprintf_FUNCTION
#define sqlite3_vsnprintf_REQUIRED_ARGC 4
#define sqlite3_vsnprintf_OPTIONAL_ARGC 0
/* char * sqlite3_vsnprintf(int arg1, char * arg2, const char * arg3, int va_list) */
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
/* sha: 6cf9bb5c7723e1d50213dd8322621ef68358e66eba9fb823cc5c32ddbb3e08d5 */
#if BIND_sqlite3_vtab_config_FUNCTION
#define sqlite3_vtab_config_REQUIRED_ARGC 2
#define sqlite3_vtab_config_OPTIONAL_ARGC 0
/* int sqlite3_vtab_config(sqlite3 * arg1, int op) */
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
/* sha: 317e70baaf3e37493957b3766213476810c585747446049146a2b92b84343918 */
#if BIND_sqlite3_vtab_on_conflict_FUNCTION
#define sqlite3_vtab_on_conflict_REQUIRED_ARGC 1
#define sqlite3_vtab_on_conflict_OPTIONAL_ARGC 0
/* int sqlite3_vtab_on_conflict(sqlite3 * arg1) */
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
/* sha: 6a343f911202dc3b924b20c9de972bea443360b5447f798e2fd1dc81e725c47b */
#if BIND_sqlite3_wal_autocheckpoint_FUNCTION
#define sqlite3_wal_autocheckpoint_REQUIRED_ARGC 2
#define sqlite3_wal_autocheckpoint_OPTIONAL_ARGC 0
/* int sqlite3_wal_autocheckpoint(sqlite3 * db, int N) */
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
/* sha: bdd5344db965af69b38417b81b21a0c5e5f1f6769ade64f4d0df710cab638736 */
#if BIND_sqlite3_wal_checkpoint_FUNCTION
#define sqlite3_wal_checkpoint_REQUIRED_ARGC 2
#define sqlite3_wal_checkpoint_OPTIONAL_ARGC 0
/* int sqlite3_wal_checkpoint(sqlite3 * db, const char * zDb) */
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
/* sha: 8708c28e9c9e730d4090cdac09ab628e7d40869fd8a3b2467978bed7bfe5c8e2 */
#if BIND_sqlite3_wal_checkpoint_v2_FUNCTION
#define sqlite3_wal_checkpoint_v2_REQUIRED_ARGC 5
#define sqlite3_wal_checkpoint_v2_OPTIONAL_ARGC 0
/* int sqlite3_wal_checkpoint_v2(sqlite3 * db, const char * zDb, int eMode, int * pnLog, int * pnCkpt) */
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
/* sha: a8596d9367f4e43a9881a6398835c1b9104069a0c40c7f58f58354dc610f4639 */
#if BIND_sqlite3_wal_hook_FUNCTION
#define sqlite3_wal_hook_REQUIRED_ARGC 3
#define sqlite3_wal_hook_OPTIONAL_ARGC 0
/* void * sqlite3_wal_hook(sqlite3 * arg1, int (*)(void *, sqlite3 *, const char *, int) arg2, void * arg3) */
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
/* MRUBY_BINDING: pre_module_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
  
  struct RClass* SQLite_module = mrb_define_module(mrb, "SQLite");
  mruby_SQLite_define_macro_constants(mrb);
  mruby_SQLite_define_enum_constants(mrb);

/* MRUBY_BINDING: pre_class_initializations */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: class_initializations */
/* sha: f6f3610cf9a8a36c48c10bd7640386bfef4a8d80120bbd6c2a6ce6567e8f320e */
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
#if BIND_Sqlite3Value_TYPE
  mrb_SQLite_Sqlite3Value_init(mrb);
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

/* MRUBY_BINDING: pre_global_function_initializations */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: global_function_definitions */
/* sha: ed1973e7028340b97e09f2dba5580199449da9f05ee3b4bbcca24e554e0ece9d */
  /*
   * Global Functions
   */
#if BIND_sqlite3_aggregate_context_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "aggregate_context", mrb_SQLite_sqlite3_aggregate_context, MRB_ARGS_ARG(sqlite3_aggregate_context_REQUIRED_ARGC, sqlite3_aggregate_context_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_aggregate_count_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "aggregate_count", mrb_SQLite_sqlite3_aggregate_count, MRB_ARGS_ARG(sqlite3_aggregate_count_REQUIRED_ARGC, sqlite3_aggregate_count_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_auto_extension_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "auto_extension", mrb_SQLite_sqlite3_auto_extension, MRB_ARGS_ARG(sqlite3_auto_extension_REQUIRED_ARGC, sqlite3_auto_extension_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_backup_finish_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "backup_finish", mrb_SQLite_sqlite3_backup_finish, MRB_ARGS_ARG(sqlite3_backup_finish_REQUIRED_ARGC, sqlite3_backup_finish_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_backup_init_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "backup_init", mrb_SQLite_sqlite3_backup_init, MRB_ARGS_ARG(sqlite3_backup_init_REQUIRED_ARGC, sqlite3_backup_init_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_backup_pagecount_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "backup_pagecount", mrb_SQLite_sqlite3_backup_pagecount, MRB_ARGS_ARG(sqlite3_backup_pagecount_REQUIRED_ARGC, sqlite3_backup_pagecount_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_backup_remaining_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "backup_remaining", mrb_SQLite_sqlite3_backup_remaining, MRB_ARGS_ARG(sqlite3_backup_remaining_REQUIRED_ARGC, sqlite3_backup_remaining_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_backup_step_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "backup_step", mrb_SQLite_sqlite3_backup_step, MRB_ARGS_ARG(sqlite3_backup_step_REQUIRED_ARGC, sqlite3_backup_step_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_blob_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "bind_blob", mrb_SQLite_sqlite3_bind_blob, MRB_ARGS_ARG(sqlite3_bind_blob_REQUIRED_ARGC, sqlite3_bind_blob_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_blob64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "bind_blob64", mrb_SQLite_sqlite3_bind_blob64, MRB_ARGS_ARG(sqlite3_bind_blob64_REQUIRED_ARGC, sqlite3_bind_blob64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_double_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "bind_double", mrb_SQLite_sqlite3_bind_double, MRB_ARGS_ARG(sqlite3_bind_double_REQUIRED_ARGC, sqlite3_bind_double_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_int_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "bind_int", mrb_SQLite_sqlite3_bind_int, MRB_ARGS_ARG(sqlite3_bind_int_REQUIRED_ARGC, sqlite3_bind_int_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_int64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "bind_int64", mrb_SQLite_sqlite3_bind_int64, MRB_ARGS_ARG(sqlite3_bind_int64_REQUIRED_ARGC, sqlite3_bind_int64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_null_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "bind_null", mrb_SQLite_sqlite3_bind_null, MRB_ARGS_ARG(sqlite3_bind_null_REQUIRED_ARGC, sqlite3_bind_null_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_parameter_count_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "bind_parameter_count", mrb_SQLite_sqlite3_bind_parameter_count, MRB_ARGS_ARG(sqlite3_bind_parameter_count_REQUIRED_ARGC, sqlite3_bind_parameter_count_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_parameter_index_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "bind_parameter_index", mrb_SQLite_sqlite3_bind_parameter_index, MRB_ARGS_ARG(sqlite3_bind_parameter_index_REQUIRED_ARGC, sqlite3_bind_parameter_index_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_parameter_name_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "bind_parameter_name", mrb_SQLite_sqlite3_bind_parameter_name, MRB_ARGS_ARG(sqlite3_bind_parameter_name_REQUIRED_ARGC, sqlite3_bind_parameter_name_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_text_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "bind_text", mrb_SQLite_sqlite3_bind_text, MRB_ARGS_ARG(sqlite3_bind_text_REQUIRED_ARGC, sqlite3_bind_text_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_text16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "bind_text16", mrb_SQLite_sqlite3_bind_text16, MRB_ARGS_ARG(sqlite3_bind_text16_REQUIRED_ARGC, sqlite3_bind_text16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_text64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "bind_text64", mrb_SQLite_sqlite3_bind_text64, MRB_ARGS_ARG(sqlite3_bind_text64_REQUIRED_ARGC, sqlite3_bind_text64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_value_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "bind_value", mrb_SQLite_sqlite3_bind_value, MRB_ARGS_ARG(sqlite3_bind_value_REQUIRED_ARGC, sqlite3_bind_value_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_bind_zeroblob_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "bind_zeroblob", mrb_SQLite_sqlite3_bind_zeroblob, MRB_ARGS_ARG(sqlite3_bind_zeroblob_REQUIRED_ARGC, sqlite3_bind_zeroblob_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_blob_bytes_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "blob_bytes", mrb_SQLite_sqlite3_blob_bytes, MRB_ARGS_ARG(sqlite3_blob_bytes_REQUIRED_ARGC, sqlite3_blob_bytes_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_blob_close_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "blob_close", mrb_SQLite_sqlite3_blob_close, MRB_ARGS_ARG(sqlite3_blob_close_REQUIRED_ARGC, sqlite3_blob_close_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_blob_open_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "blob_open", mrb_SQLite_sqlite3_blob_open, MRB_ARGS_ARG(sqlite3_blob_open_REQUIRED_ARGC, sqlite3_blob_open_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_blob_read_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "blob_read", mrb_SQLite_sqlite3_blob_read, MRB_ARGS_ARG(sqlite3_blob_read_REQUIRED_ARGC, sqlite3_blob_read_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_blob_reopen_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "blob_reopen", mrb_SQLite_sqlite3_blob_reopen, MRB_ARGS_ARG(sqlite3_blob_reopen_REQUIRED_ARGC, sqlite3_blob_reopen_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_blob_write_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "blob_write", mrb_SQLite_sqlite3_blob_write, MRB_ARGS_ARG(sqlite3_blob_write_REQUIRED_ARGC, sqlite3_blob_write_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_busy_handler_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "busy_handler", mrb_SQLite_sqlite3_busy_handler, MRB_ARGS_ARG(sqlite3_busy_handler_REQUIRED_ARGC, sqlite3_busy_handler_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_busy_timeout_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "busy_timeout", mrb_SQLite_sqlite3_busy_timeout, MRB_ARGS_ARG(sqlite3_busy_timeout_REQUIRED_ARGC, sqlite3_busy_timeout_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_cancel_auto_extension_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "cancel_auto_extension", mrb_SQLite_sqlite3_cancel_auto_extension, MRB_ARGS_ARG(sqlite3_cancel_auto_extension_REQUIRED_ARGC, sqlite3_cancel_auto_extension_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_changes_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "changes", mrb_SQLite_sqlite3_changes, MRB_ARGS_ARG(sqlite3_changes_REQUIRED_ARGC, sqlite3_changes_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_clear_bindings_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "clear_bindings", mrb_SQLite_sqlite3_clear_bindings, MRB_ARGS_ARG(sqlite3_clear_bindings_REQUIRED_ARGC, sqlite3_clear_bindings_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_close_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "close", mrb_SQLite_sqlite3_close, MRB_ARGS_ARG(sqlite3_close_REQUIRED_ARGC, sqlite3_close_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_close_v2_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "close_v2", mrb_SQLite_sqlite3_close_v2, MRB_ARGS_ARG(sqlite3_close_v2_REQUIRED_ARGC, sqlite3_close_v2_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_collation_needed_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "collation_needed", mrb_SQLite_sqlite3_collation_needed, MRB_ARGS_ARG(sqlite3_collation_needed_REQUIRED_ARGC, sqlite3_collation_needed_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_collation_needed16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "collation_needed16", mrb_SQLite_sqlite3_collation_needed16, MRB_ARGS_ARG(sqlite3_collation_needed16_REQUIRED_ARGC, sqlite3_collation_needed16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_blob_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "column_blob", mrb_SQLite_sqlite3_column_blob, MRB_ARGS_ARG(sqlite3_column_blob_REQUIRED_ARGC, sqlite3_column_blob_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_bytes_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "column_bytes", mrb_SQLite_sqlite3_column_bytes, MRB_ARGS_ARG(sqlite3_column_bytes_REQUIRED_ARGC, sqlite3_column_bytes_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_bytes16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "column_bytes16", mrb_SQLite_sqlite3_column_bytes16, MRB_ARGS_ARG(sqlite3_column_bytes16_REQUIRED_ARGC, sqlite3_column_bytes16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_count_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "column_count", mrb_SQLite_sqlite3_column_count, MRB_ARGS_ARG(sqlite3_column_count_REQUIRED_ARGC, sqlite3_column_count_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_database_name_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "column_database_name", mrb_SQLite_sqlite3_column_database_name, MRB_ARGS_ARG(sqlite3_column_database_name_REQUIRED_ARGC, sqlite3_column_database_name_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_database_name16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "column_database_name16", mrb_SQLite_sqlite3_column_database_name16, MRB_ARGS_ARG(sqlite3_column_database_name16_REQUIRED_ARGC, sqlite3_column_database_name16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_decltype_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "column_decltype", mrb_SQLite_sqlite3_column_decltype, MRB_ARGS_ARG(sqlite3_column_decltype_REQUIRED_ARGC, sqlite3_column_decltype_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_decltype16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "column_decltype16", mrb_SQLite_sqlite3_column_decltype16, MRB_ARGS_ARG(sqlite3_column_decltype16_REQUIRED_ARGC, sqlite3_column_decltype16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_double_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "column_double", mrb_SQLite_sqlite3_column_double, MRB_ARGS_ARG(sqlite3_column_double_REQUIRED_ARGC, sqlite3_column_double_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_int_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "column_int", mrb_SQLite_sqlite3_column_int, MRB_ARGS_ARG(sqlite3_column_int_REQUIRED_ARGC, sqlite3_column_int_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_int64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "column_int64", mrb_SQLite_sqlite3_column_int64, MRB_ARGS_ARG(sqlite3_column_int64_REQUIRED_ARGC, sqlite3_column_int64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_name_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "column_name", mrb_SQLite_sqlite3_column_name, MRB_ARGS_ARG(sqlite3_column_name_REQUIRED_ARGC, sqlite3_column_name_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_name16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "column_name16", mrb_SQLite_sqlite3_column_name16, MRB_ARGS_ARG(sqlite3_column_name16_REQUIRED_ARGC, sqlite3_column_name16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_origin_name_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "column_origin_name", mrb_SQLite_sqlite3_column_origin_name, MRB_ARGS_ARG(sqlite3_column_origin_name_REQUIRED_ARGC, sqlite3_column_origin_name_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_origin_name16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "column_origin_name16", mrb_SQLite_sqlite3_column_origin_name16, MRB_ARGS_ARG(sqlite3_column_origin_name16_REQUIRED_ARGC, sqlite3_column_origin_name16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_table_name_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "column_table_name", mrb_SQLite_sqlite3_column_table_name, MRB_ARGS_ARG(sqlite3_column_table_name_REQUIRED_ARGC, sqlite3_column_table_name_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_table_name16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "column_table_name16", mrb_SQLite_sqlite3_column_table_name16, MRB_ARGS_ARG(sqlite3_column_table_name16_REQUIRED_ARGC, sqlite3_column_table_name16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_text_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "column_text", mrb_SQLite_sqlite3_column_text, MRB_ARGS_ARG(sqlite3_column_text_REQUIRED_ARGC, sqlite3_column_text_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_text16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "column_text16", mrb_SQLite_sqlite3_column_text16, MRB_ARGS_ARG(sqlite3_column_text16_REQUIRED_ARGC, sqlite3_column_text16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_type_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "column_type", mrb_SQLite_sqlite3_column_type, MRB_ARGS_ARG(sqlite3_column_type_REQUIRED_ARGC, sqlite3_column_type_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_column_value_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "column_value", mrb_SQLite_sqlite3_column_value, MRB_ARGS_ARG(sqlite3_column_value_REQUIRED_ARGC, sqlite3_column_value_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_commit_hook_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "commit_hook", mrb_SQLite_sqlite3_commit_hook, MRB_ARGS_ARG(sqlite3_commit_hook_REQUIRED_ARGC, sqlite3_commit_hook_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_compileoption_get_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "compileoption_get", mrb_SQLite_sqlite3_compileoption_get, MRB_ARGS_ARG(sqlite3_compileoption_get_REQUIRED_ARGC, sqlite3_compileoption_get_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_compileoption_used_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "compileoption_used", mrb_SQLite_sqlite3_compileoption_used, MRB_ARGS_ARG(sqlite3_compileoption_used_REQUIRED_ARGC, sqlite3_compileoption_used_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_complete_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "complete", mrb_SQLite_sqlite3_complete, MRB_ARGS_ARG(sqlite3_complete_REQUIRED_ARGC, sqlite3_complete_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_complete16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "complete16", mrb_SQLite_sqlite3_complete16, MRB_ARGS_ARG(sqlite3_complete16_REQUIRED_ARGC, sqlite3_complete16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_config_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "config", mrb_SQLite_sqlite3_config, MRB_ARGS_ARG(sqlite3_config_REQUIRED_ARGC, sqlite3_config_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_context_db_handle_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "context_db_handle", mrb_SQLite_sqlite3_context_db_handle, MRB_ARGS_ARG(sqlite3_context_db_handle_REQUIRED_ARGC, sqlite3_context_db_handle_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_create_collation_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "create_collation", mrb_SQLite_sqlite3_create_collation, MRB_ARGS_ARG(sqlite3_create_collation_REQUIRED_ARGC, sqlite3_create_collation_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_create_collation16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "create_collation16", mrb_SQLite_sqlite3_create_collation16, MRB_ARGS_ARG(sqlite3_create_collation16_REQUIRED_ARGC, sqlite3_create_collation16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_create_collation_v2_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "create_collation_v2", mrb_SQLite_sqlite3_create_collation_v2, MRB_ARGS_ARG(sqlite3_create_collation_v2_REQUIRED_ARGC, sqlite3_create_collation_v2_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_create_function_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "create_function", mrb_SQLite_sqlite3_create_function, MRB_ARGS_ARG(sqlite3_create_function_REQUIRED_ARGC, sqlite3_create_function_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_create_function16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "create_function16", mrb_SQLite_sqlite3_create_function16, MRB_ARGS_ARG(sqlite3_create_function16_REQUIRED_ARGC, sqlite3_create_function16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_create_function_v2_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "create_function_v2", mrb_SQLite_sqlite3_create_function_v2, MRB_ARGS_ARG(sqlite3_create_function_v2_REQUIRED_ARGC, sqlite3_create_function_v2_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_create_module_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "create_module", mrb_SQLite_sqlite3_create_module, MRB_ARGS_ARG(sqlite3_create_module_REQUIRED_ARGC, sqlite3_create_module_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_create_module_v2_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "create_module_v2", mrb_SQLite_sqlite3_create_module_v2, MRB_ARGS_ARG(sqlite3_create_module_v2_REQUIRED_ARGC, sqlite3_create_module_v2_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_data_count_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "data_count", mrb_SQLite_sqlite3_data_count, MRB_ARGS_ARG(sqlite3_data_count_REQUIRED_ARGC, sqlite3_data_count_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_db_config_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "db_config", mrb_SQLite_sqlite3_db_config, MRB_ARGS_ARG(sqlite3_db_config_REQUIRED_ARGC, sqlite3_db_config_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_db_filename_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "db_filename", mrb_SQLite_sqlite3_db_filename, MRB_ARGS_ARG(sqlite3_db_filename_REQUIRED_ARGC, sqlite3_db_filename_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_db_handle_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "db_handle", mrb_SQLite_sqlite3_db_handle, MRB_ARGS_ARG(sqlite3_db_handle_REQUIRED_ARGC, sqlite3_db_handle_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_db_readonly_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "db_readonly", mrb_SQLite_sqlite3_db_readonly, MRB_ARGS_ARG(sqlite3_db_readonly_REQUIRED_ARGC, sqlite3_db_readonly_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_db_release_memory_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "db_release_memory", mrb_SQLite_sqlite3_db_release_memory, MRB_ARGS_ARG(sqlite3_db_release_memory_REQUIRED_ARGC, sqlite3_db_release_memory_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_db_status_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "db_status", mrb_SQLite_sqlite3_db_status, MRB_ARGS_ARG(sqlite3_db_status_REQUIRED_ARGC, sqlite3_db_status_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_declare_vtab_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "declare_vtab", mrb_SQLite_sqlite3_declare_vtab, MRB_ARGS_ARG(sqlite3_declare_vtab_REQUIRED_ARGC, sqlite3_declare_vtab_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_enable_load_extension_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "enable_load_extension", mrb_SQLite_sqlite3_enable_load_extension, MRB_ARGS_ARG(sqlite3_enable_load_extension_REQUIRED_ARGC, sqlite3_enable_load_extension_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_enable_shared_cache_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "enable_shared_cache", mrb_SQLite_sqlite3_enable_shared_cache, MRB_ARGS_ARG(sqlite3_enable_shared_cache_REQUIRED_ARGC, sqlite3_enable_shared_cache_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_errcode_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "errcode", mrb_SQLite_sqlite3_errcode, MRB_ARGS_ARG(sqlite3_errcode_REQUIRED_ARGC, sqlite3_errcode_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_errmsg_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "errmsg", mrb_SQLite_sqlite3_errmsg, MRB_ARGS_ARG(sqlite3_errmsg_REQUIRED_ARGC, sqlite3_errmsg_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_errmsg16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "errmsg16", mrb_SQLite_sqlite3_errmsg16, MRB_ARGS_ARG(sqlite3_errmsg16_REQUIRED_ARGC, sqlite3_errmsg16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_errstr_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "errstr", mrb_SQLite_sqlite3_errstr, MRB_ARGS_ARG(sqlite3_errstr_REQUIRED_ARGC, sqlite3_errstr_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_exec_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "exec", mrb_SQLite_sqlite3_exec, MRB_ARGS_ARG(sqlite3_exec_REQUIRED_ARGC, sqlite3_exec_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_expired_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "expired", mrb_SQLite_sqlite3_expired, MRB_ARGS_ARG(sqlite3_expired_REQUIRED_ARGC, sqlite3_expired_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_extended_errcode_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "extended_errcode", mrb_SQLite_sqlite3_extended_errcode, MRB_ARGS_ARG(sqlite3_extended_errcode_REQUIRED_ARGC, sqlite3_extended_errcode_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_extended_result_codes_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "extended_result_codes", mrb_SQLite_sqlite3_extended_result_codes, MRB_ARGS_ARG(sqlite3_extended_result_codes_REQUIRED_ARGC, sqlite3_extended_result_codes_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_file_control_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "file_control", mrb_SQLite_sqlite3_file_control, MRB_ARGS_ARG(sqlite3_file_control_REQUIRED_ARGC, sqlite3_file_control_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_finalize_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "finalize", mrb_SQLite_sqlite3_finalize, MRB_ARGS_ARG(sqlite3_finalize_REQUIRED_ARGC, sqlite3_finalize_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_free_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "free", mrb_SQLite_sqlite3_free, MRB_ARGS_ARG(sqlite3_free_REQUIRED_ARGC, sqlite3_free_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_free_table_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "free_table", mrb_SQLite_sqlite3_free_table, MRB_ARGS_ARG(sqlite3_free_table_REQUIRED_ARGC, sqlite3_free_table_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_get_autocommit_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "get_autocommit", mrb_SQLite_sqlite3_get_autocommit, MRB_ARGS_ARG(sqlite3_get_autocommit_REQUIRED_ARGC, sqlite3_get_autocommit_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_get_auxdata_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "get_auxdata", mrb_SQLite_sqlite3_get_auxdata, MRB_ARGS_ARG(sqlite3_get_auxdata_REQUIRED_ARGC, sqlite3_get_auxdata_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_get_table_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "get_table", mrb_SQLite_sqlite3_get_table, MRB_ARGS_ARG(sqlite3_get_table_REQUIRED_ARGC, sqlite3_get_table_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_global_recover_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "global_recover", mrb_SQLite_sqlite3_global_recover, MRB_ARGS_ARG(sqlite3_global_recover_REQUIRED_ARGC, sqlite3_global_recover_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_initialize_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "initialize", mrb_SQLite_sqlite3_initialize, MRB_ARGS_ARG(sqlite3_initialize_REQUIRED_ARGC, sqlite3_initialize_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_interrupt_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "interrupt", mrb_SQLite_sqlite3_interrupt, MRB_ARGS_ARG(sqlite3_interrupt_REQUIRED_ARGC, sqlite3_interrupt_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_last_insert_rowid_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "last_insert_rowid", mrb_SQLite_sqlite3_last_insert_rowid, MRB_ARGS_ARG(sqlite3_last_insert_rowid_REQUIRED_ARGC, sqlite3_last_insert_rowid_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_libversion_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "libversion", mrb_SQLite_sqlite3_libversion, MRB_ARGS_ARG(sqlite3_libversion_REQUIRED_ARGC, sqlite3_libversion_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_libversion_number_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "libversion_number", mrb_SQLite_sqlite3_libversion_number, MRB_ARGS_ARG(sqlite3_libversion_number_REQUIRED_ARGC, sqlite3_libversion_number_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_limit_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "limit", mrb_SQLite_sqlite3_limit, MRB_ARGS_ARG(sqlite3_limit_REQUIRED_ARGC, sqlite3_limit_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_load_extension_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "load_extension", mrb_SQLite_sqlite3_load_extension, MRB_ARGS_ARG(sqlite3_load_extension_REQUIRED_ARGC, sqlite3_load_extension_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_log_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "log", mrb_SQLite_sqlite3_log, MRB_ARGS_ARG(sqlite3_log_REQUIRED_ARGC, sqlite3_log_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_malloc_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "malloc", mrb_SQLite_sqlite3_malloc, MRB_ARGS_ARG(sqlite3_malloc_REQUIRED_ARGC, sqlite3_malloc_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_malloc64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "malloc64", mrb_SQLite_sqlite3_malloc64, MRB_ARGS_ARG(sqlite3_malloc64_REQUIRED_ARGC, sqlite3_malloc64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_memory_alarm_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "memory_alarm", mrb_SQLite_sqlite3_memory_alarm, MRB_ARGS_ARG(sqlite3_memory_alarm_REQUIRED_ARGC, sqlite3_memory_alarm_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_memory_highwater_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "memory_highwater", mrb_SQLite_sqlite3_memory_highwater, MRB_ARGS_ARG(sqlite3_memory_highwater_REQUIRED_ARGC, sqlite3_memory_highwater_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_memory_used_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "memory_used", mrb_SQLite_sqlite3_memory_used, MRB_ARGS_ARG(sqlite3_memory_used_REQUIRED_ARGC, sqlite3_memory_used_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_mprintf_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "mprintf", mrb_SQLite_sqlite3_mprintf, MRB_ARGS_ARG(sqlite3_mprintf_REQUIRED_ARGC, sqlite3_mprintf_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_msize_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "msize", mrb_SQLite_sqlite3_msize, MRB_ARGS_ARG(sqlite3_msize_REQUIRED_ARGC, sqlite3_msize_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_next_stmt_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "next_stmt", mrb_SQLite_sqlite3_next_stmt, MRB_ARGS_ARG(sqlite3_next_stmt_REQUIRED_ARGC, sqlite3_next_stmt_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_open_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "open", mrb_SQLite_sqlite3_open, MRB_ARGS_ARG(sqlite3_open_REQUIRED_ARGC, sqlite3_open_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_open16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "open16", mrb_SQLite_sqlite3_open16, MRB_ARGS_ARG(sqlite3_open16_REQUIRED_ARGC, sqlite3_open16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_open_v2_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "open_v2", mrb_SQLite_sqlite3_open_v2, MRB_ARGS_ARG(sqlite3_open_v2_REQUIRED_ARGC, sqlite3_open_v2_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_os_end_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "os_end", mrb_SQLite_sqlite3_os_end, MRB_ARGS_ARG(sqlite3_os_end_REQUIRED_ARGC, sqlite3_os_end_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_os_init_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "os_init", mrb_SQLite_sqlite3_os_init, MRB_ARGS_ARG(sqlite3_os_init_REQUIRED_ARGC, sqlite3_os_init_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_overload_function_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "overload_function", mrb_SQLite_sqlite3_overload_function, MRB_ARGS_ARG(sqlite3_overload_function_REQUIRED_ARGC, sqlite3_overload_function_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_prepare_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "prepare", mrb_SQLite_sqlite3_prepare, MRB_ARGS_ARG(sqlite3_prepare_REQUIRED_ARGC, sqlite3_prepare_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_prepare16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "prepare16", mrb_SQLite_sqlite3_prepare16, MRB_ARGS_ARG(sqlite3_prepare16_REQUIRED_ARGC, sqlite3_prepare16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_prepare16_v2_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "prepare16_v2", mrb_SQLite_sqlite3_prepare16_v2, MRB_ARGS_ARG(sqlite3_prepare16_v2_REQUIRED_ARGC, sqlite3_prepare16_v2_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_prepare_v2_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "prepare_v2", mrb_SQLite_sqlite3_prepare_v2, MRB_ARGS_ARG(sqlite3_prepare_v2_REQUIRED_ARGC, sqlite3_prepare_v2_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_profile_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "profile", mrb_SQLite_sqlite3_profile, MRB_ARGS_ARG(sqlite3_profile_REQUIRED_ARGC, sqlite3_profile_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_progress_handler_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "progress_handler", mrb_SQLite_sqlite3_progress_handler, MRB_ARGS_ARG(sqlite3_progress_handler_REQUIRED_ARGC, sqlite3_progress_handler_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_randomness_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "randomness", mrb_SQLite_sqlite3_randomness, MRB_ARGS_ARG(sqlite3_randomness_REQUIRED_ARGC, sqlite3_randomness_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_realloc_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "realloc", mrb_SQLite_sqlite3_realloc, MRB_ARGS_ARG(sqlite3_realloc_REQUIRED_ARGC, sqlite3_realloc_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_realloc64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "realloc64", mrb_SQLite_sqlite3_realloc64, MRB_ARGS_ARG(sqlite3_realloc64_REQUIRED_ARGC, sqlite3_realloc64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_release_memory_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "release_memory", mrb_SQLite_sqlite3_release_memory, MRB_ARGS_ARG(sqlite3_release_memory_REQUIRED_ARGC, sqlite3_release_memory_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_reset_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "reset", mrb_SQLite_sqlite3_reset, MRB_ARGS_ARG(sqlite3_reset_REQUIRED_ARGC, sqlite3_reset_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_reset_auto_extension_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "reset_auto_extension", mrb_SQLite_sqlite3_reset_auto_extension, MRB_ARGS_ARG(sqlite3_reset_auto_extension_REQUIRED_ARGC, sqlite3_reset_auto_extension_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_blob_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "result_blob", mrb_SQLite_sqlite3_result_blob, MRB_ARGS_ARG(sqlite3_result_blob_REQUIRED_ARGC, sqlite3_result_blob_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_blob64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "result_blob64", mrb_SQLite_sqlite3_result_blob64, MRB_ARGS_ARG(sqlite3_result_blob64_REQUIRED_ARGC, sqlite3_result_blob64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_double_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "result_double", mrb_SQLite_sqlite3_result_double, MRB_ARGS_ARG(sqlite3_result_double_REQUIRED_ARGC, sqlite3_result_double_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_error_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "result_error", mrb_SQLite_sqlite3_result_error, MRB_ARGS_ARG(sqlite3_result_error_REQUIRED_ARGC, sqlite3_result_error_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_error16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "result_error16", mrb_SQLite_sqlite3_result_error16, MRB_ARGS_ARG(sqlite3_result_error16_REQUIRED_ARGC, sqlite3_result_error16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_error_code_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "result_error_code", mrb_SQLite_sqlite3_result_error_code, MRB_ARGS_ARG(sqlite3_result_error_code_REQUIRED_ARGC, sqlite3_result_error_code_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_error_nomem_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "result_error_nomem", mrb_SQLite_sqlite3_result_error_nomem, MRB_ARGS_ARG(sqlite3_result_error_nomem_REQUIRED_ARGC, sqlite3_result_error_nomem_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_error_toobig_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "result_error_toobig", mrb_SQLite_sqlite3_result_error_toobig, MRB_ARGS_ARG(sqlite3_result_error_toobig_REQUIRED_ARGC, sqlite3_result_error_toobig_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_int_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "result_int", mrb_SQLite_sqlite3_result_int, MRB_ARGS_ARG(sqlite3_result_int_REQUIRED_ARGC, sqlite3_result_int_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_int64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "result_int64", mrb_SQLite_sqlite3_result_int64, MRB_ARGS_ARG(sqlite3_result_int64_REQUIRED_ARGC, sqlite3_result_int64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_null_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "result_null", mrb_SQLite_sqlite3_result_null, MRB_ARGS_ARG(sqlite3_result_null_REQUIRED_ARGC, sqlite3_result_null_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_text_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "result_text", mrb_SQLite_sqlite3_result_text, MRB_ARGS_ARG(sqlite3_result_text_REQUIRED_ARGC, sqlite3_result_text_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_text16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "result_text16", mrb_SQLite_sqlite3_result_text16, MRB_ARGS_ARG(sqlite3_result_text16_REQUIRED_ARGC, sqlite3_result_text16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_text16be_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "result_text16be", mrb_SQLite_sqlite3_result_text16be, MRB_ARGS_ARG(sqlite3_result_text16be_REQUIRED_ARGC, sqlite3_result_text16be_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_text16le_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "result_text16le", mrb_SQLite_sqlite3_result_text16le, MRB_ARGS_ARG(sqlite3_result_text16le_REQUIRED_ARGC, sqlite3_result_text16le_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_text64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "result_text64", mrb_SQLite_sqlite3_result_text64, MRB_ARGS_ARG(sqlite3_result_text64_REQUIRED_ARGC, sqlite3_result_text64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_value_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "result_value", mrb_SQLite_sqlite3_result_value, MRB_ARGS_ARG(sqlite3_result_value_REQUIRED_ARGC, sqlite3_result_value_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_result_zeroblob_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "result_zeroblob", mrb_SQLite_sqlite3_result_zeroblob, MRB_ARGS_ARG(sqlite3_result_zeroblob_REQUIRED_ARGC, sqlite3_result_zeroblob_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_rollback_hook_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "rollback_hook", mrb_SQLite_sqlite3_rollback_hook, MRB_ARGS_ARG(sqlite3_rollback_hook_REQUIRED_ARGC, sqlite3_rollback_hook_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_rtree_geometry_callback_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "rtree_geometry_callback", mrb_SQLite_sqlite3_rtree_geometry_callback, MRB_ARGS_ARG(sqlite3_rtree_geometry_callback_REQUIRED_ARGC, sqlite3_rtree_geometry_callback_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_rtree_query_callback_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "rtree_query_callback", mrb_SQLite_sqlite3_rtree_query_callback, MRB_ARGS_ARG(sqlite3_rtree_query_callback_REQUIRED_ARGC, sqlite3_rtree_query_callback_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_set_authorizer_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "set_authorizer", mrb_SQLite_sqlite3_set_authorizer, MRB_ARGS_ARG(sqlite3_set_authorizer_REQUIRED_ARGC, sqlite3_set_authorizer_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_set_auxdata_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "set_auxdata", mrb_SQLite_sqlite3_set_auxdata, MRB_ARGS_ARG(sqlite3_set_auxdata_REQUIRED_ARGC, sqlite3_set_auxdata_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_shutdown_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "shutdown", mrb_SQLite_sqlite3_shutdown, MRB_ARGS_ARG(sqlite3_shutdown_REQUIRED_ARGC, sqlite3_shutdown_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_sleep_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sleep", mrb_SQLite_sqlite3_sleep, MRB_ARGS_ARG(sqlite3_sleep_REQUIRED_ARGC, sqlite3_sleep_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_snprintf_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "snprintf", mrb_SQLite_sqlite3_snprintf, MRB_ARGS_ARG(sqlite3_snprintf_REQUIRED_ARGC, sqlite3_snprintf_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_soft_heap_limit_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "soft_heap_limit", mrb_SQLite_sqlite3_soft_heap_limit, MRB_ARGS_ARG(sqlite3_soft_heap_limit_REQUIRED_ARGC, sqlite3_soft_heap_limit_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_soft_heap_limit64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "soft_heap_limit64", mrb_SQLite_sqlite3_soft_heap_limit64, MRB_ARGS_ARG(sqlite3_soft_heap_limit64_REQUIRED_ARGC, sqlite3_soft_heap_limit64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_sourceid_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sourceid", mrb_SQLite_sqlite3_sourceid, MRB_ARGS_ARG(sqlite3_sourceid_REQUIRED_ARGC, sqlite3_sourceid_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_sql_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "sql", mrb_SQLite_sqlite3_sql, MRB_ARGS_ARG(sqlite3_sql_REQUIRED_ARGC, sqlite3_sql_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_status_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "status", mrb_SQLite_sqlite3_status, MRB_ARGS_ARG(sqlite3_status_REQUIRED_ARGC, sqlite3_status_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_status64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "status64", mrb_SQLite_sqlite3_status64, MRB_ARGS_ARG(sqlite3_status64_REQUIRED_ARGC, sqlite3_status64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_step_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "step", mrb_SQLite_sqlite3_step, MRB_ARGS_ARG(sqlite3_step_REQUIRED_ARGC, sqlite3_step_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_stmt_busy_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "stmt_busy", mrb_SQLite_sqlite3_stmt_busy, MRB_ARGS_ARG(sqlite3_stmt_busy_REQUIRED_ARGC, sqlite3_stmt_busy_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_stmt_readonly_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "stmt_readonly", mrb_SQLite_sqlite3_stmt_readonly, MRB_ARGS_ARG(sqlite3_stmt_readonly_REQUIRED_ARGC, sqlite3_stmt_readonly_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_stmt_scanstatus_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "stmt_scanstatus", mrb_SQLite_sqlite3_stmt_scanstatus, MRB_ARGS_ARG(sqlite3_stmt_scanstatus_REQUIRED_ARGC, sqlite3_stmt_scanstatus_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_stmt_status_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "stmt_status", mrb_SQLite_sqlite3_stmt_status, MRB_ARGS_ARG(sqlite3_stmt_status_REQUIRED_ARGC, sqlite3_stmt_status_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_strglob_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "strglob", mrb_SQLite_sqlite3_strglob, MRB_ARGS_ARG(sqlite3_strglob_REQUIRED_ARGC, sqlite3_strglob_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_stricmp_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "stricmp", mrb_SQLite_sqlite3_stricmp, MRB_ARGS_ARG(sqlite3_stricmp_REQUIRED_ARGC, sqlite3_stricmp_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_strnicmp_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "strnicmp", mrb_SQLite_sqlite3_strnicmp, MRB_ARGS_ARG(sqlite3_strnicmp_REQUIRED_ARGC, sqlite3_strnicmp_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_table_column_metadata_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "table_column_metadata", mrb_SQLite_sqlite3_table_column_metadata, MRB_ARGS_ARG(sqlite3_table_column_metadata_REQUIRED_ARGC, sqlite3_table_column_metadata_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_test_control_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "test_control", mrb_SQLite_sqlite3_test_control, MRB_ARGS_ARG(sqlite3_test_control_REQUIRED_ARGC, sqlite3_test_control_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_thread_cleanup_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "thread_cleanup", mrb_SQLite_sqlite3_thread_cleanup, MRB_ARGS_ARG(sqlite3_thread_cleanup_REQUIRED_ARGC, sqlite3_thread_cleanup_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_threadsafe_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "threadsafe", mrb_SQLite_sqlite3_threadsafe, MRB_ARGS_ARG(sqlite3_threadsafe_REQUIRED_ARGC, sqlite3_threadsafe_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_total_changes_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "total_changes", mrb_SQLite_sqlite3_total_changes, MRB_ARGS_ARG(sqlite3_total_changes_REQUIRED_ARGC, sqlite3_total_changes_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_trace_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "trace", mrb_SQLite_sqlite3_trace, MRB_ARGS_ARG(sqlite3_trace_REQUIRED_ARGC, sqlite3_trace_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_transfer_bindings_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "transfer_bindings", mrb_SQLite_sqlite3_transfer_bindings, MRB_ARGS_ARG(sqlite3_transfer_bindings_REQUIRED_ARGC, sqlite3_transfer_bindings_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_unlock_notify_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "unlock_notify", mrb_SQLite_sqlite3_unlock_notify, MRB_ARGS_ARG(sqlite3_unlock_notify_REQUIRED_ARGC, sqlite3_unlock_notify_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_update_hook_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "update_hook", mrb_SQLite_sqlite3_update_hook, MRB_ARGS_ARG(sqlite3_update_hook_REQUIRED_ARGC, sqlite3_update_hook_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_uri_boolean_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "uri_boolean", mrb_SQLite_sqlite3_uri_boolean, MRB_ARGS_ARG(sqlite3_uri_boolean_REQUIRED_ARGC, sqlite3_uri_boolean_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_uri_int64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "uri_int64", mrb_SQLite_sqlite3_uri_int64, MRB_ARGS_ARG(sqlite3_uri_int64_REQUIRED_ARGC, sqlite3_uri_int64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_uri_parameter_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "uri_parameter", mrb_SQLite_sqlite3_uri_parameter, MRB_ARGS_ARG(sqlite3_uri_parameter_REQUIRED_ARGC, sqlite3_uri_parameter_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_user_data_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "user_data", mrb_SQLite_sqlite3_user_data, MRB_ARGS_ARG(sqlite3_user_data_REQUIRED_ARGC, sqlite3_user_data_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_blob_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "value_blob", mrb_SQLite_sqlite3_value_blob, MRB_ARGS_ARG(sqlite3_value_blob_REQUIRED_ARGC, sqlite3_value_blob_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_bytes_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "value_bytes", mrb_SQLite_sqlite3_value_bytes, MRB_ARGS_ARG(sqlite3_value_bytes_REQUIRED_ARGC, sqlite3_value_bytes_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_bytes16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "value_bytes16", mrb_SQLite_sqlite3_value_bytes16, MRB_ARGS_ARG(sqlite3_value_bytes16_REQUIRED_ARGC, sqlite3_value_bytes16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_double_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "value_double", mrb_SQLite_sqlite3_value_double, MRB_ARGS_ARG(sqlite3_value_double_REQUIRED_ARGC, sqlite3_value_double_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_int_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "value_int", mrb_SQLite_sqlite3_value_int, MRB_ARGS_ARG(sqlite3_value_int_REQUIRED_ARGC, sqlite3_value_int_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_int64_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "value_int64", mrb_SQLite_sqlite3_value_int64, MRB_ARGS_ARG(sqlite3_value_int64_REQUIRED_ARGC, sqlite3_value_int64_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_numeric_type_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "value_numeric_type", mrb_SQLite_sqlite3_value_numeric_type, MRB_ARGS_ARG(sqlite3_value_numeric_type_REQUIRED_ARGC, sqlite3_value_numeric_type_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_text_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "value_text", mrb_SQLite_sqlite3_value_text, MRB_ARGS_ARG(sqlite3_value_text_REQUIRED_ARGC, sqlite3_value_text_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_text16_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "value_text16", mrb_SQLite_sqlite3_value_text16, MRB_ARGS_ARG(sqlite3_value_text16_REQUIRED_ARGC, sqlite3_value_text16_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_text16be_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "value_text16be", mrb_SQLite_sqlite3_value_text16be, MRB_ARGS_ARG(sqlite3_value_text16be_REQUIRED_ARGC, sqlite3_value_text16be_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_text16le_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "value_text16le", mrb_SQLite_sqlite3_value_text16le, MRB_ARGS_ARG(sqlite3_value_text16le_REQUIRED_ARGC, sqlite3_value_text16le_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_value_type_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "value_type", mrb_SQLite_sqlite3_value_type, MRB_ARGS_ARG(sqlite3_value_type_REQUIRED_ARGC, sqlite3_value_type_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_vfs_find_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "vfs_find", mrb_SQLite_sqlite3_vfs_find, MRB_ARGS_ARG(sqlite3_vfs_find_REQUIRED_ARGC, sqlite3_vfs_find_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_vfs_register_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "vfs_register", mrb_SQLite_sqlite3_vfs_register, MRB_ARGS_ARG(sqlite3_vfs_register_REQUIRED_ARGC, sqlite3_vfs_register_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_vfs_unregister_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "vfs_unregister", mrb_SQLite_sqlite3_vfs_unregister, MRB_ARGS_ARG(sqlite3_vfs_unregister_REQUIRED_ARGC, sqlite3_vfs_unregister_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_vmprintf_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "vmprintf", mrb_SQLite_sqlite3_vmprintf, MRB_ARGS_ARG(sqlite3_vmprintf_REQUIRED_ARGC, sqlite3_vmprintf_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_vsnprintf_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "vsnprintf", mrb_SQLite_sqlite3_vsnprintf, MRB_ARGS_ARG(sqlite3_vsnprintf_REQUIRED_ARGC, sqlite3_vsnprintf_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_vtab_config_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "vtab_config", mrb_SQLite_sqlite3_vtab_config, MRB_ARGS_ARG(sqlite3_vtab_config_REQUIRED_ARGC, sqlite3_vtab_config_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_vtab_on_conflict_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "vtab_on_conflict", mrb_SQLite_sqlite3_vtab_on_conflict, MRB_ARGS_ARG(sqlite3_vtab_on_conflict_REQUIRED_ARGC, sqlite3_vtab_on_conflict_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_wal_autocheckpoint_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "wal_autocheckpoint", mrb_SQLite_sqlite3_wal_autocheckpoint, MRB_ARGS_ARG(sqlite3_wal_autocheckpoint_REQUIRED_ARGC, sqlite3_wal_autocheckpoint_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_wal_checkpoint_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "wal_checkpoint", mrb_SQLite_sqlite3_wal_checkpoint, MRB_ARGS_ARG(sqlite3_wal_checkpoint_REQUIRED_ARGC, sqlite3_wal_checkpoint_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_wal_checkpoint_v2_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "wal_checkpoint_v2", mrb_SQLite_sqlite3_wal_checkpoint_v2, MRB_ARGS_ARG(sqlite3_wal_checkpoint_v2_REQUIRED_ARGC, sqlite3_wal_checkpoint_v2_OPTIONAL_ARGC));
#endif
#if BIND_sqlite3_wal_hook_FUNCTION
  mrb_define_class_method(mrb, SQLite_module, "wal_hook", mrb_SQLite_sqlite3_wal_hook, MRB_ARGS_ARG(sqlite3_wal_hook_REQUIRED_ARGC, sqlite3_wal_hook_OPTIONAL_ARGC));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_module_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

void mrb_mruby_sqlite_gem_final(mrb_state* mrb){
/* MRUBY_BINDING: module_final */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */

#ifdef __cplusplus
}
#endif
