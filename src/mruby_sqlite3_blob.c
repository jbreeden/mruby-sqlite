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
/* sha: 585958d7a8bcd7c77ddeb42d196015923c51bc731a328c3dcc8c026c5a9aac0c */
#if BIND_Sqlite3Blob_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Blob_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  sqlite3_blob* native_object = (sqlite3_blob*)calloc(1, sizeof(sqlite3_blob));
  mruby_gift_sqlite3_blob_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Blob_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

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



/* MRUBY_BINDING: Sqlite3Blob::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
