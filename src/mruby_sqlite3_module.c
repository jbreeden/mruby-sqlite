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
/* sha: b9067c41a86bd56659d0009d771a7753024c483cd5ee7455e0bb523f3a023885 */
#if BIND_Sqlite3Module_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Module_initialize(mrb_state* mrb, mrb_value self) {
  mrb_raise(mrb, E_NOMETHOD_ERROR, "No initializer defined");
/* 
  sqlite3_module* native_object = (sqlite3_module*)calloc(1, sizeof(sqlite3_module));
  mruby_gift_sqlite3_module_data_ptr(self, native_object);
  return self;
*/
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3Module::iVersion_reader */
/* sha: 96fbddeae699618f1e622515345ce2b8ab0a8f4e03aa3b255fcf4be1952604e2 */
#if BIND_Sqlite3Module_iVersion_FIELD_READER
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
/* sha: e3ef5df56ad919fbd2ed11bba4c0d0015ed9583f1a88d39e79394848a9035a95 */
#if BIND_Sqlite3Module_iVersion_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_iVersion(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_int native_iVersion;

  mrb_get_args(mrb, "i", &native_iVersion);

  native_self->iVersion = native_iVersion;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xCreate_reader */
/* sha: a8f0ee4d16d516cd9bae5404ff88bc695c8dad81a0ad1009245338ad69a8fc35 */
#if BIND_Sqlite3Module_xCreate_FIELD_READER
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
/* sha: e8133d19340ce7a45bf255e8e9ab17955d7e56d7b3ce87dec5cc11b407aaa2d3 */
#if BIND_Sqlite3Module_xCreate_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_xCreate(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xCreate;

  mrb_get_args(mrb, "o", &xCreate);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(xCreate);

  int (*native_xCreate)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(xCreate);

  native_self->xCreate = native_xCreate;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xConnect_reader */
/* sha: 5ecd50f7bb0771ddb3043543efb8bdddd578081f3a16baae4d33ae2a1a71bc5e */
#if BIND_Sqlite3Module_xConnect_FIELD_READER
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
/* sha: 5e9ff42752015cbb7d42cb201c0832103837cd81afc6dab8b3a6d1fe5ca5134b */
#if BIND_Sqlite3Module_xConnect_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_xConnect(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xConnect;

  mrb_get_args(mrb, "o", &xConnect);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(xConnect);

  int (*native_xConnect)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(xConnect);

  native_self->xConnect = native_xConnect;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xBestIndex_reader */
/* sha: d47726ca6a04ff0888ac4f52bd9005c83a3d121107fcca3735bfa3cba804adee */
#if BIND_Sqlite3Module_xBestIndex_FIELD_READER
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
/* sha: 31763f4ee81ed2c753be8c18cbd65a0edf51f23a0b2156f4ea1dbb77933fa14b */
#if BIND_Sqlite3Module_xBestIndex_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_xBestIndex(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xBestIndex;

  mrb_get_args(mrb, "o", &xBestIndex);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_index_info_PTR_RPAREN(xBestIndex);

  int (*native_xBestIndex)(sqlite3_vtab *, sqlite3_index_info *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_index_info_PTR_RPAREN(xBestIndex);

  native_self->xBestIndex = native_xBestIndex;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xDisconnect_reader */
/* sha: 002f3305937e2ba4143c16de418afe1f4055daf9b4a1c49ce15ea43342564bea */
#if BIND_Sqlite3Module_xDisconnect_FIELD_READER
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
/* sha: 63f24b97fe0128e2184d64794b47be34e71bb22acbb015ff5aec8978eb2f8c19 */
#if BIND_Sqlite3Module_xDisconnect_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_xDisconnect(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xDisconnect;

  mrb_get_args(mrb, "o", &xDisconnect);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xDisconnect);

  int (*native_xDisconnect)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xDisconnect);

  native_self->xDisconnect = native_xDisconnect;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xDestroy_reader */
/* sha: 89aa36a262e08edc5675c727b8b27bac866ac2f2c77c36706cc8a569d41ff19f */
#if BIND_Sqlite3Module_xDestroy_FIELD_READER
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
/* sha: 1340c74ad857a7c6b3326b0375b4df3a92242dc187898c5fd2833d8df2460c25 */
#if BIND_Sqlite3Module_xDestroy_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_xDestroy(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xDestroy;

  mrb_get_args(mrb, "o", &xDestroy);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xDestroy);

  int (*native_xDestroy)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xDestroy);

  native_self->xDestroy = native_xDestroy;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xOpen_reader */
/* sha: 1de3dd906030344a1bd2cd7f1c066bef8de591dbf6e14ebd7ee3733510fc54fa */
#if BIND_Sqlite3Module_xOpen_FIELD_READER
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
/* sha: 95550c7158a580e2cb0cd1439b892733bf2aa30699ff35c9fdfa39448dc4a388 */
#if BIND_Sqlite3Module_xOpen_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_xOpen(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xOpen;

  mrb_get_args(mrb, "o", &xOpen);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_vtab_cursor_PTR_PTR_RPAREN(xOpen);

  int (*native_xOpen)(sqlite3_vtab *, sqlite3_vtab_cursor **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_vtab_cursor_PTR_PTR_RPAREN(xOpen);

  native_self->xOpen = native_xOpen;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xClose_reader */
/* sha: dbafef3be6ba6dd80077db4983ba155df10aec5e3a80abba2a524b1fc9aa0579 */
#if BIND_Sqlite3Module_xClose_FIELD_READER
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
/* sha: 55d9b9e228cbffc0968296ff8ba7e7af269710801fe5b03ea9d5c2798b6b30cb */
#if BIND_Sqlite3Module_xClose_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_xClose(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xClose;

  mrb_get_args(mrb, "o", &xClose);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(xClose);

  int (*native_xClose)(sqlite3_vtab_cursor *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(xClose);

  native_self->xClose = native_xClose;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xFilter_reader */
/* sha: f848185cb6a475a341f8d045478ec147ba262fd0b4b1225232319e6ec527584b */
#if BIND_Sqlite3Module_xFilter_FIELD_READER
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
/* sha: 1a4b93ee94953200b23931fa60ce5ae3f35895e98851551dec3c50f5b8e3fb12 */
#if BIND_Sqlite3Module_xFilter_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_xFilter(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xFilter;

  mrb_get_args(mrb, "o", &xFilter);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_intCOMMAchar_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(xFilter);

  int (*native_xFilter)(sqlite3_vtab_cursor *, int, const char *, int, sqlite3_value **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_intCOMMAchar_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(xFilter);

  native_self->xFilter = native_xFilter;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xNext_reader */
/* sha: 37cb9e05790da9a03f17354141d2b273f585d3ba93d277fe04b8aaaee48b2893 */
#if BIND_Sqlite3Module_xNext_FIELD_READER
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
/* sha: 038bdca17ab0ae5c4c79226952627c38da5e030d30cb93105bf1574fa2ae5422 */
#if BIND_Sqlite3Module_xNext_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_xNext(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xNext;

  mrb_get_args(mrb, "o", &xNext);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(xNext);

  int (*native_xNext)(sqlite3_vtab_cursor *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(xNext);

  native_self->xNext = native_xNext;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xEof_reader */
/* sha: 26bb5bae62faeddec76927258620bc46a7b5e196e859df4ac8bb56cbede10aa1 */
#if BIND_Sqlite3Module_xEof_FIELD_READER
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
/* sha: 18661c4aeed5000fbc12fe6cc09ac7c5c7db97f3012cefe2091d609e3b3e5fbd */
#if BIND_Sqlite3Module_xEof_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_xEof(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xEof;

  mrb_get_args(mrb, "o", &xEof);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(xEof);

  int (*native_xEof)(sqlite3_vtab_cursor *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(xEof);

  native_self->xEof = native_xEof;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xColumn_reader */
/* sha: f64227027ad393cddac07ed619f0750d040d9c7f3a3e2a3b99230691765e5cde */
#if BIND_Sqlite3Module_xColumn_FIELD_READER
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
/* sha: 592ad129352990f937ca40b5d049dad1878e9046c4952335fa2e4d3ef20039a5 */
#if BIND_Sqlite3Module_xColumn_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_xColumn(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xColumn;

  mrb_get_args(mrb, "o", &xColumn);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_context_PTR_COMMA_int_RPAREN(xColumn);

  int (*native_xColumn)(sqlite3_vtab_cursor *, sqlite3_context *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_context_PTR_COMMA_int_RPAREN(xColumn);

  native_self->xColumn = native_xColumn;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xRowid_reader */
/* sha: ce4f48af2f301187aaa088e6f9586ed6be94357d8caf097583e36e0fbe5ea7b5 */
#if BIND_Sqlite3Module_xRowid_FIELD_READER
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
/* sha: e28fda51e0141b6b58d86651214b3d4b6624d7703225306579a99406d3876140 */
#if BIND_Sqlite3Module_xRowid_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_xRowid(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xRowid;

  mrb_get_args(mrb, "o", &xRowid);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_int64_PTR_RPAREN(xRowid);

  int (*native_xRowid)(sqlite3_vtab_cursor *, sqlite3_int64 *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_int64_PTR_RPAREN(xRowid);

  native_self->xRowid = native_xRowid;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xUpdate_reader */
/* sha: 8cbac2db45820925173e84b29e64938ff1ee62f8e6903f1923cfd57a2d079457 */
#if BIND_Sqlite3Module_xUpdate_FIELD_READER
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
/* sha: a4f41fbdfc91c634f65fb66b5ede0b5f689246eec8a7f1bcdedc16c546eda651 */
#if BIND_Sqlite3Module_xUpdate_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_xUpdate(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xUpdate;

  mrb_get_args(mrb, "o", &xUpdate);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_COMMA_sqlite3_int64_PTR_RPAREN(xUpdate);

  int (*native_xUpdate)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_COMMA_sqlite3_int64_PTR_RPAREN(xUpdate);

  native_self->xUpdate = native_xUpdate;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xBegin_reader */
/* sha: 3d3b0cb2546675d27a5abe1b9446f282d60c20dcefac40bdfe8510c354756c34 */
#if BIND_Sqlite3Module_xBegin_FIELD_READER
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
/* sha: 09b95383456d8e8d86585a9c6c6f5e4bbd872f5012d6e930e951293537ac3dd8 */
#if BIND_Sqlite3Module_xBegin_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_xBegin(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xBegin;

  mrb_get_args(mrb, "o", &xBegin);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xBegin);

  int (*native_xBegin)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xBegin);

  native_self->xBegin = native_xBegin;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xSync_reader */
/* sha: e4899fba6c420823135056e7b582e574999b711595b99c6f75f8a32ddf91a073 */
#if BIND_Sqlite3Module_xSync_FIELD_READER
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
/* sha: 5f9023917001d1edb7904bd0ffc75e78bbd2b824ee8e4134bc36dc8cb92c103e */
#if BIND_Sqlite3Module_xSync_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_xSync(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xSync;

  mrb_get_args(mrb, "o", &xSync);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xSync);

  int (*native_xSync)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xSync);

  native_self->xSync = native_xSync;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xCommit_reader */
/* sha: 3df8747249f761fcd2e2d618cd71952215636d89ef6e4664a27e491234b88e64 */
#if BIND_Sqlite3Module_xCommit_FIELD_READER
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
/* sha: 22d20723e7f6276a18e0d8ff08895c8203023b9b5ea5c946a8d8271aecf4babc */
#if BIND_Sqlite3Module_xCommit_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_xCommit(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xCommit;

  mrb_get_args(mrb, "o", &xCommit);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xCommit);

  int (*native_xCommit)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xCommit);

  native_self->xCommit = native_xCommit;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xRollback_reader */
/* sha: 2f908b2a6b3e1d23fb590141e287bafc76ec69ade1739002811be37b73217ced */
#if BIND_Sqlite3Module_xRollback_FIELD_READER
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
/* sha: b4c54b7e4108b372e287f907ad20abc593738db48b5c0433a34e87976dc523b4 */
#if BIND_Sqlite3Module_xRollback_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_xRollback(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xRollback;

  mrb_get_args(mrb, "o", &xRollback);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xRollback);

  int (*native_xRollback)(sqlite3_vtab *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(xRollback);

  native_self->xRollback = native_xRollback;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xFindFunction_reader */
/* sha: 6856b8bd7ffc1943c2ce4de8104dcf28a9bc6be94e50f1a313024a949960a9b3 */
#if BIND_Sqlite3Module_xFindFunction_FIELD_READER
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
/* sha: 50982eb00e07cc0eb6e8b29bb9550b8a72f1fd8f411cdbf5f34afdcf4822a9a2 */
#if BIND_Sqlite3Module_xFindFunction_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_xFindFunction(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xFindFunction;

  mrb_get_args(mrb, "o", &xFindFunction);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMAchar_PTR_COMMA_void_LPAREN_PTR_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN_COMMA_void_PTR_PTR_RPAREN(xFindFunction);

  int (*native_xFindFunction)(sqlite3_vtab *, int, const char *, void (**)(sqlite3_context *, int, sqlite3_value **), void **) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMAchar_PTR_COMMA_void_LPAREN_PTR_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN_COMMA_void_PTR_PTR_RPAREN(xFindFunction);

  native_self->xFindFunction = native_xFindFunction;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xRename_reader */
/* sha: f28ce38755356077ddfe7739d71914c5705537e5a6b4f7356880610b4fb5c05e */
#if BIND_Sqlite3Module_xRename_FIELD_READER
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
/* sha: f083741e0c1209149005a74e354ba660a2904ce2bd7ce177e5bde9529f668d69 */
#if BIND_Sqlite3Module_xRename_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_xRename(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xRename;

  mrb_get_args(mrb, "o", &xRename);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMAchar_PTR_RPAREN(xRename);

  int (*native_xRename)(sqlite3_vtab *, const char *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMAchar_PTR_RPAREN(xRename);

  native_self->xRename = native_xRename;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xSavepoint_reader */
/* sha: 7f7e74ca70d04eb21b358d0e5bd7e4694662b3f1c63d97ec1b9c3e8ce684d9c4 */
#if BIND_Sqlite3Module_xSavepoint_FIELD_READER
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
/* sha: d408920d36c3c39f784af1bdfb3b71e10d45f9f8dc4f41ce7138b4bd37a24cb7 */
#if BIND_Sqlite3Module_xSavepoint_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_xSavepoint(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xSavepoint;

  mrb_get_args(mrb, "o", &xSavepoint);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(xSavepoint);

  int (*native_xSavepoint)(sqlite3_vtab *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(xSavepoint);

  native_self->xSavepoint = native_xSavepoint;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xRelease_reader */
/* sha: 7282b87790c3adb238e6a930bc1669afa10901ca676c46aa5e1908e309ed48b6 */
#if BIND_Sqlite3Module_xRelease_FIELD_READER
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
/* sha: 9c436bddef7ce0bba421c4f9d4c7a9d561121e4b7c3c02155e6fa472f6445fbf */
#if BIND_Sqlite3Module_xRelease_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_xRelease(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xRelease;

  mrb_get_args(mrb, "o", &xRelease);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(xRelease);

  int (*native_xRelease)(sqlite3_vtab *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(xRelease);

  native_self->xRelease = native_xRelease;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xRollbackTo_reader */
/* sha: eb0f7a8e81235232b7b97486ad9d8f1d8242eedc956d608c60b9b0aa62da8c5b */
#if BIND_Sqlite3Module_xRollbackTo_FIELD_READER
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
/* sha: 4a5336e57596d14ccfc286c38dbeecd0a800087f88592a55ff9701dc85865541 */
#if BIND_Sqlite3Module_xRollbackTo_FIELD_WRITER
mrb_value
mrb_SQLite_Sqlite3Module_set_xRollbackTo(mrb_state* mrb, mrb_value self) {
  sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
  mrb_value xRollbackTo;

  mrb_get_args(mrb, "o", &xRollbackTo);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(xRollbackTo);

  int (*native_xRollbackTo)(sqlite3_vtab *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(xRollbackTo);

  native_self->xRollbackTo = native_xRollbackTo;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Module_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

/* MRUBY_BINDING: pre_class_definition */
/* sha: user_defined */

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


/* MRUBY_BINDING: Sqlite3Module::post_class_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
