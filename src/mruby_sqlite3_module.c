/*
 * sqlite3_module
 * Defined in file sqlite3.h @ line 5468
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Module_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::initialize */
/* sha: f50ffb2bd834715c01294a042844aa0de0198d99c76d31854725d604fa96031d */
#if BIND_Sqlite3Module_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Module_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  sqlite3_module* native_object = (sqlite3_module*)calloc(1, sizeof(sqlite3_module));
  mruby_gift_sqlite3_module_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3Module::iVersion_reader */
/* sha: e8be69b503d8da06c9aafd708b91463aab404a99f11ad0f24aba4ffb4c1ac3d3 */
#if BIND_Sqlite3Module_iVersion_FIELD_READER
/* get_iVersion
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_iVersion(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int native_iVersion = native_self->iVersion;

  mrb_value iVersion = mrb_fixnum_value(native_iVersion);

  return iVersion;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::iVersion_writer */
/* sha: ca8dfcc4e9e226f222ac9daebab9aa95da9d6d396ec1fc28f52682cb2294300e */
#if BIND_Sqlite3Module_iVersion_FIELD_WRITER
/* set_iVersion
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_iVersion(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_int native_iVersion;

  mrb_get_args(mrb, "i", &native_iVersion);

  native_self->iVersion = native_iVersion;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xCreate_reader */
/* sha: d0a3e9269b8d88109d1a7071b45b2fd02a255a6749d146fcb44eb570b61897b7 */
#if BIND_Sqlite3Module_xCreate_FIELD_READER
/* get_xCreate
 *
 * Return Type: int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xCreate(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **) native_xCreate = native_self->xCreate;

  mrb_value xCreate = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(mrb, native_xCreate);

  return xCreate;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xCreate_writer */
/* sha: a51eb086ca63c174e212ef8b98bfaaa5fa553824c7793a46e6baa73532f6f1b3 */
#if BIND_Sqlite3Module_xCreate_FIELD_WRITER
/* set_xCreate
 *
 * Parameters:
 * - value: int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xCreate(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xCreate;

  mrb_get_args(mrb, "o", &xCreate);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(xCreate);

  int (*native_xCreate)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(xCreate);

  native_self->xCreate = native_xCreate;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xConnect_reader */
/* sha: 7cdb3221f385838cce3d7382387f9aaf2f6f4759871028dce12f8015280a867d */
#if BIND_Sqlite3Module_xConnect_FIELD_READER
/* get_xConnect
 *
 * Return Type: int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xConnect(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **) native_xConnect = native_self->xConnect;

  mrb_value xConnect = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(mrb, native_xConnect);

  return xConnect;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xConnect_writer */
/* sha: 3265fd5889c1b032c55de0b71aaa6b0bd510ad450c4099b12de8e23faa65a578 */
#if BIND_Sqlite3Module_xConnect_FIELD_WRITER
/* set_xConnect
 *
 * Parameters:
 * - value: int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xConnect(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xConnect;

  mrb_get_args(mrb, "o", &xConnect);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(xConnect);

  int (*native_xConnect)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(xConnect);

  native_self->xConnect = native_xConnect;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xBestIndex_reader */
/* sha: 68c9541f8dff1c1113b4ca196f79079f3c9e661c6f15f83f37a6541fe2136003 */
#if BIND_Sqlite3Module_xBestIndex_FIELD_READER
/* get_xBestIndex
 *
 * Return Type: int (*)(sqlite3_vtab *, sqlite3_index_info *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xBestIndex(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, sqlite3_index_info *) native_xBestIndex = native_self->xBestIndex;

  mrb_value xBestIndex = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_index_info_PTR_RPAREN(mrb, native_xBestIndex);

  return xBestIndex;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xBestIndex_writer */
/* sha: c77cb639ae33a6daa96bd25ae0f3534f808897320d0d3594fa86f43ee2dac7a5 */
#if BIND_Sqlite3Module_xBestIndex_FIELD_WRITER
/* set_xBestIndex
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, sqlite3_index_info *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xBestIndex(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xBestIndex;

  mrb_get_args(mrb, "o", &xBestIndex);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_index_info_PTR_RPAREN(xBestIndex);

  int (*native_xBestIndex)(sqlite3_vtab *, sqlite3_index_info *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_index_info_PTR_RPAREN(xBestIndex);

  native_self->xBestIndex = native_xBestIndex;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xDisconnect_reader */
/* sha: eef41c2133500d0d1da4cc605c1f23a85ec7708dd45a30a30f83ea5cbd3ea828 */
#if BIND_Sqlite3Module_xDisconnect_FIELD_READER
/* get_xDisconnect
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xDisconnect(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_xDisconnect = native_self->xDisconnect;

  mrb_value xDisconnect = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_xDisconnect);

  return xDisconnect;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xDisconnect_writer */
/* sha: de9c017000aa16c943a03ebe1a8fd7f3390b31b0a7f6481a4b8a1e80fdb22c96 */
#if BIND_Sqlite3Module_xDisconnect_FIELD_WRITER
/* set_xDisconnect
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xDisconnect(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xDisconnect;

  mrb_get_args(mrb, "o", &xDisconnect);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xDisconnect);

  int (*native_xDisconnect)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xDisconnect);

  native_self->xDisconnect = native_xDisconnect;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xDestroy_reader */
/* sha: fd950b3be8111876787999533103b64ddae7405144cb92d80343286ec7d184f4 */
#if BIND_Sqlite3Module_xDestroy_FIELD_READER
/* get_xDestroy
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xDestroy(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_xDestroy = native_self->xDestroy;

  mrb_value xDestroy = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_xDestroy);

  return xDestroy;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xDestroy_writer */
/* sha: 03ab836afc79924e0f174f9c8843bf23258c56803921acb485daebf105d0299a */
#if BIND_Sqlite3Module_xDestroy_FIELD_WRITER
/* set_xDestroy
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xDestroy(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xDestroy;

  mrb_get_args(mrb, "o", &xDestroy);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xDestroy);

  int (*native_xDestroy)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xDestroy);

  native_self->xDestroy = native_xDestroy;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xOpen_reader */
/* sha: 04118a6cb79ae664ebbd6765019fc612da915eb81a241de69d6b13489aedfee6 */
#if BIND_Sqlite3Module_xOpen_FIELD_READER
/* get_xOpen
 *
 * Return Type: int (*)(sqlite3_vtab *, sqlite3_vtab_cursor **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xOpen(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, sqlite3_vtab_cursor **) native_xOpen = native_self->xOpen;

  mrb_value xOpen = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_vtab_cursor_PTR_PTR_RPAREN(mrb, native_xOpen);

  return xOpen;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xOpen_writer */
/* sha: 5fa4dd42227131471cad76328bc493a1a5b7538255c16a593e6664405fef69b2 */
#if BIND_Sqlite3Module_xOpen_FIELD_WRITER
/* set_xOpen
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, sqlite3_vtab_cursor **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xOpen(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xOpen;

  mrb_get_args(mrb, "o", &xOpen);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_vtab_cursor_PTR_PTR_RPAREN(xOpen);

  int (*native_xOpen)(sqlite3_vtab *, sqlite3_vtab_cursor **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_vtab_cursor_PTR_PTR_RPAREN(xOpen);

  native_self->xOpen = native_xOpen;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xClose_reader */
/* sha: 9054391a3a64f5a740ae8d517c40d2b2ed3bd492d02e9eb818232a5e61a1bb2d */
#if BIND_Sqlite3Module_xClose_FIELD_READER
/* get_xClose
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xClose(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *) native_xClose = native_self->xClose;

  mrb_value xClose = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(mrb, native_xClose);

  return xClose;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xClose_writer */
/* sha: 76af50f1c3e6e38c02328071af004364efda029df51c191b323b75eb644554db */
#if BIND_Sqlite3Module_xClose_FIELD_WRITER
/* set_xClose
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xClose(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xClose;

  mrb_get_args(mrb, "o", &xClose);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(xClose);

  int (*native_xClose)(sqlite3_vtab_cursor *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(xClose);

  native_self->xClose = native_xClose;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xFilter_reader */
/* sha: a245d16c6ff792f98a78a2eaa255943234078a76ab70188283248941748ed69c */
#if BIND_Sqlite3Module_xFilter_FIELD_READER
/* get_xFilter
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *, int, const char *, int, sqlite3_value **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xFilter(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *, int, const char *, int, sqlite3_value **) native_xFilter = native_self->xFilter;

  mrb_value xFilter = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_intCOMMAchar_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(mrb, native_xFilter);

  return xFilter;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xFilter_writer */
/* sha: 374d330a720b30c6093ae9852f151c07e42b20ace63b899eff5e1e44b09cc001 */
#if BIND_Sqlite3Module_xFilter_FIELD_WRITER
/* set_xFilter
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *, int, const char *, int, sqlite3_value **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xFilter(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xFilter;

  mrb_get_args(mrb, "o", &xFilter);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_intCOMMAchar_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(xFilter);

  int (*native_xFilter)(sqlite3_vtab_cursor *, int, const char *, int, sqlite3_value **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_intCOMMAchar_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(xFilter);

  native_self->xFilter = native_xFilter;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xNext_reader */
/* sha: 54cd255ce27c89b86cfa5a7720b242363f3b224ca21f1a2c8991f05af6279b38 */
#if BIND_Sqlite3Module_xNext_FIELD_READER
/* get_xNext
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xNext(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *) native_xNext = native_self->xNext;

  mrb_value xNext = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(mrb, native_xNext);

  return xNext;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xNext_writer */
/* sha: fa5f207b20a99083d819eb4ad99e5c81a6912d080d456aefff4a2b9f9e00f414 */
#if BIND_Sqlite3Module_xNext_FIELD_WRITER
/* set_xNext
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xNext(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xNext;

  mrb_get_args(mrb, "o", &xNext);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(xNext);

  int (*native_xNext)(sqlite3_vtab_cursor *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(xNext);

  native_self->xNext = native_xNext;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xEof_reader */
/* sha: 9cc7dbea3bb3e24bd39a0d106fff8a8d4ed4dc310805c7ec7da3c868a51f78af */
#if BIND_Sqlite3Module_xEof_FIELD_READER
/* get_xEof
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xEof(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *) native_xEof = native_self->xEof;

  mrb_value xEof = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(mrb, native_xEof);

  return xEof;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xEof_writer */
/* sha: b20e15bed8c4753dd7b2e444232aed638bac5ce5fa83a36a93b12185747faa00 */
#if BIND_Sqlite3Module_xEof_FIELD_WRITER
/* set_xEof
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xEof(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xEof;

  mrb_get_args(mrb, "o", &xEof);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(xEof);

  int (*native_xEof)(sqlite3_vtab_cursor *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(xEof);

  native_self->xEof = native_xEof;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xColumn_reader */
/* sha: c00d754354bbe304dae712729291712c924527915802865bc74272cbe543bda6 */
#if BIND_Sqlite3Module_xColumn_FIELD_READER
/* get_xColumn
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *, sqlite3_context *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xColumn(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *, sqlite3_context *, int) native_xColumn = native_self->xColumn;

  mrb_value xColumn = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_context_PTR_COMMA_int_RPAREN(mrb, native_xColumn);

  return xColumn;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xColumn_writer */
/* sha: b3f9a8e121649ac4e9531ee175f5aa18956de879448627a78d31daa0be77e2b4 */
#if BIND_Sqlite3Module_xColumn_FIELD_WRITER
/* set_xColumn
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *, sqlite3_context *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xColumn(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xColumn;

  mrb_get_args(mrb, "o", &xColumn);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_context_PTR_COMMA_int_RPAREN(xColumn);

  int (*native_xColumn)(sqlite3_vtab_cursor *, sqlite3_context *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_context_PTR_COMMA_int_RPAREN(xColumn);

  native_self->xColumn = native_xColumn;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xRowid_reader */
/* sha: 4cc228fe135af85fe0e623988dcc9a42d9edf4be78548c697fbeab17515c89f1 */
#if BIND_Sqlite3Module_xRowid_FIELD_READER
/* get_xRowid
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xRowid(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *, sqlite3_int64 *) native_xRowid = native_self->xRowid;

  mrb_value xRowid = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_int64_PTR_RPAREN(mrb, native_xRowid);

  return xRowid;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xRowid_writer */
/* sha: a106e8684a4061ca866115bdc58a98fa42b85b484249875c7e44588d2f05a635 */
#if BIND_Sqlite3Module_xRowid_FIELD_WRITER
/* set_xRowid
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xRowid(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xRowid;

  mrb_get_args(mrb, "o", &xRowid);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_int64_PTR_RPAREN(xRowid);

  int (*native_xRowid)(sqlite3_vtab_cursor *, sqlite3_int64 *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_int64_PTR_RPAREN(xRowid);

  native_self->xRowid = native_xRowid;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xUpdate_reader */
/* sha: 1e4a31ff95416a36f95e9bfabe8bf3597fc0020a7d6c476b0f1af6a02ce09132 */
#if BIND_Sqlite3Module_xUpdate_FIELD_READER
/* get_xUpdate
 *
 * Return Type: int (*)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xUpdate(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *) native_xUpdate = native_self->xUpdate;

  mrb_value xUpdate = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_COMMA_sqlite3_int64_PTR_RPAREN(mrb, native_xUpdate);

  return xUpdate;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xUpdate_writer */
/* sha: d22280a36912150158298b98efd53db6ab1b939eeceb88be5b2075491b564b80 */
#if BIND_Sqlite3Module_xUpdate_FIELD_WRITER
/* set_xUpdate
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xUpdate(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xUpdate;

  mrb_get_args(mrb, "o", &xUpdate);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_COMMA_sqlite3_int64_PTR_RPAREN(xUpdate);

  int (*native_xUpdate)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_COMMA_sqlite3_int64_PTR_RPAREN(xUpdate);

  native_self->xUpdate = native_xUpdate;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xBegin_reader */
/* sha: 8f3818c21ee36c4c38cf510c1583286e4e8d4f486100fb73e45eb109fc694111 */
#if BIND_Sqlite3Module_xBegin_FIELD_READER
/* get_xBegin
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xBegin(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_xBegin = native_self->xBegin;

  mrb_value xBegin = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_xBegin);

  return xBegin;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xBegin_writer */
/* sha: c7556ee862ab206b212ce6820d66288f67d3430d8f2d0ddcd52d3d6d71660386 */
#if BIND_Sqlite3Module_xBegin_FIELD_WRITER
/* set_xBegin
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xBegin(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xBegin;

  mrb_get_args(mrb, "o", &xBegin);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xBegin);

  int (*native_xBegin)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xBegin);

  native_self->xBegin = native_xBegin;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xSync_reader */
/* sha: 1110dce20403a27056aa1f18ced712ee1999dfb98543905294c9f826bbc3ba8f */
#if BIND_Sqlite3Module_xSync_FIELD_READER
/* get_xSync
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xSync(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_xSync = native_self->xSync;

  mrb_value xSync = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_xSync);

  return xSync;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xSync_writer */
/* sha: b70f5a2c9b3d7db561689eff82fc119e10de8548df9fc1aa014f3c4a5582ddfe */
#if BIND_Sqlite3Module_xSync_FIELD_WRITER
/* set_xSync
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xSync(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xSync;

  mrb_get_args(mrb, "o", &xSync);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xSync);

  int (*native_xSync)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xSync);

  native_self->xSync = native_xSync;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xCommit_reader */
/* sha: 4131f80c8193f3a7ebf58b5116884715115a74b7bd5577758b1990ce999f0145 */
#if BIND_Sqlite3Module_xCommit_FIELD_READER
/* get_xCommit
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xCommit(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_xCommit = native_self->xCommit;

  mrb_value xCommit = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_xCommit);

  return xCommit;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xCommit_writer */
/* sha: 00def637b245654719d2405958819fe1985a5ed411c2c7fcc63a572edbcf3d7b */
#if BIND_Sqlite3Module_xCommit_FIELD_WRITER
/* set_xCommit
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xCommit(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xCommit;

  mrb_get_args(mrb, "o", &xCommit);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xCommit);

  int (*native_xCommit)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xCommit);

  native_self->xCommit = native_xCommit;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xRollback_reader */
/* sha: 15b3d315c5db7820453cb6ab1ca1297c841605158b34d3d045f804687087162f */
#if BIND_Sqlite3Module_xRollback_FIELD_READER
/* get_xRollback
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xRollback(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_xRollback = native_self->xRollback;

  mrb_value xRollback = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_xRollback);

  return xRollback;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xRollback_writer */
/* sha: 1d18b5d40b47b4ca11155c9d4bb793b971881f0083142017e047ba5243b68c33 */
#if BIND_Sqlite3Module_xRollback_FIELD_WRITER
/* set_xRollback
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xRollback(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xRollback;

  mrb_get_args(mrb, "o", &xRollback);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xRollback);

  int (*native_xRollback)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xRollback);

  native_self->xRollback = native_xRollback;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xFindFunction_reader */
/* sha: 2d90705964647f3566f42be302bf6a48061cd627f3db63a799bcedd70f708396 */
#if BIND_Sqlite3Module_xFindFunction_FIELD_READER
/* get_xFindFunction
 *
 * Return Type: int (*)(sqlite3_vtab *, int, const char *, void (**)(sqlite3_context *, int, sqlite3_value **), void **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xFindFunction(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, int, const char *, void (**)(sqlite3_context *, int, sqlite3_value **), void **) native_xFindFunction = native_self->xFindFunction;

  mrb_value xFindFunction = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMAchar_PTR_COMMA_void_LPAREN_PTR_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN_COMMA_void_PTR_PTR_RPAREN(mrb, native_xFindFunction);

  return xFindFunction;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xFindFunction_writer */
/* sha: f5e362c106c078fbad15aebb48d0c0f5b8b69f0a38aa05b7e4d98dba8e2cefbc */
#if BIND_Sqlite3Module_xFindFunction_FIELD_WRITER
/* set_xFindFunction
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, int, const char *, void (**)(sqlite3_context *, int, sqlite3_value **), void **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xFindFunction(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xFindFunction;

  mrb_get_args(mrb, "o", &xFindFunction);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMAchar_PTR_COMMA_void_LPAREN_PTR_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN_COMMA_void_PTR_PTR_RPAREN(xFindFunction);

  int (*native_xFindFunction)(sqlite3_vtab *, int, const char *, void (**)(sqlite3_context *, int, sqlite3_value **), void **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMAchar_PTR_COMMA_void_LPAREN_PTR_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN_COMMA_void_PTR_PTR_RPAREN(xFindFunction);

  native_self->xFindFunction = native_xFindFunction;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xRename_reader */
/* sha: b4a25fee9e3fec6f2b57845bd4f5a90ea801a7335e333bbaf52a79a7369f3587 */
#if BIND_Sqlite3Module_xRename_FIELD_READER
/* get_xRename
 *
 * Return Type: int (*)(sqlite3_vtab *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xRename(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, const char *) native_xRename = native_self->xRename;

  mrb_value xRename = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMAchar_PTR_RPAREN(mrb, native_xRename);

  return xRename;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xRename_writer */
/* sha: ded8e64b93884d9f6354c9644990603d47edb06ebcd2396011cb9565652fab68 */
#if BIND_Sqlite3Module_xRename_FIELD_WRITER
/* set_xRename
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xRename(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xRename;

  mrb_get_args(mrb, "o", &xRename);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMAchar_PTR_RPAREN(xRename);

  int (*native_xRename)(sqlite3_vtab *, const char *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMAchar_PTR_RPAREN(xRename);

  native_self->xRename = native_xRename;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xSavepoint_reader */
/* sha: 4106e5fd7fa3085dc88e5d5deb0e8b2998e943c36fd5ed468a099eb8d7b2de1a */
#if BIND_Sqlite3Module_xSavepoint_FIELD_READER
/* get_xSavepoint
 *
 * Return Type: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xSavepoint(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, int) native_xSavepoint = native_self->xSavepoint;

  mrb_value xSavepoint = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(mrb, native_xSavepoint);

  return xSavepoint;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xSavepoint_writer */
/* sha: 2e6bd979d0abf7e71f0dcb0103e8e6c380199b4114ad39da60774e47abc05f0d */
#if BIND_Sqlite3Module_xSavepoint_FIELD_WRITER
/* set_xSavepoint
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xSavepoint(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xSavepoint;

  mrb_get_args(mrb, "o", &xSavepoint);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(xSavepoint);

  int (*native_xSavepoint)(sqlite3_vtab *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(xSavepoint);

  native_self->xSavepoint = native_xSavepoint;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xRelease_reader */
/* sha: f0d353334d6b65c9da67023f5ebb247cf9d379db63f97ce3c8144e644e43a583 */
#if BIND_Sqlite3Module_xRelease_FIELD_READER
/* get_xRelease
 *
 * Return Type: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xRelease(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, int) native_xRelease = native_self->xRelease;

  mrb_value xRelease = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(mrb, native_xRelease);

  return xRelease;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xRelease_writer */
/* sha: faa8320d855dd4d2df0c5d87068501070c700bd49dfaf4b0d38a03c5095c7824 */
#if BIND_Sqlite3Module_xRelease_FIELD_WRITER
/* set_xRelease
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xRelease(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xRelease;

  mrb_get_args(mrb, "o", &xRelease);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(xRelease);

  int (*native_xRelease)(sqlite3_vtab *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(xRelease);

  native_self->xRelease = native_xRelease;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xRollbackTo_reader */
/* sha: 0dc9480b55e9c01e3a6363b59b4a807925288e50841dbd0beef2e7d89b5f2817 */
#if BIND_Sqlite3Module_xRollbackTo_FIELD_READER
/* get_xRollbackTo
 *
 * Return Type: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xRollbackTo(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, int) native_xRollbackTo = native_self->xRollbackTo;

  mrb_value xRollbackTo = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(mrb, native_xRollbackTo);

  return xRollbackTo;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xRollbackTo_writer */
/* sha: fb0dafd2b9c3ade4503f99a43a68412f975802a04add6ed54e79397e92c1b552 */
#if BIND_Sqlite3Module_xRollbackTo_FIELD_WRITER
/* set_xRollbackTo
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xRollbackTo(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xRollbackTo;

  mrb_get_args(mrb, "o", &xRollbackTo);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(xRollbackTo);

  int (*native_xRollbackTo)(sqlite3_vtab *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(xRollbackTo);

  native_self->xRollbackTo = native_xRollbackTo;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Module_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3Module::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::class_definition */
/* sha: dbb9ed353346f7e3d35daee2d9031ee660de4a7065e08f9e523f8e8cdac434e3 */
  struct RClass* Sqlite3Module_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Module", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Module_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::class_method_definitions */
/* sha: 07c72010751ec38b26883324ddec924702587a60f3425f4de00b3cf1738a1afc */
#if BIND_Sqlite3Module_INITIALIZE
  mrb_define_method(mrb, Sqlite3Module_class, "initialize", mrb_SQLite_Sqlite3Module_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::attr_definitions */
/* sha: 46cf27774d81da7d20ba7812093225b92185b694d8f7c2c9d11e91f72e966de2 */
  /*
   * Fields
   */
#if BIND_Sqlite3Module_iVersion_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "iVersion", mrb_SQLite_Sqlite3Module_get_iVersion, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_iVersion_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "iVersion=", mrb_SQLite_Sqlite3Module_set_iVersion, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xCreate_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xCreate", mrb_SQLite_Sqlite3Module_get_xCreate, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xCreate_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xCreate=", mrb_SQLite_Sqlite3Module_set_xCreate, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xConnect_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xConnect", mrb_SQLite_Sqlite3Module_get_xConnect, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xConnect_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xConnect=", mrb_SQLite_Sqlite3Module_set_xConnect, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xBestIndex_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xBestIndex", mrb_SQLite_Sqlite3Module_get_xBestIndex, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xBestIndex_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xBestIndex=", mrb_SQLite_Sqlite3Module_set_xBestIndex, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xDisconnect_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xDisconnect", mrb_SQLite_Sqlite3Module_get_xDisconnect, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xDisconnect_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xDisconnect=", mrb_SQLite_Sqlite3Module_set_xDisconnect, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xDestroy_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xDestroy", mrb_SQLite_Sqlite3Module_get_xDestroy, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xDestroy_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xDestroy=", mrb_SQLite_Sqlite3Module_set_xDestroy, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xOpen_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xOpen", mrb_SQLite_Sqlite3Module_get_xOpen, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xOpen_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xOpen=", mrb_SQLite_Sqlite3Module_set_xOpen, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xClose_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xClose", mrb_SQLite_Sqlite3Module_get_xClose, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xClose_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xClose=", mrb_SQLite_Sqlite3Module_set_xClose, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xFilter_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xFilter", mrb_SQLite_Sqlite3Module_get_xFilter, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xFilter_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xFilter=", mrb_SQLite_Sqlite3Module_set_xFilter, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xNext_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xNext", mrb_SQLite_Sqlite3Module_get_xNext, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xNext_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xNext=", mrb_SQLite_Sqlite3Module_set_xNext, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xEof_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xEof", mrb_SQLite_Sqlite3Module_get_xEof, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xEof_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xEof=", mrb_SQLite_Sqlite3Module_set_xEof, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xColumn_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xColumn", mrb_SQLite_Sqlite3Module_get_xColumn, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xColumn_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xColumn=", mrb_SQLite_Sqlite3Module_set_xColumn, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xRowid_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xRowid", mrb_SQLite_Sqlite3Module_get_xRowid, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xRowid_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xRowid=", mrb_SQLite_Sqlite3Module_set_xRowid, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xUpdate_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xUpdate", mrb_SQLite_Sqlite3Module_get_xUpdate, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xUpdate_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xUpdate=", mrb_SQLite_Sqlite3Module_set_xUpdate, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xBegin_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xBegin", mrb_SQLite_Sqlite3Module_get_xBegin, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xBegin_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xBegin=", mrb_SQLite_Sqlite3Module_set_xBegin, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xSync_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xSync", mrb_SQLite_Sqlite3Module_get_xSync, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xSync_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xSync=", mrb_SQLite_Sqlite3Module_set_xSync, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xCommit_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xCommit", mrb_SQLite_Sqlite3Module_get_xCommit, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xCommit_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xCommit=", mrb_SQLite_Sqlite3Module_set_xCommit, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xRollback_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xRollback", mrb_SQLite_Sqlite3Module_get_xRollback, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xRollback_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xRollback=", mrb_SQLite_Sqlite3Module_set_xRollback, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xFindFunction_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xFindFunction", mrb_SQLite_Sqlite3Module_get_xFindFunction, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xFindFunction_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xFindFunction=", mrb_SQLite_Sqlite3Module_set_xFindFunction, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xRename_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xRename", mrb_SQLite_Sqlite3Module_get_xRename, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xRename_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xRename=", mrb_SQLite_Sqlite3Module_set_xRename, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xSavepoint_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xSavepoint", mrb_SQLite_Sqlite3Module_get_xSavepoint, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xSavepoint_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xSavepoint=", mrb_SQLite_Sqlite3Module_set_xSavepoint, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xRelease_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xRelease", mrb_SQLite_Sqlite3Module_get_xRelease, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xRelease_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xRelease=", mrb_SQLite_Sqlite3Module_set_xRelease, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Sqlite3Module_xRollbackTo_FIELD_READER
  mrb_define_method(mrb, Sqlite3Module_class, "xRollbackTo", mrb_SQLite_Sqlite3Module_get_xRollbackTo, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Sqlite3Module_xRollbackTo_FIELD_WRITER
  mrb_define_method(mrb, Sqlite3Module_class, "xRollbackTo=", mrb_SQLite_Sqlite3Module_set_xRollbackTo, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
