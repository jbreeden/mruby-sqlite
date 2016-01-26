/*
 * sqlite3_pcache_methods2
 * Defined in file sqlite3.h @ line 6887
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3PcacheMethods2_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::initialize */
/* sha: bf1919c95d6b5223ff6488e5ba39d7270e3830b5f21dcf95ee5d719bce4d618e */
#if BIND_Sqlite3PcacheMethods2_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  sqlite3_pcache_methods2* native_object = (sqlite3_pcache_methods2*)calloc(1, sizeof(sqlite3_pcache_methods2));
  mruby_gift_sqlite3_pcache_methods2_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::iVersion_reader */
/* sha: 3423f492a7546359f752a4d0d321860dfb8a744488d32e1c715f8cf142e797a8 */
#if BIND_Sqlite3PcacheMethods2_iVersion_FIELD_READER
/* get_iVersion
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_iVersion(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  int native_iVersion = native_self->iVersion;

  mrb_value iVersion = mrb_fixnum_value(native_iVersion);

  return iVersion;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::iVersion_writer */
/* sha: ede44a0643a22a34e10c6bca9806e57ffd38aba88f75d5e5fd75021ce2777c20 */
#if BIND_Sqlite3PcacheMethods2_iVersion_FIELD_WRITER
/* set_iVersion
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_iVersion(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_int native_iVersion;

  mrb_get_args(mrb, "i", &native_iVersion);

  native_self->iVersion = native_iVersion;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::pArg_reader */
/* sha: b20fe174fe900d293dfc2e007c3644dd1df5536615c2fb62eae60f5e1a553355 */
#if BIND_Sqlite3PcacheMethods2_pArg_FIELD_READER
/* get_pArg
 *
 * Return Type: void *
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_pArg(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  void * native_pArg = native_self->pArg;

  mrb_value pArg = TODO_mruby_box_void_PTR(mrb, native_pArg);

  return pArg;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::pArg_writer */
/* sha: fab38ecc2f04889faf356acffb21ba922201f109badb4e66f5973bf6ce2a2ebe */
#if BIND_Sqlite3PcacheMethods2_pArg_FIELD_WRITER
/* set_pArg
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_pArg(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
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

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xInit_reader */
/* sha: b20c5c39140e15c9ae6bd6632a6a356003de4f99fd90dd66bd52b97479063cb8 */
#if BIND_Sqlite3PcacheMethods2_xInit_FIELD_READER
/* get_xInit
 *
 * Return Type: int (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xInit(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  int (*)(void *) native_xInit = native_self->xInit;

  mrb_value xInit = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_xInit);

  return xInit;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xInit_writer */
/* sha: 285413152c7a895f1e1327ce9168b73b3d794b134495d25a037ac9bbf235048e */
#if BIND_Sqlite3PcacheMethods2_xInit_FIELD_WRITER
/* set_xInit
 *
 * Parameters:
 * - value: int (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xInit(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
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

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xShutdown_reader */
/* sha: de7a34cca7b67ac8754c26c4d99b304bbad4864e6c871aa09b2f2b6037c8ab7c */
#if BIND_Sqlite3PcacheMethods2_xShutdown_FIELD_READER
/* get_xShutdown
 *
 * Return Type: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xShutdown(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  void (*)(void *) native_xShutdown = native_self->xShutdown;

  mrb_value xShutdown = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(mrb, native_xShutdown);

  return xShutdown;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xShutdown_writer */
/* sha: d6e6a42cd0779e89f8356b9a2f03c407b2c10bcac91850a9d627ec081f0e1043 */
#if BIND_Sqlite3PcacheMethods2_xShutdown_FIELD_WRITER
/* set_xShutdown
 *
 * Parameters:
 * - value: void (*)(void *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xShutdown(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
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

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xCreate_reader */
/* sha: 3c37859229544e9436b3d88fcd1007958a1d135998d4bab5f9474635180a7e41 */
#if BIND_Sqlite3PcacheMethods2_xCreate_FIELD_READER
/* get_xCreate
 *
 * Return Type: sqlite3_pcache *(*)(int, int, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xCreate(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  sqlite3_pcache *(*)(int, int, int) native_xCreate = native_self->xCreate;

  mrb_value xCreate = TODO_mruby_box_sqlite3_pcache_PTR_LPAREN_PTR_RPAREN_LPAREN_intCOMMA_intCOMMA_int_RPAREN(mrb, native_xCreate);

  return xCreate;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xCreate_writer */
/* sha: ba1f4eb69d4e5fc1a9d22d16af04367565072b5b12746fff663baf713b096d2f */
#if BIND_Sqlite3PcacheMethods2_xCreate_FIELD_WRITER
/* set_xCreate
 *
 * Parameters:
 * - value: sqlite3_pcache *(*)(int, int, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xCreate(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xCreate;

  mrb_get_args(mrb, "o", &xCreate);

  /* type checking */
  TODO_type_check_sqlite3_pcache_PTR_LPAREN_PTR_RPAREN_LPAREN_intCOMMA_intCOMMA_int_RPAREN(xCreate);

  sqlite3_pcache *(*native_xCreate)(int, int, int) = TODO_mruby_unbox_sqlite3_pcache_PTR_LPAREN_PTR_RPAREN_LPAREN_intCOMMA_intCOMMA_int_RPAREN(xCreate);

  native_self->xCreate = native_xCreate;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xCachesize_reader */
/* sha: 86ff6e51a6a277a9b371d56246f742e5640877daa1cba62871ace24434af7d82 */
#if BIND_Sqlite3PcacheMethods2_xCachesize_FIELD_READER
/* get_xCachesize
 *
 * Return Type: void (*)(sqlite3_pcache *, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xCachesize(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  void (*)(sqlite3_pcache *, int) native_xCachesize = native_self->xCachesize;

  mrb_value xCachesize = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_int_RPAREN(mrb, native_xCachesize);

  return xCachesize;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xCachesize_writer */
/* sha: 4d99fe4426959197f5306f18db169b9b943407e3a7afe1e68f1838d167930d94 */
#if BIND_Sqlite3PcacheMethods2_xCachesize_FIELD_WRITER
/* set_xCachesize
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xCachesize(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
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

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xPagecount_reader */
/* sha: 502dba74f10b68aa6e4bd50c83a2737333f6097cc948dc3f1c54e40defa68d3c */
#if BIND_Sqlite3PcacheMethods2_xPagecount_FIELD_READER
/* get_xPagecount
 *
 * Return Type: int (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xPagecount(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  int (*)(sqlite3_pcache *) native_xPagecount = native_self->xPagecount;

  mrb_value xPagecount = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(mrb, native_xPagecount);

  return xPagecount;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xPagecount_writer */
/* sha: 57eaa9b3fbc9e9542c7966ec50482c720f760b802ee582cee5cffcd0dd90ee42 */
#if BIND_Sqlite3PcacheMethods2_xPagecount_FIELD_WRITER
/* set_xPagecount
 *
 * Parameters:
 * - value: int (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xPagecount(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
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

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xFetch_reader */
/* sha: 57ed3ac78c42b8afc855d0093f0c6b4b291a121031fa475517154d379d69d289 */
#if BIND_Sqlite3PcacheMethods2_xFetch_FIELD_READER
/* get_xFetch
 *
 * Return Type: sqlite3_pcache_page *(*)(sqlite3_pcache *, unsigned int, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xFetch(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  sqlite3_pcache_page *(*)(sqlite3_pcache *, unsigned int, int) native_xFetch = native_self->xFetch;

  mrb_value xFetch = TODO_mruby_box_sqlite3_pcache_page_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_intCOMMA_int_RPAREN(mrb, native_xFetch);

  return xFetch;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xFetch_writer */
/* sha: 910b66cd69095b1b30fea5163895b5d00d3432754728316adc00bdd2504a03e3 */
#if BIND_Sqlite3PcacheMethods2_xFetch_FIELD_WRITER
/* set_xFetch
 *
 * Parameters:
 * - value: sqlite3_pcache_page *(*)(sqlite3_pcache *, unsigned int, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xFetch(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xFetch;

  mrb_get_args(mrb, "o", &xFetch);

  /* type checking */
  TODO_type_check_sqlite3_pcache_page_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_intCOMMA_int_RPAREN(xFetch);

  sqlite3_pcache_page *(*native_xFetch)(sqlite3_pcache *, unsigned int, int) = TODO_mruby_unbox_sqlite3_pcache_page_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_intCOMMA_int_RPAREN(xFetch);

  native_self->xFetch = native_xFetch;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xUnpin_reader */
/* sha: 8163ded7dbcfd080dfbb4edc7616907b9a472a8448f0ad5ac93e01aea82056d5 */
#if BIND_Sqlite3PcacheMethods2_xUnpin_FIELD_READER
/* get_xUnpin
 *
 * Return Type: void (*)(sqlite3_pcache *, sqlite3_pcache_page *, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xUnpin(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  void (*)(sqlite3_pcache *, sqlite3_pcache_page *, int) native_xUnpin = native_self->xUnpin;

  mrb_value xUnpin = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_sqlite3_pcache_page_PTR_COMMA_int_RPAREN(mrb, native_xUnpin);

  return xUnpin;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xUnpin_writer */
/* sha: c8fe5bc77b4586cf1372e6046f9693a20b4092a8c8d9a2ba3482617b7830900f */
#if BIND_Sqlite3PcacheMethods2_xUnpin_FIELD_WRITER
/* set_xUnpin
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *, sqlite3_pcache_page *, int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xUnpin(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xUnpin;

  mrb_get_args(mrb, "o", &xUnpin);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_sqlite3_pcache_page_PTR_COMMA_int_RPAREN(xUnpin);

  void (*native_xUnpin)(sqlite3_pcache *, sqlite3_pcache_page *, int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_sqlite3_pcache_page_PTR_COMMA_int_RPAREN(xUnpin);

  native_self->xUnpin = native_xUnpin;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xRekey_reader */
/* sha: 8e1924fdb68d9fdd871c282eee6a0e478f7cd9a2df2ac15bd4ae8a2ca3b7d719 */
#if BIND_Sqlite3PcacheMethods2_xRekey_FIELD_READER
/* get_xRekey
 *
 * Return Type: void (*)(sqlite3_pcache *, sqlite3_pcache_page *, unsigned int, unsigned int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xRekey(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  void (*)(sqlite3_pcache *, sqlite3_pcache_page *, unsigned int, unsigned int) native_xRekey = native_self->xRekey;

  mrb_value xRekey = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_sqlite3_pcache_page_PTR_COMMA_unsigned_intCOMMA_unsigned_int_RPAREN(mrb, native_xRekey);

  return xRekey;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xRekey_writer */
/* sha: 1ee549525d8998604e7850a2625414716f2acaee98a3d3f2ec449dee7618e7c3 */
#if BIND_Sqlite3PcacheMethods2_xRekey_FIELD_WRITER
/* set_xRekey
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *, sqlite3_pcache_page *, unsigned int, unsigned int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xRekey(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xRekey;

  mrb_get_args(mrb, "o", &xRekey);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_sqlite3_pcache_page_PTR_COMMA_unsigned_intCOMMA_unsigned_int_RPAREN(xRekey);

  void (*native_xRekey)(sqlite3_pcache *, sqlite3_pcache_page *, unsigned int, unsigned int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_sqlite3_pcache_page_PTR_COMMA_unsigned_intCOMMA_unsigned_int_RPAREN(xRekey);

  native_self->xRekey = native_xRekey;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xTruncate_reader */
/* sha: dfb8b9a053c2d8b5352b0288bc8a900a0a656309632cd3804f23e92f5a0820ad */
#if BIND_Sqlite3PcacheMethods2_xTruncate_FIELD_READER
/* get_xTruncate
 *
 * Return Type: void (*)(sqlite3_pcache *, unsigned int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xTruncate(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  void (*)(sqlite3_pcache *, unsigned int) native_xTruncate = native_self->xTruncate;

  mrb_value xTruncate = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_int_RPAREN(mrb, native_xTruncate);

  return xTruncate;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xTruncate_writer */
/* sha: cbe089d876aceb85808751dc6a3025aa8a9a67376f6bff9f99b77457f352530a */
#if BIND_Sqlite3PcacheMethods2_xTruncate_FIELD_WRITER
/* set_xTruncate
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *, unsigned int)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xTruncate(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
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

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xDestroy_reader */
/* sha: adb1b035b341deeb6044c4ced90dd9cf0c189ed1c50701e01c7028db6e9dc3a4 */
#if BIND_Sqlite3PcacheMethods2_xDestroy_FIELD_READER
/* get_xDestroy
 *
 * Return Type: void (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xDestroy(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  void (*)(sqlite3_pcache *) native_xDestroy = native_self->xDestroy;

  mrb_value xDestroy = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(mrb, native_xDestroy);

  return xDestroy;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xDestroy_writer */
/* sha: 297723078495937e8f17e1b6485d99b0e641aa96553c699bce3f8e910ff4004b */
#if BIND_Sqlite3PcacheMethods2_xDestroy_FIELD_WRITER
/* set_xDestroy
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xDestroy(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
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

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xShrink_reader */
/* sha: 8ea39a41e0d27be9c740b77cc618c32b87c9dc3961b57ee9e991dbb8048db81e */
#if BIND_Sqlite3PcacheMethods2_xShrink_FIELD_READER
/* get_xShrink
 *
 * Return Type: void (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_get_xShrink(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);

  void (*)(sqlite3_pcache *) native_xShrink = native_self->xShrink;

  mrb_value xShrink = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(mrb, native_xShrink);

  return xShrink;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xShrink_writer */
/* sha: 74bdd3c16076a6f2def8525f7edede4923dd068193de2316d7fb7d075b7af5fd */
#if BIND_Sqlite3PcacheMethods2_xShrink_FIELD_WRITER
/* set_xShrink
 *
 * Parameters:
 * - value: void (*)(sqlite3_pcache *)
 */
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xShrink(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xShrink;

  mrb_get_args(mrb, "o", &xShrink);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(xShrink);

  void (*native_xShrink)(sqlite3_pcache *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(xShrink);

  native_self->xShrink = native_xShrink;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3PcacheMethods2_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3PcacheMethods2::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::class_definition */
/* sha: f804b9dccfafdda1e10e181b4cbb2240ed879f7d81e90cc00a4458e90f5b0c97 */
  struct RClass* Sqlite3PcacheMethods2_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3PcacheMethods2", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3PcacheMethods2_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::class_method_definitions */
/* sha: 4174a3b9bf61fa49b12093f94c3bb08c8cbeced49fe18cae0c0e2e7bdae6ed4b */
#if BIND_Sqlite3PcacheMethods2_INITIALIZE
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "initialize", mrb_SQLite_Sqlite3PcacheMethods2_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::attr_definitions */
/* sha: 17939ccae58d9b0d5f241c77674be16d65c84604993f73325bbfd194dfce4eb0 */
  /*
   * Fields
   */
#if BIND_Sqlite3PcacheMethods2_iVersion_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "iVersion", mrb_SQLite_Sqlite3PcacheMethods2_get_iVersion, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_iVersion_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "iVersion=", mrb_SQLite_Sqlite3PcacheMethods2_set_iVersion, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_pArg_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "pArg", mrb_SQLite_Sqlite3PcacheMethods2_get_pArg, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_pArg_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "pArg=", mrb_SQLite_Sqlite3PcacheMethods2_set_pArg, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xInit_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xInit", mrb_SQLite_Sqlite3PcacheMethods2_get_xInit, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xInit_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xInit=", mrb_SQLite_Sqlite3PcacheMethods2_set_xInit, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xShutdown_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xShutdown", mrb_SQLite_Sqlite3PcacheMethods2_get_xShutdown, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xShutdown_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xShutdown=", mrb_SQLite_Sqlite3PcacheMethods2_set_xShutdown, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xCreate_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xCreate", mrb_SQLite_Sqlite3PcacheMethods2_get_xCreate, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xCreate_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xCreate=", mrb_SQLite_Sqlite3PcacheMethods2_set_xCreate, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xCachesize_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xCachesize", mrb_SQLite_Sqlite3PcacheMethods2_get_xCachesize, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xCachesize_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xCachesize=", mrb_SQLite_Sqlite3PcacheMethods2_set_xCachesize, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xPagecount_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xPagecount", mrb_SQLite_Sqlite3PcacheMethods2_get_xPagecount, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xPagecount_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xPagecount=", mrb_SQLite_Sqlite3PcacheMethods2_set_xPagecount, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xFetch_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xFetch", mrb_SQLite_Sqlite3PcacheMethods2_get_xFetch, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xFetch_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xFetch=", mrb_SQLite_Sqlite3PcacheMethods2_set_xFetch, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xUnpin_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xUnpin", mrb_SQLite_Sqlite3PcacheMethods2_get_xUnpin, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xUnpin_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xUnpin=", mrb_SQLite_Sqlite3PcacheMethods2_set_xUnpin, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xRekey_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xRekey", mrb_SQLite_Sqlite3PcacheMethods2_get_xRekey, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xRekey_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xRekey=", mrb_SQLite_Sqlite3PcacheMethods2_set_xRekey, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xTruncate_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xTruncate", mrb_SQLite_Sqlite3PcacheMethods2_get_xTruncate, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xTruncate_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xTruncate=", mrb_SQLite_Sqlite3PcacheMethods2_set_xTruncate, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xDestroy_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xDestroy", mrb_SQLite_Sqlite3PcacheMethods2_get_xDestroy, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xDestroy_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xDestroy=", mrb_SQLite_Sqlite3PcacheMethods2_set_xDestroy, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xShrink_FIELD_READER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xShrink", mrb_SQLite_Sqlite3PcacheMethods2_get_xShrink, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3PcacheMethods2_xShrink_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3PcacheMethods2_class, "xShrink=", mrb_SQLite_Sqlite3PcacheMethods2_set_xShrink, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
