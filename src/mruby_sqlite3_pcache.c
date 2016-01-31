/*
 * sqlite3_pcache
 * Defined in file sqlite3.h @ line 6710
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Pcache_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Pcache::initialize */
/* sha: da2c0fd114aa6051fe4a326baafb0609a0df7ae5d5e6b682031473787702588d */
#if BIND_Sqlite3Pcache_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Pcache_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  sqlite3_pcache* native_object = (sqlite3_pcache*)calloc(1, sizeof(sqlite3_pcache));
  mruby_gift_sqlite3_pcache_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Pcache_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Pcache::class_definition */
/* sha: 34c9384d05bfb609bcb17c83697c1a76d00c8ac5a8f895c2b8c4791e00ee65d7 */
  struct RClass* Sqlite3Pcache_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Pcache", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Pcache_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Pcache::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Pcache::class_method_definitions */
/* sha: 3c4966012ff092c61668b7d0bb06d1e61f18ec1fd376bbe8b47717015425034d */
#if BIND_Sqlite3Pcache_INITIALIZE
  mrb_define_method(mrb, Sqlite3Pcache_class, "initialize", mrb_SQLite_Sqlite3Pcache_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Sqlite3Pcache::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
