/*
 * struct sqlite3_pcache_methods2
 * Defined in file sqlite3.h @ line 6887
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3PcacheMethods2_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3PcacheMethods2_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2* native_object = (struct sqlite3_pcache_methods2*)malloc(sizeof(struct sqlite3_pcache_methods2));
  mruby_gift_struct sqlite3_pcache_methods2_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3PcacheMethods2.disown only accepts objects of type SQLite::Sqlite3PcacheMethods2");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3PcacheMethods2.belongs_to_ruby only accepts objects of type SQLite::Sqlite3PcacheMethods2");
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

#if BIND_Sqlite3PcacheMethods2_iVersion_FIELD
/* get_iVersion
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_iVersion(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);

  int native_field = native_self->iVersion;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_iVersion
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_iVersion(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->iVersion = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcacheMethods2_pArg_FIELD
/* get_pArg
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_pArg(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);

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
mrb_SQLite_Sqlite3PcacheMethods2_set_pArg(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_PTR(ruby_field);

  void * native_field = TODO_mruby_unbox_void_PTR(ruby_field);

  native_self->pArg = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xInit_FIELD
/* get_xInit
 *
 * Return Type: int (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xInit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);

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
mrb_SQLite_Sqlite3PcacheMethods2_set_xInit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  int (*native_field)(void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  native_self->xInit = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xShutdown_FIELD
/* get_xShutdown
 *
 * Return Type: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xShutdown(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);

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
mrb_SQLite_Sqlite3PcacheMethods2_set_xShutdown(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  void (*native_field)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(ruby_field);

  native_self->xShutdown = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xCreate_FIELD
/* get_xCreate
 *
 * Return Type: sqlite3_pcache *(*)(int, int, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xCreate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);

  sqlite3_pcache *(*)(int, int, int) native_field = native_self->xCreate;

  mrb_value ruby_field = TODO_mruby_box_sqlite3_pcache_PTR_LPAREN_PTR_RPAREN_LPAREN_intCOMMA_intCOMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xCreate
 *
 * Parameters:
 * - value: sqlite3_pcache *(*)(int, int, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xCreate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_sqlite3_pcache_PTR_LPAREN_PTR_RPAREN_LPAREN_intCOMMA_intCOMMA_int_RPAREN(ruby_field);

  sqlite3_pcache *(*native_field)(int, int, int) = TODO_mruby_unbox_sqlite3_pcache_PTR_LPAREN_PTR_RPAREN_LPAREN_intCOMMA_intCOMMA_int_RPAREN(ruby_field);

  native_self->xCreate = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xCachesize_FIELD
/* get_xCachesize
 *
 * Return Type: void (*)(sqlite3_pcache *, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xCachesize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);

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
mrb_SQLite_Sqlite3PcacheMethods2_set_xCachesize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_int_RPAREN(ruby_field);

  void (*native_field)(sqlite3_pcache *, int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_int_RPAREN(ruby_field);

  native_self->xCachesize = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xPagecount_FIELD
/* get_xPagecount
 *
 * Return Type: int (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xPagecount(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);

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
mrb_SQLite_Sqlite3PcacheMethods2_set_xPagecount(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(ruby_field);

  int (*native_field)(sqlite3_pcache *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(ruby_field);

  native_self->xPagecount = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xFetch_FIELD
/* get_xFetch
 *
 * Return Type: sqlite3_pcache_page *(*)(sqlite3_pcache *, unsigned int, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xFetch(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);

  sqlite3_pcache_page *(*)(sqlite3_pcache *, unsigned int, int) native_field = native_self->xFetch;

  mrb_value ruby_field = TODO_mruby_box_sqlite3_pcache_page_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_intCOMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xFetch
 *
 * Parameters:
 * - value: sqlite3_pcache_page *(*)(sqlite3_pcache *, unsigned int, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xFetch(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_sqlite3_pcache_page_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_intCOMMA_int_RPAREN(ruby_field);

  sqlite3_pcache_page *(*native_field)(sqlite3_pcache *, unsigned int, int) = TODO_mruby_unbox_sqlite3_pcache_page_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_intCOMMA_int_RPAREN(ruby_field);

  native_self->xFetch = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xUnpin_FIELD
/* get_xUnpin
 *
 * Return Type: void (*)(sqlite3_pcache *, sqlite3_pcache_page *, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xUnpin(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);

  void (*)(sqlite3_pcache *, sqlite3_pcache_page *, int) native_field = native_self->xUnpin;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_sqlite3_pcache_page_PTR_COMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xUnpin
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *, sqlite3_pcache_page *, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xUnpin(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_sqlite3_pcache_page_PTR_COMMA_int_RPAREN(ruby_field);

  void (*native_field)(sqlite3_pcache *, sqlite3_pcache_page *, int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_sqlite3_pcache_page_PTR_COMMA_int_RPAREN(ruby_field);

  native_self->xUnpin = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xRekey_FIELD
/* get_xRekey
 *
 * Return Type: void (*)(sqlite3_pcache *, sqlite3_pcache_page *, unsigned int, unsigned int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xRekey(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);

  void (*)(sqlite3_pcache *, sqlite3_pcache_page *, unsigned int, unsigned int) native_field = native_self->xRekey;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_sqlite3_pcache_page_PTR_COMMA_unsigned_intCOMMA_unsigned_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xRekey
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *, sqlite3_pcache_page *, unsigned int, unsigned int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xRekey(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_sqlite3_pcache_page_PTR_COMMA_unsigned_intCOMMA_unsigned_int_RPAREN(ruby_field);

  void (*native_field)(sqlite3_pcache *, sqlite3_pcache_page *, unsigned int, unsigned int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_sqlite3_pcache_page_PTR_COMMA_unsigned_intCOMMA_unsigned_int_RPAREN(ruby_field);

  native_self->xRekey = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xTruncate_FIELD
/* get_xTruncate
 *
 * Return Type: void (*)(sqlite3_pcache *, unsigned int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xTruncate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);

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
mrb_SQLite_Sqlite3PcacheMethods2_set_xTruncate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_int_RPAREN(ruby_field);

  void (*native_field)(sqlite3_pcache *, unsigned int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_int_RPAREN(ruby_field);

  native_self->xTruncate = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xDestroy_FIELD
/* get_xDestroy
 *
 * Return Type: void (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xDestroy(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);

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
mrb_SQLite_Sqlite3PcacheMethods2_set_xDestroy(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(ruby_field);

  void (*native_field)(sqlite3_pcache *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(ruby_field);

  native_self->xDestroy = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcacheMethods2_xShrink_FIELD
/* get_xShrink
 *
 * Return Type: void (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xShrink(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);

  void (*)(sqlite3_pcache *) native_field = native_self->xShrink;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_xShrink
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xShrink(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_methods2 * native_self = mruby_unbox_struct sqlite3_pcache_methods2(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(ruby_field);

  void (*native_field)(sqlite3_pcache *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(ruby_field);

  native_self->xShrink = native_field;

  return ruby_field;
}
#endif


void mrb_SQLite_Sqlite3PcacheMethods2_init(mrb_state* mrb) {
  RClass* Sqlite3PcacheMethods2_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3PcacheMethods2", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3PcacheMethods2_class, MRB_TT_DATA);

#if BIND_Sqlite3PcacheMethods2_INITIALIZE
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "initialize", mrb_SQLite_Sqlite3PcacheMethods2_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3PcacheMethods2_class, "disown", mrb_SQLite_Sqlite3PcacheMethods2_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3PcacheMethods2_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3PcacheMethods2_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Sqlite3PcacheMethods2_iVersion_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "iVersion", mrb_SQLite_Sqlite3PcacheMethods2_get_iVersion, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "iVersion=", mrb_SQLite_Sqlite3PcacheMethods2_set_iVersion, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_pArg_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "pArg", mrb_SQLite_Sqlite3PcacheMethods2_get_pArg, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "pArg=", mrb_SQLite_Sqlite3PcacheMethods2_set_pArg, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xInit_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xInit", mrb_SQLite_Sqlite3PcacheMethods2_get_xInit, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xInit=", mrb_SQLite_Sqlite3PcacheMethods2_set_xInit, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xShutdown_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xShutdown", mrb_SQLite_Sqlite3PcacheMethods2_get_xShutdown, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xShutdown=", mrb_SQLite_Sqlite3PcacheMethods2_set_xShutdown, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xCreate_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xCreate", mrb_SQLite_Sqlite3PcacheMethods2_get_xCreate, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xCreate=", mrb_SQLite_Sqlite3PcacheMethods2_set_xCreate, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xCachesize_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xCachesize", mrb_SQLite_Sqlite3PcacheMethods2_get_xCachesize, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xCachesize=", mrb_SQLite_Sqlite3PcacheMethods2_set_xCachesize, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xPagecount_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xPagecount", mrb_SQLite_Sqlite3PcacheMethods2_get_xPagecount, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xPagecount=", mrb_SQLite_Sqlite3PcacheMethods2_set_xPagecount, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xFetch_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xFetch", mrb_SQLite_Sqlite3PcacheMethods2_get_xFetch, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xFetch=", mrb_SQLite_Sqlite3PcacheMethods2_set_xFetch, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xUnpin_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xUnpin", mrb_SQLite_Sqlite3PcacheMethods2_get_xUnpin, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xUnpin=", mrb_SQLite_Sqlite3PcacheMethods2_set_xUnpin, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xRekey_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xRekey", mrb_SQLite_Sqlite3PcacheMethods2_get_xRekey, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xRekey=", mrb_SQLite_Sqlite3PcacheMethods2_set_xRekey, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xTruncate_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xTruncate", mrb_SQLite_Sqlite3PcacheMethods2_get_xTruncate, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xTruncate=", mrb_SQLite_Sqlite3PcacheMethods2_set_xTruncate, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xDestroy_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xDestroy", mrb_SQLite_Sqlite3PcacheMethods2_get_xDestroy, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xDestroy=", mrb_SQLite_Sqlite3PcacheMethods2_set_xDestroy, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xShrink_FIELD
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xShrink", mrb_SQLite_Sqlite3PcacheMethods2_get_xShrink, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xShrink=", mrb_SQLite_Sqlite3PcacheMethods2_set_xShrink, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
