/*
 * sqlite3_pcache_page
 * Defined in file sqlite3.h @ line 6722
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3PcachePage_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcachePage::initialize */
/* sha: adfb682344bcdea6ce2b328860f8a2572fb46bf0a2aa0461cd22e39dfdada5cd */
#if BIND_Sqlite3PcachePage_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3PcachePage_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  sqlite3_pcache_page* native_object = (sqlite3_pcache_page*)calloc(1, sizeof(sqlite3_pcache_page));
  mruby_gift_sqlite3_pcache_page_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3PcachePage::pBuf_reader */
/* sha: ac3b9faa9459d79c0347b89ffeb7b58e974873cdb4065ca74a9a7441358333e0 */
#if BIND_Sqlite3PcachePage_pBuf_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3PcachePage_get_pBuf(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_page * native_self = mruby_unbox_sqlite3_pcache_page(self);

  void * native_pBuf = native_self->pBuf;

  mrb_value pBuf = TODO_mruby_box_void_PTR(mrb, native_pBuf);

  return pBuf;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcachePage::pBuf_writer */
/* sha: 6b62c8a990c54e16e62faaf3f56cb5bf4276406fba9a09c7a1bfcbb5de17d391 */
#if BIND_Sqlite3PcachePage_pBuf_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcachePage_set_pBuf(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_page * native_self = mruby_unbox_sqlite3_pcache_page(self);
  mrb_value pBuf;

  mrb_get_args(mrb, "o", &pBuf);

  /* type checking */
  TODO_type_check_void_PTR(pBuf);

  void * native_pBuf = TODO_mruby_unbox_void_PTR(pBuf);

  native_self->pBuf = native_pBuf;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcachePage::pExtra_reader */
/* sha: c8ad5f85f8604ae5e67ff5a94bc68a6d8147d6c7b2abb1667a12f6a3d0557ed3 */
#if BIND_Sqlite3PcachePage_pExtra_FIELD_READER
mrb_value
mrb_SQLite_Sqlite3PcachePage_get_pExtra(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_page * native_self = mruby_unbox_sqlite3_pcache_page(self);

  void * native_pExtra = native_self->pExtra;

  mrb_value pExtra = TODO_mruby_box_void_PTR(mrb, native_pExtra);

  return pExtra;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcachePage::pExtra_writer */
/* sha: 680505f5334ff2c25f2773713f5df907e54ba69be11161b51307c74478d39815 */
#if BIND_Sqlite3PcachePage_pExtra_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcachePage_set_pExtra(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_page * native_self = mruby_unbox_sqlite3_pcache_page(self);
  mrb_value pExtra;

  mrb_get_args(mrb, "o", &pExtra);

  /* type checking */
  TODO_type_check_void_PTR(pExtra);

  void * native_pExtra = TODO_mruby_unbox_void_PTR(pExtra);

  native_self->pExtra = native_pExtra;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3PcachePage_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcachePage::class_definition */
/* sha: 829f284d4f1c865dda014145aa308adf00fd14926d457535cb3e4dd9e7e0a0c4 */
  struct RClass* Sqlite3PcachePage_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3PcachePage", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3PcachePage_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcachePage::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcachePage::class_method_definitions */
/* sha: 22b0ad7c9791eee4a901c83ccbc1bb07669052f1a00bb8bc0ee8c24911d43cf0 */
#if BIND_Sqlite3PcachePage_INITIALIZE
  mrb_define_method(mrb, Sqlite3PcachePage_class, "initialize", mrb_SQLite_Sqlite3PcachePage_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcachePage::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcachePage::attr_definitions */
/* sha: 0a20237f207ef369141725db633c5cecb914842b0f19c2ce5f8c43dc9a9d9877 */
  /*
   * Fields
   */
#if BIND_Sqlite3PcachePage_pBuf_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcachePage_class, "pBuf", mrb_SQLite_Sqlite3PcachePage_get_pBuf, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcachePage_pBuf_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcachePage_class, "pBuf=", mrb_SQLite_Sqlite3PcachePage_set_pBuf, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcachePage_pExtra_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcachePage_class, "pExtra", mrb_SQLite_Sqlite3PcachePage_get_pExtra, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcachePage_pExtra_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcachePage_class, "pExtra=", mrb_SQLite_Sqlite3PcachePage_set_pExtra, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */


/* MRUBY_BINDING: Sqlite3PcachePage::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
