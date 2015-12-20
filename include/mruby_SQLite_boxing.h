#ifndef MRUBY_SQLite_BOXING_HEADER
#define MRUBY_SQLite_BOXING_HEADER

/*
 * Boxing declarations
 * -------------------
 *
 * These declarations are enabled by the macros in mruby_SQLite_classes.h
 */

/*
* Extra wrapper over native pointer to indicate who owns this memory.
* (Either mruby, and it should be garage collected, or C, and it shouldn't be)
* Considered using the LSB of the pointer itself, but I don't think I can
* be assured that all memory is word-aligned (especially when C libraries
* implement their own memory management techniques like memory pools)
*/
typedef struct mruby_to_native_ref_ {
  /* If true, indicates that the object should be freed when
   * mruby GC's the ruby object containing this pointer. This
   * is set to true when an object is boxed via the `giftwrap`
   * or `gift_{type}_ptr_set` functions.
   */
  unsigned char belongs_to_ruby;

  /* A pointer to the native object */
  void* obj;

  /* For the convenience of the binding writer,
   * the data pointer can be used to associate arbitrary
   * data with a reference to a C object. This could
   * be a function pointer to invoke instead of `free` on GC,
   * a pointer back to the RObject, or even cast to an integer type
   * and used as a bit field. You get the idea...
   */
  void* data;
} mruby_to_native_ref;

#if BIND_Mem_TYPE
mrb_value
mruby_box_Mem(mrb_state* mrb, struct Mem *unboxed);

mrb_value
mruby_giftwrap_Mem(mrb_state* mrb, struct Mem *unboxed);

void
mruby_set_Mem_data_ptr(mrb_value obj, struct Mem *unboxed);

void
mruby_gift_Mem_data_ptr(mrb_value obj, struct Mem *unboxed);

struct Mem *
mruby_unbox_Mem(mrb_value boxed);
#endif

#if BIND_Sqlite3_TYPE
mrb_value
mruby_box_sqlite3(mrb_state* mrb, struct sqlite3 *unboxed);

mrb_value
mruby_giftwrap_sqlite3(mrb_state* mrb, struct sqlite3 *unboxed);

void
mruby_set_sqlite3_data_ptr(mrb_value obj, struct sqlite3 *unboxed);

void
mruby_gift_sqlite3_data_ptr(mrb_value obj, struct sqlite3 *unboxed);

struct sqlite3 *
mruby_unbox_sqlite3(mrb_value boxed);
#endif

#if BIND_Sqlite3Backup_TYPE
mrb_value
mruby_box_sqlite3_backup(mrb_state* mrb, struct sqlite3_backup *unboxed);

mrb_value
mruby_giftwrap_sqlite3_backup(mrb_state* mrb, struct sqlite3_backup *unboxed);

void
mruby_set_sqlite3_backup_data_ptr(mrb_value obj, struct sqlite3_backup *unboxed);

void
mruby_gift_sqlite3_backup_data_ptr(mrb_value obj, struct sqlite3_backup *unboxed);

struct sqlite3_backup *
mruby_unbox_sqlite3_backup(mrb_value boxed);
#endif

#if BIND_Sqlite3Blob_TYPE
mrb_value
mruby_box_sqlite3_blob(mrb_state* mrb, struct sqlite3_blob *unboxed);

mrb_value
mruby_giftwrap_sqlite3_blob(mrb_state* mrb, struct sqlite3_blob *unboxed);

void
mruby_set_sqlite3_blob_data_ptr(mrb_value obj, struct sqlite3_blob *unboxed);

void
mruby_gift_sqlite3_blob_data_ptr(mrb_value obj, struct sqlite3_blob *unboxed);

struct sqlite3_blob *
mruby_unbox_sqlite3_blob(mrb_value boxed);
#endif

#if BIND_Sqlite3Context_TYPE
mrb_value
mruby_box_sqlite3_context(mrb_state* mrb, struct sqlite3_context *unboxed);

mrb_value
mruby_giftwrap_sqlite3_context(mrb_state* mrb, struct sqlite3_context *unboxed);

void
mruby_set_sqlite3_context_data_ptr(mrb_value obj, struct sqlite3_context *unboxed);

void
mruby_gift_sqlite3_context_data_ptr(mrb_value obj, struct sqlite3_context *unboxed);

struct sqlite3_context *
mruby_unbox_sqlite3_context(mrb_value boxed);
#endif

#if BIND_Sqlite3File_TYPE
mrb_value
mruby_box_sqlite3_file(mrb_state* mrb, struct sqlite3_file *unboxed);

mrb_value
mruby_giftwrap_sqlite3_file(mrb_state* mrb, struct sqlite3_file *unboxed);

void
mruby_set_sqlite3_file_data_ptr(mrb_value obj, struct sqlite3_file *unboxed);

void
mruby_gift_sqlite3_file_data_ptr(mrb_value obj, struct sqlite3_file *unboxed);

struct sqlite3_file *
mruby_unbox_sqlite3_file(mrb_value boxed);
#endif

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

#if BIND_Sqlite3IndexInfo_TYPE
mrb_value
mruby_box_sqlite3_index_info(mrb_state* mrb, struct sqlite3_index_info *unboxed);

mrb_value
mruby_giftwrap_sqlite3_index_info(mrb_state* mrb, struct sqlite3_index_info *unboxed);

void
mruby_set_sqlite3_index_info_data_ptr(mrb_value obj, struct sqlite3_index_info *unboxed);

void
mruby_gift_sqlite3_index_info_data_ptr(mrb_value obj, struct sqlite3_index_info *unboxed);

struct sqlite3_index_info *
mruby_unbox_sqlite3_index_info(mrb_value boxed);
#endif

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

#if BIND_Sqlite3IoMethods_TYPE
mrb_value
mruby_box_sqlite3_io_methods(mrb_state* mrb, struct sqlite3_io_methods *unboxed);

mrb_value
mruby_giftwrap_sqlite3_io_methods(mrb_state* mrb, struct sqlite3_io_methods *unboxed);

void
mruby_set_sqlite3_io_methods_data_ptr(mrb_value obj, struct sqlite3_io_methods *unboxed);

void
mruby_gift_sqlite3_io_methods_data_ptr(mrb_value obj, struct sqlite3_io_methods *unboxed);

struct sqlite3_io_methods *
mruby_unbox_sqlite3_io_methods(mrb_value boxed);
#endif

#if BIND_Sqlite3MemMethods_TYPE
mrb_value
mruby_box_sqlite3_mem_methods(mrb_state* mrb, struct sqlite3_mem_methods *unboxed);

mrb_value
mruby_giftwrap_sqlite3_mem_methods(mrb_state* mrb, struct sqlite3_mem_methods *unboxed);

void
mruby_set_sqlite3_mem_methods_data_ptr(mrb_value obj, struct sqlite3_mem_methods *unboxed);

void
mruby_gift_sqlite3_mem_methods_data_ptr(mrb_value obj, struct sqlite3_mem_methods *unboxed);

struct sqlite3_mem_methods *
mruby_unbox_sqlite3_mem_methods(mrb_value boxed);
#endif

#if BIND_Sqlite3Module_TYPE
mrb_value
mruby_box_sqlite3_module(mrb_state* mrb, struct sqlite3_module *unboxed);

mrb_value
mruby_giftwrap_sqlite3_module(mrb_state* mrb, struct sqlite3_module *unboxed);

void
mruby_set_sqlite3_module_data_ptr(mrb_value obj, struct sqlite3_module *unboxed);

void
mruby_gift_sqlite3_module_data_ptr(mrb_value obj, struct sqlite3_module *unboxed);

struct sqlite3_module *
mruby_unbox_sqlite3_module(mrb_value boxed);
#endif

#if BIND_Sqlite3Pcache_TYPE
mrb_value
mruby_box_sqlite3_pcache(mrb_state* mrb, struct sqlite3_pcache *unboxed);

mrb_value
mruby_giftwrap_sqlite3_pcache(mrb_state* mrb, struct sqlite3_pcache *unboxed);

void
mruby_set_sqlite3_pcache_data_ptr(mrb_value obj, struct sqlite3_pcache *unboxed);

void
mruby_gift_sqlite3_pcache_data_ptr(mrb_value obj, struct sqlite3_pcache *unboxed);

struct sqlite3_pcache *
mruby_unbox_sqlite3_pcache(mrb_value boxed);
#endif

#if BIND_Sqlite3PcacheMethods_TYPE
mrb_value
mruby_box_sqlite3_pcache_methods(mrb_state* mrb, struct sqlite3_pcache_methods *unboxed);

mrb_value
mruby_giftwrap_sqlite3_pcache_methods(mrb_state* mrb, struct sqlite3_pcache_methods *unboxed);

void
mruby_set_sqlite3_pcache_methods_data_ptr(mrb_value obj, struct sqlite3_pcache_methods *unboxed);

void
mruby_gift_sqlite3_pcache_methods_data_ptr(mrb_value obj, struct sqlite3_pcache_methods *unboxed);

struct sqlite3_pcache_methods *
mruby_unbox_sqlite3_pcache_methods(mrb_value boxed);
#endif

#if BIND_Sqlite3PcacheMethods2_TYPE
mrb_value
mruby_box_sqlite3_pcache_methods2(mrb_state* mrb, struct sqlite3_pcache_methods2 *unboxed);

mrb_value
mruby_giftwrap_sqlite3_pcache_methods2(mrb_state* mrb, struct sqlite3_pcache_methods2 *unboxed);

void
mruby_set_sqlite3_pcache_methods2_data_ptr(mrb_value obj, struct sqlite3_pcache_methods2 *unboxed);

void
mruby_gift_sqlite3_pcache_methods2_data_ptr(mrb_value obj, struct sqlite3_pcache_methods2 *unboxed);

struct sqlite3_pcache_methods2 *
mruby_unbox_sqlite3_pcache_methods2(mrb_value boxed);
#endif

#if BIND_Sqlite3PcachePage_TYPE
mrb_value
mruby_box_sqlite3_pcache_page(mrb_state* mrb, struct sqlite3_pcache_page *unboxed);

mrb_value
mruby_giftwrap_sqlite3_pcache_page(mrb_state* mrb, struct sqlite3_pcache_page *unboxed);

void
mruby_set_sqlite3_pcache_page_data_ptr(mrb_value obj, struct sqlite3_pcache_page *unboxed);

void
mruby_gift_sqlite3_pcache_page_data_ptr(mrb_value obj, struct sqlite3_pcache_page *unboxed);

struct sqlite3_pcache_page *
mruby_unbox_sqlite3_pcache_page(mrb_value boxed);
#endif

#if BIND_Sqlite3RtreeGeometry_TYPE
mrb_value
mruby_box_sqlite3_rtree_geometry(mrb_state* mrb, struct sqlite3_rtree_geometry *unboxed);

mrb_value
mruby_giftwrap_sqlite3_rtree_geometry(mrb_state* mrb, struct sqlite3_rtree_geometry *unboxed);

void
mruby_set_sqlite3_rtree_geometry_data_ptr(mrb_value obj, struct sqlite3_rtree_geometry *unboxed);

void
mruby_gift_sqlite3_rtree_geometry_data_ptr(mrb_value obj, struct sqlite3_rtree_geometry *unboxed);

struct sqlite3_rtree_geometry *
mruby_unbox_sqlite3_rtree_geometry(mrb_value boxed);
#endif

#if BIND_Sqlite3RtreeQueryInfo_TYPE
mrb_value
mruby_box_sqlite3_rtree_query_info(mrb_state* mrb, struct sqlite3_rtree_query_info *unboxed);

mrb_value
mruby_giftwrap_sqlite3_rtree_query_info(mrb_state* mrb, struct sqlite3_rtree_query_info *unboxed);

void
mruby_set_sqlite3_rtree_query_info_data_ptr(mrb_value obj, struct sqlite3_rtree_query_info *unboxed);

void
mruby_gift_sqlite3_rtree_query_info_data_ptr(mrb_value obj, struct sqlite3_rtree_query_info *unboxed);

struct sqlite3_rtree_query_info *
mruby_unbox_sqlite3_rtree_query_info(mrb_value boxed);
#endif

#if BIND_Sqlite3Stmt_TYPE
mrb_value
mruby_box_sqlite3_stmt(mrb_state* mrb, struct sqlite3_stmt *unboxed);

mrb_value
mruby_giftwrap_sqlite3_stmt(mrb_state* mrb, struct sqlite3_stmt *unboxed);

void
mruby_set_sqlite3_stmt_data_ptr(mrb_value obj, struct sqlite3_stmt *unboxed);

void
mruby_gift_sqlite3_stmt_data_ptr(mrb_value obj, struct sqlite3_stmt *unboxed);

struct sqlite3_stmt *
mruby_unbox_sqlite3_stmt(mrb_value boxed);
#endif

#if BIND_Sqlite3Vfs_TYPE
mrb_value
mruby_box_sqlite3_vfs(mrb_state* mrb, struct sqlite3_vfs *unboxed);

mrb_value
mruby_giftwrap_sqlite3_vfs(mrb_state* mrb, struct sqlite3_vfs *unboxed);

void
mruby_set_sqlite3_vfs_data_ptr(mrb_value obj, struct sqlite3_vfs *unboxed);

void
mruby_gift_sqlite3_vfs_data_ptr(mrb_value obj, struct sqlite3_vfs *unboxed);

struct sqlite3_vfs *
mruby_unbox_sqlite3_vfs(mrb_value boxed);
#endif

#if BIND_Sqlite3Vtab_TYPE
mrb_value
mruby_box_sqlite3_vtab(mrb_state* mrb, struct sqlite3_vtab *unboxed);

mrb_value
mruby_giftwrap_sqlite3_vtab(mrb_state* mrb, struct sqlite3_vtab *unboxed);

void
mruby_set_sqlite3_vtab_data_ptr(mrb_value obj, struct sqlite3_vtab *unboxed);

void
mruby_gift_sqlite3_vtab_data_ptr(mrb_value obj, struct sqlite3_vtab *unboxed);

struct sqlite3_vtab *
mruby_unbox_sqlite3_vtab(mrb_value boxed);
#endif

#if BIND_Sqlite3VtabCursor_TYPE
mrb_value
mruby_box_sqlite3_vtab_cursor(mrb_state* mrb, struct sqlite3_vtab_cursor *unboxed);

mrb_value
mruby_giftwrap_sqlite3_vtab_cursor(mrb_state* mrb, struct sqlite3_vtab_cursor *unboxed);

void
mruby_set_sqlite3_vtab_cursor_data_ptr(mrb_value obj, struct sqlite3_vtab_cursor *unboxed);

void
mruby_gift_sqlite3_vtab_cursor_data_ptr(mrb_value obj, struct sqlite3_vtab_cursor *unboxed);

struct sqlite3_vtab_cursor *
mruby_unbox_sqlite3_vtab_cursor(mrb_value boxed);
#endif


#endif
