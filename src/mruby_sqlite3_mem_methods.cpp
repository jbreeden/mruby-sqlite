/*
 * struct sqlite3_mem_methods
 * Defined in file sqlite3.h @ line 1463
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3MemMethods_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3MemMethods_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3MemMethods_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods* native_object = (struct sqlite3_mem_methods*)malloc(sizeof(struct sqlite3_mem_methods));
  mruby_gift_struct sqlite3_mem_methods_data_ptr(self, native_object);
  return self;
}
#endif

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

/*
 * Fields
 */

#if BIND_Sqlite3MemMethods_xMalloc_FIELD
/* get_xMalloc
 *
 * Return Type: void *(*)(int)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_xMalloc(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_struct sqlite3_mem_methods(self);

  void *(*)(int) native_field = native_self->xMalloc;

  mrb_value ruby_field = TODO_mruby_box_void_PTR_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xMalloc
 *
 * Parameters:
 * - value: void *(*)(int)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xMalloc(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_struct sqlite3_mem_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_PTR_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(ruby_field);

  void *(*native_field)(int) = TODO_mruby_unbox_void_PTR_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(ruby_field);

  native_self->xMalloc = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3MemMethods_xFree_FIELD
/* get_xFree
 *
 * Return Type: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_xFree(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_struct sqlite3_mem_methods(self);

  void (*)(void *) native_field = native_self->xFree;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xFree
 *
 * Parameters:
 * - value: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xFree(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_struct sqlite3_mem_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  void (*native_field)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  native_self->xFree = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3MemMethods_xRealloc_FIELD
/* get_xRealloc
 *
 * Return Type: void *(*)(void *, int)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_xRealloc(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_struct sqlite3_mem_methods(self);

  void *(*)(void *, int) native_field = native_self->xRealloc;

  mrb_value ruby_field = TODO_mruby_box_void_PTR_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xRealloc
 *
 * Parameters:
 * - value: void *(*)(void *, int)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xRealloc(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_struct sqlite3_mem_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_PTR_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_int_RPAREN(ruby_field);

  void *(*native_field)(void *, int) = TODO_mruby_unbox_void_PTR_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_int_RPAREN(ruby_field);

  native_self->xRealloc = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3MemMethods_xSize_FIELD
/* get_xSize
 *
 * Return Type: int (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_xSize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_struct sqlite3_mem_methods(self);

  int (*)(void *) native_field = native_self->xSize;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xSize
 *
 * Parameters:
 * - value: int (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xSize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_struct sqlite3_mem_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  int (*native_field)(void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  native_self->xSize = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3MemMethods_xRoundup_FIELD
/* get_xRoundup
 *
 * Return Type: int (*)(int)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_xRoundup(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_struct sqlite3_mem_methods(self);

  int (*)(int) native_field = native_self->xRoundup;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xRoundup
 *
 * Parameters:
 * - value: int (*)(int)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xRoundup(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_struct sqlite3_mem_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(ruby_field);

  int (*native_field)(int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(ruby_field);

  native_self->xRoundup = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3MemMethods_xInit_FIELD
/* get_xInit
 *
 * Return Type: int (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_xInit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_struct sqlite3_mem_methods(self);

  int (*)(void *) native_field = native_self->xInit;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xInit
 *
 * Parameters:
 * - value: int (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xInit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_struct sqlite3_mem_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  int (*native_field)(void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  native_self->xInit = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3MemMethods_xShutdown_FIELD
/* get_xShutdown
 *
 * Return Type: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_xShutdown(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_struct sqlite3_mem_methods(self);

  void (*)(void *) native_field = native_self->xShutdown;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xShutdown
 *
 * Parameters:
 * - value: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_xShutdown(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_struct sqlite3_mem_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  void (*native_field)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  native_self->xShutdown = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3MemMethods_pAppData_FIELD
/* get_pAppData
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_get_pAppData(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_struct sqlite3_mem_methods(self);

  void * native_field = native_self->pAppData;

  mrb_value ruby_field = TODO_mruby_box_void_PTR(mrb, native_field);

  return ruby_field;
}

/* set_pAppData
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3MemMethods_set_pAppData(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mem_methods * native_self = mruby_unbox_struct sqlite3_mem_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_PTR(ruby_field);

  void * native_field = TODO_mruby_unbox_void_PTR(ruby_field);

  native_self->pAppData = native_field;

  return ruby_field;
}
#endif


void mrb_SQLite_Sqlite3MemMethods_init(mrb_state* mrb) {
  RClass* Sqlite3MemMethods_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3MemMethods", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3MemMethods_class, MRB_TT_DATA);

#if BIND_Sqlite3MemMethods_INITIALIZE
  mrb_define_method(mrb, Sqlite3MemMethods_class, "initialize", mrb_SQLite_Sqlite3MemMethods_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3MemMethods_class, "disown", mrb_SQLite_Sqlite3MemMethods_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3MemMethods_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3MemMethods_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Sqlite3MemMethods_xMalloc_FIELD
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xMalloc", mrb_SQLite_Sqlite3MemMethods_get_xMalloc, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xMalloc=", mrb_SQLite_Sqlite3MemMethods_set_xMalloc, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MemMethods_xFree_FIELD
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xFree", mrb_SQLite_Sqlite3MemMethods_get_xFree, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xFree=", mrb_SQLite_Sqlite3MemMethods_set_xFree, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MemMethods_xRealloc_FIELD
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xRealloc", mrb_SQLite_Sqlite3MemMethods_get_xRealloc, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xRealloc=", mrb_SQLite_Sqlite3MemMethods_set_xRealloc, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MemMethods_xSize_FIELD
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xSize", mrb_SQLite_Sqlite3MemMethods_get_xSize, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xSize=", mrb_SQLite_Sqlite3MemMethods_set_xSize, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MemMethods_xRoundup_FIELD
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xRoundup", mrb_SQLite_Sqlite3MemMethods_get_xRoundup, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xRoundup=", mrb_SQLite_Sqlite3MemMethods_set_xRoundup, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MemMethods_xInit_FIELD
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xInit", mrb_SQLite_Sqlite3MemMethods_get_xInit, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xInit=", mrb_SQLite_Sqlite3MemMethods_set_xInit, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MemMethods_xShutdown_FIELD
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xShutdown", mrb_SQLite_Sqlite3MemMethods_get_xShutdown, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3MemMethods_class, "xShutdown=", mrb_SQLite_Sqlite3MemMethods_set_xShutdown, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MemMethods_pAppData_FIELD
  mrb_define_method(mrb, Sqlite3MemMethods_class, "pAppData", mrb_SQLite_Sqlite3MemMethods_get_pAppData, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3MemMethods_class, "pAppData=", mrb_SQLite_Sqlite3MemMethods_set_pAppData, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
