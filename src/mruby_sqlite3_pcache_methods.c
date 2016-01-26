/*
 * sqlite3_pcache_methods
 * Defined in file sqlite3.h @ line 6910
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3PcacheMethods_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::initialize */
/* sha: d4bf8528857e695628045c0b520e74260b90db3ff6af0c30912e1d075fd87b03 */
#if BIND_Sqlite3PcacheMethods_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  sqlite3_pcache_methods* native_object = (sqlite3_pcache_methods*)calloc(1, sizeof(sqlite3_pcache_methods));
  mruby_gift_sqlite3_pcache_methods_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3PcacheMethods::pArg_reader */
/* sha: 3a02d5b41b27258659b0da15247b19bbbf4f8cfef3efb90a5d6897ccaca1016a */
#if BIND_Sqlite3PcacheMethods_pArg_FIELD_READER
/* get_pArg
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_get_pArg(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);

  void * native_pArg = native_self->pArg;

  mrb_value pArg = TODO_mruby_box_void_PTR(mrb, native_pArg);

  return pArg;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::pArg_writer */
/* sha: f72755e583f3bec542e40cc46452d37b6c3987402342552f7c6da69c37a4f50e */
#if BIND_Sqlite3PcacheMethods_pArg_FIELD_WRITER
/* set_pArg
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_pArg(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);
  mrb_value pArg;

  mrb_get_args(mrb, "o", &pArg);

  /* type checking */
  TODO_type_check_void_PTR(pArg);

  void * native_pArg = TODO_mruby_unbox_void_PTR(pArg);

  native_self->pArg = native_pArg;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xInit_reader */
/* sha: fc8ec7ccb2eb71cea0d81365388e54ce02e77286c6351c5102e501c5a06e4ea4 */
#if BIND_Sqlite3PcacheMethods_xInit_FIELD_READER
/* get_xInit
 *
 * Return Type: int (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_get_xInit(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);

  int (*)(void *) native_xInit = native_self->xInit;

  mrb_value xInit = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_xInit);

  return xInit;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xInit_writer */
/* sha: 5656caa8d82ad0b7f3742ed6601b7271ad3b27854c386b7a1c892ddfc6c3bf28 */
#if BIND_Sqlite3PcacheMethods_xInit_FIELD_WRITER
/* set_xInit
 *
 * Parameters:
 * - value: int (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xInit(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);
  mrb_value xInit;

  mrb_get_args(mrb, "o", &xInit);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xInit);

  int (*native_xInit)(void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xInit);

  native_self->xInit = native_xInit;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xShutdown_reader */
/* sha: fb6eebd6adb3c3a3ecd22d5717befb3540cefa8bd3d4a701c912d8b617e65efe */
#if BIND_Sqlite3PcacheMethods_xShutdown_FIELD_READER
/* get_xShutdown
 *
 * Return Type: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_get_xShutdown(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);

  void (*)(void *) native_xShutdown = native_self->xShutdown;

  mrb_value xShutdown = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_xShutdown);

  return xShutdown;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xShutdown_writer */
/* sha: f76a4fe3ff442871d40eff5513c46698ed4ca8895a971daa92c505132bbe0ca9 */
#if BIND_Sqlite3PcacheMethods_xShutdown_FIELD_WRITER
/* set_xShutdown
 *
 * Parameters:
 * - value: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xShutdown(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);
  mrb_value xShutdown;

  mrb_get_args(mrb, "o", &xShutdown);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xShutdown);

  void (*native_xShutdown)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xShutdown);

  native_self->xShutdown = native_xShutdown;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xCreate_reader */
/* sha: 8612fd6f9557c92c5d092acb7208e20b7ccf5bef4353749f33c8ec64a92b9495 */
#if BIND_Sqlite3PcacheMethods_xCreate_FIELD_READER
/* get_xCreate
 *
 * Return Type: sqlite3_pcache *(*)(int, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_get_xCreate(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);

  sqlite3_pcache *(*)(int, int) native_xCreate = native_self->xCreate;

  mrb_value xCreate = TODO_mruby_box_sqlite3_pcache_PTR_LPAREN_PTR_RPAREN_LPAREN_intCOMMA_int_RPAREN(mrb, native_xCreate);

  return xCreate;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xCreate_writer */
/* sha: c1e823fb23850dce3fcc485f5c0b9704edbd68b8696e02db1307dd0182bc1a86 */
#if BIND_Sqlite3PcacheMethods_xCreate_FIELD_WRITER
/* set_xCreate
 *
 * Parameters:
 * - value: sqlite3_pcache *(*)(int, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xCreate(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);
  mrb_value xCreate;

  mrb_get_args(mrb, "o", &xCreate);

  /* type checking */
  TODO_type_check_sqlite3_pcache_PTR_LPAREN_PTR_RPAREN_LPAREN_intCOMMA_int_RPAREN(xCreate);

  sqlite3_pcache *(*native_xCreate)(int, int) = TODO_mruby_unbox_sqlite3_pcache_PTR_LPAREN_PTR_RPAREN_LPAREN_intCOMMA_int_RPAREN(xCreate);

  native_self->xCreate = native_xCreate;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xCachesize_reader */
/* sha: cfb2a06c08ea2011e41ec1e63d000dfa9da8982662b9d822f492d442b79d6e2a */
#if BIND_Sqlite3PcacheMethods_xCachesize_FIELD_READER
/* get_xCachesize
 *
 * Return Type: void (*)(sqlite3_pcache *, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_get_xCachesize(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);

  void (*)(sqlite3_pcache *, int) native_xCachesize = native_self->xCachesize;

  mrb_value xCachesize = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_int_RPAREN(mrb, native_xCachesize);

  return xCachesize;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xCachesize_writer */
/* sha: ff3901c29c686d5db8a7ac37184502582e1dd2b6171960e61fc2e00cac85b9ec */
#if BIND_Sqlite3PcacheMethods_xCachesize_FIELD_WRITER
/* set_xCachesize
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xCachesize(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);
  mrb_value xCachesize;

  mrb_get_args(mrb, "o", &xCachesize);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_int_RPAREN(xCachesize);

  void (*native_xCachesize)(sqlite3_pcache *, int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_int_RPAREN(xCachesize);

  native_self->xCachesize = native_xCachesize;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xPagecount_reader */
/* sha: 56ce565ecf809e4f0b031df5dd896062631a8d635405d3463b69a5fff842fec1 */
#if BIND_Sqlite3PcacheMethods_xPagecount_FIELD_READER
/* get_xPagecount
 *
 * Return Type: int (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_get_xPagecount(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);

  int (*)(sqlite3_pcache *) native_xPagecount = native_self->xPagecount;

  mrb_value xPagecount = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(mrb, native_xPagecount);

  return xPagecount;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xPagecount_writer */
/* sha: 1391f95b2edd3da33c4b04792e6c5b39c1d600c494a09d4a2a16c5384c78e21f */
#if BIND_Sqlite3PcacheMethods_xPagecount_FIELD_WRITER
/* set_xPagecount
 *
 * Parameters:
 * - value: int (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xPagecount(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);
  mrb_value xPagecount;

  mrb_get_args(mrb, "o", &xPagecount);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(xPagecount);

  int (*native_xPagecount)(sqlite3_pcache *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(xPagecount);

  native_self->xPagecount = native_xPagecount;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xFetch_reader */
/* sha: 8d6246846e0be4d3f53072e515146128f2c23b616c00514d1caa640376401046 */
#if BIND_Sqlite3PcacheMethods_xFetch_FIELD_READER
/* get_xFetch
 *
 * Return Type: void *(*)(sqlite3_pcache *, unsigned int, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_get_xFetch(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);

  void *(*)(sqlite3_pcache *, unsigned int, int) native_xFetch = native_self->xFetch;

  mrb_value xFetch = TODO_mruby_box_void_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_intCOMMA_int_RPAREN(mrb, native_xFetch);

  return xFetch;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xFetch_writer */
/* sha: b1a703cf21f997286496064213be9ad65f87a835a0337ec180e8498825ba1e46 */
#if BIND_Sqlite3PcacheMethods_xFetch_FIELD_WRITER
/* set_xFetch
 *
 * Parameters:
 * - value: void *(*)(sqlite3_pcache *, unsigned int, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xFetch(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);
  mrb_value xFetch;

  mrb_get_args(mrb, "o", &xFetch);

  /* type checking */
  TODO_type_check_void_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_intCOMMA_int_RPAREN(xFetch);

  void *(*native_xFetch)(sqlite3_pcache *, unsigned int, int) = TODO_mruby_unbox_void_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_intCOMMA_int_RPAREN(xFetch);

  native_self->xFetch = native_xFetch;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xUnpin_reader */
/* sha: 14f8ba3405596404ec3ed0bb96d338f1af0eb8a7ca7bf56afe9355be16cf4462 */
#if BIND_Sqlite3PcacheMethods_xUnpin_FIELD_READER
/* get_xUnpin
 *
 * Return Type: void (*)(sqlite3_pcache *, void *, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_get_xUnpin(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);

  void (*)(sqlite3_pcache *, void *, int) native_xUnpin = native_self->xUnpin;

  mrb_value xUnpin = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_void_PTR_COMMA_int_RPAREN(mrb, native_xUnpin);

  return xUnpin;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xUnpin_writer */
/* sha: 2eaa90f4c0c6fc10bddd0debb095f3458ae3840692114cabf4f045eca2f3691b */
#if BIND_Sqlite3PcacheMethods_xUnpin_FIELD_WRITER
/* set_xUnpin
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *, void *, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xUnpin(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);
  mrb_value xUnpin;

  mrb_get_args(mrb, "o", &xUnpin);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_void_PTR_COMMA_int_RPAREN(xUnpin);

  void (*native_xUnpin)(sqlite3_pcache *, void *, int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_void_PTR_COMMA_int_RPAREN(xUnpin);

  native_self->xUnpin = native_xUnpin;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xRekey_reader */
/* sha: 4b6e4bef594baee3f4617835d9d17da4c7b3ddfab7bc2e1693b3c8344aa964c8 */
#if BIND_Sqlite3PcacheMethods_xRekey_FIELD_READER
/* get_xRekey
 *
 * Return Type: void (*)(sqlite3_pcache *, void *, unsigned int, unsigned int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_get_xRekey(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);

  void (*)(sqlite3_pcache *, void *, unsigned int, unsigned int) native_xRekey = native_self->xRekey;

  mrb_value xRekey = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_void_PTR_COMMA_unsigned_intCOMMA_unsigned_int_RPAREN(mrb, native_xRekey);

  return xRekey;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xRekey_writer */
/* sha: 9c006f8bf2ce79f6db1d1e0f97e73d8f7ddc7d0cbea7a905586ce6ebdbf0f439 */
#if BIND_Sqlite3PcacheMethods_xRekey_FIELD_WRITER
/* set_xRekey
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *, void *, unsigned int, unsigned int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xRekey(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);
  mrb_value xRekey;

  mrb_get_args(mrb, "o", &xRekey);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_void_PTR_COMMA_unsigned_intCOMMA_unsigned_int_RPAREN(xRekey);

  void (*native_xRekey)(sqlite3_pcache *, void *, unsigned int, unsigned int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_void_PTR_COMMA_unsigned_intCOMMA_unsigned_int_RPAREN(xRekey);

  native_self->xRekey = native_xRekey;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xTruncate_reader */
/* sha: ef043bb2aff020b9e2ade3dabc60b5f65b0f79b2f62d162435ea7c31afee2041 */
#if BIND_Sqlite3PcacheMethods_xTruncate_FIELD_READER
/* get_xTruncate
 *
 * Return Type: void (*)(sqlite3_pcache *, unsigned int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_get_xTruncate(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);

  void (*)(sqlite3_pcache *, unsigned int) native_xTruncate = native_self->xTruncate;

  mrb_value xTruncate = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_int_RPAREN(mrb, native_xTruncate);

  return xTruncate;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xTruncate_writer */
/* sha: 041c78aacaf9ac650bc436baf74787a5b4fd4c14580b5d7d81ec6796e379ded3 */
#if BIND_Sqlite3PcacheMethods_xTruncate_FIELD_WRITER
/* set_xTruncate
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *, unsigned int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xTruncate(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);
  mrb_value xTruncate;

  mrb_get_args(mrb, "o", &xTruncate);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_int_RPAREN(xTruncate);

  void (*native_xTruncate)(sqlite3_pcache *, unsigned int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_int_RPAREN(xTruncate);

  native_self->xTruncate = native_xTruncate;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xDestroy_reader */
/* sha: fbb35d98353aac6eff95dd919d8eae25fb40c906dd8b27638a018b118315c031 */
#if BIND_Sqlite3PcacheMethods_xDestroy_FIELD_READER
/* get_xDestroy
 *
 * Return Type: void (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_get_xDestroy(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);

  void (*)(sqlite3_pcache *) native_xDestroy = native_self->xDestroy;

  mrb_value xDestroy = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(mrb, native_xDestroy);

  return xDestroy;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xDestroy_writer */
/* sha: b086e45ba2f8dc5b6d6c37766f0bed5d82cc7973150da53fb0d1879570293436 */
#if BIND_Sqlite3PcacheMethods_xDestroy_FIELD_WRITER
/* set_xDestroy
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xDestroy(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);
  mrb_value xDestroy;

  mrb_get_args(mrb, "o", &xDestroy);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(xDestroy);

  void (*native_xDestroy)(sqlite3_pcache *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(xDestroy);

  native_self->xDestroy = native_xDestroy;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3PcacheMethods_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3PcacheMethods::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::class_definition */
/* sha: 73d9e72d74eb9053c4e175c70215b74e651f28dff3508fbaa9c7d4a7464c5a68 */
  struct RClass* Sqlite3PcacheMethods_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3PcacheMethods", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3PcacheMethods_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::class_method_definitions */
/* sha: 3476ecb2905edde2ec285b59f1b8b984ecf37590ad7910d685a5a00fc17828b4 */
#if BIND_Sqlite3PcacheMethods_INITIALIZE
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "initialize", mrb_SQLite_Sqlite3PcacheMethods_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::attr_definitions */
/* sha: 4276e8767dc560dc88ae44e092b035e04fa4b530ef9bada49973a871e065aa41 */
  /*
   * Fields
   */
#if BIND_Sqlite3PcacheMethods_pArg_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "pArg", mrb_SQLite_Sqlite3PcacheMethods_get_pArg, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods_pArg_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "pArg=", mrb_SQLite_Sqlite3PcacheMethods_set_pArg, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xInit_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xInit", mrb_SQLite_Sqlite3PcacheMethods_get_xInit, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xInit_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xInit=", mrb_SQLite_Sqlite3PcacheMethods_set_xInit, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xShutdown_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xShutdown", mrb_SQLite_Sqlite3PcacheMethods_get_xShutdown, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xShutdown_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xShutdown=", mrb_SQLite_Sqlite3PcacheMethods_set_xShutdown, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xCreate_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xCreate", mrb_SQLite_Sqlite3PcacheMethods_get_xCreate, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xCreate_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xCreate=", mrb_SQLite_Sqlite3PcacheMethods_set_xCreate, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xCachesize_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xCachesize", mrb_SQLite_Sqlite3PcacheMethods_get_xCachesize, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xCachesize_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xCachesize=", mrb_SQLite_Sqlite3PcacheMethods_set_xCachesize, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xPagecount_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xPagecount", mrb_SQLite_Sqlite3PcacheMethods_get_xPagecount, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xPagecount_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xPagecount=", mrb_SQLite_Sqlite3PcacheMethods_set_xPagecount, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xFetch_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xFetch", mrb_SQLite_Sqlite3PcacheMethods_get_xFetch, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xFetch_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xFetch=", mrb_SQLite_Sqlite3PcacheMethods_set_xFetch, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xUnpin_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xUnpin", mrb_SQLite_Sqlite3PcacheMethods_get_xUnpin, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xUnpin_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xUnpin=", mrb_SQLite_Sqlite3PcacheMethods_set_xUnpin, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xRekey_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xRekey", mrb_SQLite_Sqlite3PcacheMethods_get_xRekey, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xRekey_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xRekey=", mrb_SQLite_Sqlite3PcacheMethods_set_xRekey, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xTruncate_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xTruncate", mrb_SQLite_Sqlite3PcacheMethods_get_xTruncate, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xTruncate_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xTruncate=", mrb_SQLite_Sqlite3PcacheMethods_set_xTruncate, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xDestroy_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xDestroy", mrb_SQLite_Sqlite3PcacheMethods_get_xDestroy, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods_xDestroy_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods_class, "xDestroy=", mrb_SQLite_Sqlite3PcacheMethods_set_xDestroy, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
