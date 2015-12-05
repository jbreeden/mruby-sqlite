/*
 * TODO: Update includes
 */
 #include "mruby_SQLite.h"


#if BIND_Mem_TYPE
/*
 * Boxing implementation for struct Mem
 */

static void free_Mem(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type Mem_data_type = {
   "struct Mem", free_Mem
};

mrb_value
mruby_box_Mem(mrb_state* mrb, struct Mem *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Mem_class(mrb), &Mem_data_type, box));
}

mrb_value
mruby_giftwrap_Mem(mrb_state* mrb, struct Mem *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Mem_class(mrb), &Mem_data_type, box));
}

void
mruby_set_Mem_data_ptr(mrb_value obj, struct Mem *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &Mem_data_type);
}

void
mruby_gift_Mem_data_ptr(mrb_value obj, struct Mem *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &Mem_data_type);
}

struct Mem *
mruby_unbox_Mem(mrb_value boxed) {
  return (struct Mem *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3_TYPE
/*
 * Boxing implementation for struct sqlite3
 */

static void free_sqlite3(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      sqlite3_close((sqlite3*)box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_data_type = {
   "struct sqlite3", free_sqlite3
};

mrb_value
mruby_box_sqlite3(mrb_state* mrb, struct sqlite3 *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3_class(mrb), &sqlite3_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3(mrb_state* mrb, struct sqlite3 *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3_class(mrb), &sqlite3_data_type, box));
}

void
mruby_set_sqlite3_data_ptr(mrb_value obj, struct sqlite3 *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_data_type);
}

void
mruby_gift_sqlite3_data_ptr(mrb_value obj, struct sqlite3 *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_data_type);
}

struct sqlite3 *
mruby_unbox_sqlite3(mrb_value boxed) {
  return (struct sqlite3 *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3Backup_TYPE
/*
 * Boxing implementation for struct sqlite3_backup
 */

static void free_sqlite3_backup(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_backup_data_type = {
   "struct sqlite3_backup", free_sqlite3_backup
};

mrb_value
mruby_box_sqlite3_backup(mrb_state* mrb, struct sqlite3_backup *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Backup_class(mrb), &sqlite3_backup_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_backup(mrb_state* mrb, struct sqlite3_backup *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Backup_class(mrb), &sqlite3_backup_data_type, box));
}

void
mruby_set_sqlite3_backup_data_ptr(mrb_value obj, struct sqlite3_backup *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_backup_data_type);
}

void
mruby_gift_sqlite3_backup_data_ptr(mrb_value obj, struct sqlite3_backup *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_backup_data_type);
}

struct sqlite3_backup *
mruby_unbox_sqlite3_backup(mrb_value boxed) {
  return (struct sqlite3_backup *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3Blob_TYPE
/*
 * Boxing implementation for struct sqlite3_blob
 */

static void free_sqlite3_blob(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_blob_data_type = {
   "struct sqlite3_blob", free_sqlite3_blob
};

mrb_value
mruby_box_sqlite3_blob(mrb_state* mrb, struct sqlite3_blob *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Blob_class(mrb), &sqlite3_blob_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_blob(mrb_state* mrb, struct sqlite3_blob *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Blob_class(mrb), &sqlite3_blob_data_type, box));
}

void
mruby_set_sqlite3_blob_data_ptr(mrb_value obj, struct sqlite3_blob *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_blob_data_type);
}

void
mruby_gift_sqlite3_blob_data_ptr(mrb_value obj, struct sqlite3_blob *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_blob_data_type);
}

struct sqlite3_blob *
mruby_unbox_sqlite3_blob(mrb_value boxed) {
  return (struct sqlite3_blob *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3Context_TYPE
/*
 * Boxing implementation for struct sqlite3_context
 */

static void free_sqlite3_context(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_context_data_type = {
   "struct sqlite3_context", free_sqlite3_context
};

mrb_value
mruby_box_sqlite3_context(mrb_state* mrb, struct sqlite3_context *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Context_class(mrb), &sqlite3_context_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_context(mrb_state* mrb, struct sqlite3_context *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Context_class(mrb), &sqlite3_context_data_type, box));
}

void
mruby_set_sqlite3_context_data_ptr(mrb_value obj, struct sqlite3_context *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_context_data_type);
}

void
mruby_gift_sqlite3_context_data_ptr(mrb_value obj, struct sqlite3_context *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_context_data_type);
}

struct sqlite3_context *
mruby_unbox_sqlite3_context(mrb_value boxed) {
  return (struct sqlite3_context *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3File_TYPE
/*
 * Boxing implementation for struct sqlite3_file
 */

static void free_sqlite3_file(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_file_data_type = {
   "struct sqlite3_file", free_sqlite3_file
};

mrb_value
mruby_box_sqlite3_file(mrb_state* mrb, struct sqlite3_file *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3File_class(mrb), &sqlite3_file_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_file(mrb_state* mrb, struct sqlite3_file *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3File_class(mrb), &sqlite3_file_data_type, box));
}

void
mruby_set_sqlite3_file_data_ptr(mrb_value obj, struct sqlite3_file *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_file_data_type);
}

void
mruby_gift_sqlite3_file_data_ptr(mrb_value obj, struct sqlite3_file *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_file_data_type);
}

struct sqlite3_file *
mruby_unbox_sqlite3_file(mrb_value boxed) {
  return (struct sqlite3_file *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3IndexConstraint_TYPE
/*
 * Boxing implementation for struct sqlite3_index_constraint
 */

static void free_sqlite3_index_raint(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_index_raint_data_type = {
   "struct sqlite3_index_constraint", free_sqlite3_index_raint
};

mrb_value
mruby_box_sqlite3_index_raint(mrb_state* mrb, struct sqlite3_index_constraint *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3IndexConstraint_class(mrb), &sqlite3_index_raint_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_index_raint(mrb_state* mrb, struct sqlite3_index_constraint *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3IndexConstraint_class(mrb), &sqlite3_index_raint_data_type, box));
}

void
mruby_set_sqlite3_index_raint_data_ptr(mrb_value obj, struct sqlite3_index_constraint *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_index_raint_data_type);
}

void
mruby_gift_sqlite3_index_raint_data_ptr(mrb_value obj, struct sqlite3_index_constraint *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_index_raint_data_type);
}

struct sqlite3_index_constraint *
mruby_unbox_sqlite3_index_raint(mrb_value boxed) {
  return (struct sqlite3_index_constraint *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3IndexConstraintUsage_TYPE
/*
 * Boxing implementation for struct sqlite3_index_constraint_usage
 */

static void free_sqlite3_index_raint_usage(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_index_raint_usage_data_type = {
   "struct sqlite3_index_constraint_usage", free_sqlite3_index_raint_usage
};

mrb_value
mruby_box_sqlite3_index_raint_usage(mrb_state* mrb, struct sqlite3_index_constraint_usage *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3IndexConstraintUsage_class(mrb), &sqlite3_index_raint_usage_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_index_raint_usage(mrb_state* mrb, struct sqlite3_index_constraint_usage *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3IndexConstraintUsage_class(mrb), &sqlite3_index_raint_usage_data_type, box));
}

void
mruby_set_sqlite3_index_raint_usage_data_ptr(mrb_value obj, struct sqlite3_index_constraint_usage *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_index_raint_usage_data_type);
}

void
mruby_gift_sqlite3_index_raint_usage_data_ptr(mrb_value obj, struct sqlite3_index_constraint_usage *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_index_raint_usage_data_type);
}

struct sqlite3_index_constraint_usage *
mruby_unbox_sqlite3_index_raint_usage(mrb_value boxed) {
  return (struct sqlite3_index_constraint_usage *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3IndexInfo_TYPE
/*
 * Boxing implementation for struct sqlite3_index_info
 */

static void free_sqlite3_index_info(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_index_info_data_type = {
   "struct sqlite3_index_info", free_sqlite3_index_info
};

mrb_value
mruby_box_sqlite3_index_info(mrb_state* mrb, struct sqlite3_index_info *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3IndexInfo_class(mrb), &sqlite3_index_info_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_index_info(mrb_state* mrb, struct sqlite3_index_info *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3IndexInfo_class(mrb), &sqlite3_index_info_data_type, box));
}

void
mruby_set_sqlite3_index_info_data_ptr(mrb_value obj, struct sqlite3_index_info *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_index_info_data_type);
}

void
mruby_gift_sqlite3_index_info_data_ptr(mrb_value obj, struct sqlite3_index_info *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_index_info_data_type);
}

struct sqlite3_index_info *
mruby_unbox_sqlite3_index_info(mrb_value boxed) {
  return (struct sqlite3_index_info *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3IndexOrderby_TYPE
/*
 * Boxing implementation for struct sqlite3_index_orderby
 */

static void free_sqlite3_index_orderby(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_index_orderby_data_type = {
   "struct sqlite3_index_orderby", free_sqlite3_index_orderby
};

mrb_value
mruby_box_sqlite3_index_orderby(mrb_state* mrb, struct sqlite3_index_orderby *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3IndexOrderby_class(mrb), &sqlite3_index_orderby_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_index_orderby(mrb_state* mrb, struct sqlite3_index_orderby *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3IndexOrderby_class(mrb), &sqlite3_index_orderby_data_type, box));
}

void
mruby_set_sqlite3_index_orderby_data_ptr(mrb_value obj, struct sqlite3_index_orderby *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_index_orderby_data_type);
}

void
mruby_gift_sqlite3_index_orderby_data_ptr(mrb_value obj, struct sqlite3_index_orderby *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_index_orderby_data_type);
}

struct sqlite3_index_orderby *
mruby_unbox_sqlite3_index_orderby(mrb_value boxed) {
  return (struct sqlite3_index_orderby *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3IoMethods_TYPE
/*
 * Boxing implementation for struct sqlite3_io_methods
 */

static void free_sqlite3_io_methods(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_io_methods_data_type = {
   "struct sqlite3_io_methods", free_sqlite3_io_methods
};

mrb_value
mruby_box_sqlite3_io_methods(mrb_state* mrb, struct sqlite3_io_methods *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3IoMethods_class(mrb), &sqlite3_io_methods_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_io_methods(mrb_state* mrb, struct sqlite3_io_methods *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3IoMethods_class(mrb), &sqlite3_io_methods_data_type, box));
}

void
mruby_set_sqlite3_io_methods_data_ptr(mrb_value obj, struct sqlite3_io_methods *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_io_methods_data_type);
}

void
mruby_gift_sqlite3_io_methods_data_ptr(mrb_value obj, struct sqlite3_io_methods *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_io_methods_data_type);
}

struct sqlite3_io_methods *
mruby_unbox_sqlite3_io_methods(mrb_value boxed) {
  return (struct sqlite3_io_methods *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3MemMethods_TYPE
/*
 * Boxing implementation for struct sqlite3_mem_methods
 */

static void free_sqlite3_mem_methods(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_mem_methods_data_type = {
   "struct sqlite3_mem_methods", free_sqlite3_mem_methods
};

mrb_value
mruby_box_sqlite3_mem_methods(mrb_state* mrb, struct sqlite3_mem_methods *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3MemMethods_class(mrb), &sqlite3_mem_methods_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_mem_methods(mrb_state* mrb, struct sqlite3_mem_methods *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3MemMethods_class(mrb), &sqlite3_mem_methods_data_type, box));
}

void
mruby_set_sqlite3_mem_methods_data_ptr(mrb_value obj, struct sqlite3_mem_methods *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_mem_methods_data_type);
}

void
mruby_gift_sqlite3_mem_methods_data_ptr(mrb_value obj, struct sqlite3_mem_methods *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_mem_methods_data_type);
}

struct sqlite3_mem_methods *
mruby_unbox_sqlite3_mem_methods(mrb_value boxed) {
  return (struct sqlite3_mem_methods *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3Module_TYPE
/*
 * Boxing implementation for struct sqlite3_module
 */

static void free_sqlite3_module(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_module_data_type = {
   "struct sqlite3_module", free_sqlite3_module
};

mrb_value
mruby_box_sqlite3_module(mrb_state* mrb, struct sqlite3_module *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Module_class(mrb), &sqlite3_module_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_module(mrb_state* mrb, struct sqlite3_module *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Module_class(mrb), &sqlite3_module_data_type, box));
}

void
mruby_set_sqlite3_module_data_ptr(mrb_value obj, struct sqlite3_module *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_module_data_type);
}

void
mruby_gift_sqlite3_module_data_ptr(mrb_value obj, struct sqlite3_module *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_module_data_type);
}

struct sqlite3_module *
mruby_unbox_sqlite3_module(mrb_value boxed) {
  return (struct sqlite3_module *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3Mutex_TYPE
/*
 * Boxing implementation for struct sqlite3_mutex
 */

static void free_sqlite3_mutex(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_mutex_data_type = {
   "struct sqlite3_mutex", free_sqlite3_mutex
};

mrb_value
mruby_box_sqlite3_mutex(mrb_state* mrb, struct sqlite3_mutex *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Mutex_class(mrb), &sqlite3_mutex_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_mutex(mrb_state* mrb, struct sqlite3_mutex *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Mutex_class(mrb), &sqlite3_mutex_data_type, box));
}

void
mruby_set_sqlite3_mutex_data_ptr(mrb_value obj, struct sqlite3_mutex *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_mutex_data_type);
}

void
mruby_gift_sqlite3_mutex_data_ptr(mrb_value obj, struct sqlite3_mutex *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_mutex_data_type);
}

struct sqlite3_mutex *
mruby_unbox_sqlite3_mutex(mrb_value boxed) {
  return (struct sqlite3_mutex *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3MutexMethods_TYPE
/*
 * Boxing implementation for struct sqlite3_mutex_methods
 */

static void free_sqlite3_mutex_methods(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_mutex_methods_data_type = {
   "struct sqlite3_mutex_methods", free_sqlite3_mutex_methods
};

mrb_value
mruby_box_sqlite3_mutex_methods(mrb_state* mrb, struct sqlite3_mutex_methods *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3MutexMethods_class(mrb), &sqlite3_mutex_methods_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_mutex_methods(mrb_state* mrb, struct sqlite3_mutex_methods *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3MutexMethods_class(mrb), &sqlite3_mutex_methods_data_type, box));
}

void
mruby_set_sqlite3_mutex_methods_data_ptr(mrb_value obj, struct sqlite3_mutex_methods *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_mutex_methods_data_type);
}

void
mruby_gift_sqlite3_mutex_methods_data_ptr(mrb_value obj, struct sqlite3_mutex_methods *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_mutex_methods_data_type);
}

struct sqlite3_mutex_methods *
mruby_unbox_sqlite3_mutex_methods(mrb_value boxed) {
  return (struct sqlite3_mutex_methods *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3Pcache_TYPE
/*
 * Boxing implementation for struct sqlite3_pcache
 */

static void free_sqlite3_pcache(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_pcache_data_type = {
   "struct sqlite3_pcache", free_sqlite3_pcache
};

mrb_value
mruby_box_sqlite3_pcache(mrb_state* mrb, struct sqlite3_pcache *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Pcache_class(mrb), &sqlite3_pcache_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_pcache(mrb_state* mrb, struct sqlite3_pcache *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Pcache_class(mrb), &sqlite3_pcache_data_type, box));
}

void
mruby_set_sqlite3_pcache_data_ptr(mrb_value obj, struct sqlite3_pcache *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_pcache_data_type);
}

void
mruby_gift_sqlite3_pcache_data_ptr(mrb_value obj, struct sqlite3_pcache *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_pcache_data_type);
}

struct sqlite3_pcache *
mruby_unbox_sqlite3_pcache(mrb_value boxed) {
  return (struct sqlite3_pcache *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3PcacheMethods_TYPE
/*
 * Boxing implementation for struct sqlite3_pcache_methods
 */

static void free_sqlite3_pcache_methods(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_pcache_methods_data_type = {
   "struct sqlite3_pcache_methods", free_sqlite3_pcache_methods
};

mrb_value
mruby_box_sqlite3_pcache_methods(mrb_state* mrb, struct sqlite3_pcache_methods *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3PcacheMethods_class(mrb), &sqlite3_pcache_methods_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_pcache_methods(mrb_state* mrb, struct sqlite3_pcache_methods *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3PcacheMethods_class(mrb), &sqlite3_pcache_methods_data_type, box));
}

void
mruby_set_sqlite3_pcache_methods_data_ptr(mrb_value obj, struct sqlite3_pcache_methods *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_pcache_methods_data_type);
}

void
mruby_gift_sqlite3_pcache_methods_data_ptr(mrb_value obj, struct sqlite3_pcache_methods *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_pcache_methods_data_type);
}

struct sqlite3_pcache_methods *
mruby_unbox_sqlite3_pcache_methods(mrb_value boxed) {
  return (struct sqlite3_pcache_methods *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3PcacheMethods2_TYPE
/*
 * Boxing implementation for struct sqlite3_pcache_methods2
 */

static void free_sqlite3_pcache_methods2(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_pcache_methods2_data_type = {
   "struct sqlite3_pcache_methods2", free_sqlite3_pcache_methods2
};

mrb_value
mruby_box_sqlite3_pcache_methods2(mrb_state* mrb, struct sqlite3_pcache_methods2 *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3PcacheMethods2_class(mrb), &sqlite3_pcache_methods2_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_pcache_methods2(mrb_state* mrb, struct sqlite3_pcache_methods2 *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3PcacheMethods2_class(mrb), &sqlite3_pcache_methods2_data_type, box));
}

void
mruby_set_sqlite3_pcache_methods2_data_ptr(mrb_value obj, struct sqlite3_pcache_methods2 *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_pcache_methods2_data_type);
}

void
mruby_gift_sqlite3_pcache_methods2_data_ptr(mrb_value obj, struct sqlite3_pcache_methods2 *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_pcache_methods2_data_type);
}

struct sqlite3_pcache_methods2 *
mruby_unbox_sqlite3_pcache_methods2(mrb_value boxed) {
  return (struct sqlite3_pcache_methods2 *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3PcachePage_TYPE
/*
 * Boxing implementation for struct sqlite3_pcache_page
 */

static void free_sqlite3_pcache_page(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_pcache_page_data_type = {
   "struct sqlite3_pcache_page", free_sqlite3_pcache_page
};

mrb_value
mruby_box_sqlite3_pcache_page(mrb_state* mrb, struct sqlite3_pcache_page *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3PcachePage_class(mrb), &sqlite3_pcache_page_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_pcache_page(mrb_state* mrb, struct sqlite3_pcache_page *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3PcachePage_class(mrb), &sqlite3_pcache_page_data_type, box));
}

void
mruby_set_sqlite3_pcache_page_data_ptr(mrb_value obj, struct sqlite3_pcache_page *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_pcache_page_data_type);
}

void
mruby_gift_sqlite3_pcache_page_data_ptr(mrb_value obj, struct sqlite3_pcache_page *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_pcache_page_data_type);
}

struct sqlite3_pcache_page *
mruby_unbox_sqlite3_pcache_page(mrb_value boxed) {
  return (struct sqlite3_pcache_page *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3RtreeGeometry_TYPE
/*
 * Boxing implementation for struct sqlite3_rtree_geometry
 */

static void free_sqlite3_rtree_geometry(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_rtree_geometry_data_type = {
   "struct sqlite3_rtree_geometry", free_sqlite3_rtree_geometry
};

mrb_value
mruby_box_sqlite3_rtree_geometry(mrb_state* mrb, struct sqlite3_rtree_geometry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3RtreeGeometry_class(mrb), &sqlite3_rtree_geometry_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_rtree_geometry(mrb_state* mrb, struct sqlite3_rtree_geometry *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3RtreeGeometry_class(mrb), &sqlite3_rtree_geometry_data_type, box));
}

void
mruby_set_sqlite3_rtree_geometry_data_ptr(mrb_value obj, struct sqlite3_rtree_geometry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_rtree_geometry_data_type);
}

void
mruby_gift_sqlite3_rtree_geometry_data_ptr(mrb_value obj, struct sqlite3_rtree_geometry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_rtree_geometry_data_type);
}

struct sqlite3_rtree_geometry *
mruby_unbox_sqlite3_rtree_geometry(mrb_value boxed) {
  return (struct sqlite3_rtree_geometry *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3RtreeQueryInfo_TYPE
/*
 * Boxing implementation for struct sqlite3_rtree_query_info
 */

static void free_sqlite3_rtree_query_info(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_rtree_query_info_data_type = {
   "struct sqlite3_rtree_query_info", free_sqlite3_rtree_query_info
};

mrb_value
mruby_box_sqlite3_rtree_query_info(mrb_state* mrb, struct sqlite3_rtree_query_info *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3RtreeQueryInfo_class(mrb), &sqlite3_rtree_query_info_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_rtree_query_info(mrb_state* mrb, struct sqlite3_rtree_query_info *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3RtreeQueryInfo_class(mrb), &sqlite3_rtree_query_info_data_type, box));
}

void
mruby_set_sqlite3_rtree_query_info_data_ptr(mrb_value obj, struct sqlite3_rtree_query_info *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_rtree_query_info_data_type);
}

void
mruby_gift_sqlite3_rtree_query_info_data_ptr(mrb_value obj, struct sqlite3_rtree_query_info *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_rtree_query_info_data_type);
}

struct sqlite3_rtree_query_info *
mruby_unbox_sqlite3_rtree_query_info(mrb_value boxed) {
  return (struct sqlite3_rtree_query_info *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3Stmt_TYPE
/*
 * Boxing implementation for struct sqlite3_stmt
 */

static void free_sqlite3_stmt(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      sqlite3_finalize((sqlite3_stmt*)box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_stmt_data_type = {
   "struct sqlite3_stmt", free_sqlite3_stmt
};

mrb_value
mruby_box_sqlite3_stmt(mrb_state* mrb, struct sqlite3_stmt *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Stmt_class(mrb), &sqlite3_stmt_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_stmt(mrb_state* mrb, struct sqlite3_stmt *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Stmt_class(mrb), &sqlite3_stmt_data_type, box));
}

void
mruby_set_sqlite3_stmt_data_ptr(mrb_value obj, struct sqlite3_stmt *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_stmt_data_type);
}

void
mruby_gift_sqlite3_stmt_data_ptr(mrb_value obj, struct sqlite3_stmt *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_stmt_data_type);
}

struct sqlite3_stmt *
mruby_unbox_sqlite3_stmt(mrb_value boxed) {
  return (struct sqlite3_stmt *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3Vfs_TYPE
/*
 * Boxing implementation for struct sqlite3_vfs
 */

static void free_sqlite3_vfs(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_vfs_data_type = {
   "struct sqlite3_vfs", free_sqlite3_vfs
};

mrb_value
mruby_box_sqlite3_vfs(mrb_state* mrb, struct sqlite3_vfs *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Vfs_class(mrb), &sqlite3_vfs_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_vfs(mrb_state* mrb, struct sqlite3_vfs *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Vfs_class(mrb), &sqlite3_vfs_data_type, box));
}

void
mruby_set_sqlite3_vfs_data_ptr(mrb_value obj, struct sqlite3_vfs *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_vfs_data_type);
}

void
mruby_gift_sqlite3_vfs_data_ptr(mrb_value obj, struct sqlite3_vfs *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_vfs_data_type);
}

struct sqlite3_vfs *
mruby_unbox_sqlite3_vfs(mrb_value boxed) {
  return (struct sqlite3_vfs *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3Vtab_TYPE
/*
 * Boxing implementation for struct sqlite3_vtab
 */

static void free_sqlite3_vtab(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_vtab_data_type = {
   "struct sqlite3_vtab", free_sqlite3_vtab
};

mrb_value
mruby_box_sqlite3_vtab(mrb_state* mrb, struct sqlite3_vtab *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Vtab_class(mrb), &sqlite3_vtab_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_vtab(mrb_state* mrb, struct sqlite3_vtab *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Vtab_class(mrb), &sqlite3_vtab_data_type, box));
}

void
mruby_set_sqlite3_vtab_data_ptr(mrb_value obj, struct sqlite3_vtab *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_vtab_data_type);
}

void
mruby_gift_sqlite3_vtab_data_ptr(mrb_value obj, struct sqlite3_vtab *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_vtab_data_type);
}

struct sqlite3_vtab *
mruby_unbox_sqlite3_vtab(mrb_value boxed) {
  return (struct sqlite3_vtab *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

#if BIND_Sqlite3VtabCursor_TYPE
/*
 * Boxing implementation for struct sqlite3_vtab_cursor
 */

static void free_sqlite3_vtab_cursor(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_vtab_cursor_data_type = {
   "struct sqlite3_vtab_cursor", free_sqlite3_vtab_cursor
};

mrb_value
mruby_box_sqlite3_vtab_cursor(mrb_state* mrb, struct sqlite3_vtab_cursor *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3VtabCursor_class(mrb), &sqlite3_vtab_cursor_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_vtab_cursor(mrb_state* mrb, struct sqlite3_vtab_cursor *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3VtabCursor_class(mrb), &sqlite3_vtab_cursor_data_type, box));
}

void
mruby_set_sqlite3_vtab_cursor_data_ptr(mrb_value obj, struct sqlite3_vtab_cursor *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_vtab_cursor_data_type);
}

void
mruby_gift_sqlite3_vtab_cursor_data_ptr(mrb_value obj, struct sqlite3_vtab_cursor *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_vtab_cursor_data_type);
}

struct sqlite3_vtab_cursor *
mruby_unbox_sqlite3_vtab_cursor(mrb_value boxed) {
  return (struct sqlite3_vtab_cursor *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
