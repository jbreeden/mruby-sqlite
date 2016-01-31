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

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3_boxing */
/* sha: 330520050199a80dc8fb48b786576588ec707b06c564dd2b322e94543f957d34 */
#if BIND_Sqlite3_TYPE
/*
 * Boxing implementation for sqlite3
 */

static void free_sqlite3(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      sqlite3_close(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_data_type = {
   "sqlite3", free_sqlite3
};

mrb_value
mruby_box_sqlite3(mrb_state* mrb, sqlite3 *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3_class(mrb), &sqlite3_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3(mrb_state* mrb, sqlite3 *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3_class(mrb), &sqlite3_data_type, box));
}

void
mruby_set_sqlite3_data_ptr(mrb_value obj, sqlite3 *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_data_type);
}

void
mruby_gift_sqlite3_data_ptr(mrb_value obj, sqlite3 *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_data_type);
}

sqlite3 *
mruby_unbox_sqlite3(mrb_value boxed) {
  return (sqlite3 *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Backup_boxing */
/* sha: 3b7e152924ca0ae7a2cccfa29ee17e252cef94c24b87331bbdaffa079707772c */
#if BIND_Sqlite3Backup_TYPE
/*
 * Boxing implementation for sqlite3_backup
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
   "sqlite3_backup", free_sqlite3_backup
};

mrb_value
mruby_box_sqlite3_backup(mrb_state* mrb, sqlite3_backup *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Backup_class(mrb), &sqlite3_backup_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_backup(mrb_state* mrb, sqlite3_backup *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Backup_class(mrb), &sqlite3_backup_data_type, box));
}

void
mruby_set_sqlite3_backup_data_ptr(mrb_value obj, sqlite3_backup *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_backup_data_type);
}

void
mruby_gift_sqlite3_backup_data_ptr(mrb_value obj, sqlite3_backup *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_backup_data_type);
}

sqlite3_backup *
mruby_unbox_sqlite3_backup(mrb_value boxed) {
  return (sqlite3_backup *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Blob_boxing */
/* sha: c242fe5c32e8b73e3f16ad351f31650758e213217eb3f1fe87c8ffd8f22ead20 */
#if BIND_Sqlite3Blob_TYPE
/*
 * Boxing implementation for sqlite3_blob
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
   "sqlite3_blob", free_sqlite3_blob
};

mrb_value
mruby_box_sqlite3_blob(mrb_state* mrb, sqlite3_blob *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Blob_class(mrb), &sqlite3_blob_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_blob(mrb_state* mrb, sqlite3_blob *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Blob_class(mrb), &sqlite3_blob_data_type, box));
}

void
mruby_set_sqlite3_blob_data_ptr(mrb_value obj, sqlite3_blob *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_blob_data_type);
}

void
mruby_gift_sqlite3_blob_data_ptr(mrb_value obj, sqlite3_blob *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_blob_data_type);
}

sqlite3_blob *
mruby_unbox_sqlite3_blob(mrb_value boxed) {
  return (sqlite3_blob *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Context_boxing */
/* sha: b692356fd4ea55c3cf77226d4657e9eed1a3f77a9d864ecb4b51e875113351be */
#if BIND_Sqlite3Context_TYPE
/*
 * Boxing implementation for sqlite3_context
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
   "sqlite3_context", free_sqlite3_context
};

mrb_value
mruby_box_sqlite3_context(mrb_state* mrb, sqlite3_context *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Context_class(mrb), &sqlite3_context_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_context(mrb_state* mrb, sqlite3_context *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Context_class(mrb), &sqlite3_context_data_type, box));
}

void
mruby_set_sqlite3_context_data_ptr(mrb_value obj, sqlite3_context *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_context_data_type);
}

void
mruby_gift_sqlite3_context_data_ptr(mrb_value obj, sqlite3_context *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_context_data_type);
}

sqlite3_context *
mruby_unbox_sqlite3_context(mrb_value boxed) {
  return (sqlite3_context *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3File_boxing */
/* sha: 3d01a7440d7f10e272fd27cdbb4a5016eef8cb7df3e97c8aebd692d1042da62e */
#if BIND_Sqlite3File_TYPE
/*
 * Boxing implementation for sqlite3_file
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
   "sqlite3_file", free_sqlite3_file
};

mrb_value
mruby_box_sqlite3_file(mrb_state* mrb, sqlite3_file *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3File_class(mrb), &sqlite3_file_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_file(mrb_state* mrb, sqlite3_file *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3File_class(mrb), &sqlite3_file_data_type, box));
}

void
mruby_set_sqlite3_file_data_ptr(mrb_value obj, sqlite3_file *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_file_data_type);
}

void
mruby_gift_sqlite3_file_data_ptr(mrb_value obj, sqlite3_file *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_file_data_type);
}

sqlite3_file *
mruby_unbox_sqlite3_file(mrb_value boxed) {
  return (sqlite3_file *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IndexInfo_boxing */
/* sha: 57b02348c9065301967465d0289e7aea7f3816788136fcf0858eda9068cb10c9 */
#if BIND_Sqlite3IndexInfo_TYPE
/*
 * Boxing implementation for sqlite3_index_info
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
   "sqlite3_index_info", free_sqlite3_index_info
};

mrb_value
mruby_box_sqlite3_index_info(mrb_state* mrb, sqlite3_index_info *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3IndexInfo_class(mrb), &sqlite3_index_info_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_index_info(mrb_state* mrb, sqlite3_index_info *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3IndexInfo_class(mrb), &sqlite3_index_info_data_type, box));
}

void
mruby_set_sqlite3_index_info_data_ptr(mrb_value obj, sqlite3_index_info *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_index_info_data_type);
}

void
mruby_gift_sqlite3_index_info_data_ptr(mrb_value obj, sqlite3_index_info *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_index_info_data_type);
}

sqlite3_index_info *
mruby_unbox_sqlite3_index_info(mrb_value boxed) {
  return (sqlite3_index_info *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3IoMethods_boxing */
/* sha: 012cd86b1fe00eef22d51f352a5e48da3d31b24695c1b6884ba5d39c5a138ced */
#if BIND_Sqlite3IoMethods_TYPE
/*
 * Boxing implementation for sqlite3_io_methods
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
   "sqlite3_io_methods", free_sqlite3_io_methods
};

mrb_value
mruby_box_sqlite3_io_methods(mrb_state* mrb, sqlite3_io_methods *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3IoMethods_class(mrb), &sqlite3_io_methods_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_io_methods(mrb_state* mrb, sqlite3_io_methods *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3IoMethods_class(mrb), &sqlite3_io_methods_data_type, box));
}

void
mruby_set_sqlite3_io_methods_data_ptr(mrb_value obj, sqlite3_io_methods *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_io_methods_data_type);
}

void
mruby_gift_sqlite3_io_methods_data_ptr(mrb_value obj, sqlite3_io_methods *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_io_methods_data_type);
}

sqlite3_io_methods *
mruby_unbox_sqlite3_io_methods(mrb_value boxed) {
  return (sqlite3_io_methods *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3MemMethods_boxing */
/* sha: c4ecf63cb12776639e51ffaa64c374f05f733af511854665a38318d6b353c18e */
#if BIND_Sqlite3MemMethods_TYPE
/*
 * Boxing implementation for sqlite3_mem_methods
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
   "sqlite3_mem_methods", free_sqlite3_mem_methods
};

mrb_value
mruby_box_sqlite3_mem_methods(mrb_state* mrb, sqlite3_mem_methods *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3MemMethods_class(mrb), &sqlite3_mem_methods_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_mem_methods(mrb_state* mrb, sqlite3_mem_methods *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3MemMethods_class(mrb), &sqlite3_mem_methods_data_type, box));
}

void
mruby_set_sqlite3_mem_methods_data_ptr(mrb_value obj, sqlite3_mem_methods *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_mem_methods_data_type);
}

void
mruby_gift_sqlite3_mem_methods_data_ptr(mrb_value obj, sqlite3_mem_methods *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_mem_methods_data_type);
}

sqlite3_mem_methods *
mruby_unbox_sqlite3_mem_methods(mrb_value boxed) {
  return (sqlite3_mem_methods *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module_boxing */
/* sha: 8b6f46c36bd62d4a49e48e847617431f21d648f134331865fc164b860463ceff */
#if BIND_Sqlite3Module_TYPE
/*
 * Boxing implementation for sqlite3_module
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
   "sqlite3_module", free_sqlite3_module
};

mrb_value
mruby_box_sqlite3_module(mrb_state* mrb, sqlite3_module *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Module_class(mrb), &sqlite3_module_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_module(mrb_state* mrb, sqlite3_module *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Module_class(mrb), &sqlite3_module_data_type, box));
}

void
mruby_set_sqlite3_module_data_ptr(mrb_value obj, sqlite3_module *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_module_data_type);
}

void
mruby_gift_sqlite3_module_data_ptr(mrb_value obj, sqlite3_module *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_module_data_type);
}

sqlite3_module *
mruby_unbox_sqlite3_module(mrb_value boxed) {
  return (sqlite3_module *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Pcache_boxing */
/* sha: af1ccfdce64e177ec85e223c96b5b9ceef2cf795535b96a7d26fb5df5505329a */
#if BIND_Sqlite3Pcache_TYPE
/*
 * Boxing implementation for sqlite3_pcache
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
   "sqlite3_pcache", free_sqlite3_pcache
};

mrb_value
mruby_box_sqlite3_pcache(mrb_state* mrb, sqlite3_pcache *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Pcache_class(mrb), &sqlite3_pcache_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_pcache(mrb_state* mrb, sqlite3_pcache *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Pcache_class(mrb), &sqlite3_pcache_data_type, box));
}

void
mruby_set_sqlite3_pcache_data_ptr(mrb_value obj, sqlite3_pcache *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_pcache_data_type);
}

void
mruby_gift_sqlite3_pcache_data_ptr(mrb_value obj, sqlite3_pcache *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_pcache_data_type);
}

sqlite3_pcache *
mruby_unbox_sqlite3_pcache(mrb_value boxed) {
  return (sqlite3_pcache *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods_boxing */
/* sha: 202230bda2bfcdddfdbfd66279e241fd12639dea442a04982795c7caeb8703df */
#if BIND_Sqlite3PcacheMethods_TYPE
/*
 * Boxing implementation for sqlite3_pcache_methods
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
   "sqlite3_pcache_methods", free_sqlite3_pcache_methods
};

mrb_value
mruby_box_sqlite3_pcache_methods(mrb_state* mrb, sqlite3_pcache_methods *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3PcacheMethods_class(mrb), &sqlite3_pcache_methods_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_pcache_methods(mrb_state* mrb, sqlite3_pcache_methods *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3PcacheMethods_class(mrb), &sqlite3_pcache_methods_data_type, box));
}

void
mruby_set_sqlite3_pcache_methods_data_ptr(mrb_value obj, sqlite3_pcache_methods *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_pcache_methods_data_type);
}

void
mruby_gift_sqlite3_pcache_methods_data_ptr(mrb_value obj, sqlite3_pcache_methods *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_pcache_methods_data_type);
}

sqlite3_pcache_methods *
mruby_unbox_sqlite3_pcache_methods(mrb_value boxed) {
  return (sqlite3_pcache_methods *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcacheMethods2_boxing */
/* sha: 22031d9775cff8e3cc48c17e6d6d35a4c4bc9c6e667ba79883a8286767920057 */
#if BIND_Sqlite3PcacheMethods2_TYPE
/*
 * Boxing implementation for sqlite3_pcache_methods2
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
   "sqlite3_pcache_methods2", free_sqlite3_pcache_methods2
};

mrb_value
mruby_box_sqlite3_pcache_methods2(mrb_state* mrb, sqlite3_pcache_methods2 *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3PcacheMethods2_class(mrb), &sqlite3_pcache_methods2_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_pcache_methods2(mrb_state* mrb, sqlite3_pcache_methods2 *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3PcacheMethods2_class(mrb), &sqlite3_pcache_methods2_data_type, box));
}

void
mruby_set_sqlite3_pcache_methods2_data_ptr(mrb_value obj, sqlite3_pcache_methods2 *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_pcache_methods2_data_type);
}

void
mruby_gift_sqlite3_pcache_methods2_data_ptr(mrb_value obj, sqlite3_pcache_methods2 *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_pcache_methods2_data_type);
}

sqlite3_pcache_methods2 *
mruby_unbox_sqlite3_pcache_methods2(mrb_value boxed) {
  return (sqlite3_pcache_methods2 *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3PcachePage_boxing */
/* sha: 7de27564e7b23626e3fb9df46fd0d0aef24c9e26c787b88b06dead89423af0a2 */
#if BIND_Sqlite3PcachePage_TYPE
/*
 * Boxing implementation for sqlite3_pcache_page
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
   "sqlite3_pcache_page", free_sqlite3_pcache_page
};

mrb_value
mruby_box_sqlite3_pcache_page(mrb_state* mrb, sqlite3_pcache_page *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3PcachePage_class(mrb), &sqlite3_pcache_page_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_pcache_page(mrb_state* mrb, sqlite3_pcache_page *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3PcachePage_class(mrb), &sqlite3_pcache_page_data_type, box));
}

void
mruby_set_sqlite3_pcache_page_data_ptr(mrb_value obj, sqlite3_pcache_page *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_pcache_page_data_type);
}

void
mruby_gift_sqlite3_pcache_page_data_ptr(mrb_value obj, sqlite3_pcache_page *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_pcache_page_data_type);
}

sqlite3_pcache_page *
mruby_unbox_sqlite3_pcache_page(mrb_value boxed) {
  return (sqlite3_pcache_page *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeGeometry_boxing */
/* sha: 88e17a70b8480ab892a31d7132d47d811d69a38a86e6cfaafdb9711ddfe854f9 */
#if BIND_Sqlite3RtreeGeometry_TYPE
/*
 * Boxing implementation for sqlite3_rtree_geometry
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
   "sqlite3_rtree_geometry", free_sqlite3_rtree_geometry
};

mrb_value
mruby_box_sqlite3_rtree_geometry(mrb_state* mrb, sqlite3_rtree_geometry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3RtreeGeometry_class(mrb), &sqlite3_rtree_geometry_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_rtree_geometry(mrb_state* mrb, sqlite3_rtree_geometry *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3RtreeGeometry_class(mrb), &sqlite3_rtree_geometry_data_type, box));
}

void
mruby_set_sqlite3_rtree_geometry_data_ptr(mrb_value obj, sqlite3_rtree_geometry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_rtree_geometry_data_type);
}

void
mruby_gift_sqlite3_rtree_geometry_data_ptr(mrb_value obj, sqlite3_rtree_geometry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_rtree_geometry_data_type);
}

sqlite3_rtree_geometry *
mruby_unbox_sqlite3_rtree_geometry(mrb_value boxed) {
  return (sqlite3_rtree_geometry *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3RtreeQueryInfo_boxing */
/* sha: 1c91e409426bfb03f7b6d5a9d39347bf57e3055d08edd5595e8bfbfb3c4978f9 */
#if BIND_Sqlite3RtreeQueryInfo_TYPE
/*
 * Boxing implementation for sqlite3_rtree_query_info
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
   "sqlite3_rtree_query_info", free_sqlite3_rtree_query_info
};

mrb_value
mruby_box_sqlite3_rtree_query_info(mrb_state* mrb, sqlite3_rtree_query_info *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3RtreeQueryInfo_class(mrb), &sqlite3_rtree_query_info_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_rtree_query_info(mrb_state* mrb, sqlite3_rtree_query_info *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3RtreeQueryInfo_class(mrb), &sqlite3_rtree_query_info_data_type, box));
}

void
mruby_set_sqlite3_rtree_query_info_data_ptr(mrb_value obj, sqlite3_rtree_query_info *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_rtree_query_info_data_type);
}

void
mruby_gift_sqlite3_rtree_query_info_data_ptr(mrb_value obj, sqlite3_rtree_query_info *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_rtree_query_info_data_type);
}

sqlite3_rtree_query_info *
mruby_unbox_sqlite3_rtree_query_info(mrb_value boxed) {
  return (sqlite3_rtree_query_info *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Stmt_boxing */
/* sha: 939a9c11ba8799ef070f7950f5ad6fac74b5c902a773691978ecff35c2df5ce9 */
#if BIND_Sqlite3Stmt_TYPE
/*
 * Boxing implementation for sqlite3_stmt
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
   "sqlite3_stmt", free_sqlite3_stmt
};

mrb_value
mruby_box_sqlite3_stmt(mrb_state* mrb, sqlite3_stmt *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Stmt_class(mrb), &sqlite3_stmt_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_stmt(mrb_state* mrb, sqlite3_stmt *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Stmt_class(mrb), &sqlite3_stmt_data_type, box));
}

void
mruby_set_sqlite3_stmt_data_ptr(mrb_value obj, sqlite3_stmt *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_stmt_data_type);
}

void
mruby_gift_sqlite3_stmt_data_ptr(mrb_value obj, sqlite3_stmt *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_stmt_data_type);
}

sqlite3_stmt *
mruby_unbox_sqlite3_stmt(mrb_value boxed) {
  return (sqlite3_stmt *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Value_boxing */
/* sha: cb5f2c8e18f1988fe18a4e9e8ff3c81c4c8d7ee6dd05da0816049d1149cc35d9 */
#if BIND_Sqlite3Value_TYPE
/*
 * Boxing implementation for sqlite3_value
 */

static void free_sqlite3_value(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type sqlite3_value_data_type = {
   "sqlite3_value", free_sqlite3_value
};

mrb_value
mruby_box_sqlite3_value(mrb_state* mrb, sqlite3_value *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Value_class(mrb), &sqlite3_value_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_value(mrb_state* mrb, sqlite3_value *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Value_class(mrb), &sqlite3_value_data_type, box));
}

void
mruby_set_sqlite3_value_data_ptr(mrb_value obj, sqlite3_value *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_value_data_type);
}

void
mruby_gift_sqlite3_value_data_ptr(mrb_value obj, sqlite3_value *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_value_data_type);
}

sqlite3_value *
mruby_unbox_sqlite3_value(mrb_value boxed) {
  return (sqlite3_value *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vfs_boxing */
/* sha: fc9764bf2bfc83bec9c13c1d11ded332d3a06d1197e39ee5f435c457de34823d */
#if BIND_Sqlite3Vfs_TYPE
/*
 * Boxing implementation for sqlite3_vfs
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
   "sqlite3_vfs", free_sqlite3_vfs
};

mrb_value
mruby_box_sqlite3_vfs(mrb_state* mrb, sqlite3_vfs *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Vfs_class(mrb), &sqlite3_vfs_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_vfs(mrb_state* mrb, sqlite3_vfs *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Vfs_class(mrb), &sqlite3_vfs_data_type, box));
}

void
mruby_set_sqlite3_vfs_data_ptr(mrb_value obj, sqlite3_vfs *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_vfs_data_type);
}

void
mruby_gift_sqlite3_vfs_data_ptr(mrb_value obj, sqlite3_vfs *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_vfs_data_type);
}

sqlite3_vfs *
mruby_unbox_sqlite3_vfs(mrb_value boxed) {
  return (sqlite3_vfs *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Vtab_boxing */
/* sha: 8da7e7670c5e1a831d2d208d485a7a47ecbcb10fd55060cfdf4165a5150f45ed */
#if BIND_Sqlite3Vtab_TYPE
/*
 * Boxing implementation for sqlite3_vtab
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
   "sqlite3_vtab", free_sqlite3_vtab
};

mrb_value
mruby_box_sqlite3_vtab(mrb_state* mrb, sqlite3_vtab *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Vtab_class(mrb), &sqlite3_vtab_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_vtab(mrb_state* mrb, sqlite3_vtab *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3Vtab_class(mrb), &sqlite3_vtab_data_type, box));
}

void
mruby_set_sqlite3_vtab_data_ptr(mrb_value obj, sqlite3_vtab *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_vtab_data_type);
}

void
mruby_gift_sqlite3_vtab_data_ptr(mrb_value obj, sqlite3_vtab *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_vtab_data_type);
}

sqlite3_vtab *
mruby_unbox_sqlite3_vtab(mrb_value boxed) {
  return (sqlite3_vtab *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3VtabCursor_boxing */
/* sha: 0ffbd1d63f025463d48a2c5a467a32e30c67eeef81b26e17ff16e97488307096 */
#if BIND_Sqlite3VtabCursor_TYPE
/*
 * Boxing implementation for sqlite3_vtab_cursor
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
   "sqlite3_vtab_cursor", free_sqlite3_vtab_cursor
};

mrb_value
mruby_box_sqlite3_vtab_cursor(mrb_state* mrb, sqlite3_vtab_cursor *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3VtabCursor_class(mrb), &sqlite3_vtab_cursor_data_type, box));
}

mrb_value
mruby_giftwrap_sqlite3_vtab_cursor(mrb_state* mrb, sqlite3_vtab_cursor *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Sqlite3VtabCursor_class(mrb), &sqlite3_vtab_cursor_data_type, box));
}

void
mruby_set_sqlite3_vtab_cursor_data_ptr(mrb_value obj, sqlite3_vtab_cursor *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_vtab_cursor_data_type);
}

void
mruby_gift_sqlite3_vtab_cursor_data_ptr(mrb_value obj, sqlite3_vtab_cursor *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &sqlite3_vtab_cursor_data_type);
}

sqlite3_vtab_cursor *
mruby_unbox_sqlite3_vtab_cursor(mrb_value boxed) {
  return (sqlite3_vtab_cursor *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

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

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
