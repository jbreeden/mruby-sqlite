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
    + [FAILED] works

  - execute_with_type_translation_and_hash
    + [FAILED] works

  - encoding
    + is not supported on MRuby

  - changes
    + works

  - batch_last_comment_is_processed
    + [FAILED] works
    Uncaught SQLite3::MisuseException: not an error
fixture.rb:47:in TestFixture.it
database.rb:87:in Object#instance_eval
fixture.rb:20:in TestFixture.describe
database.rb:88:in Object#instance_eval
fixture.rb:13:in TestFixture.initialize
database.rb:3

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
    + [FAILED] works

  - execute_yields_hash
    + [FAILED] works

  - table_info
    + [PENDING] works

  - total_changes_closed
Expected SQLite3::Exception to be raised, but nothing was
    + [FAILED] works

  - trace_requires_opendb
    + [PENDING] works

  - trace_with_block
    + [PENDING] works

  - trace_with_object
    + [PENDING] works

  - trace_takes_nil
    + [PENDING] works

  - last_insert_row_id_closed
    + [PENDING] works

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

  - inerrupt_closed
Expected SQLite3::Exception to be raised, but was NoMethodError
    + [FAILED] works

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
Expected SQLite3::BusyException to be raised, but nothing was
    + [FAILED] works

  - execute_with_empty_bind_params
    + works

  - query_with_named_bind_params
    + works

  - execute_with_named_bind_params
    + works

  FAILURE [8/25 tests failed + 18 pending]
