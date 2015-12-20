CTypes.set_destructor('sqlite3', 'sqlite3_close')
CTypes.set_destructor('struct sqlite3', 'sqlite3_close')
CTypes.set_destructor('struct sqlite3_stmt', 'sqlite3_finalize')

CTypes.define('out:sqlite **') do
  self.out_only = true
  self.recv_template = "sqlite3 * %{value};"
  self.invocation_arg_template = "&%{value}"
  self.boxing_fn.invocation_template = "mrb_value %{as} = mruby_giftwrap_sqlite3(mrb, %{box});"
end

CTypes.define('out:sqlite3_stmt **') do
  self.out_only = true
  self.recv_template = "sqlite3_stmt * %{value};"
  self.invocation_arg_template = "&%{value}"
  self.boxing_fn.invocation_template = "mrb_value %{as} = mruby_giftwrap_sqlite3_stmt(mrb, %{box});"
end

# ## void * sqlite3_aggregate_context(sqlite3_context * arg1, int nBytes)
# # Return value
# CTypes.set_fn_return_type('sqlite3_aggregate_context', CTypes['???'])

# ## int sqlite3_auto_extension(void (*)(void) xEntryPoint)
# # Param: xEntryPoint
# CTypes.set_fn_param_type('sqlite3_auto_extension', 'xEntryPoint', CTypes['???'])

## int sqlite3_bind_blob(sqlite3_stmt * arg1, int arg2, const void * arg3, int n, void (*)(void *) arg5)
# Param: arg3
CTypes.set_fn_param_type('sqlite3_bind_blob', 'arg3', CTypes['const char *'])
# Param: arg5
CTypes.set_fn_param_type('sqlite3_bind_blob', 'arg5', CTypes['unused:pointer'])

# ## int sqlite3_bind_blob64(sqlite3_stmt * arg1, int arg2, const void * arg3, sqlite3_uint64 arg4, void (*)(void *) arg5)
# # Param: arg3
# CTypes.set_fn_param_type('sqlite3_bind_blob64', 'arg3', CTypes['???'])
# # Param: arg5
# CTypes.set_fn_param_type('sqlite3_bind_blob64', 'arg5', CTypes['???'])

## int sqlite3_bind_text(sqlite3_stmt * arg1, int arg2, const char * arg3, int arg4, void (*)(void *) arg5)
# Param: arg5
CTypes.set_fn_param_type('sqlite3_bind_text', 'arg5', CTypes['unused:pointer'])

# ## int sqlite3_bind_text16(sqlite3_stmt * arg1, int arg2, const void * arg3, int arg4, void (*)(void *) arg5)
# # Param: arg3
# CTypes.set_fn_param_type('sqlite3_bind_text16', 'arg3', CTypes['???'])
# # Param: arg5
# CTypes.set_fn_param_type('sqlite3_bind_text16', 'arg5', CTypes['???'])

# ## int sqlite3_bind_text64(sqlite3_stmt * arg1, int arg2, const char * arg3, sqlite3_uint64 arg4, void (*)(void *) arg5, unsigned char encoding)
# # Param: arg5
# CTypes.set_fn_param_type('sqlite3_bind_text64', 'arg5', CTypes['???'])

# ## int sqlite3_blob_open(sqlite3 * arg1, const char * zDb, const char * zTable, const char * zColumn, sqlite3_int64 iRow, int flags, sqlite3_blob ** ppBlob)
# # Param: ppBlob
# CTypes.set_fn_param_type('sqlite3_blob_open', 'ppBlob', CTypes['???'])

# ## int sqlite3_blob_read(sqlite3_blob * arg1, void * Z, int N, int iOffset)
# # Param: Z
# CTypes.set_fn_param_type('sqlite3_blob_read', 'Z', CTypes['???'])

# ## int sqlite3_blob_write(sqlite3_blob * arg1, const void * z, int n, int iOffset)
# # Param: z
# CTypes.set_fn_param_type('sqlite3_blob_write', 'z', CTypes['???'])

# ## int sqlite3_busy_handler(sqlite3 * arg1, int (*)(void *, int) arg2, void * arg3)
# # Param: arg2
# CTypes.set_fn_param_type('sqlite3_busy_handler', 'arg2', CTypes['???'])
# # Param: arg3
# CTypes.set_fn_param_type('sqlite3_busy_handler', 'arg3', CTypes['???'])

# ## int sqlite3_cancel_auto_extension(void (*)(void) xEntryPoint)
# # Param: xEntryPoint
# CTypes.set_fn_param_type('sqlite3_cancel_auto_extension', 'xEntryPoint', CTypes['???'])

# ## int sqlite3_collation_needed(sqlite3 * arg1, void * arg2, void (*)(void *, sqlite3 *, int, const char *) arg3)
# # Param: arg2
# CTypes.set_fn_param_type('sqlite3_collation_needed', 'arg2', CTypes['???'])
# # Param: arg3
# CTypes.set_fn_param_type('sqlite3_collation_needed', 'arg3', CTypes['???'])

# ## int sqlite3_collation_needed16(sqlite3 * arg1, void * arg2, void (*)(void *, sqlite3 *, int, const void *) arg3)
# # Param: arg2
# CTypes.set_fn_param_type('sqlite3_collation_needed16', 'arg2', CTypes['???'])
# # Param: arg3
# CTypes.set_fn_param_type('sqlite3_collation_needed16', 'arg3', CTypes['???'])

## const void * sqlite3_column_blob(sqlite3_stmt * arg1, int iCol)
# Return value
CTypes.set_fn_return_type('sqlite3_column_blob', CTypes['???'])

# ## const void * sqlite3_column_database_name16(sqlite3_stmt * arg1, int arg2)
# # Return value
# CTypes.set_fn_return_type('sqlite3_column_database_name16', CTypes['???'])

# ## const void * sqlite3_column_decltype16(sqlite3_stmt * arg1, int arg2)
# # Return value
# CTypes.set_fn_return_type('sqlite3_column_decltype16', CTypes['???'])

# ## const void * sqlite3_column_name16(sqlite3_stmt * arg1, int N)
# # Return value
# CTypes.set_fn_return_type('sqlite3_column_name16', CTypes['???'])

# ## const void * sqlite3_column_origin_name16(sqlite3_stmt * arg1, int arg2)
# # Return value
# CTypes.set_fn_return_type('sqlite3_column_origin_name16', CTypes['???'])

# ## const void * sqlite3_column_table_name16(sqlite3_stmt * arg1, int arg2)
# # Return value
# CTypes.set_fn_return_type('sqlite3_column_table_name16', CTypes['???'])

## const unsigned char * sqlite3_column_text(sqlite3_stmt * arg1, int iCol)
# Return value
CTypes.set_fn_return_type('sqlite3_column_text', CTypes['const char *'])

# ## const void * sqlite3_column_text16(sqlite3_stmt * arg1, int iCol)
# # Return value
# CTypes.set_fn_return_type('sqlite3_column_text16', CTypes['???'])

# ## void * sqlite3_commit_hook(sqlite3 * arg1, int (*)(void *) arg2, void * arg3)
# # Return value
# CTypes.set_fn_return_type('sqlite3_commit_hook', CTypes['???'])
# # Param: arg2
# CTypes.set_fn_param_type('sqlite3_commit_hook', 'arg2', CTypes['???'])
# # Param: arg3
# CTypes.set_fn_param_type('sqlite3_commit_hook', 'arg3', CTypes['???'])

# ## int sqlite3_complete16(const void * sql)
# # Param: sql
# CTypes.set_fn_param_type('sqlite3_complete16', 'sql', CTypes['???'])

# ## int sqlite3_create_collation(sqlite3 * arg1, const char * zName, int eTextRep, void * pArg, int (*)(void *, int, const void *, int, const void *) xCompare)
# # Param: pArg
# CTypes.set_fn_param_type('sqlite3_create_collation', 'pArg', CTypes['???'])
# # Param: xCompare
# CTypes.set_fn_param_type('sqlite3_create_collation', 'xCompare', CTypes['???'])

# ## int sqlite3_create_collation16(sqlite3 * arg1, const void * zName, int eTextRep, void * pArg, int (*)(void *, int, const void *, int, const void *) xCompare)
# # Param: zName
# CTypes.set_fn_param_type('sqlite3_create_collation16', 'zName', CTypes['???'])
# # Param: pArg
# CTypes.set_fn_param_type('sqlite3_create_collation16', 'pArg', CTypes['???'])
# # Param: xCompare
# CTypes.set_fn_param_type('sqlite3_create_collation16', 'xCompare', CTypes['???'])

# ## int sqlite3_create_collation_v2(sqlite3 * arg1, const char * zName, int eTextRep, void * pArg, int (*)(void *, int, const void *, int, const void *) xCompare, void (*)(void *) xDestroy)
# # Param: pArg
# CTypes.set_fn_param_type('sqlite3_create_collation_v2', 'pArg', CTypes['???'])
# # Param: xCompare
# CTypes.set_fn_param_type('sqlite3_create_collation_v2', 'xCompare', CTypes['???'])
# # Param: xDestroy
# CTypes.set_fn_param_type('sqlite3_create_collation_v2', 'xDestroy', CTypes['???'])

# ## int sqlite3_create_function(sqlite3 * db, const char * zFunctionName, int nArg, int eTextRep, void * pApp, void (*)(sqlite3_context *, int, sqlite3_value **) xFunc, void (*)(sqlite3_context *, int, sqlite3_value **) xStep, void (*)(sqlite3_context *) xFinal)
# # Param: pApp
# CTypes.set_fn_param_type('sqlite3_create_function', 'pApp', CTypes['???'])
# # Param: xFunc
# CTypes.set_fn_param_type('sqlite3_create_function', 'xFunc', CTypes['???'])
# # Param: xStep
# CTypes.set_fn_param_type('sqlite3_create_function', 'xStep', CTypes['???'])
# # Param: xFinal
# CTypes.set_fn_param_type('sqlite3_create_function', 'xFinal', CTypes['???'])

# ## int sqlite3_create_function16(sqlite3 * db, const void * zFunctionName, int nArg, int eTextRep, void * pApp, void (*)(sqlite3_context *, int, sqlite3_value **) xFunc, void (*)(sqlite3_context *, int, sqlite3_value **) xStep, void (*)(sqlite3_context *) xFinal)
# # Param: zFunctionName
# CTypes.set_fn_param_type('sqlite3_create_function16', 'zFunctionName', CTypes['???'])
# # Param: pApp
# CTypes.set_fn_param_type('sqlite3_create_function16', 'pApp', CTypes['???'])
# # Param: xFunc
# CTypes.set_fn_param_type('sqlite3_create_function16', 'xFunc', CTypes['???'])
# # Param: xStep
# CTypes.set_fn_param_type('sqlite3_create_function16', 'xStep', CTypes['???'])
# # Param: xFinal
# CTypes.set_fn_param_type('sqlite3_create_function16', 'xFinal', CTypes['???'])

# ## int sqlite3_create_function_v2(sqlite3 * db, const char * zFunctionName, int nArg, int eTextRep, void * pApp, void (*)(sqlite3_context *, int, sqlite3_value **) xFunc, void (*)(sqlite3_context *, int, sqlite3_value **) xStep, void (*)(sqlite3_context *) xFinal, void (*)(void *) xDestroy)
# # Param: pApp
# CTypes.set_fn_param_type('sqlite3_create_function_v2', 'pApp', CTypes['???'])
# # Param: xFunc
# CTypes.set_fn_param_type('sqlite3_create_function_v2', 'xFunc', CTypes['???'])
# # Param: xStep
# CTypes.set_fn_param_type('sqlite3_create_function_v2', 'xStep', CTypes['???'])
# # Param: xFinal
# CTypes.set_fn_param_type('sqlite3_create_function_v2', 'xFinal', CTypes['???'])
# # Param: xDestroy
# CTypes.set_fn_param_type('sqlite3_create_function_v2', 'xDestroy', CTypes['???'])

# ## int sqlite3_create_module(sqlite3 * db, const char * zName, const sqlite3_module * p, void * pClientData)
# # Param: pClientData
# CTypes.set_fn_param_type('sqlite3_create_module', 'pClientData', CTypes['???'])

# ## int sqlite3_create_module_v2(sqlite3 * db, const char * zName, const sqlite3_module * p, void * pClientData, void (*)(void *) xDestroy)
# # Param: pClientData
# CTypes.set_fn_param_type('sqlite3_create_module_v2', 'pClientData', CTypes['???'])
# # Param: xDestroy
# CTypes.set_fn_param_type('sqlite3_create_module_v2', 'xDestroy', CTypes['???'])

# ## int sqlite3_db_status(sqlite3 * arg1, int op, int * pCur, int * pHiwtr, int resetFlg)
# # Param: pCur
# CTypes.set_fn_param_type('sqlite3_db_status', 'pCur', CTypes['???'])
# # Param: pHiwtr
# CTypes.set_fn_param_type('sqlite3_db_status', 'pHiwtr', CTypes['???'])

# ## const void * sqlite3_errmsg16(sqlite3 * arg1)
# # Return value
# CTypes.set_fn_return_type('sqlite3_errmsg16', CTypes['???'])

# ## int sqlite3_exec(sqlite3 * arg1, const char * sql, int (*)(void *, int, char **, char **) callback, void * arg4, char ** errmsg)
# # Param: callback
# CTypes.set_fn_param_type('sqlite3_exec', 'callback', CTypes['???'])
# # Param: arg4
# CTypes.set_fn_param_type('sqlite3_exec', 'arg4', CTypes['???'])
# # Param: errmsg
# CTypes.set_fn_param_type('sqlite3_exec', 'errmsg', CTypes['???'])

# ## int sqlite3_file_control(sqlite3 * arg1, const char * zDbName, int op, void * arg4)
# # Param: arg4
# CTypes.set_fn_param_type('sqlite3_file_control', 'arg4', CTypes['???'])

# ## void sqlite3_free(void * arg1)
# # Param: arg1
# CTypes.set_fn_param_type('sqlite3_free', 'arg1', CTypes['???'])

# ## void sqlite3_free_table(char ** result)
# # Param: result
# CTypes.set_fn_param_type('sqlite3_free_table', 'result', CTypes['???'])

# ## void * sqlite3_get_auxdata(sqlite3_context * arg1, int N)
# # Return value
# CTypes.set_fn_return_type('sqlite3_get_auxdata', CTypes['???'])

# ## int sqlite3_get_table(sqlite3 * db, const char * zSql, char *** pazResult, int * pnRow, int * pnColumn, char ** pzErrmsg)
# # Param: pazResult
# CTypes.set_fn_param_type('sqlite3_get_table', 'pazResult', CTypes['???'])
# # Param: pnRow
# CTypes.set_fn_param_type('sqlite3_get_table', 'pnRow', CTypes['???'])
# # Param: pnColumn
# CTypes.set_fn_param_type('sqlite3_get_table', 'pnColumn', CTypes['???'])
# # Param: pzErrmsg
# CTypes.set_fn_param_type('sqlite3_get_table', 'pzErrmsg', CTypes['???'])

# ## int sqlite3_load_extension(sqlite3 * db, const char * zFile, const char * zProc, char ** pzErrMsg)
# # Param: pzErrMsg
# CTypes.set_fn_param_type('sqlite3_load_extension', 'pzErrMsg', CTypes['???'])

# ## void * sqlite3_malloc(int arg1)
# # Return value
# CTypes.set_fn_return_type('sqlite3_malloc', CTypes['???'])

# ## void * sqlite3_malloc64(sqlite3_uint64 arg1)
# # Return value
# CTypes.set_fn_return_type('sqlite3_malloc64', CTypes['???'])

# ## int sqlite3_memory_alarm(void (*)(void *, sqlite3_int64, int) arg1, void * arg2, sqlite3_int64 arg3)
# # Param: arg1
# CTypes.set_fn_param_type('sqlite3_memory_alarm', 'arg1', CTypes['???'])
# # Param: arg2
# CTypes.set_fn_param_type('sqlite3_memory_alarm', 'arg2', CTypes['???'])

# ## sqlite3_uint64 sqlite3_msize(void * arg1)
# # Param: arg1
# CTypes.set_fn_param_type('sqlite3_msize', 'arg1', CTypes['???'])

## int sqlite3_open(const char * filename, sqlite3 ** ppDb)
# Param: ppDb
CTypes.set_fn_param_type('sqlite3_open', 'ppDb', CTypes['out:sqlite **'])

# ## int sqlite3_open16(const void * filename, sqlite3 ** ppDb)
# # Param: filename
# CTypes.set_fn_param_type('sqlite3_open16', 'filename', CTypes['???'])
# # Param: ppDb
# CTypes.set_fn_param_type('sqlite3_open16', 'ppDb', CTypes['???'])

# ## int sqlite3_open_v2(const char * filename, sqlite3 ** ppDb, int flags, const char * zVfs)
# # Param: ppDb
# CTypes.set_fn_param_type('sqlite3_open_v2', 'ppDb', CTypes['???'])

# ## int sqlite3_prepare(sqlite3 * db, const char * zSql, int nByte, sqlite3_stmt ** ppStmt, const char ** pzTail)
# # Param: ppStmt
# CTypes.set_fn_param_type('sqlite3_prepare', 'ppStmt', CTypes['???'])
# # Param: pzTail
# CTypes.set_fn_param_type('sqlite3_prepare', 'pzTail', CTypes['???'])

# ## int sqlite3_prepare16(sqlite3 * db, const void * zSql, int nByte, sqlite3_stmt ** ppStmt, const void ** pzTail)
# # Param: zSql
# CTypes.set_fn_param_type('sqlite3_prepare16', 'zSql', CTypes['???'])
# # Param: ppStmt
# CTypes.set_fn_param_type('sqlite3_prepare16', 'ppStmt', CTypes['???'])
# # Param: pzTail
# CTypes.set_fn_param_type('sqlite3_prepare16', 'pzTail', CTypes['???'])

# ## int sqlite3_prepare16_v2(sqlite3 * db, const void * zSql, int nByte, sqlite3_stmt ** ppStmt, const void ** pzTail)
# # Param: zSql
# CTypes.set_fn_param_type('sqlite3_prepare16_v2', 'zSql', CTypes['???'])
# # Param: ppStmt
# CTypes.set_fn_param_type('sqlite3_prepare16_v2', 'ppStmt', CTypes['???'])
# # Param: pzTail
# CTypes.set_fn_param_type('sqlite3_prepare16_v2', 'pzTail', CTypes['???'])

## int sqlite3_prepare_v2(sqlite3 * db, const char * zSql, int nByte, sqlite3_stmt ** ppStmt, const char ** pzTail)
# Param: ppStmt
CTypes.set_fn_param_type('sqlite3_prepare_v2', 'ppStmt', CTypes['out:sqlite3_stmt **'])
# Param: pzTail
CTypes.set_fn_param_type('sqlite3_prepare_v2', 'pzTail', CTypes['out:const char **'])

# ## void * sqlite3_profile(sqlite3 * arg1, void (*)(void *, const char *, sqlite3_uint64) xProfile, void * arg3)
# # Return value
# CTypes.set_fn_return_type('sqlite3_profile', CTypes['???'])
# # Param: xProfile
# CTypes.set_fn_param_type('sqlite3_profile', 'xProfile', CTypes['???'])
# # Param: arg3
# CTypes.set_fn_param_type('sqlite3_profile', 'arg3', CTypes['???'])

# ## void sqlite3_progress_handler(sqlite3 * arg1, int arg2, int (*)(void *) arg3, void * arg4)
# # Param: arg3
# CTypes.set_fn_param_type('sqlite3_progress_handler', 'arg3', CTypes['???'])
# # Param: arg4
# CTypes.set_fn_param_type('sqlite3_progress_handler', 'arg4', CTypes['???'])

# ## void sqlite3_randomness(int N, void * P)
# # Param: P
# CTypes.set_fn_param_type('sqlite3_randomness', 'P', CTypes['???'])

# ## void * sqlite3_realloc(void * arg1, int arg2)
# # Return value
# CTypes.set_fn_return_type('sqlite3_realloc', CTypes['???'])
# # Param: arg1
# CTypes.set_fn_param_type('sqlite3_realloc', 'arg1', CTypes['???'])

# ## void * sqlite3_realloc64(void * arg1, sqlite3_uint64 arg2)
# # Return value
# CTypes.set_fn_return_type('sqlite3_realloc64', CTypes['???'])
# # Param: arg1
# CTypes.set_fn_param_type('sqlite3_realloc64', 'arg1', CTypes['???'])

# ## void sqlite3_result_blob(sqlite3_context * arg1, const void * arg2, int arg3, void (*)(void *) arg4)
# # Param: arg2
# CTypes.set_fn_param_type('sqlite3_result_blob', 'arg2', CTypes['???'])
# # Param: arg4
# CTypes.set_fn_param_type('sqlite3_result_blob', 'arg4', CTypes['???'])

# ## void sqlite3_result_blob64(sqlite3_context * arg1, const void * arg2, sqlite3_uint64 arg3, void (*)(void *) arg4)
# # Param: arg2
# CTypes.set_fn_param_type('sqlite3_result_blob64', 'arg2', CTypes['???'])
# # Param: arg4
# CTypes.set_fn_param_type('sqlite3_result_blob64', 'arg4', CTypes['???'])

# ## void sqlite3_result_error16(sqlite3_context * arg1, const void * arg2, int arg3)
# # Param: arg2
# CTypes.set_fn_param_type('sqlite3_result_error16', 'arg2', CTypes['???'])

# ## void sqlite3_result_text(sqlite3_context * arg1, const char * arg2, int arg3, void (*)(void *) arg4)
# # Param: arg4
# CTypes.set_fn_param_type('sqlite3_result_text', 'arg4', CTypes['???'])

# ## void sqlite3_result_text16(sqlite3_context * arg1, const void * arg2, int arg3, void (*)(void *) arg4)
# # Param: arg2
# CTypes.set_fn_param_type('sqlite3_result_text16', 'arg2', CTypes['???'])
# # Param: arg4
# CTypes.set_fn_param_type('sqlite3_result_text16', 'arg4', CTypes['???'])

# ## void sqlite3_result_text16be(sqlite3_context * arg1, const void * arg2, int arg3, void (*)(void *) arg4)
# # Param: arg2
# CTypes.set_fn_param_type('sqlite3_result_text16be', 'arg2', CTypes['???'])
# # Param: arg4
# CTypes.set_fn_param_type('sqlite3_result_text16be', 'arg4', CTypes['???'])

# ## void sqlite3_result_text16le(sqlite3_context * arg1, const void * arg2, int arg3, void (*)(void *) arg4)
# # Param: arg2
# CTypes.set_fn_param_type('sqlite3_result_text16le', 'arg2', CTypes['???'])
# # Param: arg4
# CTypes.set_fn_param_type('sqlite3_result_text16le', 'arg4', CTypes['???'])

# ## void sqlite3_result_text64(sqlite3_context * arg1, const char * arg2, sqlite3_uint64 arg3, void (*)(void *) arg4, unsigned char encoding)
# # Param: arg4
# CTypes.set_fn_param_type('sqlite3_result_text64', 'arg4', CTypes['???'])

# ## void * sqlite3_rollback_hook(sqlite3 * arg1, void (*)(void *) arg2, void * arg3)
# # Return value
# CTypes.set_fn_return_type('sqlite3_rollback_hook', CTypes['???'])
# # Param: arg2
# CTypes.set_fn_param_type('sqlite3_rollback_hook', 'arg2', CTypes['???'])
# # Param: arg3
# CTypes.set_fn_param_type('sqlite3_rollback_hook', 'arg3', CTypes['???'])

# ## int sqlite3_rtree_geometry_callback(sqlite3 * db, const char * zGeom, int (*)(sqlite3_rtree_geometry *, int, sqlite3_rtree_dbl *, int *) xGeom, void * pContext)
# # Param: xGeom
# CTypes.set_fn_param_type('sqlite3_rtree_geometry_callback', 'xGeom', CTypes['???'])
# # Param: pContext
# CTypes.set_fn_param_type('sqlite3_rtree_geometry_callback', 'pContext', CTypes['???'])

# ## int sqlite3_rtree_query_callback(sqlite3 * db, const char * zQueryFunc, int (*)(sqlite3_rtree_query_info *) xQueryFunc, void * pContext, void (*)(void *) xDestructor)
# # Param: xQueryFunc
# CTypes.set_fn_param_type('sqlite3_rtree_query_callback', 'xQueryFunc', CTypes['???'])
# # Param: pContext
# CTypes.set_fn_param_type('sqlite3_rtree_query_callback', 'pContext', CTypes['???'])
# # Param: xDestructor
# CTypes.set_fn_param_type('sqlite3_rtree_query_callback', 'xDestructor', CTypes['???'])

# ## int sqlite3_set_authorizer(sqlite3 * arg1, int (*)(void *, int, const char *, const char *, const char *, const char *) xAuth, void * pUserData)
# # Param: xAuth
# CTypes.set_fn_param_type('sqlite3_set_authorizer', 'xAuth', CTypes['???'])
# # Param: pUserData
# CTypes.set_fn_param_type('sqlite3_set_authorizer', 'pUserData', CTypes['???'])

# ## void sqlite3_set_auxdata(sqlite3_context * arg1, int N, void * arg3, void (*)(void *) arg4)
# # Param: arg3
# CTypes.set_fn_param_type('sqlite3_set_auxdata', 'arg3', CTypes['???'])
# # Param: arg4
# CTypes.set_fn_param_type('sqlite3_set_auxdata', 'arg4', CTypes['???'])

# ## int sqlite3_status(int op, int * pCurrent, int * pHighwater, int resetFlag)
# # Param: pCurrent
# CTypes.set_fn_param_type('sqlite3_status', 'pCurrent', CTypes['???'])
# # Param: pHighwater
# CTypes.set_fn_param_type('sqlite3_status', 'pHighwater', CTypes['???'])

# ## int sqlite3_status64(int op, sqlite3_int64 * pCurrent, sqlite3_int64 * pHighwater, int resetFlag)
# # Param: pCurrent
# CTypes.set_fn_param_type('sqlite3_status64', 'pCurrent', CTypes['???'])
# # Param: pHighwater
# CTypes.set_fn_param_type('sqlite3_status64', 'pHighwater', CTypes['???'])

# ## int sqlite3_stmt_scanstatus(sqlite3_stmt * pStmt, int idx, int iScanStatusOp, void * pOut)
# # Param: pOut
# CTypes.set_fn_param_type('sqlite3_stmt_scanstatus', 'pOut', CTypes['???'])

# ## int sqlite3_table_column_metadata(sqlite3 * db, const char * zDbName, const char * zTableName, const char * zColumnName, const char ** pzDataType, const char ** pzCollSeq, int * pNotNull, int * pPrimaryKey, int * pAutoinc)
# # Param: pzDataType
# CTypes.set_fn_param_type('sqlite3_table_column_metadata', 'pzDataType', CTypes['???'])
# # Param: pzCollSeq
# CTypes.set_fn_param_type('sqlite3_table_column_metadata', 'pzCollSeq', CTypes['???'])
# # Param: pNotNull
# CTypes.set_fn_param_type('sqlite3_table_column_metadata', 'pNotNull', CTypes['???'])
# # Param: pPrimaryKey
# CTypes.set_fn_param_type('sqlite3_table_column_metadata', 'pPrimaryKey', CTypes['???'])
# # Param: pAutoinc
# CTypes.set_fn_param_type('sqlite3_table_column_metadata', 'pAutoinc', CTypes['???'])

# ## void * sqlite3_trace(sqlite3 * arg1, void (*)(void *, const char *) xTrace, void * arg3)
# # Return value
# CTypes.set_fn_return_type('sqlite3_trace', CTypes['???'])
# # Param: xTrace
# CTypes.set_fn_param_type('sqlite3_trace', 'xTrace', CTypes['???'])
# # Param: arg3
# CTypes.set_fn_param_type('sqlite3_trace', 'arg3', CTypes['???'])

# ## int sqlite3_unlock_notify(sqlite3 * pBlocked, void (*)(void **, int) xNotify, void * pNotifyArg)
# # Param: xNotify
# CTypes.set_fn_param_type('sqlite3_unlock_notify', 'xNotify', CTypes['???'])
# # Param: pNotifyArg
# CTypes.set_fn_param_type('sqlite3_unlock_notify', 'pNotifyArg', CTypes['???'])

# ## void * sqlite3_update_hook(sqlite3 * arg1, void (*)(void *, int, const char *, const char *, sqlite3_int64) arg2, void * arg3)
# # Return value
# CTypes.set_fn_return_type('sqlite3_update_hook', CTypes['???'])
# # Param: arg2
# CTypes.set_fn_param_type('sqlite3_update_hook', 'arg2', CTypes['???'])
# # Param: arg3
# CTypes.set_fn_param_type('sqlite3_update_hook', 'arg3', CTypes['???'])

# ## void * sqlite3_user_data(sqlite3_context * arg1)
# # Return value
# CTypes.set_fn_return_type('sqlite3_user_data', CTypes['???'])

# ## const void * sqlite3_value_blob(sqlite3_value * arg1)
# # Return value
# CTypes.set_fn_return_type('sqlite3_value_blob', CTypes['???'])

# ## const unsigned char * sqlite3_value_text(sqlite3_value * arg1)
# # Return value
# CTypes.set_fn_return_type('sqlite3_value_text', CTypes['???'])

# ## const void * sqlite3_value_text16(sqlite3_value * arg1)
# # Return value
# CTypes.set_fn_return_type('sqlite3_value_text16', CTypes['???'])

# ## const void * sqlite3_value_text16be(sqlite3_value * arg1)
# # Return value
# CTypes.set_fn_return_type('sqlite3_value_text16be', CTypes['???'])

# ## const void * sqlite3_value_text16le(sqlite3_value * arg1)
# # Return value
# CTypes.set_fn_return_type('sqlite3_value_text16le', CTypes['???'])

# ## int sqlite3_wal_checkpoint_v2(sqlite3 * db, const char * zDb, int eMode, int * pnLog, int * pnCkpt)
# # Param: pnLog
# CTypes.set_fn_param_type('sqlite3_wal_checkpoint_v2', 'pnLog', CTypes['???'])
# # Param: pnCkpt
# CTypes.set_fn_param_type('sqlite3_wal_checkpoint_v2', 'pnCkpt', CTypes['???'])

# ## void * sqlite3_wal_hook(sqlite3 * arg1, int (*)(void *, sqlite3 *, const char *, int) arg2, void * arg3)
# # Return value
# CTypes.set_fn_return_type('sqlite3_wal_hook', CTypes['???'])
# # Param: arg2
# CTypes.set_fn_param_type('sqlite3_wal_hook', 'arg2', CTypes['???'])
# # Param: arg3
# CTypes.set_fn_param_type('sqlite3_wal_hook', 'arg3', CTypes['???'])
