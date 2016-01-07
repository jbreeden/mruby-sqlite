/*
 * struct sqlite3_mem_methods
 * Defined in file sqlite3.h @ line 1463
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3MemMethods_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Sqlite3MemMethods::initialize */
/* sha: ae045f9e4d0e40e5166c3f1ce5f3a37385c7ce9a4c4ce8a7bcb9a5233b9db29c */
#if BIND_Sqlite3MemMethods_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3MemMethods_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods* native_object = (struct sqlite3_mem_methods*)calloc(1, sizeof(struct sqlite3_mem_methods));
  mruby_giftwrap_sqlite3_mem_methods_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::initialize */
/* sha: 69f7ef016a7bdf0c311159616320c86d8e35903e55afb97bcdc169c19d0d52b8 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3MemMethods.disown only accepts objects of type SQLite::Sqlite3MemMethods");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::belongs_to_ruby */
/* sha: 6503a9096a06c71d41de083c61c9d7b63bca47f180e3e20019833e414ec35d73 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3MemMethods.belongs_to_ruby only accepts objects of type SQLite::Sqlite3MemMethods");
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

/* MRUBY_BINDING: Sqlite3MemMethods::xMalloc_reader */
/* sha: 119c5943a136f68fc81d129581a690c5e23dc455039fbd47fa02d7a77f11cdc6 */
#if BIND_Sqlite3MemMethods_xMalloc_FIELD_READER
/* get_xMalloc
 *
 * Return Type: void *(*)(int)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_xMalloc(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);

  void *(*)(int) native_xMalloc = native_self->xMalloc;

  mrb_value xMalloc = TODO_mruby_box_void_PTR_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(mrb, native_xMalloc);

  return xMalloc;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xMalloc_writer */
/* sha: 53dd908a84006c7436118598d2384497ed55a624862ad33b8933659501811e4a */
#if BIND_Sqlite3MemMethods_xMalloc_FIELD_WRITER
/* set_xMalloc
 *
 * Parameters:
 * - value: void *(*)(int)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xMalloc(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
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
/* sha: 675ae852aff0a25873f943b2011b5e66afa7dfcd0b6fdbac6d4b23d8375288ef */
#if BIND_Sqlite3MemMethods_xFree_FIELD_READER
/* get_xFree
 *
 * Return Type: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_xFree(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);

  void (*)(void *) native_xFree = native_self->xFree;

  mrb_value xFree = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_xFree);

  return xFree;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xFree_writer */
/* sha: 7e4e87942c5ff5bd65e39bc48d064893ba57347696e76cd1208632631ddf52a3 */
#if BIND_Sqlite3MemMethods_xFree_FIELD_WRITER
/* set_xFree
 *
 * Parameters:
 * - value: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xFree(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
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
/* sha: 2688b135f789962a9c16b0e834d9ecb035bf8cb45f5034d734157b9f157788d8 */
#if BIND_Sqlite3MemMethods_xRealloc_FIELD_READER
/* get_xRealloc
 *
 * Return Type: void *(*)(void *, int)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_xRealloc(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);

  void *(*)(void *, int) native_xRealloc = native_self->xRealloc;

  mrb_value xRealloc = TODO_mruby_box_void_PTR_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_int_RPAREN(mrb, native_xRealloc);

  return xRealloc;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xRealloc_writer */
/* sha: b584275f8f44458feda3d518df3cb6127da991f0a6e51d1af84527f77ed4e9ea */
#if BIND_Sqlite3MemMethods_xRealloc_FIELD_WRITER
/* set_xRealloc
 *
 * Parameters:
 * - value: void *(*)(void *, int)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xRealloc(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
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
/* sha: 5240ccb85af83fbd45e3c24ccaa572a5d5aa364c9c139000d625e2b466f9db31 */
#if BIND_Sqlite3MemMethods_xSize_FIELD_READER
/* get_xSize
 *
 * Return Type: int (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_xSize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);

  int (*)(void *) native_xSize = native_self->xSize;

  mrb_value xSize = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_xSize);

  return xSize;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xSize_writer */
/* sha: c3deab5cc8e5180dc2b3f34f69e62c0e708b22e84916ed7cfd3510d40b58831d */
#if BIND_Sqlite3MemMethods_xSize_FIELD_WRITER
/* set_xSize
 *
 * Parameters:
 * - value: int (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xSize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
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
/* sha: e287bf7f06f7b4b7480eab27ac7a37d2b12bddc9b679c9bd6fde2ec015c2d0fb */
#if BIND_Sqlite3MemMethods_xRoundup_FIELD_READER
/* get_xRoundup
 *
 * Return Type: int (*)(int)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_xRoundup(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);

  int (*)(int) native_xRoundup = native_self->xRoundup;

  mrb_value xRoundup = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(mrb, native_xRoundup);

  return xRoundup;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xRoundup_writer */
/* sha: 384e863f1dcacbf48a5110c08925f964f74b9c57c16a8539cafeb8f54f142dc6 */
#if BIND_Sqlite3MemMethods_xRoundup_FIELD_WRITER
/* set_xRoundup
 *
 * Parameters:
 * - value: int (*)(int)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xRoundup(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
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
/* sha: bacce95e41efef7a695291d9fa50208ddbc4f5fcb58f8f6ea3d9e319fdff4f48 */
#if BIND_Sqlite3MemMethods_xInit_FIELD_READER
/* get_xInit
 *
 * Return Type: int (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_xInit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);

  int (*)(void *) native_xInit = native_self->xInit;

  mrb_value xInit = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_xInit);

  return xInit;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xInit_writer */
/* sha: 44d5d75cc8cccf433ee8be268b54fefdf6a299252516389352294c6be19964e8 */
#if BIND_Sqlite3MemMethods_xInit_FIELD_WRITER
/* set_xInit
 *
 * Parameters:
 * - value: int (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xInit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
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
/* sha: 4384deaeade41fedadd861c14430fe75e8d1cac398ede9cb70076891d9432377 */
#if BIND_Sqlite3MemMethods_xShutdown_FIELD_READER
/* get_xShutdown
 *
 * Return Type: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_xShutdown(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);

  void (*)(void *) native_xShutdown = native_self->xShutdown;

  mrb_value xShutdown = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_xShutdown);

  return xShutdown;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::xShutdown_writer */
/* sha: 41e3369eed0c0bc95365f694583b6335bd758875d65bbffe0091f881e9bc6ac4 */
#if BIND_Sqlite3MemMethods_xShutdown_FIELD_WRITER
/* set_xShutdown
 *
 * Parameters:
 * - value: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xShutdown(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
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
/* sha: ec4c0535c81d4e7d3f46e4d4b0a0ce16355631bd976432fb9299a2149740025a */
#if BIND_Sqlite3MemMethods_pAppData_FIELD_READER
/* get_pAppData
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_pAppData(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);

  void * native_pAppData = native_self->pAppData;

  mrb_value pAppData = TODO_mruby_box_void_PTR(mrb, native_pAppData);

  return pAppData;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::pAppData_writer */
/* sha: f18b942f66627ea98af02b2cabea6a39f14e2bf22e45484bd4b81ba31812536e */
#if BIND_Sqlite3MemMethods_pAppData_FIELD_WRITER
/* set_pAppData
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_pAppData(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_sqlite3_mem_methods(self);
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
/* MRUBY_BINDING: Sqlite3MemMethods::class_definition */
/* sha: 3a943efd48b275f06740c784a1b6578dae057b60f26b1e992d8dffd29ebfcba3 */
  struct RClass* Sqlite3MemMethods_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3MemMethods", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3MemMethods_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::class_method_definitions */
/* sha: 3a62d40395105c607228102ff6f1a5ea245f3e869bf91ff27790dbfa25836bf6 */
#if BIND_Sqlite3MemMethods_INITIALIZE
  mrb_define_method(mrb, Sqlite3MemMethods_class, "initialize", mrb_SQLite_Sqlite3MemMethods_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3MemMethods_class, "disown", mrb_SQLite_Sqlite3MemMethods_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3MemMethods_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3MemMethods_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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

/* MRUBY_BINDING: Sqlite3MemMethods::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
