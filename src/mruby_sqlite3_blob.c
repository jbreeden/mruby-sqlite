/*
 * sqlite3_blob
 * Defined in file sqlite3.h @ line 5767
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Blob_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Blob::initialize */
/* sha: d5971a489917e856c10f84022700f59166a485add247e02797f358543e40b60d */
#if BIND_Sqlite3Blob_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Blob_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  sqlite3_blob* native_object = (sqlite3_blob*)calloc(1, sizeof(sqlite3_blob));
  mruby_gift_sqlite3_blob_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Blob_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3Blob::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Blob::class_definition */
/* sha: 07e3a964c870da0c48e5402aa55b419812adc98f910fb9c765a99bc3d44985a7 */
  struct RClass* Sqlite3Blob_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Blob", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Blob_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Blob::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Blob::class_method_definitions */
/* sha: b23b222ed103242aaed36da41c814ddd4cbfe58a642a34870e8005076c05c087 */
#if BIND_Sqlite3Blob_INITIALIZE
  mrb_define_method(mrb, Sqlite3Blob_class, "initialize", mrb_SQLite_Sqlite3Blob_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Blob::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Blob::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Blob::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Blob::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Blob::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
