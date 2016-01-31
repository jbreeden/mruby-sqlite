/*
 * sqlite3_backup
 * Defined in file sqlite3.h @ line 6936
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Backup_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Backup::initialize */
/* sha: fb05514489cff4a91513e23474dca3f9ca0589212f90bddb37a3b789be34b335 */
#if BIND_Sqlite3Backup_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Backup_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  sqlite3_backup* native_object = (sqlite3_backup*)calloc(1, sizeof(sqlite3_backup));
  mruby_gift_sqlite3_backup_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Backup_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Backup::class_definition */
/* sha: 3c0666d9bed53ee1263d8348635d5da28ee80a9a33ad1c56436e0345cec7b68b */
  struct RClass* Sqlite3Backup_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Backup", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Backup_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Backup::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Backup::class_method_definitions */
/* sha: 50ead7548601a1a7d5332cb3f2e0d9e0485dff1c848bbb4838352d938ed4bdb7 */
#if BIND_Sqlite3Backup_INITIALIZE
  mrb_define_method(mrb, Sqlite3Backup_class, "initialize", mrb_SQLite_Sqlite3Backup_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */



/* MRUBY_BINDING: Sqlite3Backup::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
