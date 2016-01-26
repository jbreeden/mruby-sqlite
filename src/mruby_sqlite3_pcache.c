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
/* sha: c32ecc7645945d47bcb9abed1dd728be6b66ee16bfb17b50805bfdfb994d5ca8 */
#if BIND_Sqlite3Pcache_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Pcache_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  sqlite3_pcache* native_object = (sqlite3_pcache*)calloc(1, sizeof(sqlite3_pcache));
  mruby_gift_sqlite3_pcache_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Pcache_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3Pcache::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
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

/* MRUBY_BINDING: Sqlite3Pcache::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Pcache::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Pcache::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Pcache::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Pcache::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
