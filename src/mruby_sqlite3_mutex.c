/*
 * sqlite3_mutex
 * Defined in file sqlite3.h @ line 1008
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Mutex_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Mutex::initialize */
/* sha: 818ca45c417535559a111a18277bb720eb5100897ca28b487fa58a9a34ee8c09 */
#if BIND_Sqlite3Mutex_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Mutex_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  sqlite3_mutex* native_object = (sqlite3_mutex*)calloc(1, sizeof(sqlite3_mutex));
  mruby_gift_sqlite3_mutex_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Mutex_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Mutex::class_definition */
/* sha: 2490c1d7468f2cec0f603085127a504ecec7f2925024e2f033bc71ae281ab8c1 */
  struct RClass* Sqlite3Mutex_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Mutex", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Mutex_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Mutex::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Mutex::class_method_definitions */
/* sha: 5a60b52fd9627ad898a5e9cafc9edf67abd88cb73cc3dd2fb95cc1deca99c4e0 */
#if BIND_Sqlite3Mutex_INITIALIZE
  mrb_define_method(mrb, Sqlite3Mutex_class, "initialize", mrb_SQLite_Sqlite3Mutex_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Sqlite3Mutex::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
