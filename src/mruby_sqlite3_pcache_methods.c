/*
 * struct sqlite3_pcache_methods
 * Defined in file sqlite3.h @ line 6910
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3PcacheMethods_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3PcacheMethods_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods* native_object = (struct sqlite3_pcache_methods*)malloc(sizeof(struct sqlite3_pcache_methods));
  mruby_gift_struct sqlite3_pcache_methods_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SQLite_Sqlite3PcacheMethods_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3PcacheMethods.disown only accepts objects of type SQLite::Sqlite3PcacheMethods");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SQLite_Sqlite3PcacheMethods_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3PcacheMethods.belongs_to_ruby only accepts objects of type SQLite::Sqlite3PcacheMethods");
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

#if BIND_Sqlite3PcacheMethods_pArg_FIELD
/* get_pArg
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_get_pArg(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods * native_self = mruby_unbox_struct sqlite3_pcache_methods(self);

  void * native_field = native_self->pArg;

  mrb_value ruby_field = TODO_mruby_box_void_PTR(mrb, native_field);

  return ruby_field;
}

/* set_pArg
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_pArg(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods * native_self = mruby_unbox_struct sqlite3_pcache_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_PTR(ruby_field);

  void * native_field = TODO_mruby_unbox_void_PTR(ruby_field);

  native_self->pArg = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcacheMethods_xInit_FIELD
/* get_xInit
 *
 * Return Type: int (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_get_xInit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods * native_self = mruby_unbox_struct sqlite3_pcache_methods(self);

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
mrb_SQLite_Sqlite3PcacheMethods_set_xInit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods * native_self = mruby_unbox_struct sqlite3_pcache_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  int (*native_field)(void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  native_self->xInit = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcacheMethods_xShutdown_FIELD
/* get_xShutdown
 *
 * Return Type: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_get_xShutdown(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods * native_self = mruby_unbox_struct sqlite3_pcache_methods(self);

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
mrb_SQLite_Sqlite3PcacheMethods_set_xShutdown(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods * native_self = mruby_unbox_struct sqlite3_pcache_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  void (*native_field)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  native_self->xShutdown = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcacheMethods_xCreate_FIELD
/* get_xCreate
 *
 * Return Type: sqlite3_pcache *(*)(int, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_get_xCreate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods * native_self = mruby_unbox_struct sqlite3_pcache_methods(self);

  sqlite3_pcache *(*)(int, int) native_field = native_self->xCreate;

  mrb_value ruby_field = TODO_mruby_box_sqlite3_pcache_PTR_LPAREN_PTR_RPAREN_LPAREN_intCOMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xCreate
 *
 * Parameters:
 * - value: sqlite3_pcache *(*)(int, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xCreate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods * native_self = mruby_unbox_struct sqlite3_pcache_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_sqlite3_pcache_PTR_LPAREN_PTR_RPAREN_LPAREN_intCOMMA_int_RPAREN(ruby_field);

  sqlite3_pcache *(*native_field)(int, int) = TODO_mruby_unbox_sqlite3_pcache_PTR_LPAREN_PTR_RPAREN_LPAREN_intCOMMA_int_RPAREN(ruby_field);

  native_self->xCreate = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcacheMethods_xCachesize_FIELD
/* get_xCachesize
 *
 * Return Type: void (*)(sqlite3_pcache *, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_get_xCachesize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods * native_self = mruby_unbox_struct sqlite3_pcache_methods(self);

  void (*)(sqlite3_pcache *, int) native_field = native_self->xCachesize;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xCachesize
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xCachesize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods * native_self = mruby_unbox_struct sqlite3_pcache_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_int_RPAREN(ruby_field);

  void (*native_field)(sqlite3_pcache *, int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_int_RPAREN(ruby_field);

  native_self->xCachesize = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcacheMethods_xPagecount_FIELD
/* get_xPagecount
 *
 * Return Type: int (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_get_xPagecount(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods * native_self = mruby_unbox_struct sqlite3_pcache_methods(self);

  int (*)(sqlite3_pcache *) native_field = native_self->xPagecount;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xPagecount
 *
 * Parameters:
 * - value: int (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xPagecount(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods * native_self = mruby_unbox_struct sqlite3_pcache_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_pcache *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(ruby_field);

  native_self->xPagecount = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcacheMethods_xFetch_FIELD
/* get_xFetch
 *
 * Return Type: void *(*)(sqlite3_pcache *, unsigned int, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_get_xFetch(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods * native_self = mruby_unbox_struct sqlite3_pcache_methods(self);

  void *(*)(sqlite3_pcache *, unsigned int, int) native_field = native_self->xFetch;

  mrb_value ruby_field = TODO_mruby_box_void_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_intCOMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xFetch
 *
 * Parameters:
 * - value: void *(*)(sqlite3_pcache *, unsigned int, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xFetch(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods * native_self = mruby_unbox_struct sqlite3_pcache_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_intCOMMA_int_RPAREN(ruby_field);

  void *(*native_field)(sqlite3_pcache *, unsigned int, int) = TODO_mruby_unbox_void_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_intCOMMA_int_RPAREN(ruby_field);

  native_self->xFetch = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcacheMethods_xUnpin_FIELD
/* get_xUnpin
 *
 * Return Type: void (*)(sqlite3_pcache *, void *, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_get_xUnpin(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods * native_self = mruby_unbox_struct sqlite3_pcache_methods(self);

  void (*)(sqlite3_pcache *, void *, int) native_field = native_self->xUnpin;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_void_PTR_COMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xUnpin
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *, void *, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xUnpin(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods * native_self = mruby_unbox_struct sqlite3_pcache_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_void_PTR_COMMA_int_RPAREN(ruby_field);

  void (*native_field)(sqlite3_pcache *, void *, int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_void_PTR_COMMA_int_RPAREN(ruby_field);

  native_self->xUnpin = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcacheMethods_xRekey_FIELD
/* get_xRekey
 *
 * Return Type: void (*)(sqlite3_pcache *, void *, unsigned int, unsigned int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_get_xRekey(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods * native_self = mruby_unbox_struct sqlite3_pcache_methods(self);

  void (*)(sqlite3_pcache *, void *, unsigned int, unsigned int) native_field = native_self->xRekey;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_void_PTR_COMMA_unsigned_intCOMMA_unsigned_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xRekey
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *, void *, unsigned int, unsigned int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xRekey(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods * native_self = mruby_unbox_struct sqlite3_pcache_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_void_PTR_COMMA_unsigned_intCOMMA_unsigned_int_RPAREN(ruby_field);

  void (*native_field)(sqlite3_pcache *, void *, unsigned int, unsigned int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_void_PTR_COMMA_unsigned_intCOMMA_unsigned_int_RPAREN(ruby_field);

  native_self->xRekey = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcacheMethods_xTruncate_FIELD
/* get_xTruncate
 *
 * Return Type: void (*)(sqlite3_pcache *, unsigned int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_get_xTruncate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods * native_self = mruby_unbox_struct sqlite3_pcache_methods(self);

  void (*)(sqlite3_pcache *, unsigned int) native_field = native_self->xTruncate;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xTruncate
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *, unsigned int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xTruncate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods * native_self = mruby_unbox_struct sqlite3_pcache_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_int_RPAREN(ruby_field);

  void (*native_field)(sqlite3_pcache *, unsigned int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_int_RPAREN(ruby_field);

  native_self->xTruncate = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcacheMethods_xDestroy_FIELD
/* get_xDestroy
 *
 * Return Type: void (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_get_xDestroy(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods * native_self = mruby_unbox_struct sqlite3_pcache_methods(self);

  void (*)(sqlite3_pcache *) native_field = native_self->xDestroy;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xDestroy
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xDestroy(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods * native_self = mruby_unbox_struct sqlite3_pcache_methods(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(ruby_field);

  void (*native_field)(sqlite3_pcache *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(ruby_field);

  native_self->xDestroy = native_field;

  return ruby_field;
}
#endif


void mrb_SQLite_Sqlite3PcacheMethods_init(mrb_state* mrb) {
  struct RClass* Sqlite3PcacheMethods_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3PcacheMethods", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3PcacheMethods_class, MRB_TT_DATA);

#if BIND_Sqlite3PcacheMethods_INITIALIZE
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "initialize", mrb_SQLite_Sqlite3PcacheMethods_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3PcacheMethods_class, "disown", mrb_SQLite_Sqlite3PcacheMethods_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3PcacheMethods_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3PcacheMethods_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Sqlite3PcacheMethods_pArg_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "pArg", mrb_SQLite_Sqlite3PcacheMethods_get_pArg, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "pArg=", mrb_SQLite_Sqlite3PcacheMethods_set_pArg, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xInit_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xInit", mrb_SQLite_Sqlite3PcacheMethods_get_xInit, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xInit=", mrb_SQLite_Sqlite3PcacheMethods_set_xInit, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xShutdown_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xShutdown", mrb_SQLite_Sqlite3PcacheMethods_get_xShutdown, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xShutdown=", mrb_SQLite_Sqlite3PcacheMethods_set_xShutdown, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xCreate_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xCreate", mrb_SQLite_Sqlite3PcacheMethods_get_xCreate, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xCreate=", mrb_SQLite_Sqlite3PcacheMethods_set_xCreate, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xCachesize_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xCachesize", mrb_SQLite_Sqlite3PcacheMethods_get_xCachesize, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xCachesize=", mrb_SQLite_Sqlite3PcacheMethods_set_xCachesize, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xPagecount_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xPagecount", mrb_SQLite_Sqlite3PcacheMethods_get_xPagecount, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xPagecount=", mrb_SQLite_Sqlite3PcacheMethods_set_xPagecount, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xFetch_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xFetch", mrb_SQLite_Sqlite3PcacheMethods_get_xFetch, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xFetch=", mrb_SQLite_Sqlite3PcacheMethods_set_xFetch, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xUnpin_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xUnpin", mrb_SQLite_Sqlite3PcacheMethods_get_xUnpin, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xUnpin=", mrb_SQLite_Sqlite3PcacheMethods_set_xUnpin, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xRekey_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xRekey", mrb_SQLite_Sqlite3PcacheMethods_get_xRekey, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xRekey=", mrb_SQLite_Sqlite3PcacheMethods_set_xRekey, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xTruncate_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xTruncate", mrb_SQLite_Sqlite3PcacheMethods_get_xTruncate, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xTruncate=", mrb_SQLite_Sqlite3PcacheMethods_set_xTruncate, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xDestroy_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xDestroy", mrb_SQLite_Sqlite3PcacheMethods_get_xDestroy, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xDestroy=", mrb_SQLite_Sqlite3PcacheMethods_set_xDestroy, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
