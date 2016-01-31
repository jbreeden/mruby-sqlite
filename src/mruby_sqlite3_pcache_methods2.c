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
/* sha: 9727e3f1001d169bc287bf9d16baeacf1c8aa00bb4d3ccf03fe18782935794a9 */
#if BIND_Sqlite3PcacheMethods2_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  sqlite3_pcache_methods2* native_object = (sqlite3_pcache_methods2*)calloc(1, sizeof(sqlite3_pcache_methods2));
  mruby_gift_sqlite3_pcache_methods2_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::iVersion_reader */
/* sha: 3b74053b9de5b0aabf6a710a5db82a62fc3ce7a30224cb69541b3d35bc590ab5 */
#if BIND_Sqlite3PcacheMethods2_iVersion_FIELD_READER
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
/* sha: ebc02cefea7f589006a075fd8be355e224ae01fa013011373c2267ecd2782df1 */
#if BIND_Sqlite3PcacheMethods2_iVersion_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_iVersion(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_int native_iVersion;

  mrb_get_args(mrb, "i", &native_iVersion);

  native_self->iVersion = native_iVersion;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::pArg_reader */
/* sha: 902318c9b29671dc6760cacf2262ea9b61e673b13db198073ab76c3ed5ebad14 */
#if BIND_Sqlite3PcacheMethods2_pArg_FIELD_READER
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
/* sha: fcdefdde0fabcb65a6f429522e1d6dc463e25589e1aeb40b5dbc45c67f398972 */
#if BIND_Sqlite3PcacheMethods2_pArg_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_pArg(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value pArg;

  mrb_get_args(mrb, "o", &pArg);

  /* type checking */
  TODO_type_check_void_PTR(pArg);

  void * native_pArg = TODO_mruby_unbox_void_PTR(pArg);

  native_self->pArg = native_pArg;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xInit_reader */
/* sha: 00514165ee9617210a20595d84d0501e7c62d56a06a062411cad6c91be16bf7d */
#if BIND_Sqlite3PcacheMethods2_xInit_FIELD_READER
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
/* sha: 79777c3feb592f618167a753918f6a7eef0c08d31c0db906d5fdefa6fc6b0779 */
#if BIND_Sqlite3PcacheMethods2_xInit_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xInit(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xInit;

  mrb_get_args(mrb, "o", &xInit);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xInit);

  int (*native_xInit)(void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xInit);

  native_self->xInit = native_xInit;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xShutdown_reader */
/* sha: 0ca697c750a7063cb9351476d336369ee95997b7ecfb8c5d9e34b29b70906f34 */
#if BIND_Sqlite3PcacheMethods2_xShutdown_FIELD_READER
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
/* sha: c53d318061f5e33f90bfcd61df48c3ebda92f3534d6cb6afbcdf2516cb2fec2e */
#if BIND_Sqlite3PcacheMethods2_xShutdown_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xShutdown(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xShutdown;

  mrb_get_args(mrb, "o", &xShutdown);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xShutdown);

  void (*native_xShutdown)(void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(xShutdown);

  native_self->xShutdown = native_xShutdown;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xCreate_reader */
/* sha: 2a6823e6536a29dad97b229e90c1270f17836e55d1534e0245911a12e0248c21 */
#if BIND_Sqlite3PcacheMethods2_xCreate_FIELD_READER
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
/* sha: 86a4ba52601f92f5ad476101e26ce70cdd6172356acc62a5d960922bf1c23f8c */
#if BIND_Sqlite3PcacheMethods2_xCreate_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xCreate(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xCreate;

  mrb_get_args(mrb, "o", &xCreate);

  /* type checking */
  TODO_type_check_sqlite3_pcache_PTR_LPAREN_PTR_RPAREN_LPAREN_intCOMMA_intCOMMA_int_RPAREN(xCreate);

  sqlite3_pcache *(*native_xCreate)(int, int, int) = TODO_mruby_unbox_sqlite3_pcache_PTR_LPAREN_PTR_RPAREN_LPAREN_intCOMMA_intCOMMA_int_RPAREN(xCreate);

  native_self->xCreate = native_xCreate;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xCachesize_reader */
/* sha: cc1238b2a9208f14fea721eb93983047946695329af19a3da9743630e462c445 */
#if BIND_Sqlite3PcacheMethods2_xCachesize_FIELD_READER
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
/* sha: 64fc1e7ea44575c57b25a71c6c4902dc9ce1030f73d850ec87638d8d22d98b67 */
#if BIND_Sqlite3PcacheMethods2_xCachesize_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xCachesize(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xCachesize;

  mrb_get_args(mrb, "o", &xCachesize);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_int_RPAREN(xCachesize);

  void (*native_xCachesize)(sqlite3_pcache *, int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_int_RPAREN(xCachesize);

  native_self->xCachesize = native_xCachesize;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xPagecount_reader */
/* sha: 4e6432d1afecadbfdf121960095e4cc0f7460b56121a27e642dc39496e716a46 */
#if BIND_Sqlite3PcacheMethods2_xPagecount_FIELD_READER
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
/* sha: fee9d8cdf28c8e6f2d3a06c0a70c328ea714d03b3c229002282f3106ad2bfa1f */
#if BIND_Sqlite3PcacheMethods2_xPagecount_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xPagecount(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xPagecount;

  mrb_get_args(mrb, "o", &xPagecount);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(xPagecount);

  int (*native_xPagecount)(sqlite3_pcache *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(xPagecount);

  native_self->xPagecount = native_xPagecount;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xFetch_reader */
/* sha: 1b82ffa99199b6af66a8bb93d0a29d699ac44bf359f5212e2af4911057f3c279 */
#if BIND_Sqlite3PcacheMethods2_xFetch_FIELD_READER
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
/* sha: 8e228f788d9fa1c7b2335cebd150a2cdf3fd4ef2236a92ba8c17a7091b485d81 */
#if BIND_Sqlite3PcacheMethods2_xFetch_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xFetch(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xFetch;

  mrb_get_args(mrb, "o", &xFetch);

  /* type checking */
  TODO_type_check_sqlite3_pcache_page_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_intCOMMA_int_RPAREN(xFetch);

  sqlite3_pcache_page *(*native_xFetch)(sqlite3_pcache *, unsigned int, int) = TODO_mruby_unbox_sqlite3_pcache_page_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_intCOMMA_int_RPAREN(xFetch);

  native_self->xFetch = native_xFetch;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xUnpin_reader */
/* sha: 11e7f88f59c60346aaea1939a70b8aca9bbeb423ad3d1c9d26366d00d74e5a50 */
#if BIND_Sqlite3PcacheMethods2_xUnpin_FIELD_READER
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
/* sha: 16ec7efc368c0f0225a8f0d6099c4d4e6c5b5614232087de708e6cb18a620649 */
#if BIND_Sqlite3PcacheMethods2_xUnpin_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xUnpin(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xUnpin;

  mrb_get_args(mrb, "o", &xUnpin);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_sqlite3_pcache_page_PTR_COMMA_int_RPAREN(xUnpin);

  void (*native_xUnpin)(sqlite3_pcache *, sqlite3_pcache_page *, int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_sqlite3_pcache_page_PTR_COMMA_int_RPAREN(xUnpin);

  native_self->xUnpin = native_xUnpin;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xRekey_reader */
/* sha: a4ad57358692e35d7e420060c60aa4d62de40998cba7ddd9c803330d3c7b87b9 */
#if BIND_Sqlite3PcacheMethods2_xRekey_FIELD_READER
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
/* sha: 8a3ce2c2def37462df1873d49312a64fb9d390baa3841b768a28ce4e03d341db */
#if BIND_Sqlite3PcacheMethods2_xRekey_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xRekey(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xRekey;

  mrb_get_args(mrb, "o", &xRekey);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_sqlite3_pcache_page_PTR_COMMA_unsigned_intCOMMA_unsigned_int_RPAREN(xRekey);

  void (*native_xRekey)(sqlite3_pcache *, sqlite3_pcache_page *, unsigned int, unsigned int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_sqlite3_pcache_page_PTR_COMMA_unsigned_intCOMMA_unsigned_int_RPAREN(xRekey);

  native_self->xRekey = native_xRekey;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xTruncate_reader */
/* sha: 7f0bac18534c3628821b3c54af44d37562fdbda29c23b6b5a29b41b9b9593a6b */
#if BIND_Sqlite3PcacheMethods2_xTruncate_FIELD_READER
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
/* sha: 3864ec08ac1d3ee2f7283aade045a0a67c0d2b02604d426f9891eb99000fd6ba */
#if BIND_Sqlite3PcacheMethods2_xTruncate_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xTruncate(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xTruncate;

  mrb_get_args(mrb, "o", &xTruncate);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_int_RPAREN(xTruncate);

  void (*native_xTruncate)(sqlite3_pcache *, unsigned int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_int_RPAREN(xTruncate);

  native_self->xTruncate = native_xTruncate;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xDestroy_reader */
/* sha: 7bfdfdf1e17bcb8e78349db41e26a9a1c2d4c28ae6e4e4fc210a29fd8720e06e */
#if BIND_Sqlite3PcacheMethods2_xDestroy_FIELD_READER
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
/* sha: 1714f767a4b61d35f71db86fb933641fb0cd2fe05f080e9db2fb8b936d8cdf87 */
#if BIND_Sqlite3PcacheMethods2_xDestroy_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xDestroy(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xDestroy;

  mrb_get_args(mrb, "o", &xDestroy);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(xDestroy);

  void (*native_xDestroy)(sqlite3_pcache *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(xDestroy);

  native_self->xDestroy = native_xDestroy;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::xShrink_reader */
/* sha: db94a2f8a10eb6f36e04f80fba5294da9bed427a66dc09fb250c49a81956a7c9 */
#if BIND_Sqlite3PcacheMethods2_xShrink_FIELD_READER
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
/* sha: 7ce54f286e888e1ab8a9d8a1ac3855fef1cb552ae46c17e8cf1efe85696fe1b1 */
#if BIND_Sqlite3PcacheMethods2_xShrink_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods2_set_xShrink(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods2 * native_self = mruby_unbox_sqlite3_pcache_methods2(self);
  mrb_value xShrink;

  mrb_get_args(mrb, "o", &xShrink);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(xShrink);

  void (*native_xShrink)(sqlite3_pcache *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_RPAREN(xShrink);

  native_self->xShrink = native_xShrink;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3PcacheMethods2_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

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


/* MRUBY_BINDING: Sqlite3PcacheMethods2::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
