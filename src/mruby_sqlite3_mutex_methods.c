/*
 * struct sqlite3_mutex_methods
 * Defined in file sqlite3.h @ line 6202
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3MutexMethods_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3MutexMethods_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3MutexMethods_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods* native_object = (struct sqlite3_mutex_methods*)calloc(1, sizeof(struct sqlite3_mutex_methods));
  mruby_giftwrap_sqlite3_mutex_methods_data_ptr(self, native_object);
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

#if BIND_Sqlite3MutexMethods_xMutexInit_FIELD_READER
/* get_xMutexInit
 *
 * Return Type: int (*)(void)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexInit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);

  int (*)(void) native_xMutexInit = native_self->xMutexInit;

  mrb_value xMutexInit = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native_xMutexInit);

  return xMutexInit;
}
#endif

#if BIND_Sqlite3MutexMethods_xMutexInit_FIELD_WRITER
/* set_xMutexInit
 *
 * Parameters:
 * - value: int (*)(void)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexInit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);
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

#if BIND_Sqlite3MutexMethods_xMutexEnd_FIELD_READER
/* get_xMutexEnd
 *
 * Return Type: int (*)(void)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexEnd(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);

  int (*)(void) native_xMutexEnd = native_self->xMutexEnd;

  mrb_value xMutexEnd = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(mrb, native_xMutexEnd);

  return xMutexEnd;
}
#endif

#if BIND_Sqlite3MutexMethods_xMutexEnd_FIELD_WRITER
/* set_xMutexEnd
 *
 * Parameters:
 * - value: int (*)(void)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexEnd(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);
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

#if BIND_Sqlite3MutexMethods_xMutexAlloc_FIELD_READER
/* get_xMutexAlloc
 *
 * Return Type: sqlite3_mutex *(*)(int)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexAlloc(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);

  sqlite3_mutex *(*)(int) native_xMutexAlloc = native_self->xMutexAlloc;

  mrb_value xMutexAlloc = TODO_mruby_box_sqlite3_mutex_PTR_LPAREN_PTR_RPAREN_LPAREN_int_RPAREN(mrb, native_xMutexAlloc);

  return xMutexAlloc;
}
#endif

#if BIND_Sqlite3MutexMethods_xMutexAlloc_FIELD_WRITER
/* set_xMutexAlloc
 *
 * Parameters:
 * - value: sqlite3_mutex *(*)(int)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexAlloc(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);
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

#if BIND_Sqlite3MutexMethods_xMutexFree_FIELD_READER
/* get_xMutexFree
 *
 * Return Type: void (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexFree(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);

  void (*)(sqlite3_mutex *) native_xMutexFree = native_self->xMutexFree;

  mrb_value xMutexFree = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(mrb, native_xMutexFree);

  return xMutexFree;
}
#endif

#if BIND_Sqlite3MutexMethods_xMutexFree_FIELD_WRITER
/* set_xMutexFree
 *
 * Parameters:
 * - value: void (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexFree(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);
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

#if BIND_Sqlite3MutexMethods_xMutexEnter_FIELD_READER
/* get_xMutexEnter
 *
 * Return Type: void (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexEnter(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);

  void (*)(sqlite3_mutex *) native_xMutexEnter = native_self->xMutexEnter;

  mrb_value xMutexEnter = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(mrb, native_xMutexEnter);

  return xMutexEnter;
}
#endif

#if BIND_Sqlite3MutexMethods_xMutexEnter_FIELD_WRITER
/* set_xMutexEnter
 *
 * Parameters:
 * - value: void (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexEnter(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);
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

#if BIND_Sqlite3MutexMethods_xMutexTry_FIELD_READER
/* get_xMutexTry
 *
 * Return Type: int (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexTry(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);

  int (*)(sqlite3_mutex *) native_xMutexTry = native_self->xMutexTry;

  mrb_value xMutexTry = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(mrb, native_xMutexTry);

  return xMutexTry;
}
#endif

#if BIND_Sqlite3MutexMethods_xMutexTry_FIELD_WRITER
/* set_xMutexTry
 *
 * Parameters:
 * - value: int (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexTry(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);
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

#if BIND_Sqlite3MutexMethods_xMutexLeave_FIELD_READER
/* get_xMutexLeave
 *
 * Return Type: void (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexLeave(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);

  void (*)(sqlite3_mutex *) native_xMutexLeave = native_self->xMutexLeave;

  mrb_value xMutexLeave = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(mrb, native_xMutexLeave);

  return xMutexLeave;
}
#endif

#if BIND_Sqlite3MutexMethods_xMutexLeave_FIELD_WRITER
/* set_xMutexLeave
 *
 * Parameters:
 * - value: void (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexLeave(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);
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

#if BIND_Sqlite3MutexMethods_xMutexHeld_FIELD_READER
/* get_xMutexHeld
 *
 * Return Type: int (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexHeld(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);

  int (*)(sqlite3_mutex *) native_xMutexHeld = native_self->xMutexHeld;

  mrb_value xMutexHeld = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(mrb, native_xMutexHeld);

  return xMutexHeld;
}
#endif

#if BIND_Sqlite3MutexMethods_xMutexHeld_FIELD_WRITER
/* set_xMutexHeld
 *
 * Parameters:
 * - value: int (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexHeld(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);
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

#if BIND_Sqlite3MutexMethods_xMutexNotheld_FIELD_READER
/* get_xMutexNotheld
 *
 * Return Type: int (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_get_xMutexNotheld(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);

  int (*)(sqlite3_mutex *) native_xMutexNotheld = native_self->xMutexNotheld;

  mrb_value xMutexNotheld = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_mutex_PTR_RPAREN(mrb, native_xMutexNotheld);

  return xMutexNotheld;
}
#endif

#if BIND_Sqlite3MutexMethods_xMutexNotheld_FIELD_WRITER
/* set_xMutexNotheld
 *
 * Parameters:
 * - value: int (*)(sqlite3_mutex *)
 */
mrb_value
mrb_SQLite_Sqlite3MutexMethods_set_xMutexNotheld(mrb_state* mrb, mrb_value self) {
  struct sqlite3_mutex_methods * native_self = mruby_unbox_sqlite3_mutex_methods(self);
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


void mrb_SQLite_Sqlite3MutexMethods_init(mrb_state* mrb) {
  struct RClass* Sqlite3MutexMethods_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3MutexMethods", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3MutexMethods_class, MRB_TT_DATA);

#if BIND_Sqlite3MutexMethods_INITIALIZE
  mrb_define_method(mrb, Sqlite3MutexMethods_class, "initialize", mrb_SQLite_Sqlite3MutexMethods_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3MutexMethods_class, "disown", mrb_SQLite_Sqlite3MutexMethods_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3MutexMethods_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3MutexMethods_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

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

}

#endif
