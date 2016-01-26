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
/* sha: 42e4ab3aa755e30da6ca5bda79d33b59e19d1e64d389997791c21897262ee6b2 */
#if BIND_Sqlite3PcachePage_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3PcachePage_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  sqlite3_pcache_page* native_object = (sqlite3_pcache_page*)calloc(1, sizeof(sqlite3_pcache_page));
  mruby_gift_sqlite3_pcache_page_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3PcachePage::pBuf_reader */
/* sha: 4eaa300e577a00b10b70c12de5ed0692c19880922f6e81bc52700285e7eaea34 */
#if BIND_Sqlite3PcachePage_pBuf_FIELD_READER
/* get_pBuf
 *
 * Return Type: void *
 */
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
/* sha: 689b95f620f38aaf0676dca9172b1757ddb84059f883b7a01399bda703b7c66c */
#if BIND_Sqlite3PcachePage_pBuf_FIELD_WRITER
/* set_pBuf
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3PcachePage_set_pBuf(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_page * native_self = mruby_unbox_sqlite3_pcache_page(self);
  mrb_value pBuf;

  mrb_get_args(mrb, "o", &pBuf);

  /* type checking */
  TODO_type_check_void_PTR(pBuf);

  void * native_pBuf = TODO_mruby_unbox_void_PTR(pBuf);

  native_self->pBuf = native_pBuf;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcachePage::pExtra_reader */
/* sha: 61efa1e1ce53b94bd1d3ff31754ea6ec43ae4af1bcb0e7498ebc4180d6f4c570 */
#if BIND_Sqlite3PcachePage_pExtra_FIELD_READER
/* get_pExtra
 *
 * Return Type: void *
 */
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
/* sha: 988edaed7abd3e03d061b01b81dccb21754ce032ad4feace43617a5b7530bd88 */
#if BIND_Sqlite3PcachePage_pExtra_FIELD_WRITER
/* set_pExtra
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3PcachePage_set_pExtra(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_page * native_self = mruby_unbox_sqlite3_pcache_page(self);
  mrb_value pExtra;

  mrb_get_args(mrb, "o", &pExtra);

  /* type checking */
  TODO_type_check_void_PTR(pExtra);

  void * native_pExtra = TODO_mruby_unbox_void_PTR(pExtra);

  native_self->pExtra = native_pExtra;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3PcachePage_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3PcachePage::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
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

/* MRUBY_BINDING: Sqlite3PcachePage::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcachePage::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcachePage::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
