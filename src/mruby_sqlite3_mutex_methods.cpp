/*
 * struct sqlite3_mutex_methods
 * Defined in file sqlite3.h @ line 6202
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3MutexMethods_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3MutexMethods_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3MutexMethods_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods* native_object = (struct sqlite3_mutex_methods*)malloc(sizeof(struct sqlite3_mutex_methods));
  mruby_gift_struct sqlite3_mutex_methods_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SQLite_Sqlite3MutexMethods_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3MutexMethods.disown only accepts objects of type SQLite::Sqlite3MutexMethods");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SQLite_Sqlite3MutexMethods_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3MutexMethods.belongs_to_ruby only accepts objects of type SQLite::Sqlite3MutexMethods");
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

#if BIND_Sqlite3MutexMethods_xMutexInit_FIELD
/* get_xMutexInit
 *
 * Return Type: int (*)(void)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexInit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_struct sqlite3_mutex_methods(self);

  int (*)(void) native_field = native_self->xMutexInit;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xMutexInit
 *
 * Parameters:
 * - value: int (*)(void)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexInit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_struct sqlite3_mutex_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(ruby_field);

  int (*native_field)(void) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(ruby_field);

  native_self->xMutexInit = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3MutexMethods_xMutexEnd_FIELD
/* get_xMutexEnd
 *
 * Return Type: int (*)(void)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexEnd(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_struct sqlite3_mutex_methods(self);

  int (*)(void) native_field = native_self->xMutexEnd;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xMutexEnd
 *
 * Parameters:
 * - value: int (*)(void)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexEnd(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_struct sqlite3_mutex_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(ruby_field);

  int (*native_field)(void) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(ruby_field);

  native_self->xMutexEnd = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3MutexMethods_xMutexAlloc_FIELD
/* get_xMutexAlloc
 *
 * Return Type: sqlite3_mutex *(*)(int)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexAlloc(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_struct sqlite3_mutex_methods(self);

  sqlite3_mutex *(*)(int) native_field = native_self->xMutexAlloc;

  mrb_value ruby_field = TODO_mruby_box_sqlite3_mutex_PTR_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xMutexAlloc
 *
 * Parameters:
 * - value: sqlite3_mutex *(*)(int)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexAlloc(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_struct sqlite3_mutex_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_sqlite3_mutex_PTR_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(ruby_field);

  sqlite3_mutex *(*native_field)(int) = TODO_mruby_unbox_sqlite3_mutex_PTR_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(ruby_field);

  native_self->xMutexAlloc = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3MutexMethods_xMutexFree_FIELD
/* get_xMutexFree
 *
 * Return Type: void (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexFree(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_struct sqlite3_mutex_methods(self);

  void (*)(sqlite3_mutex *) native_field = native_self->xMutexFree;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xMutexFree
 *
 * Parameters:
 * - value: void (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexFree(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_struct sqlite3_mutex_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(ruby_field);

  void (*native_field)(sqlite3_mutex *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(ruby_field);

  native_self->xMutexFree = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3MutexMethods_xMutexEnter_FIELD
/* get_xMutexEnter
 *
 * Return Type: void (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexEnter(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_struct sqlite3_mutex_methods(self);

  void (*)(sqlite3_mutex *) native_field = native_self->xMutexEnter;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xMutexEnter
 *
 * Parameters:
 * - value: void (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexEnter(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_struct sqlite3_mutex_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(ruby_field);

  void (*native_field)(sqlite3_mutex *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(ruby_field);

  native_self->xMutexEnter = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3MutexMethods_xMutexTry_FIELD
/* get_xMutexTry
 *
 * Return Type: int (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexTry(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_struct sqlite3_mutex_methods(self);

  int (*)(sqlite3_mutex *) native_field = native_self->xMutexTry;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xMutexTry
 *
 * Parameters:
 * - value: int (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexTry(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_struct sqlite3_mutex_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_mutex *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(ruby_field);

  native_self->xMutexTry = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3MutexMethods_xMutexLeave_FIELD
/* get_xMutexLeave
 *
 * Return Type: void (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexLeave(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_struct sqlite3_mutex_methods(self);

  void (*)(sqlite3_mutex *) native_field = native_self->xMutexLeave;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xMutexLeave
 *
 * Parameters:
 * - value: void (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexLeave(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_struct sqlite3_mutex_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(ruby_field);

  void (*native_field)(sqlite3_mutex *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(ruby_field);

  native_self->xMutexLeave = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3MutexMethods_xMutexHeld_FIELD
/* get_xMutexHeld
 *
 * Return Type: int (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexHeld(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_struct sqlite3_mutex_methods(self);

  int (*)(sqlite3_mutex *) native_field = native_self->xMutexHeld;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xMutexHeld
 *
 * Parameters:
 * - value: int (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexHeld(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_struct sqlite3_mutex_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_mutex *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(ruby_field);

  native_self->xMutexHeld = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3MutexMethods_xMutexNotheld_FIELD
/* get_xMutexNotheld
 *
 * Return Type: int (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexNotheld(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_struct sqlite3_mutex_methods(self);

  int (*)(sqlite3_mutex *) native_field = native_self->xMutexNotheld;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xMutexNotheld
 *
 * Parameters:
 * - value: int (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexNotheld(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_struct sqlite3_mutex_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_mutex *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(ruby_field);

  native_self->xMutexNotheld = native_field;

  return ruby_field;
}
#endif


void mrb_SQLite_Sqlite3MutexMethods_init(mrb_state* mrb) {
  RClass* Sqlite3MutexMethods_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3MutexMethods", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3MutexMethods_class, MRB_TT_DATA);

#if BIND_Sqlite3MutexMethods_INITIALIZE
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "initialize", mrb_SQLite_Sqlite3MutexMethods_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3MutexMethods_class, "disown", mrb_SQLite_Sqlite3MutexMethods_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3MutexMethods_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3MutexMethods_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Sqlite3MutexMethods_xMutexInit_FIELD
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexInit", mrb_SQLite_Sqlite3MutexMethods_get_xMutexInit, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexInit=", mrb_SQLite_Sqlite3MutexMethods_set_xMutexInit, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexEnd_FIELD
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexEnd", mrb_SQLite_Sqlite3MutexMethods_get_xMutexEnd, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexEnd=", mrb_SQLite_Sqlite3MutexMethods_set_xMutexEnd, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexAlloc_FIELD
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexAlloc", mrb_SQLite_Sqlite3MutexMethods_get_xMutexAlloc, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexAlloc=", mrb_SQLite_Sqlite3MutexMethods_set_xMutexAlloc, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexFree_FIELD
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexFree", mrb_SQLite_Sqlite3MutexMethods_get_xMutexFree, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexFree=", mrb_SQLite_Sqlite3MutexMethods_set_xMutexFree, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexEnter_FIELD
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexEnter", mrb_SQLite_Sqlite3MutexMethods_get_xMutexEnter, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexEnter=", mrb_SQLite_Sqlite3MutexMethods_set_xMutexEnter, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexTry_FIELD
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexTry", mrb_SQLite_Sqlite3MutexMethods_get_xMutexTry, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexTry=", mrb_SQLite_Sqlite3MutexMethods_set_xMutexTry, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexLeave_FIELD
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexLeave", mrb_SQLite_Sqlite3MutexMethods_get_xMutexLeave, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexLeave=", mrb_SQLite_Sqlite3MutexMethods_set_xMutexLeave, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexHeld_FIELD
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexHeld", mrb_SQLite_Sqlite3MutexMethods_get_xMutexHeld, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexHeld=", mrb_SQLite_Sqlite3MutexMethods_set_xMutexHeld, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3MutexMethods_xMutexNotheld_FIELD
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexNotheld", mrb_SQLite_Sqlite3MutexMethods_get_xMutexNotheld, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "xMutexNotheld=", mrb_SQLite_Sqlite3MutexMethods_set_xMutexNotheld, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
