/*
 * sqlite3_mutex_methods
 * Defined in file sqlite3.h @ line 6202
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3MutexMethods_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::initialize */
/* sha: 5c9283361bce5beec72965e3fd36daa6be9c84ef85d80194b1855cde3b8c01f0 */
#if BIND_Sqlite3MutexMethods_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3MutexMethods_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  sqlite3_mutex_methods* native_object = (sqlite3_mutex_methods*)calloc(1, sizeof(sqlite3_mutex_methods));
  mruby_gift_sqlite3_mutex_methods_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3MutexMethods::xMutexInit_reader */
/* sha: 15ed4252dbc2e51f43d10b041d02a31e093d0d1880c1e96ad23f127152509301 */
#if BIND_Sqlite3MutexMethods_xMutexInit_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexInit(mrb_state* mrb, mrb_value self) {
  sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);

  int (*)(void) native_xMutexInit = native_self->xMutexInit;

  mrb_value xMutexInit = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native_xMutexInit);

  return xMutexInit;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::xMutexInit_writer */
/* sha: 35618c51533ce6e776f5c666f6159f27ab4321944d9117a1e1a3d844bd7b00e2 */
#if BIND_Sqlite3MutexMethods_xMutexInit_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexInit(mrb_state* mrb, mrb_value self) {
  sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);
  mrb_value xMutexInit;

  mrb_get_args(mrb, "o", &xMutexInit);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(xMutexInit);

  int (*native_xMutexInit)(void) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(xMutexInit);

  native_self->xMutexInit = native_xMutexInit;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::xMutexEnd_reader */
/* sha: 74af474cfa07ac86af6da44d477e064360ced6b183fefa0c2ffd5bd2877d0a50 */
#if BIND_Sqlite3MutexMethods_xMutexEnd_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexEnd(mrb_state* mrb, mrb_value self) {
  sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);

  int (*)(void) native_xMutexEnd = native_self->xMutexEnd;

  mrb_value xMutexEnd = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native_xMutexEnd);

  return xMutexEnd;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::xMutexEnd_writer */
/* sha: 6042f1b4e0cf6063e4753694f3d5fc22609e42e8ca265fc33c5f85da1aa5dcf0 */
#if BIND_Sqlite3MutexMethods_xMutexEnd_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexEnd(mrb_state* mrb, mrb_value self) {
  sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);
  mrb_value xMutexEnd;

  mrb_get_args(mrb, "o", &xMutexEnd);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(xMutexEnd);

  int (*native_xMutexEnd)(void) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(xMutexEnd);

  native_self->xMutexEnd = native_xMutexEnd;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::xMutexAlloc_reader */
/* sha: b107dc847df6bdfd7fffb058a8951a2a0aaa3a5040d61295c6223a7784d6dd65 */
#if BIND_Sqlite3MutexMethods_xMutexAlloc_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexAlloc(mrb_state* mrb, mrb_value self) {
  sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);

  sqlite3_mutex *(*)(int) native_xMutexAlloc = native_self->xMutexAlloc;

  mrb_value xMutexAlloc = TODO_mruby_box_sqlite3_mutex_PTR_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(mrb, native_xMutexAlloc);

  return xMutexAlloc;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::xMutexAlloc_writer */
/* sha: 521ce7146fb31023f61e453ab3bfcf71f6a90a02e793d3f322303e985bab692c */
#if BIND_Sqlite3MutexMethods_xMutexAlloc_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexAlloc(mrb_state* mrb, mrb_value self) {
  sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);
  mrb_value xMutexAlloc;

  mrb_get_args(mrb, "o", &xMutexAlloc);

  /* type checking */
  TODO_type_check_sqlite3_mutex_PTR_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(xMutexAlloc);

  sqlite3_mutex *(*native_xMutexAlloc)(int) = TODO_mruby_unbox_sqlite3_mutex_PTR_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(xMutexAlloc);

  native_self->xMutexAlloc = native_xMutexAlloc;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::xMutexFree_reader */
/* sha: 4f978890afa9b9ca118c0afde5378b0e73421195d43e64cee6dc248258582847 */
#if BIND_Sqlite3MutexMethods_xMutexFree_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexFree(mrb_state* mrb, mrb_value self) {
  sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);

  void (*)(sqlite3_mutex *) native_xMutexFree = native_self->xMutexFree;

  mrb_value xMutexFree = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(mrb, native_xMutexFree);

  return xMutexFree;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::xMutexFree_writer */
/* sha: 79f704c9861c174fdde82b321243af12cf4364a27b659ec657a29e0e435d5660 */
#if BIND_Sqlite3MutexMethods_xMutexFree_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexFree(mrb_state* mrb, mrb_value self) {
  sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);
  mrb_value xMutexFree;

  mrb_get_args(mrb, "o", &xMutexFree);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(xMutexFree);

  void (*native_xMutexFree)(sqlite3_mutex *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(xMutexFree);

  native_self->xMutexFree = native_xMutexFree;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::xMutexEnter_reader */
/* sha: e19852d0a9bc93670ac25d22471ecce70874bf4a0fa06e397e1608e65892beda */
#if BIND_Sqlite3MutexMethods_xMutexEnter_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexEnter(mrb_state* mrb, mrb_value self) {
  sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);

  void (*)(sqlite3_mutex *) native_xMutexEnter = native_self->xMutexEnter;

  mrb_value xMutexEnter = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(mrb, native_xMutexEnter);

  return xMutexEnter;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::xMutexEnter_writer */
/* sha: 2e54447b6e162214515e68d09b9dcf1e878043ce53679e1d76ec7962ac6336f7 */
#if BIND_Sqlite3MutexMethods_xMutexEnter_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexEnter(mrb_state* mrb, mrb_value self) {
  sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);
  mrb_value xMutexEnter;

  mrb_get_args(mrb, "o", &xMutexEnter);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(xMutexEnter);

  void (*native_xMutexEnter)(sqlite3_mutex *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(xMutexEnter);

  native_self->xMutexEnter = native_xMutexEnter;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::xMutexTry_reader */
/* sha: ed2e105b6c59f34777c9dfa95ad3f08655fa0690d9f469f675ea0bc278e612a0 */
#if BIND_Sqlite3MutexMethods_xMutexTry_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexTry(mrb_state* mrb, mrb_value self) {
  sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);

  int (*)(sqlite3_mutex *) native_xMutexTry = native_self->xMutexTry;

  mrb_value xMutexTry = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(mrb, native_xMutexTry);

  return xMutexTry;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::xMutexTry_writer */
/* sha: 6aa77aa915bea0123458d7b52381eae58cb0e354ca8827d4fb16797f797180a7 */
#if BIND_Sqlite3MutexMethods_xMutexTry_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexTry(mrb_state* mrb, mrb_value self) {
  sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);
  mrb_value xMutexTry;

  mrb_get_args(mrb, "o", &xMutexTry);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(xMutexTry);

  int (*native_xMutexTry)(sqlite3_mutex *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(xMutexTry);

  native_self->xMutexTry = native_xMutexTry;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::xMutexLeave_reader */
/* sha: 087800aa39cfa22b7ef3d82bd54f4812b9de24f5b1e3cd34f730cd9a018ca9e5 */
#if BIND_Sqlite3MutexMethods_xMutexLeave_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexLeave(mrb_state* mrb, mrb_value self) {
  sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);

  void (*)(sqlite3_mutex *) native_xMutexLeave = native_self->xMutexLeave;

  mrb_value xMutexLeave = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(mrb, native_xMutexLeave);

  return xMutexLeave;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::xMutexLeave_writer */
/* sha: a8129bb1874b459471741dcfcadb3f9b1d228c40941fb4c7c839013a921eb56f */
#if BIND_Sqlite3MutexMethods_xMutexLeave_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexLeave(mrb_state* mrb, mrb_value self) {
  sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);
  mrb_value xMutexLeave;

  mrb_get_args(mrb, "o", &xMutexLeave);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(xMutexLeave);

  void (*native_xMutexLeave)(sqlite3_mutex *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(xMutexLeave);

  native_self->xMutexLeave = native_xMutexLeave;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::xMutexHeld_reader */
/* sha: a0cc18072e81b5347c84f2b57c2e32726312771deec066a6ce7f8f7b8d9e68c7 */
#if BIND_Sqlite3MutexMethods_xMutexHeld_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexHeld(mrb_state* mrb, mrb_value self) {
  sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);

  int (*)(sqlite3_mutex *) native_xMutexHeld = native_self->xMutexHeld;

  mrb_value xMutexHeld = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(mrb, native_xMutexHeld);

  return xMutexHeld;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::xMutexHeld_writer */
/* sha: 7da861414b5a57fd8faeda8856883dcfc352d8282667ac0a9752b6ff32f22536 */
#if BIND_Sqlite3MutexMethods_xMutexHeld_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexHeld(mrb_state* mrb, mrb_value self) {
  sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);
  mrb_value xMutexHeld;

  mrb_get_args(mrb, "o", &xMutexHeld);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(xMutexHeld);

  int (*native_xMutexHeld)(sqlite3_mutex *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(xMutexHeld);

  native_self->xMutexHeld = native_xMutexHeld;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::xMutexNotheld_reader */
/* sha: 1b802285471e9c9c3ffe7ba6ffe91fb956150138dddb1a80b686ed694ba29943 */
#if BIND_Sqlite3MutexMethods_xMutexNotheld_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexNotheld(mrb_state* mrb, mrb_value self) {
  sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);

  int (*)(sqlite3_mutex *) native_xMutexNotheld = native_self->xMutexNotheld;

  mrb_value xMutexNotheld = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(mrb, native_xMutexNotheld);

  return xMutexNotheld;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::xMutexNotheld_writer */
/* sha: 346c508df67194b215052ff49bf4dc880f70fb3542415697e638149f45f50b96 */
#if BIND_Sqlite3MutexMethods_xMutexNotheld_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexNotheld(mrb_state* mrb, mrb_value self) {
  sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);
  mrb_value xMutexNotheld;

  mrb_get_args(mrb, "o", &xMutexNotheld);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(xMutexNotheld);

  int (*native_xMutexNotheld)(sqlite3_mutex *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(xMutexNotheld);

  native_self->xMutexNotheld = native_xMutexNotheld;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3MutexMethods_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::class_definition */
/* sha: d14e589c1687d446ea529d07ce6e44e4e3f751ac682cbc60147d014a4f7c5df8 */
  struct RClass* Sqlite3MutexMethods_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3MutexMethods", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3MutexMethods_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::class_method_definitions */
/* sha: 514b453ddc5b3840904235177e91d20dd6d1852f66738f652fde9c54a6cc1ac3 */
#if BIND_Sqlite3MutexMethods_INITIALIZE
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "initialize", mrb_SQLite_Sqlite3MutexMethods_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MutexMethods::attr_definitions */
/* sha: 968f72eda5e3a8929cbad6af7554eb9824c86fb40cf4a159465a648f1ef136e3 */
  /*
   * Fields
   */
#if BIND_Sqlite3MutexMethods_xMutexInit_FIELD_READER
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexInit", mrb_SQLite_Sqlite3MutexMethods_get_xMutexInit, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexInit_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexInit=", mrb_SQLite_Sqlite3MutexMethods_set_xMutexInit, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexEnd_FIELD_READER
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexEnd", mrb_SQLite_Sqlite3MutexMethods_get_xMutexEnd, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexEnd_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexEnd=", mrb_SQLite_Sqlite3MutexMethods_set_xMutexEnd, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexAlloc_FIELD_READER
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexAlloc", mrb_SQLite_Sqlite3MutexMethods_get_xMutexAlloc, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexAlloc_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexAlloc=", mrb_SQLite_Sqlite3MutexMethods_set_xMutexAlloc, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexFree_FIELD_READER
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexFree", mrb_SQLite_Sqlite3MutexMethods_get_xMutexFree, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexFree_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexFree=", mrb_SQLite_Sqlite3MutexMethods_set_xMutexFree, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexEnter_FIELD_READER
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexEnter", mrb_SQLite_Sqlite3MutexMethods_get_xMutexEnter, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexEnter_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexEnter=", mrb_SQLite_Sqlite3MutexMethods_set_xMutexEnter, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexTry_FIELD_READER
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexTry", mrb_SQLite_Sqlite3MutexMethods_get_xMutexTry, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexTry_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexTry=", mrb_SQLite_Sqlite3MutexMethods_set_xMutexTry, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexLeave_FIELD_READER
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexLeave", mrb_SQLite_Sqlite3MutexMethods_get_xMutexLeave, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexLeave_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexLeave=", mrb_SQLite_Sqlite3MutexMethods_set_xMutexLeave, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexHeld_FIELD_READER
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexHeld", mrb_SQLite_Sqlite3MutexMethods_get_xMutexHeld, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexHeld_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexHeld=", mrb_SQLite_Sqlite3MutexMethods_set_xMutexHeld, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexNotheld_FIELD_READER
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexNotheld", mrb_SQLite_Sqlite3MutexMethods_get_xMutexNotheld, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexNotheld_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexNotheld=", mrb_SQLite_Sqlite3MutexMethods_set_xMutexNotheld, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: Sqlite3MutexMethods::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
