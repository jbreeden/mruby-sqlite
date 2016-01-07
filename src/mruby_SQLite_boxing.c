/*
 * Boxing Code (Generated)
 * =======================
 *
 * The code generator learns the data types declared in the C/C++ source files
 * it is run against, and generates this boxing, unboxing, and GC code.
 * 
 * Terms
 * ------
 *
 * ### Boxing
 * In general refers to wrapping a native object in an mrb_value.
 * 
 * ### Gift Wrapping
 * A specific type of boxing, indicating that the object belongs
 * to Ruby and should be free'd when the mrb_value is GC'ed.
 * 
 * ### Unboxing
 * Retrieving the wrapped native object from an mrb_value.
 *
 * Customizing
 * -----------
 * 
 * By default, all data types are assumed to be destructable by the `free`
 * function. To use a custom destructor for your type, tell CTypes with
 * `CTypes.set_destructor`.
 *
 * Example
 * ```
 * // I have `struct GError` objects from glib,
 * // which should be freed with `g_error_free`
 * CTypes.set_destructor('struct GError', 'g_error_free')
 * ```
 */
#include "mruby_SQLite.h"


/* MRUBY_BINDING: Mem_boxing */
/* sha: 4a4d43935ebe1c1344a91d8a639a77aef62238938c2433d9cbcf6b4cc11114b7 */
#if BIND_Mem_TYPE
/*
 * Boxing implementation for struct Mem
 */

static void free_Mem(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3_boxing */
/* sha: acddffbd38be77d18c9a734b3504395ab8b770e155ffd51e563d0f4ace0ee05d */
#if BIND_Sqlite3_TYPE
/*
 * Boxing implementation for struct sqlite3
 */

static void free_sqlite3(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Backup_boxing */
/* sha: 1a4c94db720930e09e6884c884025ad4304501708c767c8db066210a117a41e9 */
#if BIND_Sqlite3Backup_TYPE
/*
 * Boxing implementation for struct sqlite3_backup
 */

static void free_sqlite3_backup(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Blob_boxing */
/* sha: dd9c9108c7292f7e7be742a777bd3eb0dd229b3bf4ab696edd0ca5196080bb5b */
#if BIND_Sqlite3Blob_TYPE
/*
 * Boxing implementation for struct sqlite3_blob
 */

static void free_sqlite3_blob(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Context_boxing */
/* sha: 12222fe089beb50c90cc8fc628baea468a05520f55882363df1de761d857b638 */
#if BIND_Sqlite3Context_TYPE
/*
 * Boxing implementation for struct sqlite3_context
 */

static void free_sqlite3_context(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3File_boxing */
/* sha: 07da7b171c20029a09b318009d4b7ea897221ff525d1b6f8370bee6e4e10c565 */
#if BIND_Sqlite3File_TYPE
/*
 * Boxing implementation for struct sqlite3_file
 */

static void free_sqlite3_file(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraint_boxing */
/* sha: 540832c67d3de17e03a02c3709021a1a2f25364b226aa02715c0ce58a27e8cd9 */
#if BIND_Sqlite3IndexConstraint_TYPE
/*
 * Boxing implementation for struct sqlite3_index_constraint
 */

static void free_sqlite3_index_raint(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexConstraintUsage_boxing */
/* sha: 16e56b58c687c850a7279c482b45319ffeb9dbdb1c5b2943ac3824ef1f65011e */
#if BIND_Sqlite3IndexConstraintUsage_TYPE
/*
 * Boxing implementation for struct sqlite3_index_constraint_usage
 */

static void free_sqlite3_index_raint_usage(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo_boxing */
/* sha: d73818685765e06ee00329c734955b110fa9a78e95d156b21e355c90fe51801b */
#if BIND_Sqlite3IndexInfo_TYPE
/*
 * Boxing implementation for struct sqlite3_index_info
 */

static void free_sqlite3_index_info(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexOrderby_boxing */
/* sha: 9d4ceb98d1e68a259f3b982ad9ff0b86b15c847af0662655528643909b0f947a */
#if BIND_Sqlite3IndexOrderby_TYPE
/*
 * Boxing implementation for struct sqlite3_index_orderby
 */

static void free_sqlite3_index_orderby(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods_boxing */
/* sha: be5bdb7c2ca20e27f83450def46e495cc28ca37be66afa55f717d5e665c86efb */
#if BIND_Sqlite3IoMethods_TYPE
/*
 * Boxing implementation for struct sqlite3_io_methods
 */

static void free_sqlite3_io_methods(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods_boxing */
/* sha: 188b8b30ca1b5a720cd8e39a5e7757ddf980ed1999b8c869c10899d3b33885f6 */
#if BIND_Sqlite3MemMethods_TYPE
/*
 * Boxing implementation for struct sqlite3_mem_methods
 */

static void free_sqlite3_mem_methods(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module_boxing */
/* sha: 2d36e3372a0d7dbf092b8b73579cbf9bdb7b4448b526d4e866a667d7a525a09b */
#if BIND_Sqlite3Module_TYPE
/*
 * Boxing implementation for struct sqlite3_module
 */

static void free_sqlite3_module(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Pcache_boxing */
/* sha: 277d58bec42bc680868c4c7f6ef97ecdcfb034a482bd4f36a539a57b428e611f */
#if BIND_Sqlite3Pcache_TYPE
/*
 * Boxing implementation for struct sqlite3_pcache
 */

static void free_sqlite3_pcache(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods_boxing */
/* sha: f95cb953beb5bbc243d2e5e9996814ba307ea88356a42c87776f9cb4255ea868 */
#if BIND_Sqlite3PcacheMethods_TYPE
/*
 * Boxing implementation for struct sqlite3_pcache_methods
 */

static void free_sqlite3_pcache_methods(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2_boxing */
/* sha: 2fbca9a89126651f33aae45c1d139ee886fe64e5f46fdaac918ad0e266a93624 */
#if BIND_Sqlite3PcacheMethods2_TYPE
/*
 * Boxing implementation for struct sqlite3_pcache_methods2
 */

static void free_sqlite3_pcache_methods2(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcachePage_boxing */
/* sha: 6316d07920f3e15bdf503bd010bb980f9ad23e09ba969687140e193c51c2eae8 */
#if BIND_Sqlite3PcachePage_TYPE
/*
 * Boxing implementation for struct sqlite3_pcache_page
 */

static void free_sqlite3_pcache_page(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry_boxing */
/* sha: da7223784e790b47360d5465d949ed50b28778d3ae3c6f1a4985bf44e0f87210 */
#if BIND_Sqlite3RtreeGeometry_TYPE
/*
 * Boxing implementation for struct sqlite3_rtree_geometry
 */

static void free_sqlite3_rtree_geometry(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo_boxing */
/* sha: 0708473242ca1a9c5b5431b12cf5d9999b099a0004f5b04ee6df46ec99b61179 */
#if BIND_Sqlite3RtreeQueryInfo_TYPE
/*
 * Boxing implementation for struct sqlite3_rtree_query_info
 */

static void free_sqlite3_rtree_query_info(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Stmt_boxing */
/* sha: f0f5acb3ddfe016067aee5d4dbc1c81666ecbd05cf602c9d5b311c2c4d73ba90 */
#if BIND_Sqlite3Stmt_TYPE
/*
 * Boxing implementation for struct sqlite3_stmt
 */

static void free_sqlite3_stmt(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs_boxing */
/* sha: 2ccfa4a19d8ef0ae088aa3f322f16aed8eb859e82778e7a55cac6b6001ced83c */
#if BIND_Sqlite3Vfs_TYPE
/*
 * Boxing implementation for struct sqlite3_vfs
 */

static void free_sqlite3_vfs(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab_boxing */
/* sha: 9eecbe432a87aa81e9e392563350882a1ff9c585d9595d24af69bf613154348d */
#if BIND_Sqlite3Vtab_TYPE
/*
 * Boxing implementation for struct sqlite3_vtab
 */

static void free_sqlite3_vtab(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
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
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3VtabCursor_boxing */
/* sha: 58186c4a2e851c3ae3dc5b7e23b02c1ea52ccad1641323b5c84c349d09d9742e */
#if BIND_Sqlite3VtabCursor_TYPE
/*
 * Boxing implementation for struct sqlite3_vtab_cursor
 */

static void free_sqlite3_vtab_cursor(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
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
/* MRUBY_BINDING_END */

