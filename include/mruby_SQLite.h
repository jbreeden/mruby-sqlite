
#ifndef SQLite_HEADER
#define SQLite_HEADER

/*
 * RClass Macros
 * -------------
 *
 * Macros for retrieving the RClass*'s defined by this gem.
 */

#define SQLite_module(mrb) mrb_module_get(mrb, "SQLite")
#define Mem_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Mem")
#define Sqlite3_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3")
#define Sqlite3Backup_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3Backup")
#define Sqlite3Blob_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3Blob")
#define Sqlite3Context_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3Context")
#define Sqlite3File_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3File")
#define Sqlite3IndexConstraint_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3IndexConstraint")
#define Sqlite3IndexConstraintUsage_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3IndexConstraintUsage")
#define Sqlite3IndexInfo_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3IndexInfo")
#define Sqlite3IndexOrderby_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3IndexOrderby")
#define Sqlite3IoMethods_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3IoMethods")
#define Sqlite3MemMethods_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3MemMethods")
#define Sqlite3Module_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3Module")
#define Sqlite3Mutex_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3Mutex")
#define Sqlite3MutexMethods_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3MutexMethods")
#define Sqlite3Pcache_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3Pcache")
#define Sqlite3PcacheMethods_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3PcacheMethods")
#define Sqlite3PcacheMethods2_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3PcacheMethods2")
#define Sqlite3PcachePage_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3PcachePage")
#define Sqlite3RtreeGeometry_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3RtreeGeometry")
#define Sqlite3RtreeQueryInfo_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3RtreeQueryInfo")
#define Sqlite3Stmt_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3Stmt")
#define Sqlite3Vfs_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3Vfs")
#define Sqlite3Vtab_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3Vtab")
#define Sqlite3VtabCursor_class(mrb) mrb_class_get_under(mrb, SQLite_module(mrb), "Sqlite3VtabCursor")

/*
 * Class Bindings Options
 * ----------------------
 *
 * Use these macros to configure the generated bindings for classes & structs.
 *
 * Key:
 *
 * BIND_{type name}_TYPE                     : Should we bind the class at all?
 * BIND_{type name}_INITIALIZE               : If the class is bound, should we also bind initialize to malloc a new instance on `new`?
 * BIND_{type name}_{field name}_FIELD       : If the class is bound, should we also bind this field?
 * BIND_{type name}_{function name}_FUNCTION : If the class is bound, should we also bind this member function?
 *
 * Fields & method are disabled by default so that bindings may be added and
 * tested incrementally. The generated bindings are a good start, but they
 * will need to be verified and, sometimes, customized.
 */

#define BIND_Mem_TYPE TRUE
#define BIND_Mem_INITIALIZE FALSE

#define BIND_Sqlite3_TYPE TRUE
#define BIND_Sqlite3_INITIALIZE FALSE

#define BIND_Sqlite3Backup_TYPE TRUE
#define BIND_Sqlite3Backup_INITIALIZE FALSE

#define BIND_Sqlite3Blob_TYPE TRUE
#define BIND_Sqlite3Blob_INITIALIZE FALSE

#define BIND_Sqlite3Context_TYPE TRUE
#define BIND_Sqlite3Context_INITIALIZE FALSE

#define BIND_Sqlite3File_TYPE TRUE
#define BIND_Sqlite3File_INITIALIZE FALSE
#define BIND_Sqlite3File_pMethods_FIELD FALSE

#define BIND_Sqlite3IndexConstraint_TYPE TRUE
#define BIND_Sqlite3IndexConstraint_INITIALIZE FALSE
#define BIND_Sqlite3IndexConstraint_iColumn_FIELD FALSE
#define BIND_Sqlite3IndexConstraint_iTermOffset_FIELD FALSE
#define BIND_Sqlite3IndexConstraint_op_FIELD FALSE
#define BIND_Sqlite3IndexConstraint_usable_FIELD FALSE

#define BIND_Sqlite3IndexConstraintUsage_TYPE TRUE
#define BIND_Sqlite3IndexConstraintUsage_INITIALIZE FALSE
#define BIND_Sqlite3IndexConstraintUsage_argvIndex_FIELD FALSE
#define BIND_Sqlite3IndexConstraintUsage_omit_FIELD FALSE

#define BIND_Sqlite3IndexInfo_TYPE TRUE
#define BIND_Sqlite3IndexInfo_INITIALIZE FALSE
#define BIND_Sqlite3IndexInfo_aConstraint_FIELD FALSE
#define BIND_Sqlite3IndexInfo_aConstraintUsage_FIELD FALSE
#define BIND_Sqlite3IndexInfo_aOrderBy_FIELD FALSE
#define BIND_Sqlite3IndexInfo_estimatedCost_FIELD FALSE
#define BIND_Sqlite3IndexInfo_estimatedRows_FIELD FALSE
#define BIND_Sqlite3IndexInfo_idxNum_FIELD FALSE
#define BIND_Sqlite3IndexInfo_idxStr_FIELD FALSE
#define BIND_Sqlite3IndexInfo_nConstraint_FIELD FALSE
#define BIND_Sqlite3IndexInfo_nOrderBy_FIELD FALSE
#define BIND_Sqlite3IndexInfo_needToFreeIdxStr_FIELD FALSE
#define BIND_Sqlite3IndexInfo_orderByConsumed_FIELD FALSE

#define BIND_Sqlite3IndexOrderby_TYPE TRUE
#define BIND_Sqlite3IndexOrderby_INITIALIZE FALSE
#define BIND_Sqlite3IndexOrderby_desc_FIELD FALSE
#define BIND_Sqlite3IndexOrderby_iColumn_FIELD FALSE

#define BIND_Sqlite3IoMethods_TYPE TRUE
#define BIND_Sqlite3IoMethods_INITIALIZE FALSE
#define BIND_Sqlite3IoMethods_iVersion_FIELD FALSE
#define BIND_Sqlite3IoMethods_xCheckReservedLock_FIELD FALSE
#define BIND_Sqlite3IoMethods_xClose_FIELD FALSE
#define BIND_Sqlite3IoMethods_xDeviceCharacteristics_FIELD FALSE
#define BIND_Sqlite3IoMethods_xFetch_FIELD FALSE
#define BIND_Sqlite3IoMethods_xFileControl_FIELD FALSE
#define BIND_Sqlite3IoMethods_xFileSize_FIELD FALSE
#define BIND_Sqlite3IoMethods_xLock_FIELD FALSE
#define BIND_Sqlite3IoMethods_xRead_FIELD FALSE
#define BIND_Sqlite3IoMethods_xSectorSize_FIELD FALSE
#define BIND_Sqlite3IoMethods_xShmBarrier_FIELD FALSE
#define BIND_Sqlite3IoMethods_xShmLock_FIELD FALSE
#define BIND_Sqlite3IoMethods_xShmMap_FIELD FALSE
#define BIND_Sqlite3IoMethods_xShmUnmap_FIELD FALSE
#define BIND_Sqlite3IoMethods_xSync_FIELD FALSE
#define BIND_Sqlite3IoMethods_xTruncate_FIELD FALSE
#define BIND_Sqlite3IoMethods_xUnfetch_FIELD FALSE
#define BIND_Sqlite3IoMethods_xUnlock_FIELD FALSE
#define BIND_Sqlite3IoMethods_xWrite_FIELD FALSE

#define BIND_Sqlite3MemMethods_TYPE TRUE
#define BIND_Sqlite3MemMethods_INITIALIZE FALSE
#define BIND_Sqlite3MemMethods_pAppData_FIELD FALSE
#define BIND_Sqlite3MemMethods_xFree_FIELD FALSE
#define BIND_Sqlite3MemMethods_xInit_FIELD FALSE
#define BIND_Sqlite3MemMethods_xMalloc_FIELD FALSE
#define BIND_Sqlite3MemMethods_xRealloc_FIELD FALSE
#define BIND_Sqlite3MemMethods_xRoundup_FIELD FALSE
#define BIND_Sqlite3MemMethods_xShutdown_FIELD FALSE
#define BIND_Sqlite3MemMethods_xSize_FIELD FALSE

#define BIND_Sqlite3Module_TYPE TRUE
#define BIND_Sqlite3Module_INITIALIZE FALSE
#define BIND_Sqlite3Module_iVersion_FIELD FALSE
#define BIND_Sqlite3Module_xBegin_FIELD FALSE
#define BIND_Sqlite3Module_xBestIndex_FIELD FALSE
#define BIND_Sqlite3Module_xClose_FIELD FALSE
#define BIND_Sqlite3Module_xColumn_FIELD FALSE
#define BIND_Sqlite3Module_xCommit_FIELD FALSE
#define BIND_Sqlite3Module_xConnect_FIELD FALSE
#define BIND_Sqlite3Module_xCreate_FIELD FALSE
#define BIND_Sqlite3Module_xDestroy_FIELD FALSE
#define BIND_Sqlite3Module_xDisconnect_FIELD FALSE
#define BIND_Sqlite3Module_xEof_FIELD FALSE
#define BIND_Sqlite3Module_xFilter_FIELD FALSE
#define BIND_Sqlite3Module_xFindFunction_FIELD FALSE
#define BIND_Sqlite3Module_xNext_FIELD FALSE
#define BIND_Sqlite3Module_xOpen_FIELD FALSE
#define BIND_Sqlite3Module_xRelease_FIELD FALSE
#define BIND_Sqlite3Module_xRename_FIELD FALSE
#define BIND_Sqlite3Module_xRollback_FIELD FALSE
#define BIND_Sqlite3Module_xRollbackTo_FIELD FALSE
#define BIND_Sqlite3Module_xRowid_FIELD FALSE
#define BIND_Sqlite3Module_xSavepoint_FIELD FALSE
#define BIND_Sqlite3Module_xSync_FIELD FALSE
#define BIND_Sqlite3Module_xUpdate_FIELD FALSE

#define BIND_Sqlite3Mutex_TYPE TRUE
#define BIND_Sqlite3Mutex_INITIALIZE FALSE

#define BIND_Sqlite3MutexMethods_TYPE TRUE
#define BIND_Sqlite3MutexMethods_INITIALIZE FALSE
#define BIND_Sqlite3MutexMethods_xMutexAlloc_FIELD FALSE
#define BIND_Sqlite3MutexMethods_xMutexEnd_FIELD FALSE
#define BIND_Sqlite3MutexMethods_xMutexEnter_FIELD FALSE
#define BIND_Sqlite3MutexMethods_xMutexFree_FIELD FALSE
#define BIND_Sqlite3MutexMethods_xMutexHeld_FIELD FALSE
#define BIND_Sqlite3MutexMethods_xMutexInit_FIELD FALSE
#define BIND_Sqlite3MutexMethods_xMutexLeave_FIELD FALSE
#define BIND_Sqlite3MutexMethods_xMutexNotheld_FIELD FALSE
#define BIND_Sqlite3MutexMethods_xMutexTry_FIELD FALSE

#define BIND_Sqlite3Pcache_TYPE TRUE
#define BIND_Sqlite3Pcache_INITIALIZE FALSE

#define BIND_Sqlite3PcacheMethods_TYPE TRUE
#define BIND_Sqlite3PcacheMethods_INITIALIZE FALSE
#define BIND_Sqlite3PcacheMethods_pArg_FIELD FALSE
#define BIND_Sqlite3PcacheMethods_xCachesize_FIELD FALSE
#define BIND_Sqlite3PcacheMethods_xCreate_FIELD FALSE
#define BIND_Sqlite3PcacheMethods_xDestroy_FIELD FALSE
#define BIND_Sqlite3PcacheMethods_xFetch_FIELD FALSE
#define BIND_Sqlite3PcacheMethods_xInit_FIELD FALSE
#define BIND_Sqlite3PcacheMethods_xPagecount_FIELD FALSE
#define BIND_Sqlite3PcacheMethods_xRekey_FIELD FALSE
#define BIND_Sqlite3PcacheMethods_xShutdown_FIELD FALSE
#define BIND_Sqlite3PcacheMethods_xTruncate_FIELD FALSE
#define BIND_Sqlite3PcacheMethods_xUnpin_FIELD FALSE

#define BIND_Sqlite3PcacheMethods2_TYPE TRUE
#define BIND_Sqlite3PcacheMethods2_INITIALIZE FALSE
#define BIND_Sqlite3PcacheMethods2_iVersion_FIELD FALSE
#define BIND_Sqlite3PcacheMethods2_pArg_FIELD FALSE
#define BIND_Sqlite3PcacheMethods2_xCachesize_FIELD FALSE
#define BIND_Sqlite3PcacheMethods2_xCreate_FIELD FALSE
#define BIND_Sqlite3PcacheMethods2_xDestroy_FIELD FALSE
#define BIND_Sqlite3PcacheMethods2_xFetch_FIELD FALSE
#define BIND_Sqlite3PcacheMethods2_xInit_FIELD FALSE
#define BIND_Sqlite3PcacheMethods2_xPagecount_FIELD FALSE
#define BIND_Sqlite3PcacheMethods2_xRekey_FIELD FALSE
#define BIND_Sqlite3PcacheMethods2_xShrink_FIELD FALSE
#define BIND_Sqlite3PcacheMethods2_xShutdown_FIELD FALSE
#define BIND_Sqlite3PcacheMethods2_xTruncate_FIELD FALSE
#define BIND_Sqlite3PcacheMethods2_xUnpin_FIELD FALSE

#define BIND_Sqlite3PcachePage_TYPE TRUE
#define BIND_Sqlite3PcachePage_INITIALIZE FALSE
#define BIND_Sqlite3PcachePage_pBuf_FIELD FALSE
#define BIND_Sqlite3PcachePage_pExtra_FIELD FALSE

#define BIND_Sqlite3RtreeGeometry_TYPE TRUE
#define BIND_Sqlite3RtreeGeometry_INITIALIZE FALSE
#define BIND_Sqlite3RtreeGeometry_aParam_FIELD FALSE
#define BIND_Sqlite3RtreeGeometry_nParam_FIELD FALSE
#define BIND_Sqlite3RtreeGeometry_pContext_FIELD FALSE
#define BIND_Sqlite3RtreeGeometry_pUser_FIELD FALSE
#define BIND_Sqlite3RtreeGeometry_xDelUser_FIELD FALSE

#define BIND_Sqlite3RtreeQueryInfo_TYPE TRUE
#define BIND_Sqlite3RtreeQueryInfo_INITIALIZE FALSE
#define BIND_Sqlite3RtreeQueryInfo_aCoord_FIELD FALSE
#define BIND_Sqlite3RtreeQueryInfo_aParam_FIELD FALSE
#define BIND_Sqlite3RtreeQueryInfo_anQueue_FIELD FALSE
#define BIND_Sqlite3RtreeQueryInfo_eParentWithin_FIELD FALSE
#define BIND_Sqlite3RtreeQueryInfo_eWithin_FIELD FALSE
#define BIND_Sqlite3RtreeQueryInfo_iLevel_FIELD FALSE
#define BIND_Sqlite3RtreeQueryInfo_iRowid_FIELD FALSE
#define BIND_Sqlite3RtreeQueryInfo_mxLevel_FIELD FALSE
#define BIND_Sqlite3RtreeQueryInfo_nCoord_FIELD FALSE
#define BIND_Sqlite3RtreeQueryInfo_nParam_FIELD FALSE
#define BIND_Sqlite3RtreeQueryInfo_pContext_FIELD FALSE
#define BIND_Sqlite3RtreeQueryInfo_pUser_FIELD FALSE
#define BIND_Sqlite3RtreeQueryInfo_rParentScore_FIELD FALSE
#define BIND_Sqlite3RtreeQueryInfo_rScore_FIELD FALSE
#define BIND_Sqlite3RtreeQueryInfo_xDelUser_FIELD FALSE

#define BIND_Sqlite3Stmt_TYPE TRUE
#define BIND_Sqlite3Stmt_INITIALIZE FALSE

#define BIND_Sqlite3Vfs_TYPE TRUE
#define BIND_Sqlite3Vfs_INITIALIZE FALSE
#define BIND_Sqlite3Vfs_iVersion_FIELD FALSE
#define BIND_Sqlite3Vfs_mxPathname_FIELD FALSE
#define BIND_Sqlite3Vfs_pAppData_FIELD FALSE
#define BIND_Sqlite3Vfs_pNext_FIELD FALSE
#define BIND_Sqlite3Vfs_szOsFile_FIELD FALSE
#define BIND_Sqlite3Vfs_xAccess_FIELD FALSE
#define BIND_Sqlite3Vfs_xCurrentTime_FIELD FALSE
#define BIND_Sqlite3Vfs_xCurrentTimeInt64_FIELD FALSE
#define BIND_Sqlite3Vfs_xDelete_FIELD FALSE
#define BIND_Sqlite3Vfs_xDlClose_FIELD FALSE
#define BIND_Sqlite3Vfs_xDlError_FIELD FALSE
#define BIND_Sqlite3Vfs_xDlOpen_FIELD FALSE
#define BIND_Sqlite3Vfs_xDlSym_FIELD FALSE
#define BIND_Sqlite3Vfs_xFullPathname_FIELD FALSE
#define BIND_Sqlite3Vfs_xGetLastError_FIELD FALSE
#define BIND_Sqlite3Vfs_xGetSystemCall_FIELD FALSE
#define BIND_Sqlite3Vfs_xNextSystemCall_FIELD FALSE
#define BIND_Sqlite3Vfs_xOpen_FIELD FALSE
#define BIND_Sqlite3Vfs_xRandomness_FIELD FALSE
#define BIND_Sqlite3Vfs_xSetSystemCall_FIELD FALSE
#define BIND_Sqlite3Vfs_xSleep_FIELD FALSE
#define BIND_Sqlite3Vfs_zName_FIELD FALSE

#define BIND_Sqlite3Vtab_TYPE TRUE
#define BIND_Sqlite3Vtab_INITIALIZE FALSE
#define BIND_Sqlite3Vtab_nRef_FIELD FALSE
#define BIND_Sqlite3Vtab_pModule_FIELD FALSE
#define BIND_Sqlite3Vtab_zErrMsg_FIELD FALSE

#define BIND_Sqlite3VtabCursor_TYPE TRUE
#define BIND_Sqlite3VtabCursor_INITIALIZE FALSE
#define BIND_Sqlite3VtabCursor_pVtab_FIELD FALSE


/*
 * Global Function Options
 * -----------------------
 *
 * Set these macros to TRUE to enable bindings for these functions.
 * They are disabled initially so that bindings may be added and tested
 * incrementally. The generated bindings are a good start, but they
 * will need to be verified and, sometimes, customized.
 */

#define BIND_sqlite3_aggregate_context_FUNCTION FALSE
#define BIND_sqlite3_aggregate_count_FUNCTION FALSE
#define BIND_sqlite3_auto_extension_FUNCTION FALSE
#define BIND_sqlite3_backup_finish_FUNCTION FALSE
#define BIND_sqlite3_backup_init_FUNCTION FALSE
#define BIND_sqlite3_backup_pagecount_FUNCTION FALSE
#define BIND_sqlite3_backup_remaining_FUNCTION FALSE
#define BIND_sqlite3_backup_step_FUNCTION FALSE
#define BIND_sqlite3_bind_blob_FUNCTION TRUE
#define BIND_sqlite3_bind_blob64_FUNCTION FALSE
#define BIND_sqlite3_bind_double_FUNCTION TRUE
#define BIND_sqlite3_bind_int_FUNCTION TRUE
#define BIND_sqlite3_bind_int64_FUNCTION FALSE
#define BIND_sqlite3_bind_null_FUNCTION TRUE
#define BIND_sqlite3_bind_parameter_count_FUNCTION TRUE
#define BIND_sqlite3_bind_parameter_index_FUNCTION TRUE
#define BIND_sqlite3_bind_parameter_name_FUNCTION TRUE
#define BIND_sqlite3_bind_text_FUNCTION TRUE
#define BIND_sqlite3_bind_text16_FUNCTION FALSE
#define BIND_sqlite3_bind_text64_FUNCTION FALSE
#define BIND_sqlite3_bind_value_FUNCTION FALSE
#define BIND_sqlite3_bind_zeroblob_FUNCTION FALSE
#define BIND_sqlite3_blob_bytes_FUNCTION FALSE
#define BIND_sqlite3_blob_close_FUNCTION FALSE
#define BIND_sqlite3_blob_open_FUNCTION FALSE
#define BIND_sqlite3_blob_read_FUNCTION FALSE
#define BIND_sqlite3_blob_reopen_FUNCTION FALSE
#define BIND_sqlite3_blob_write_FUNCTION FALSE
#define BIND_sqlite3_busy_handler_FUNCTION FALSE
#define BIND_sqlite3_busy_timeout_FUNCTION TRUE
#define BIND_sqlite3_cancel_auto_extension_FUNCTION FALSE
#define BIND_sqlite3_changes_FUNCTION TRUE
#define BIND_sqlite3_clear_bindings_FUNCTION TRUE
#define BIND_sqlite3_close_FUNCTION TRUE
#define BIND_sqlite3_close_v2_FUNCTION FALSE
#define BIND_sqlite3_collation_needed_FUNCTION FALSE
#define BIND_sqlite3_collation_needed16_FUNCTION FALSE
#define BIND_sqlite3_column_blob_FUNCTION TRUE
#define BIND_sqlite3_column_bytes_FUNCTION TRUE
#define BIND_sqlite3_column_bytes16_FUNCTION TRUE
#define BIND_sqlite3_column_count_FUNCTION TRUE
#define BIND_sqlite3_column_database_name_FUNCTION TRUE
#define BIND_sqlite3_column_database_name16_FUNCTION FALSE
#define BIND_sqlite3_column_decltype_FUNCTION TRUE
#define BIND_sqlite3_column_decltype16_FUNCTION FALSE
#define BIND_sqlite3_column_double_FUNCTION TRUE
#define BIND_sqlite3_column_int_FUNCTION TRUE
#define BIND_sqlite3_column_int64_FUNCTION FALSE
#define BIND_sqlite3_column_name_FUNCTION TRUE
#define BIND_sqlite3_column_name16_FUNCTION FALSE
#define BIND_sqlite3_column_origin_name_FUNCTION TRUE
#define BIND_sqlite3_column_origin_name16_FUNCTION FLASE
#define BIND_sqlite3_column_table_name_FUNCTION TRUE
#define BIND_sqlite3_column_table_name16_FUNCTION FALSE
#define BIND_sqlite3_column_text_FUNCTION TRUE
#define BIND_sqlite3_column_text16_FUNCTION FALSE
#define BIND_sqlite3_column_type_FUNCTION TRUE
#define BIND_sqlite3_column_value_FUNCTION FALSE
#define BIND_sqlite3_commit_hook_FUNCTION FALSE
#define BIND_sqlite3_compileoption_get_FUNCTION FALSE
#define BIND_sqlite3_compileoption_used_FUNCTION FALSE
#define BIND_sqlite3_complete_FUNCTION TRUE
#define BIND_sqlite3_complete16_FUNCTION FALSE
#define BIND_sqlite3_config_FUNCTION FALSE
#define BIND_sqlite3_context_db_handle_FUNCTION FALSE
#define BIND_sqlite3_create_collation_FUNCTION FALSE
#define BIND_sqlite3_create_collation16_FUNCTION FALSE
#define BIND_sqlite3_create_collation_v2_FUNCTION FALSE
#define BIND_sqlite3_create_function_FUNCTION FALSE
#define BIND_sqlite3_create_function16_FUNCTION FALSE
#define BIND_sqlite3_create_function_v2_FUNCTION FALSE
#define BIND_sqlite3_create_module_FUNCTION FALSE
#define BIND_sqlite3_create_module_v2_FUNCTION FALSE
#define BIND_sqlite3_data_count_FUNCTION FALSE
#define BIND_sqlite3_db_config_FUNCTION FALSE
#define BIND_sqlite3_db_filename_FUNCTION FALSE
#define BIND_sqlite3_db_handle_FUNCTION FALSE
#define BIND_sqlite3_db_mutex_FUNCTION FALSE
#define BIND_sqlite3_db_readonly_FUNCTION FALSE
#define BIND_sqlite3_db_release_memory_FUNCTION FALSE
#define BIND_sqlite3_db_status_FUNCTION FALSE
#define BIND_sqlite3_declare_vtab_FUNCTION FALSE
#define BIND_sqlite3_enable_load_extension_FUNCTION FALSE
#define BIND_sqlite3_enable_shared_cache_FUNCTION FALSE
#define BIND_sqlite3_errcode_FUNCTION TRUE
#define BIND_sqlite3_errmsg_FUNCTION TRUE
#define BIND_sqlite3_errmsg16_FUNCTION FALSE
#define BIND_sqlite3_errstr_FUNCTION FALSE
#define BIND_sqlite3_exec_FUNCTION FALSE
#define BIND_sqlite3_expired_FUNCTION FALSE
#define BIND_sqlite3_extended_errcode_FUNCTION FALSE
#define BIND_sqlite3_extended_result_codes_FUNCTION FALSE
#define BIND_sqlite3_file_control_FUNCTION FALSE
#define BIND_sqlite3_finalize_FUNCTION TRUE
#define BIND_sqlite3_free_FUNCTION FALSE
#define BIND_sqlite3_free_table_FUNCTION FALSE
#define BIND_sqlite3_get_autocommit_FUNCTION FALSE
#define BIND_sqlite3_get_auxdata_FUNCTION FALSE
#define BIND_sqlite3_get_table_FUNCTION FALSE
#define BIND_sqlite3_global_recover_FUNCTION FALSE
#define BIND_sqlite3_initialize_FUNCTION FALSE
#define BIND_sqlite3_interrupt_FUNCTION FALSE
#define BIND_sqlite3_last_insert_rowid_FUNCTION FALSE
#define BIND_sqlite3_libversion_FUNCTION FALSE
#define BIND_sqlite3_libversion_number_FUNCTION FALSE
#define BIND_sqlite3_limit_FUNCTION FALSE
#define BIND_sqlite3_load_extension_FUNCTION FALSE
#define BIND_sqlite3_log_FUNCTION FALSE
#define BIND_sqlite3_malloc_FUNCTION FALSE
#define BIND_sqlite3_malloc64_FUNCTION FALSE
#define BIND_sqlite3_memory_alarm_FUNCTION FALSE
#define BIND_sqlite3_memory_highwater_FUNCTION FALSE
#define BIND_sqlite3_memory_used_FUNCTION FALSE
#define BIND_sqlite3_mprintf_FUNCTION FALSE
#define BIND_sqlite3_msize_FUNCTION FALSE
#define BIND_sqlite3_mutex_alloc_FUNCTION FALSE
#define BIND_sqlite3_mutex_enter_FUNCTION FALSE
#define BIND_sqlite3_mutex_free_FUNCTION FALSE
#define BIND_sqlite3_mutex_held_FUNCTION FALSE
#define BIND_sqlite3_mutex_leave_FUNCTION FALSE
#define BIND_sqlite3_mutex_notheld_FUNCTION FALSE
#define BIND_sqlite3_mutex_try_FUNCTION FALSE
#define BIND_sqlite3_next_stmt_FUNCTION FALSE
#define BIND_sqlite3_open_FUNCTION TRUE
#define BIND_sqlite3_open16_FUNCTION FALSE
#define BIND_sqlite3_open_v2_FUNCTION FALSE
#define BIND_sqlite3_os_end_FUNCTION FALSE
#define BIND_sqlite3_os_init_FUNCTION FALSE
#define BIND_sqlite3_overload_function_FUNCTION FALSE
#define BIND_sqlite3_prepare_FUNCTION FALSE
#define BIND_sqlite3_prepare16_FUNCTION FALSE
#define BIND_sqlite3_prepare16_v2_FUNCTION FALSE
#define BIND_sqlite3_prepare_v2_FUNCTION TRUE
#define BIND_sqlite3_profile_FUNCTION FALSE
#define BIND_sqlite3_progress_handler_FUNCTION FALSE
#define BIND_sqlite3_randomness_FUNCTION FALSE
#define BIND_sqlite3_realloc_FUNCTION FALSE
#define BIND_sqlite3_realloc64_FUNCTION FALSE
#define BIND_sqlite3_release_memory_FUNCTION FALSE
#define BIND_sqlite3_reset_FUNCTION TRUE
#define BIND_sqlite3_reset_auto_extension_FUNCTION FALSE
#define BIND_sqlite3_result_blob_FUNCTION FALSE
#define BIND_sqlite3_result_blob64_FUNCTION FALSE
#define BIND_sqlite3_result_double_FUNCTION FALSE
#define BIND_sqlite3_result_error_FUNCTION FALSE
#define BIND_sqlite3_result_error16_FUNCTION FALSE
#define BIND_sqlite3_result_error_code_FUNCTION FALSE
#define BIND_sqlite3_result_error_nomem_FUNCTION FALSE
#define BIND_sqlite3_result_error_toobig_FUNCTION FALSE
#define BIND_sqlite3_result_int_FUNCTION FALSE
#define BIND_sqlite3_result_int64_FUNCTION FALSE
#define BIND_sqlite3_result_null_FUNCTION FALSE
#define BIND_sqlite3_result_text_FUNCTION FALSE
#define BIND_sqlite3_result_text16_FUNCTION FALSE
#define BIND_sqlite3_result_text16be_FUNCTION FALSE
#define BIND_sqlite3_result_text16le_FUNCTION FALSE
#define BIND_sqlite3_result_text64_FUNCTION FALSE
#define BIND_sqlite3_result_value_FUNCTION FALSE
#define BIND_sqlite3_result_zeroblob_FUNCTION FALSE
#define BIND_sqlite3_rollback_hook_FUNCTION FALSE
#define BIND_sqlite3_rtree_geometry_callback_FUNCTION FALSE
#define BIND_sqlite3_rtree_query_callback_FUNCTION FALSE
#define BIND_sqlite3_set_authorizer_FUNCTION FALSE
#define BIND_sqlite3_set_auxdata_FUNCTION FALSE
#define BIND_sqlite3_shutdown_FUNCTION FALSE
#define BIND_sqlite3_sleep_FUNCTION FALSE
#define BIND_sqlite3_snprintf_FUNCTION FALSE
#define BIND_sqlite3_soft_heap_limit_FUNCTION FALSE
#define BIND_sqlite3_soft_heap_limit64_FUNCTION FALSE
#define BIND_sqlite3_sourceid_FUNCTION FALSE
#define BIND_sqlite3_sql_FUNCTION FALSE
#define BIND_sqlite3_status_FUNCTION FALSE
#define BIND_sqlite3_status64_FUNCTION FALSE
#define BIND_sqlite3_step_FUNCTION TRUE
#define BIND_sqlite3_stmt_busy_FUNCTION FALSE
#define BIND_sqlite3_stmt_readonly_FUNCTION FALSE
#define BIND_sqlite3_stmt_scanstatus_FUNCTION FALSE
#define BIND_sqlite3_stmt_scanstatus_reset_FUNCTION FALSE
#define BIND_sqlite3_stmt_status_FUNCTION FALSE
#define BIND_sqlite3_strglob_FUNCTION FALSE
#define BIND_sqlite3_stricmp_FUNCTION FALSE
#define BIND_sqlite3_strnicmp_FUNCTION FALSE
#define BIND_sqlite3_table_column_metadata_FUNCTION FALSE
#define BIND_sqlite3_test_control_FUNCTION FALSE
#define BIND_sqlite3_thread_cleanup_FUNCTION FALSE
#define BIND_sqlite3_threadsafe_FUNCTION FALSE
#define BIND_sqlite3_total_changes_FUNCTION TRUE
#define BIND_sqlite3_trace_FUNCTION FALSE
#define BIND_sqlite3_transfer_bindings_FUNCTION FALSE
#define BIND_sqlite3_unlock_notify_FUNCTION FALSE
#define BIND_sqlite3_update_hook_FUNCTION FALSE
#define BIND_sqlite3_uri_boolean_FUNCTION FALSE
#define BIND_sqlite3_uri_int64_FUNCTION FALSE
#define BIND_sqlite3_uri_parameter_FUNCTION FALSE
#define BIND_sqlite3_user_data_FUNCTION FALSE
#define BIND_sqlite3_value_blob_FUNCTION FALSE
#define BIND_sqlite3_value_bytes_FUNCTION FALSE
#define BIND_sqlite3_value_bytes16_FUNCTION FALSE
#define BIND_sqlite3_value_double_FUNCTION FALSE
#define BIND_sqlite3_value_int_FUNCTION FALSE
#define BIND_sqlite3_value_int64_FUNCTION FALSE
#define BIND_sqlite3_value_numeric_type_FUNCTION FALSE
#define BIND_sqlite3_value_text_FUNCTION FALSE
#define BIND_sqlite3_value_text16_FUNCTION FALSE
#define BIND_sqlite3_value_text16be_FUNCTION FALSE
#define BIND_sqlite3_value_text16le_FUNCTION FALSE
#define BIND_sqlite3_value_type_FUNCTION FALSE
#define BIND_sqlite3_vfs_find_FUNCTION FALSE
#define BIND_sqlite3_vfs_register_FUNCTION FALSE
#define BIND_sqlite3_vfs_unregister_FUNCTION FALSE
#define BIND_sqlite3_vmprintf_FUNCTION FALSE
#define BIND_sqlite3_vsnprintf_FUNCTION FALSE
#define BIND_sqlite3_vtab_config_FUNCTION FALSE
#define BIND_sqlite3_vtab_on_conflict_FUNCTION FALSE
#define BIND_sqlite3_wal_autocheckpoint_FUNCTION FALSE
#define BIND_sqlite3_wal_checkpoint_FUNCTION FALSE
#define BIND_sqlite3_wal_checkpoint_v2_FUNCTION FALSE
#define BIND_sqlite3_wal_hook_FUNCTION FALSE

/*
 * Header Files
 * ------------
 *
 * These are the header files that defined the
 * classes and functions for which bindings have
 * been generated. If any of these are not needed
 * they should be commented out.
 *
 * TODO: ONLY the filename is inserted here automatically.
 *       If the file is not directly on the include path,
 *       you will need to prepend the relative path.
 */

#include <stdlib.h>
#include "mruby.h"
#include "mruby/array.h"
#include "mruby/class.h"
#include "mruby/data.h"
#include "mruby/string.h"
#include "mruby/value.h"
#include "mruby/variable.h"
#include "sqlite3.h"

/*
 * Class initialization function declarations
 * ------------------------------------------
 *
 * These declarations are controlled by the macros in the
 * "Class Bindings Options" section above.
 */

#if BIND_Mem_TYPE
void mrb_SQLite_Mem_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3_TYPE
void mrb_SQLite_Sqlite3_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3Backup_TYPE
void mrb_SQLite_Sqlite3Backup_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3Blob_TYPE
void mrb_SQLite_Sqlite3Blob_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3Context_TYPE
void mrb_SQLite_Sqlite3Context_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3File_TYPE
void mrb_SQLite_Sqlite3File_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3IndexConstraint_TYPE
void mrb_SQLite_Sqlite3IndexConstraint_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3IndexConstraintUsage_TYPE
void mrb_SQLite_Sqlite3IndexConstraintUsage_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3IndexInfo_TYPE
void mrb_SQLite_Sqlite3IndexInfo_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3IndexOrderby_TYPE
void mrb_SQLite_Sqlite3IndexOrderby_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3IoMethods_TYPE
void mrb_SQLite_Sqlite3IoMethods_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3MemMethods_TYPE
void mrb_SQLite_Sqlite3MemMethods_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3Module_TYPE
void mrb_SQLite_Sqlite3Module_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3Mutex_TYPE
void mrb_SQLite_Sqlite3Mutex_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3MutexMethods_TYPE
void mrb_SQLite_Sqlite3MutexMethods_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3Pcache_TYPE
void mrb_SQLite_Sqlite3Pcache_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3PcacheMethods_TYPE
void mrb_SQLite_Sqlite3PcacheMethods_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3PcacheMethods2_TYPE
void mrb_SQLite_Sqlite3PcacheMethods2_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3PcachePage_TYPE
void mrb_SQLite_Sqlite3PcachePage_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3RtreeGeometry_TYPE
void mrb_SQLite_Sqlite3RtreeGeometry_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3RtreeQueryInfo_TYPE
void mrb_SQLite_Sqlite3RtreeQueryInfo_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3Stmt_TYPE
void mrb_SQLite_Sqlite3Stmt_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3Vfs_TYPE
void mrb_SQLite_Sqlite3Vfs_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3Vtab_TYPE
void mrb_SQLite_Sqlite3Vtab_init(mrb_state* mrb);
#endif
#if BIND_Sqlite3VtabCursor_TYPE
void mrb_SQLite_Sqlite3VtabCursor_init(mrb_state* mrb);
#endif

/*
 * Boxing declarations
 * -------------------
 *
 * These declarations are controlled by the macros in the
 * "Class Bindings Options" section above.
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

#if BIND_Sqlite3Mutex_TYPE
mrb_value
mruby_box_sqlite3_mutex(mrb_state* mrb, struct sqlite3_mutex *unboxed);

mrb_value
mruby_giftwrap_sqlite3_mutex(mrb_state* mrb, struct sqlite3_mutex *unboxed);

void
mruby_set_sqlite3_mutex_data_ptr(mrb_value obj, struct sqlite3_mutex *unboxed);

void
mruby_gift_sqlite3_mutex_data_ptr(mrb_value obj, struct sqlite3_mutex *unboxed);

struct sqlite3_mutex *
mruby_unbox_sqlite3_mutex(mrb_value boxed);
#endif

#if BIND_Sqlite3MutexMethods_TYPE
mrb_value
mruby_box_sqlite3_mutex_methods(mrb_state* mrb, struct sqlite3_mutex_methods *unboxed);

mrb_value
mruby_giftwrap_sqlite3_mutex_methods(mrb_state* mrb, struct sqlite3_mutex_methods *unboxed);

void
mruby_set_sqlite3_mutex_methods_data_ptr(mrb_value obj, struct sqlite3_mutex_methods *unboxed);

void
mruby_gift_sqlite3_mutex_methods_data_ptr(mrb_value obj, struct sqlite3_mutex_methods *unboxed);

struct sqlite3_mutex_methods *
mruby_unbox_sqlite3_mutex_methods(mrb_value boxed);
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


/*
 * Macro definition function declaration
 * -------------------------------------
 */
void mruby_SQLite_define_macro_constants(mrb_state* mrb);

#endif
