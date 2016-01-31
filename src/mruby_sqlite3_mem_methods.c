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
/* sha: 60fe69bb9dbc15c7341626759ff3a6fe73b8b73f3bd451c4a43d0abb1d181e51 */
#if BIND_Sqlite3MemMethods_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3MemMethods_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  sqlite3_mem_methods* native_object = (sqlite3_mem_methods*)calloc(1, sizeof(sqlite3_mem_methods));
  mruby_gift_sqlite3_mem_methods_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3MemMethods::xMalloc_reader */
/* sha: fb2a8cd15c19939f44ab3684a9d2468ab55e8b12a7956db96c703b2e1e65b97d */
#if BIND_Sqlite3MemMethods_xMalloc_FIELD_READER
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
/* sha: 569cf5bded9759bb2bbbccf1f4b995b3e75419ed8bbd8b6d7fbe6c07ee98e98e */
#if BIND_Sqlite3MemMethods_xMalloc_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xMalloc(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
  mrb_value xMalloc;

  mrb_get_args(mrb, "o", &xMalloc);

  /* type checking */
  TODO_type_check_void_PTR_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(xMalloc);

  void *(*native_xMalloc)(int) = TODO_mruby_unbox_void_PTR_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(xMalloc);

  native_self->xMalloc = native_xMalloc;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xFree_reader */
/* sha: bbe74a752b7c1f36789f9609a30922c30d27a035b1b2764235461af61c03803d */
#if BIND_Sqlite3MemMethods_xFree_FIELD_READER
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
/* sha: 27630cba5684effd60d636868e7e6d6fad46f6fbf52862d3251d37077b9fe523 */
#if BIND_Sqlite3MemMethods_xFree_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xFree(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
  mrb_value xFree;

  mrb_get_args(mrb, "o", &xFree);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xFree);

  void (*native_xFree)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xFree);

  native_self->xFree = native_xFree;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xRealloc_reader */
/* sha: 6ebdb38f6fd58cb99ceab57ac696527545ee6b22ec8add07a4a7a5ff2be5cc83 */
#if BIND_Sqlite3MemMethods_xRealloc_FIELD_READER
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
/* sha: 8240fe9b3264d2d6ccc113d8c5412be9287ca539410840607917fe656e7b84ec */
#if BIND_Sqlite3MemMethods_xRealloc_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xRealloc(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
  mrb_value xRealloc;

  mrb_get_args(mrb, "o", &xRealloc);

  /* type checking */
  TODO_type_check_void_PTR_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_int_RPAREN(xRealloc);

  void *(*native_xRealloc)(void *, int) = TODO_mruby_unbox_void_PTR_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_int_RPAREN(xRealloc);

  native_self->xRealloc = native_xRealloc;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xSize_reader */
/* sha: 55228bafc86935f85016c36b607f7f417bf5ab0ba8be08996687a59585b08e9d */
#if BIND_Sqlite3MemMethods_xSize_FIELD_READER
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
/* sha: 7df56187f0215aa27eeef1f9d1c31421e47ccff7a41739883f26c43b153f7399 */
#if BIND_Sqlite3MemMethods_xSize_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xSize(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
  mrb_value xSize;

  mrb_get_args(mrb, "o", &xSize);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xSize);

  int (*native_xSize)(void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xSize);

  native_self->xSize = native_xSize;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xRoundup_reader */
/* sha: 33e5abe6c54a428b5d7106e9974593cb2eceb58343d2c74a62858688ea7a86d2 */
#if BIND_Sqlite3MemMethods_xRoundup_FIELD_READER
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
/* sha: e625781b8edd9df26752428a0e841cb69cc47f04a59bd8533c62816a8932700e */
#if BIND_Sqlite3MemMethods_xRoundup_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xRoundup(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
  mrb_value xRoundup;

  mrb_get_args(mrb, "o", &xRoundup);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(xRoundup);

  int (*native_xRoundup)(int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(xRoundup);

  native_self->xRoundup = native_xRoundup;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xInit_reader */
/* sha: b0f975da1365fd291e6b5bc3a6b3cc69cafcfa393133d59164e9bab2597057f0 */
#if BIND_Sqlite3MemMethods_xInit_FIELD_READER
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
/* sha: cf3e7112250696358d0d04092da274ceabd82a64d849d6fefa4f51b13b4c9717 */
#if BIND_Sqlite3MemMethods_xInit_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xInit(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
  mrb_value xInit;

  mrb_get_args(mrb, "o", &xInit);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xInit);

  int (*native_xInit)(void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xInit);

  native_self->xInit = native_xInit;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xShutdown_reader */
/* sha: ce7c69324711a79ac4ad37088c01e11d388d69f7853921e735717131fec65a72 */
#if BIND_Sqlite3MemMethods_xShutdown_FIELD_READER
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
/* sha: c4510c43ca2f1013ee4a2b832b2cc6b0293f6de8a44f2e4e5b29057e1dba4b13 */
#if BIND_Sqlite3MemMethods_xShutdown_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xShutdown(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
  mrb_value xShutdown;

  mrb_get_args(mrb, "o", &xShutdown);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xShutdown);

  void (*native_xShutdown)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xShutdown);

  native_self->xShutdown = native_xShutdown;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::pAppData_reader */
/* sha: 3bd93cc2e13ac612a62c8fd56a4ff07fd3337cdd44e6727b9f3043c48252c6b4 */
#if BIND_Sqlite3MemMethods_pAppData_FIELD_READER
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
/* sha: 14ce88e2de8032a836f0c5af1029096566043d560d0e8ab24e406a3dbebfe891 */
#if BIND_Sqlite3MemMethods_pAppData_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_pAppData(mrb_state* mrb, mrb_value self) {
  sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
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


void mrb_SQLite_Sqlite3MemMethods_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

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


/* MRUBY_BINDING: Sqlite3MemMethods::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
