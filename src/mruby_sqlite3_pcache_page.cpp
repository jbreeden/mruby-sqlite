/*
 * struct sqlite3_pcache_page
 * Defined in file sqlite3.h @ line 6722
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3PcachePage_TYPE

/*
 * Class Methods
 */

#if BIND_Sqlite3PcachePage_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3PcachePage_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_page* native_object = (struct sqlite3_pcache_page*)malloc(sizeof(struct sqlite3_pcache_page));
  mruby_gift_struct sqlite3_pcache_page_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_SQLite_Sqlite3PcachePage_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3PcachePage.disown only accepts objects of type SQLite::Sqlite3PcachePage");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_SQLite_Sqlite3PcachePage_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3PcachePage.belongs_to_ruby only accepts objects of type SQLite::Sqlite3PcachePage");
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

#if BIND_Sqlite3PcachePage_pBuf_FIELD
/* get_pBuf
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3PcachePage_get_pBuf(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_page * native_self = mruby_unbox_struct sqlite3_pcache_page(self);

  void * native_field = native_self->pBuf;

  mrb_value ruby_field = TODO_mruby_box_void_PTR(mrb, native_field);

  return ruby_field;
}

/* set_pBuf
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3PcachePage_set_pBuf(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_page * native_self = mruby_unbox_struct sqlite3_pcache_page(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_PTR(ruby_field);

  void * native_field = TODO_mruby_unbox_void_PTR(ruby_field);

  native_self->pBuf = native_field;

  return ruby_field;
}
#endif

#if BIND_Sqlite3PcachePage_pExtra_FIELD
/* get_pExtra
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3PcachePage_get_pExtra(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_page * native_self = mruby_unbox_struct sqlite3_pcache_page(self);

  void * native_field = native_self->pExtra;

  mrb_value ruby_field = TODO_mruby_box_void_PTR(mrb, native_field);

  return ruby_field;
}

/* set_pExtra
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3PcachePage_set_pExtra(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_page * native_self = mruby_unbox_struct sqlite3_pcache_page(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_PTR(ruby_field);

  void * native_field = TODO_mruby_unbox_void_PTR(ruby_field);

  native_self->pExtra = native_field;

  return ruby_field;
}
#endif


void mrb_SQLite_Sqlite3PcachePage_init(mrb_state* mrb) {
  RClass* Sqlite3PcachePage_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3PcachePage", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3PcachePage_class, MRB_TT_DATA);

#if BIND_Sqlite3PcachePage_INITIALIZE
  mrb_define_method(mrb, Sqlite3PcachePage_class, "initialize", mrb_SQLite_Sqlite3PcachePage_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3PcachePage_class, "disown", mrb_SQLite_Sqlite3PcachePage_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3PcachePage_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3PcachePage_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_Sqlite3PcachePage_pBuf_FIELD
  mrb_define_method(mrb, Sqlite3PcachePage_class, "pBuf", mrb_SQLite_Sqlite3PcachePage_get_pBuf, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcachePage_class, "pBuf=", mrb_SQLite_Sqlite3PcachePage_set_pBuf, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcachePage_pExtra_FIELD
  mrb_define_method(mrb, Sqlite3PcachePage_class, "pExtra", mrb_SQLite_Sqlite3PcachePage_get_pExtra, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Sqlite3PcachePage_class, "pExtra=", mrb_SQLite_Sqlite3PcachePage_set_pExtra, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
