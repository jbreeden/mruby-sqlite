/*
 * struct sqlite3_pcache_page
 * Defined in file sqlite3.h @ line 6722
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3PcachePage_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Sqlite3PcachePage::initialize */
/* sha: a63518f81368243cae1ad1ec9f6d93902afd6ed2f26b64368fe895464714ea71 */
#if BIND_Sqlite3PcachePage_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3PcachePage_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_page* native_object = (struct sqlite3_pcache_page*)calloc(1, sizeof(struct sqlite3_pcache_page));
  mruby_giftwrap_sqlite3_pcache_page_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcachePage::initialize */
/* sha: a844837a8dbee088691b6a4014169869d6aecefbd77fe1b0c0067999ab991b25 */
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcachePage::belongs_to_ruby */
/* sha: 748ff42cd14f5cc6c7300ea97b74db15328afbfdc2c8784f7154a301891038b4 */
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
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3PcachePage::pBuf_reader */
/* sha: a06ce107effa467593294af8f0baa2c22f664ff403c1ca664a4e1fcdb0303cc7 */
#if BIND_Sqlite3PcachePage_pBuf_FIELD_READER
/* get_pBuf
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3PcachePage_get_pBuf(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_page * native_self = mruby_unbox_sqlite3_pcache_page(self);

  void * native_pBuf = native_self->pBuf;

  mrb_value pBuf = TODO_mruby_box_void_PTR(mrb, native_pBuf);

  return pBuf;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcachePage::pBuf_writer */
/* sha: d9ff7b06effa518aebd2b43327fee73e3bc71c859d6b82a2583904266871aa38 */
#if BIND_Sqlite3PcachePage_pBuf_FIELD_WRITER
/* set_pBuf
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3PcachePage_set_pBuf(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_page * native_self = mruby_unbox_sqlite3_pcache_page(self);
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
/* sha: eed227896ce0cdb8c90740ecb55642f2046538fcffe59b143293ed0daa84a765 */
#if BIND_Sqlite3PcachePage_pExtra_FIELD_READER
/* get_pExtra
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3PcachePage_get_pExtra(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_page * native_self = mruby_unbox_sqlite3_pcache_page(self);

  void * native_pExtra = native_self->pExtra;

  mrb_value pExtra = TODO_mruby_box_void_PTR(mrb, native_pExtra);

  return pExtra;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcachePage::pExtra_writer */
/* sha: fe680753c5d9af34802d7d8dc1bafe0d0778d9b5599a8115458586e8183d6410 */
#if BIND_Sqlite3PcachePage_pExtra_FIELD_WRITER
/* set_pExtra
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3PcachePage_set_pExtra(mrb_state* mrb, mrb_value self) {
  struct sqlite3_pcache_page * native_self = mruby_unbox_sqlite3_pcache_page(self);
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
/* MRUBY_BINDING: Sqlite3PcachePage::class_definition */
/* sha: 829f284d4f1c865dda014145aa308adf00fd14926d457535cb3e4dd9e7e0a0c4 */
  struct RClass* Sqlite3PcachePage_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3PcachePage", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3PcachePage_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcachePage::class_method_definitions */
/* sha: 054191f785f04fd64582999574aad6c598aa38a73a421c97e78760ef43c9d6a5 */
#if BIND_Sqlite3PcachePage_INITIALIZE
  mrb_define_method(mrb, Sqlite3PcachePage_class, "initialize", mrb_SQLite_Sqlite3PcachePage_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3PcachePage_class, "disown", mrb_SQLite_Sqlite3PcachePage_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3PcachePage_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3PcachePage_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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

/* MRUBY_BINDING: Sqlite3PcachePage::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
