
SQLite3::Database
-----------------

  - segv
    + works

  - bignum
    + is not supported on MRuby

  - blob
    + works

  - get_first_row
    + works

  - get_first_row_with_type_translation_and_hash_results
    + works

  - execute_with_type_translation_and_hash
    + works

  - encoding
    + is not supported on MRuby

  - changes
    + works

  - batch_last_comment_is_processed
    + works

  - new
    + works

  - new_yields_self
    + works

  - new_with_options
    + Not supported

  - close
    + works

  - block_closes_self
    + works

  - prepare
    + works

  - block_prepare_does_not_double_close
    + works

  - total_changes
    + works

  - execute_returns_list_of_hash
    + works

  - execute_yields_hash
    + works

  - table_info
    + [PENDING] works

  - total_changes_closed
    + works

  - trace_requires_opendb
    + [PENDING] works

  - trace_with_block
    + [PENDING] works

  - trace_with_object
    + [PENDING] works

  - trace_takes_nil
    + [PENDING] works

  - last_insert_row_id
    + Returns 0 if no rows have been inserted
    + Returns non-zero if rows have been inserted
    + Raises SQLite3::Exception if called on a closed database

  - define_function
    + [PENDING] works

  - call_func_arg_type
    + [PENDING] works

  - define_varargs
    + [PENDING] works

  - call_func_blob
    + [PENDING] works

  - function_return
    + [PENDING] works

  - function_return_types
    + [PENDING] works

  - define_function_closed
    + [PENDING] works

  - inerrupt
    + Raises a SQLite3::Exception if called on a closed database
    + Does not raise if called on an open database

  - define_aggregate
    + [PENDING] works

  - authorizer_ok
    + [PENDING] works

  - authorizer_ignore
    + [PENDING] works

  - authorizer_fail
    + [PENDING] works

  - remove_auth
    + [PENDING] works

  - close_with_open_statements
    + works

  - execute_with_empty_bind_params
    + works

  - query_with_named_bind_params
    + works

  - execute_with_named_bind_params
    + works

  SUCCESS [0/29 tests failed + 17 pending]
