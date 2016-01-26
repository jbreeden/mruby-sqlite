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
/* sha: 89afaff2e56a1b04a6f279895269fce50f302f066b110801a35ec4244d9db438 */
#if BIND_Sqlite3Backup_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Backup_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  sqlite3_backup* native_object = (sqlite3_backup*)calloc(1, sizeof(sqlite3_backup));
  mruby_gift_sqlite3_backup_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Backup_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3Backup::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
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

/* MRUBY_BINDING: Sqlite3Backup::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Backup::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Backup::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Backup::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Backup::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
