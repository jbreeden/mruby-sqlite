#ifndef MRUBY_SQLite_BOXING_HEADER
#define MRUBY_SQLite_BOXING_HEADER

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* Used to remove a ruby object's pointer to a native resource,
   so that no attempt is made to free it when the ruby object is GC'ed */
#define MRUBY_BOX_CLEAR(mrb_val) ((mruby_to_native_ref *)DATA_PTR(mrb_val))->obj = NULL;

/* MRUBY_BINDING_END */


/*
 * Boxing declarations
 * -------------------
 *
 * These declarations are enabled by the macros in mruby_SQLite_classes.h
 */

/*
* Extra wrapper over native pointer to indicate who owns this memory.
* Owner is mruby (it should be garage collected) or C (it shouldn't be).
*/
typedef struct mruby_to_native_ref_ {
  /* If true, indicates that the object should be freed when
   * mruby garbage collects the ruby object containing this pointer.
   * This is set to true when an object is boxed via the `giftwrap`
   * or `gift_{type}_ptr_set` functions.
   */
  unsigned char belongs_to_ruby;

  /* A pointer to the native object */
  void* obj;

  /* For the convenience of the binding writer,
   * the data pointer can be used to associate arbitrary
   * data with a reference to a C object.
   * 
   * Possible uses:
   * - A function pointer to invoke instead of `free` on GC.
   * - A pointer back to the RObject, to be accessed during GC.
   * - etc.
   */
  void* data;
} mruby_to_native_ref;

/* MRUBY_BINDING: Sqlite3::boxing_decls */
/* sha: e570162c1931ebd13409e2e99f343243ab2a4a4ded3d00143af2163183081349 */
#if BIND_Sqlite3_TYPE
mrb_value
mruby_box_sqlite3(mrb_state* mrb, sqlite3 *unboxed);

mrb_value
mruby_giftwrap_sqlite3(mrb_state* mrb, sqlite3 *unboxed);

void
mruby_set_sqlite3_data_ptr(mrb_value obj, sqlite3 *unboxed);

void
mruby_gift_sqlite3_data_ptr(mrb_value obj, sqlite3 *unboxed);

sqlite3 *
mruby_unbox_sqlite3(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Backup::boxing_decls */
/* sha: 6f6840a849c599072496615265a8387addc89e76f73b5e27e6c87d1d0288e7bc */
#if BIND_Sqlite3Backup_TYPE
mrb_value
mruby_box_sqlite3_backup(mrb_state* mrb, sqlite3_backup *unboxed);

mrb_value
mruby_giftwrap_sqlite3_backup(mrb_state* mrb, sqlite3_backup *unboxed);

void
mruby_set_sqlite3_backup_data_ptr(mrb_value obj, sqlite3_backup *unboxed);

void
mruby_gift_sqlite3_backup_data_ptr(mrb_value obj, sqlite3_backup *unboxed);

sqlite3_backup *
mruby_unbox_sqlite3_backup(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Blob::boxing_decls */
/* sha: abf35c823ebb4a7ce8b1894a874b4ac27c4fb440cd619b0531b72500f16685d8 */
#if BIND_Sqlite3Blob_TYPE
mrb_value
mruby_box_sqlite3_blob(mrb_state* mrb, sqlite3_blob *unboxed);

mrb_value
mruby_giftwrap_sqlite3_blob(mrb_state* mrb, sqlite3_blob *unboxed);

void
mruby_set_sqlite3_blob_data_ptr(mrb_value obj, sqlite3_blob *unboxed);

void
mruby_gift_sqlite3_blob_data_ptr(mrb_value obj, sqlite3_blob *unboxed);

sqlite3_blob *
mruby_unbox_sqlite3_blob(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Context::boxing_decls */
/* sha: a28b014ee002aa0bafbd6a3cc567deff61ec43ec51dafdbbfca0afc6db3ff147 */
#if BIND_Sqlite3Context_TYPE
mrb_value
mruby_box_sqlite3_context(mrb_state* mrb, sqlite3_context *unboxed);

mrb_value
mruby_giftwrap_sqlite3_context(mrb_state* mrb, sqlite3_context *unboxed);

void
mruby_set_sqlite3_context_data_ptr(mrb_value obj, sqlite3_context *unboxed);

void
mruby_gift_sqlite3_context_data_ptr(mrb_value obj, sqlite3_context *unboxed);

sqlite3_context *
mruby_unbox_sqlite3_context(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3File::boxing_decls */
/* sha: 3a36d628f57a99122632953e577c617b12adfdd883298dab9d20805b3ed6b0e2 */
#if BIND_Sqlite3File_TYPE
mrb_value
mruby_box_sqlite3_file(mrb_state* mrb, sqlite3_file *unboxed);

mrb_value
mruby_giftwrap_sqlite3_file(mrb_state* mrb, sqlite3_file *unboxed);

void
mruby_set_sqlite3_file_data_ptr(mrb_value obj, sqlite3_file *unboxed);

void
mruby_gift_sqlite3_file_data_ptr(mrb_value obj, sqlite3_file *unboxed);

sqlite3_file *
mruby_unbox_sqlite3_file(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint::boxing_decls */
/* sha: d69269792a222b4d1dfb9e3cc096ea0026dd7395dbae11fa844aaa40082f6aad */
#if BIND_Sqlite3IndexConstraint_TYPE
mrb_value
mruby_box_sqlite3_index_raint(mrb_state* mrb, struct sqlite3_index_constraint *unboxed);

mrb_value
mruby_giftwrap_sqlite3_index_raint(mrb_state* mrb, struct sqlite3_index_constraint *unboxed);

void
mruby_set_sqlite3_index_raint_data_ptr(mrb_value obj, struct sqlite3_index_constraint *unboxed);

void
mruby_gift_sqlite3_index_raint_data_ptr(mrb_value obj, struct sqlite3_index_constraint *unboxed);

struct sqlite3_index_constraint *
mruby_unbox_sqlite3_index_raint(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage::boxing_decls */
/* sha: e7dcd5f51499845783db5833a3985f10629d4c64d45bfd0a87375d2517284d05 */
#if BIND_Sqlite3IndexConstraintUsage_TYPE
mrb_value
mruby_box_sqlite3_index_raint_usage(mrb_state* mrb, struct sqlite3_index_constraint_usage *unboxed);

mrb_value
mruby_giftwrap_sqlite3_index_raint_usage(mrb_state* mrb, struct sqlite3_index_constraint_usage *unboxed);

void
mruby_set_sqlite3_index_raint_usage_data_ptr(mrb_value obj, struct sqlite3_index_constraint_usage *unboxed);

void
mruby_gift_sqlite3_index_raint_usage_data_ptr(mrb_value obj, struct sqlite3_index_constraint_usage *unboxed);

struct sqlite3_index_constraint_usage *
mruby_unbox_sqlite3_index_raint_usage(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo::boxing_decls */
/* sha: 3563210a4a9dc1c5c49abbb5b6d7f24451450027f303a4f8546ffece842d199d */
#if BIND_Sqlite3IndexInfo_TYPE
mrb_value
mruby_box_sqlite3_index_info(mrb_state* mrb, sqlite3_index_info *unboxed);

mrb_value
mruby_giftwrap_sqlite3_index_info(mrb_state* mrb, sqlite3_index_info *unboxed);

void
mruby_set_sqlite3_index_info_data_ptr(mrb_value obj, sqlite3_index_info *unboxed);

void
mruby_gift_sqlite3_index_info_data_ptr(mrb_value obj, sqlite3_index_info *unboxed);

sqlite3_index_info *
mruby_unbox_sqlite3_index_info(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexOrderby::boxing_decls */
/* sha: dbed4f323ffd015aca0460ef7bebe5c63017e930064cfd0a08a0a24c93a949a4 */
#if BIND_Sqlite3IndexOrderby_TYPE
mrb_value
mruby_box_sqlite3_index_orderby(mrb_state* mrb, struct sqlite3_index_orderby *unboxed);

mrb_value
mruby_giftwrap_sqlite3_index_orderby(mrb_state* mrb, struct sqlite3_index_orderby *unboxed);

void
mruby_set_sqlite3_index_orderby_data_ptr(mrb_value obj, struct sqlite3_index_orderby *unboxed);

void
mruby_gift_sqlite3_index_orderby_data_ptr(mrb_value obj, struct sqlite3_index_orderby *unboxed);

struct sqlite3_index_orderby *
mruby_unbox_sqlite3_index_orderby(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods::boxing_decls */
/* sha: 8b2b1da33f356e6e24ca9b50812a94ed06e27f5367a1b448828b7ce0b12a229d */
#if BIND_Sqlite3IoMethods_TYPE
mrb_value
mruby_box_sqlite3_io_methods(mrb_state* mrb, sqlite3_io_methods *unboxed);

mrb_value
mruby_giftwrap_sqlite3_io_methods(mrb_state* mrb, sqlite3_io_methods *unboxed);

void
mruby_set_sqlite3_io_methods_data_ptr(mrb_value obj, sqlite3_io_methods *unboxed);

void
mruby_gift_sqlite3_io_methods_data_ptr(mrb_value obj, sqlite3_io_methods *unboxed);

sqlite3_io_methods *
mruby_unbox_sqlite3_io_methods(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods::boxing_decls */
/* sha: 914c6a7049f4e7216e975dfe03f8c1553c32fec48285f561e28657e67c1a782e */
#if BIND_Sqlite3MemMethods_TYPE
mrb_value
mruby_box_sqlite3_mem_methods(mrb_state* mrb, sqlite3_mem_methods *unboxed);

mrb_value
mruby_giftwrap_sqlite3_mem_methods(mrb_state* mrb, sqlite3_mem_methods *unboxed);

void
mruby_set_sqlite3_mem_methods_data_ptr(mrb_value obj, sqlite3_mem_methods *unboxed);

void
mruby_gift_sqlite3_mem_methods_data_ptr(mrb_value obj, sqlite3_mem_methods *unboxed);

sqlite3_mem_methods *
mruby_unbox_sqlite3_mem_methods(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::boxing_decls */
/* sha: 573692c2589151edbda8f682b12cc5fbc8354c7de77d87806a54106395a07b31 */
#if BIND_Sqlite3Module_TYPE
mrb_value
mruby_box_sqlite3_module(mrb_state* mrb, sqlite3_module *unboxed);

mrb_value
mruby_giftwrap_sqlite3_module(mrb_state* mrb, sqlite3_module *unboxed);

void
mruby_set_sqlite3_module_data_ptr(mrb_value obj, sqlite3_module *unboxed);

void
mruby_gift_sqlite3_module_data_ptr(mrb_value obj, sqlite3_module *unboxed);

sqlite3_module *
mruby_unbox_sqlite3_module(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Pcache::boxing_decls */
/* sha: 831b47c4b008ce73eea36271b9bb847fa452aa8a976ecfb54f262627cd59da6b */
#if BIND_Sqlite3Pcache_TYPE
mrb_value
mruby_box_sqlite3_pcache(mrb_state* mrb, sqlite3_pcache *unboxed);

mrb_value
mruby_giftwrap_sqlite3_pcache(mrb_state* mrb, sqlite3_pcache *unboxed);

void
mruby_set_sqlite3_pcache_data_ptr(mrb_value obj, sqlite3_pcache *unboxed);

void
mruby_gift_sqlite3_pcache_data_ptr(mrb_value obj, sqlite3_pcache *unboxed);

sqlite3_pcache *
mruby_unbox_sqlite3_pcache(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods::boxing_decls */
/* sha: 9f5a415d2edea7687d5e0e88a554f9f0337ccbfd5d2d0efa29f34d7303050810 */
#if BIND_Sqlite3PcacheMethods_TYPE
mrb_value
mruby_box_sqlite3_pcache_methods(mrb_state* mrb, sqlite3_pcache_methods *unboxed);

mrb_value
mruby_giftwrap_sqlite3_pcache_methods(mrb_state* mrb, sqlite3_pcache_methods *unboxed);

void
mruby_set_sqlite3_pcache_methods_data_ptr(mrb_value obj, sqlite3_pcache_methods *unboxed);

void
mruby_gift_sqlite3_pcache_methods_data_ptr(mrb_value obj, sqlite3_pcache_methods *unboxed);

sqlite3_pcache_methods *
mruby_unbox_sqlite3_pcache_methods(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2::boxing_decls */
/* sha: bdda3edf19c36f679a952ed7558010285256c9923e395982d8c19a23fcef003d */
#if BIND_Sqlite3PcacheMethods2_TYPE
mrb_value
mruby_box_sqlite3_pcache_methods2(mrb_state* mrb, sqlite3_pcache_methods2 *unboxed);

mrb_value
mruby_giftwrap_sqlite3_pcache_methods2(mrb_state* mrb, sqlite3_pcache_methods2 *unboxed);

void
mruby_set_sqlite3_pcache_methods2_data_ptr(mrb_value obj, sqlite3_pcache_methods2 *unboxed);

void
mruby_gift_sqlite3_pcache_methods2_data_ptr(mrb_value obj, sqlite3_pcache_methods2 *unboxed);

sqlite3_pcache_methods2 *
mruby_unbox_sqlite3_pcache_methods2(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcachePage::boxing_decls */
/* sha: a0eae447a38ea180560c228d54024dd12393bab37249202d47bd2f75025a4aa0 */
#if BIND_Sqlite3PcachePage_TYPE
mrb_value
mruby_box_sqlite3_pcache_page(mrb_state* mrb, sqlite3_pcache_page *unboxed);

mrb_value
mruby_giftwrap_sqlite3_pcache_page(mrb_state* mrb, sqlite3_pcache_page *unboxed);

void
mruby_set_sqlite3_pcache_page_data_ptr(mrb_value obj, sqlite3_pcache_page *unboxed);

void
mruby_gift_sqlite3_pcache_page_data_ptr(mrb_value obj, sqlite3_pcache_page *unboxed);

sqlite3_pcache_page *
mruby_unbox_sqlite3_pcache_page(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry::boxing_decls */
/* sha: d61cbe687a94547771a2a073ed6f0bccbed22404db8b35d8996488d0aa49dace */
#if BIND_Sqlite3RtreeGeometry_TYPE
mrb_value
mruby_box_sqlite3_rtree_geometry(mrb_state* mrb, sqlite3_rtree_geometry *unboxed);

mrb_value
mruby_giftwrap_sqlite3_rtree_geometry(mrb_state* mrb, sqlite3_rtree_geometry *unboxed);

void
mruby_set_sqlite3_rtree_geometry_data_ptr(mrb_value obj, sqlite3_rtree_geometry *unboxed);

void
mruby_gift_sqlite3_rtree_geometry_data_ptr(mrb_value obj, sqlite3_rtree_geometry *unboxed);

sqlite3_rtree_geometry *
mruby_unbox_sqlite3_rtree_geometry(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo::boxing_decls */
/* sha: d992d9ec051c894c63b39844485e89647a12fe42ce276a1f4cca170116572baf */
#if BIND_Sqlite3RtreeQueryInfo_TYPE
mrb_value
mruby_box_sqlite3_rtree_query_info(mrb_state* mrb, sqlite3_rtree_query_info *unboxed);

mrb_value
mruby_giftwrap_sqlite3_rtree_query_info(mrb_state* mrb, sqlite3_rtree_query_info *unboxed);

void
mruby_set_sqlite3_rtree_query_info_data_ptr(mrb_value obj, sqlite3_rtree_query_info *unboxed);

void
mruby_gift_sqlite3_rtree_query_info_data_ptr(mrb_value obj, sqlite3_rtree_query_info *unboxed);

sqlite3_rtree_query_info *
mruby_unbox_sqlite3_rtree_query_info(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Stmt::boxing_decls */
/* sha: 5d4f98ac6607a02ea1d3c9496275119ca9dc7f3cf1aa44e3bc05529a09b508c1 */
#if BIND_Sqlite3Stmt_TYPE
mrb_value
mruby_box_sqlite3_stmt(mrb_state* mrb, sqlite3_stmt *unboxed);

mrb_value
mruby_giftwrap_sqlite3_stmt(mrb_state* mrb, sqlite3_stmt *unboxed);

void
mruby_set_sqlite3_stmt_data_ptr(mrb_value obj, sqlite3_stmt *unboxed);

void
mruby_gift_sqlite3_stmt_data_ptr(mrb_value obj, sqlite3_stmt *unboxed);

sqlite3_stmt *
mruby_unbox_sqlite3_stmt(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Value::boxing_decls */
/* sha: 2f69068c984b5288beb1e32e65958484b72db6d464205b94e526ab026113f656 */
#if BIND_Sqlite3Value_TYPE
mrb_value
mruby_box_sqlite3_value(mrb_state* mrb, sqlite3_value *unboxed);

mrb_value
mruby_giftwrap_sqlite3_value(mrb_state* mrb, sqlite3_value *unboxed);

void
mruby_set_sqlite3_value_data_ptr(mrb_value obj, sqlite3_value *unboxed);

void
mruby_gift_sqlite3_value_data_ptr(mrb_value obj, sqlite3_value *unboxed);

sqlite3_value *
mruby_unbox_sqlite3_value(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs::boxing_decls */
/* sha: f9d33972f384a1bb7fc3d42ea5d9643213003c6e64dc3569e712c15224595e2d */
#if BIND_Sqlite3Vfs_TYPE
mrb_value
mruby_box_sqlite3_vfs(mrb_state* mrb, sqlite3_vfs *unboxed);

mrb_value
mruby_giftwrap_sqlite3_vfs(mrb_state* mrb, sqlite3_vfs *unboxed);

void
mruby_set_sqlite3_vfs_data_ptr(mrb_value obj, sqlite3_vfs *unboxed);

void
mruby_gift_sqlite3_vfs_data_ptr(mrb_value obj, sqlite3_vfs *unboxed);

sqlite3_vfs *
mruby_unbox_sqlite3_vfs(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab::boxing_decls */
/* sha: 3708a5fdb4f63ee9c4799f6fd2908da3937520ca2f45b007a63323b114e72163 */
#if BIND_Sqlite3Vtab_TYPE
mrb_value
mruby_box_sqlite3_vtab(mrb_state* mrb, sqlite3_vtab *unboxed);

mrb_value
mruby_giftwrap_sqlite3_vtab(mrb_state* mrb, sqlite3_vtab *unboxed);

void
mruby_set_sqlite3_vtab_data_ptr(mrb_value obj, sqlite3_vtab *unboxed);

void
mruby_gift_sqlite3_vtab_data_ptr(mrb_value obj, sqlite3_vtab *unboxed);

sqlite3_vtab *
mruby_unbox_sqlite3_vtab(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3VtabCursor::boxing_decls */
/* sha: a7792231bdfc4535e565a7d7a30b82bcb529b885e09562962c66689980f2e406 */
#if BIND_Sqlite3VtabCursor_TYPE
mrb_value
mruby_box_sqlite3_vtab_cursor(mrb_state* mrb, sqlite3_vtab_cursor *unboxed);

mrb_value
mruby_giftwrap_sqlite3_vtab_cursor(mrb_state* mrb, sqlite3_vtab_cursor *unboxed);

void
mruby_set_sqlite3_vtab_cursor_data_ptr(mrb_value obj, sqlite3_vtab_cursor *unboxed);

void
mruby_gift_sqlite3_vtab_cursor_data_ptr(mrb_value obj, sqlite3_vtab_cursor *unboxed);

sqlite3_vtab_cursor *
mruby_unbox_sqlite3_vtab_cursor(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */

#endif
