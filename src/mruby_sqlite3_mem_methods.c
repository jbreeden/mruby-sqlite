/*
 * sqlite3_mem_methods
 * Defined in file sqlite3.h @ line 1463
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3MemMethods_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::initialize */
/* sha: 0ee8e84230cf6f07e2835baacb40a82363c6efb38c1ee74e68efe287e6ce4e95 */
#if BIND_Sqlite3MemMethods_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3MemMethods_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  sqlite3_mem_methods* native_object = (sqlite3_mem_methods*)calloc(1, sizeof(sqlite3_mem_methods));
  mruby_gift_sqlite3_mem_methods_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3MemMethods::xMalloc_reader */
/* sha: be169b3a51ba9784e3488773ee8e1a6f672ac3d41d5d81ff8410350b14c6ce16 */
#if BIND_Sqlite3MemMethods_xMalloc_FIELD_READER
/* get_xMalloc
 *
 * Return Type: void *(*)(int)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_xMalloc(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);

  void *(*)(int) native_xMalloc = native_self->xMalloc;

  mrb_value xMalloc = TODO_mruby_box_void_PTR_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(mrb, native_xMalloc);

  return xMalloc;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xMalloc_writer */
/* sha: 34f83e265e1b3b8bdf26cd676d11985049a44c7097aac26494ae0fe26a4c19ac */
#if BIND_Sqlite3MemMethods_xMalloc_FIELD_WRITER
/* set_xMalloc
 *
 * Parameters:
 * - value: void *(*)(int)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xMalloc(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
  mrb_value xMalloc;

  mrb_get_args(mrb, "o", &xMalloc);

  /* type checking */
  TODO_type_check_void_PTR_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(xMalloc);

  void *(*native_xMalloc)(int) = TODO_mruby_unbox_void_PTR_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(xMalloc);

  native_self->xMalloc = native_xMalloc;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xFree_reader */
/* sha: 1eec16026baa70ece828e5d340bc9d5d780881e198d4e7151e9fb74f3c6a4206 */
#if BIND_Sqlite3MemMethods_xFree_FIELD_READER
/* get_xFree
 *
 * Return Type: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_xFree(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);

  void (*)(void *) native_xFree = native_self->xFree;

  mrb_value xFree = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_xFree);

  return xFree;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xFree_writer */
/* sha: b3aa50434bd4c853fecf5be2b0ca84d759ebabe06ab62312b56d5696b4f7319f */
#if BIND_Sqlite3MemMethods_xFree_FIELD_WRITER
/* set_xFree
 *
 * Parameters:
 * - value: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xFree(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
  mrb_value xFree;

  mrb_get_args(mrb, "o", &xFree);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xFree);

  void (*native_xFree)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xFree);

  native_self->xFree = native_xFree;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xRealloc_reader */
/* sha: 069286f9160090fa1ba594dc6704046ac6441ff3010676fb85feb3c3a751e392 */
#if BIND_Sqlite3MemMethods_xRealloc_FIELD_READER
/* get_xRealloc
 *
 * Return Type: void *(*)(void *, int)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_xRealloc(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);

  void *(*)(void *, int) native_xRealloc = native_self->xRealloc;

  mrb_value xRealloc = TODO_mruby_box_void_PTR_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_int_RPAREN(mrb, native_xRealloc);

  return xRealloc;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xRealloc_writer */
/* sha: fbd5685f624676e274de923e4d582f08856772d8b243fdfc5f946b8b9e755687 */
#if BIND_Sqlite3MemMethods_xRealloc_FIELD_WRITER
/* set_xRealloc
 *
 * Parameters:
 * - value: void *(*)(void *, int)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xRealloc(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
  mrb_value xRealloc;

  mrb_get_args(mrb, "o", &xRealloc);

  /* type checking */
  TODO_type_check_void_PTR_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_int_RPAREN(xRealloc);

  void *(*native_xRealloc)(void *, int) = TODO_mruby_unbox_void_PTR_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_int_RPAREN(xRealloc);

  native_self->xRealloc = native_xRealloc;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xSize_reader */
/* sha: 587bc170d2c553d546b6e7457a832094b90937a6c08625a1234adaaf66760afc */
#if BIND_Sqlite3MemMethods_xSize_FIELD_READER
/* get_xSize
 *
 * Return Type: int (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_xSize(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);

  int (*)(void *) native_xSize = native_self->xSize;

  mrb_value xSize = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_xSize);

  return xSize;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xSize_writer */
/* sha: 5cd30cf1be0d839a281835b867bc3b1402f67ee33b54724818c95d80c81745bf */
#if BIND_Sqlite3MemMethods_xSize_FIELD_WRITER
/* set_xSize
 *
 * Parameters:
 * - value: int (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xSize(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
  mrb_value xSize;

  mrb_get_args(mrb, "o", &xSize);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xSize);

  int (*native_xSize)(void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xSize);

  native_self->xSize = native_xSize;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xRoundup_reader */
/* sha: 117374f1047fa97ad81b12ae91d732825bcdb0deec226c24d470f3e5f2b68cb7 */
#if BIND_Sqlite3MemMethods_xRoundup_FIELD_READER
/* get_xRoundup
 *
 * Return Type: int (*)(int)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_xRoundup(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);

  int (*)(int) native_xRoundup = native_self->xRoundup;

  mrb_value xRoundup = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(mrb, native_xRoundup);

  return xRoundup;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xRoundup_writer */
/* sha: 598965eb0783aea19fb05ab08973c75f81f4a25902cb669bede19f7200aa8157 */
#if BIND_Sqlite3MemMethods_xRoundup_FIELD_WRITER
/* set_xRoundup
 *
 * Parameters:
 * - value: int (*)(int)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xRoundup(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
  mrb_value xRoundup;

  mrb_get_args(mrb, "o", &xRoundup);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(xRoundup);

  int (*native_xRoundup)(int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(xRoundup);

  native_self->xRoundup = native_xRoundup;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xInit_reader */
/* sha: 23057776389e63765bfdd12795c4774a5bc2d0ffb98d49dbb9f8118c4d864c59 */
#if BIND_Sqlite3MemMethods_xInit_FIELD_READER
/* get_xInit
 *
 * Return Type: int (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_xInit(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);

  int (*)(void *) native_xInit = native_self->xInit;

  mrb_value xInit = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_xInit);

  return xInit;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xInit_writer */
/* sha: b3ef440f6c4c03bff365df1120fc377e1ab3b18f7f00791c64ce5eeff1e9fbab */
#if BIND_Sqlite3MemMethods_xInit_FIELD_WRITER
/* set_xInit
 *
 * Parameters:
 * - value: int (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xInit(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
  mrb_value xInit;

  mrb_get_args(mrb, "o", &xInit);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xInit);

  int (*native_xInit)(void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xInit);

  native_self->xInit = native_xInit;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xShutdown_reader */
/* sha: 668d22d4b1b7a79f2f9cbe6206c8d051f25cf7d7a6b86c2f1a84f8a47b5b11d7 */
#if BIND_Sqlite3MemMethods_xShutdown_FIELD_READER
/* get_xShutdown
 *
 * Return Type: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_xShutdown(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);

  void (*)(void *) native_xShutdown = native_self->xShutdown;

  mrb_value xShutdown = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_xShutdown);

  return xShutdown;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xShutdown_writer */
/* sha: 2d8ffe5fc9b4b8f476c6b6901676da6d94cea65299ce0d32fe02939df7222932 */
#if BIND_Sqlite3MemMethods_xShutdown_FIELD_WRITER
/* set_xShutdown
 *
 * Parameters:
 * - value: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xShutdown(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
  mrb_value xShutdown;

  mrb_get_args(mrb, "o", &xShutdown);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xShutdown);

  void (*native_xShutdown)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xShutdown);

  native_self->xShutdown = native_xShutdown;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::pAppData_reader */
/* sha: 839b3a8e8ab3f0e82f1439ca6c061e5604d2ea54a6b4f5d4b4a2fc70818c5680 */
#if BIND_Sqlite3MemMethods_pAppData_FIELD_READER
/* get_pAppData
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_pAppData(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);

  void * native_pAppData = native_self->pAppData;

  mrb_value pAppData = TODO_mruby_box_void_PTR(mrb, native_pAppData);

  return pAppData;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::pAppData_writer */
/* sha: e0a092c39b3aa95a14cc619fe628808a2433f2a84d2e783d7c8f105b919a17ad */
#if BIND_Sqlite3MemMethods_pAppData_FIELD_WRITER
/* set_pAppData
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_pAppData(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
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


void mrb_SQLite_Sqlite3MemMethods_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3MemMethods::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::class_definition */
/* sha: 3a943efd48b275f06740c784a1b6578dae057b60f26b1e992d8dffd29ebfcba3 */
  struct RClass* Sqlite3MemMethods_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3MemMethods", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3MemMethods_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::class_method_definitions */
/* sha: 4eace8e14ee47667818ffc916a132fb52ffa17ef9856bc9cab6fd1aeaf00b786 */
#if BIND_Sqlite3MemMethods_INITIALIZE
  mrb_define_method(mrb, Sqlite3MemMethods_class, "initialize", mrb_SQLite_Sqlite3MemMethods_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::attr_definitions */
/* sha: 1466dc09a6d0550760fb9d15246483bef6144dcde83c3283f1e4acc58de36dba */
  /*
   * Fields
   */
#if BIND_Sqlite3MemMethods_xMalloc_FIELD_READER
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xMalloc", mrb_SQLite_Sqlite3MemMethods_get_xMalloc, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3MemMethods_xMalloc_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xMalloc=", mrb_SQLite_Sqlite3MemMethods_set_xMalloc, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MemMethods_xFree_FIELD_READER
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xFree", mrb_SQLite_Sqlite3MemMethods_get_xFree, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3MemMethods_xFree_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xFree=", mrb_SQLite_Sqlite3MemMethods_set_xFree, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MemMethods_xRealloc_FIELD_READER
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xRealloc", mrb_SQLite_Sqlite3MemMethods_get_xRealloc, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3MemMethods_xRealloc_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xRealloc=", mrb_SQLite_Sqlite3MemMethods_set_xRealloc, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MemMethods_xSize_FIELD_READER
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xSize", mrb_SQLite_Sqlite3MemMethods_get_xSize, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3MemMethods_xSize_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xSize=", mrb_SQLite_Sqlite3MemMethods_set_xSize, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MemMethods_xRoundup_FIELD_READER
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xRoundup", mrb_SQLite_Sqlite3MemMethods_get_xRoundup, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3MemMethods_xRoundup_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xRoundup=", mrb_SQLite_Sqlite3MemMethods_set_xRoundup, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MemMethods_xInit_FIELD_READER
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xInit", mrb_SQLite_Sqlite3MemMethods_get_xInit, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3MemMethods_xInit_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xInit=", mrb_SQLite_Sqlite3MemMethods_set_xInit, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MemMethods_xShutdown_FIELD_READER
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xShutdown", mrb_SQLite_Sqlite3MemMethods_get_xShutdown, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3MemMethods_xShutdown_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xShutdown=", mrb_SQLite_Sqlite3MemMethods_set_xShutdown, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MemMethods_pAppData_FIELD_READER
  mrb_define_method(mrb, Sqlite3MemMethods_class, "pAppData", mrb_SQLite_Sqlite3MemMethods_get_pAppData, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3MemMethods_pAppData_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3MemMethods_class, "pAppData=", mrb_SQLite_Sqlite3MemMethods_set_pAppData, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
