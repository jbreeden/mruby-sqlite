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
/* sha: 541ea75a71d0d2927678580f6151df5a43ee8433f7295e88361c7549725dbcd3 */
#if BIND_Sqlite3PcacheMethods_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  sqlite3_pcache_methods* native_object = (sqlite3_pcache_methods*)calloc(1, sizeof(sqlite3_pcache_methods));
  mruby_gift_sqlite3_pcache_methods_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3PcacheMethods::pArg_reader */
/* sha: cfaa2582c49f54a0b363dbede629a7bf7e2ae5478fa0c886c46b3dc660cf840a */
#if BIND_Sqlite3PcacheMethods_pArg_FIELD_READER
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
/* sha: b90b8f85b3c3480dd5269c9d1027737bc8ba69e5f97838bd1bee242363a17500 */
#if BIND_Sqlite3PcacheMethods_pArg_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_pArg(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);
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

/* MRUBY_BINDING: Sqlite3PcacheMethods::xInit_reader */
/* sha: 2baeac3bf88823a61b1276f8e4ef2305d4b6d450f2ffb43b10292eded2aed255 */
#if BIND_Sqlite3PcacheMethods_xInit_FIELD_READER
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
/* sha: 579fbde50754d872b1d69799fcb6344f9141ede5e7d39b99bce08382408ac398 */
#if BIND_Sqlite3PcacheMethods_xInit_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xInit(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);
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

/* MRUBY_BINDING: Sqlite3PcacheMethods::xShutdown_reader */
/* sha: 3b2ed9effeeb038dbd65ea1207869ec9a8dbef8b2226b4d916e3dfd67c5bca75 */
#if BIND_Sqlite3PcacheMethods_xShutdown_FIELD_READER
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
/* sha: b972d5a660ac8b2f215b127660ab0bf045c7a0927884857bb11e0b8525a58182 */
#if BIND_Sqlite3PcacheMethods_xShutdown_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xShutdown(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);
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

/* MRUBY_BINDING: Sqlite3PcacheMethods::xCreate_reader */
/* sha: edc564368bc5b554be6581c793b3b0182f6a361b6597299599c587d59189b379 */
#if BIND_Sqlite3PcacheMethods_xCreate_FIELD_READER
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
/* sha: 9648de95daace4fdc2acdb695e72b8410e21bd6b2df488323d1990329c31a4d2 */
#if BIND_Sqlite3PcacheMethods_xCreate_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xCreate(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);
  mrb_value xCreate;

  mrb_get_args(mrb, "o", &xCreate);

  /* type checking */
  TODO_type_check_sqlite3_pcache_PTR_LPAREN_PTR_RPAREN_LPAREN_intCOMMA_int_RPAREN(xCreate);

  sqlite3_pcache *(*native_xCreate)(int, int) = TODO_mruby_unbox_sqlite3_pcache_PTR_LPAREN_PTR_RPAREN_LPAREN_intCOMMA_int_RPAREN(xCreate);

  native_self->xCreate = native_xCreate;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xCachesize_reader */
/* sha: 33e6e3471583a6ed635bb32945a4c1dd4209221024a9b1ec28e83cd9ed894ca8 */
#if BIND_Sqlite3PcacheMethods_xCachesize_FIELD_READER
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
/* sha: 5387e5d3fee3ea94bed5ea8ecd5bec10bb6f1d03a34217f9d751d20b3d17e892 */
#if BIND_Sqlite3PcacheMethods_xCachesize_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xCachesize(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);
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

/* MRUBY_BINDING: Sqlite3PcacheMethods::xPagecount_reader */
/* sha: 714fd74b2f50ef9e32515497571c50ff8cc661939786e944c039dc409414a55c */
#if BIND_Sqlite3PcacheMethods_xPagecount_FIELD_READER
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
/* sha: 408ae97808d33a20387074a37f86925babe25665f1fcbebcdd997e1ed63725e2 */
#if BIND_Sqlite3PcacheMethods_xPagecount_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xPagecount(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);
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

/* MRUBY_BINDING: Sqlite3PcacheMethods::xFetch_reader */
/* sha: 246652500f60507773f326347b057d4a7e8d3011dae86baea15379137c2d8d18 */
#if BIND_Sqlite3PcacheMethods_xFetch_FIELD_READER
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
/* sha: 4f3dc7d39c97e6fce18fcee519e9d27ab87c70322ccf83fe6d808a76ff3d5d14 */
#if BIND_Sqlite3PcacheMethods_xFetch_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xFetch(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);
  mrb_value xFetch;

  mrb_get_args(mrb, "o", &xFetch);

  /* type checking */
  TODO_type_check_void_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_intCOMMA_int_RPAREN(xFetch);

  void *(*native_xFetch)(sqlite3_pcache *, unsigned int, int) = TODO_mruby_unbox_void_PTR_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_unsigned_intCOMMA_int_RPAREN(xFetch);

  native_self->xFetch = native_xFetch;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xUnpin_reader */
/* sha: 0bc640871cd387e6ebfd7b08c603cc62bdc1d453916a84492e2ca2c7dfcb034f */
#if BIND_Sqlite3PcacheMethods_xUnpin_FIELD_READER
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
/* sha: ebc5a598ba8a5f3da8137c5fa947bc9b2b705bd81b2791542557fce2bba1c168 */
#if BIND_Sqlite3PcacheMethods_xUnpin_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xUnpin(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);
  mrb_value xUnpin;

  mrb_get_args(mrb, "o", &xUnpin);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_void_PTR_COMMA_int_RPAREN(xUnpin);

  void (*native_xUnpin)(sqlite3_pcache *, void *, int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_void_PTR_COMMA_int_RPAREN(xUnpin);

  native_self->xUnpin = native_xUnpin;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xRekey_reader */
/* sha: 7efe2bbf35377ad0cf4371c3b59d7f99a998658452bf00dff0663946a0a9b9ff */
#if BIND_Sqlite3PcacheMethods_xRekey_FIELD_READER
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
/* sha: 06e141782006638a23102cda433186aa5ef8de5ee58bbc3136d651984b98dd59 */
#if BIND_Sqlite3PcacheMethods_xRekey_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xRekey(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);
  mrb_value xRekey;

  mrb_get_args(mrb, "o", &xRekey);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_void_PTR_COMMA_unsigned_intCOMMA_unsigned_int_RPAREN(xRekey);

  void (*native_xRekey)(sqlite3_pcache *, void *, unsigned int, unsigned int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_sqlite3_pcache_PTR_COMMA_void_PTR_COMMA_unsigned_intCOMMA_unsigned_int_RPAREN(xRekey);

  native_self->xRekey = native_xRekey;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::xTruncate_reader */
/* sha: 047992a72824bc04562ec0457afe3cacc7463526f1899d4109bb59e3b2b538aa */
#if BIND_Sqlite3PcacheMethods_xTruncate_FIELD_READER
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
/* sha: ec1736a02dd40e700918a280b80aa494cb0cb4e5de583cad2cb36343054c82a5 */
#if BIND_Sqlite3PcacheMethods_xTruncate_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xTruncate(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);
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

/* MRUBY_BINDING: Sqlite3PcacheMethods::xDestroy_reader */
/* sha: 5627664985b8e875207fff73d3b47fb75d441cae2b693e042ce15dd4888e4967 */
#if BIND_Sqlite3PcacheMethods_xDestroy_FIELD_READER
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
/* sha: 663a57b6929d012761bb769049a1733f2eb4372101ef0b6713a12ec5be706635 */
#if BIND_Sqlite3PcacheMethods_xDestroy_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3PcacheMethods_set_xDestroy(mrb_state* mrb, mrb_value self) {
  sqlite3_pcache_methods * native_self = mruby_unbox_sqlite3_pcache_methods(self);
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


void mrb_SQLite_Sqlite3PcacheMethods_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

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


/* MRUBY_BINDING: Sqlite3PcacheMethods::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
