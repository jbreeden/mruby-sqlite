/*
 * struct sqlite3_module
 * Defined in file sqlite3.h @ line 5468
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Module_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Sqlite3Module::initialize */
/* sha: 53c7ec6a6858f140342f321bb3e9fa6952906ac7fd3545e51b0956043f79f227 */
#if BIND_Sqlite3Module_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Module_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module* native_object = (struct sqlite3_module*)calloc(1, sizeof(struct sqlite3_module));
  mruby_giftwrap_sqlite3_module_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::initialize */
/* sha: d5d915ad37ff8ea11d96d1636a13e524750a206384289f095208e8af575629f0 */
mrb_value
mrb_SQLite_Sqlite3Module_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3Module.disown only accepts objects of type SQLite::Sqlite3Module");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::belongs_to_ruby */
/* sha: 943ad50dac86c9c13fe71fcad0c5590d4cf83af81b276c9886af304340c3c698 */
mrb_value
mrb_SQLite_Sqlite3Module_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3Module.belongs_to_ruby only accepts objects of type SQLite::Sqlite3Module");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Sqlite3Module::iVersion_reader */
/* sha: b70aeb351d4ed875d2f3ef8953b66c86e53feed406b7eec2abb63e082ec9191e */
#if BIND_Sqlite3Module_iVersion_FIELD_READER
/* get_iVersion
 *
 * Return Type: int
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_iVersion(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int native_iVersion = native_self->iVersion;

  mrb_value iVersion = mrb_fixnum_value(native_iVersion);

  return iVersion;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::iVersion_writer */
/* sha: ecdc267a4d490ea4547a0cf19b54087af37f4a51347e9937184eadd968a6767c */
#if BIND_Sqlite3Module_iVersion_FIELD_WRITER
/* set_iVersion
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_iVersion(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* sha: e6efd684ff6f76653074fc503c4357f4b4295a7afb3524d140b46535d9705c61 */
#if BIND_Sqlite3Module_xCreate_FIELD_READER
/* get_xCreate
 *
 * Return Type: int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xCreate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **) native_xCreate = native_self->xCreate;

  mrb_value xCreate = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(mrb, native_xCreate);

  return xCreate;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xCreate_writer */
/* sha: a8b85607764f3a1c710e3f533311c35abced8c2d256145a2f633822f69c86416 */
#if BIND_Sqlite3Module_xCreate_FIELD_WRITER
/* set_xCreate
 *
 * Parameters:
 * - value: int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xCreate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* sha: 833198699fd5f7c6c9b0e41a4dab485dec4294ee02f50bb82b01fa7738293f66 */
#if BIND_Sqlite3Module_xConnect_FIELD_READER
/* get_xConnect
 *
 * Return Type: int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xConnect(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **) native_xConnect = native_self->xConnect;

  mrb_value xConnect = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_PTR_COMMA_void_PTR_COMMA_intCOMMAchar_PTR_const_PTR_COMMA_sqlite3_vtab_PTR_PTR_COMMA_char_PTR_PTR_RPAREN(mrb, native_xConnect);

  return xConnect;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xConnect_writer */
/* sha: bd8573fd617948d022d9d49797de3d17e251ca5949c6ca98d53813fbc1649d7e */
#if BIND_Sqlite3Module_xConnect_FIELD_WRITER
/* set_xConnect
 *
 * Parameters:
 * - value: int (*)(sqlite3 *, void *, int, const char *const *, sqlite3_vtab **, char **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xConnect(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* sha: 00f43ad884e111feeac7293ed3c120d07200d38f15dc7a4082d6f79b00c7ca0d */
#if BIND_Sqlite3Module_xBestIndex_FIELD_READER
/* get_xBestIndex
 *
 * Return Type: int (*)(sqlite3_vtab *, sqlite3_index_info *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xBestIndex(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, sqlite3_index_info *) native_xBestIndex = native_self->xBestIndex;

  mrb_value xBestIndex = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_index_info_PTR_RPAREN(mrb, native_xBestIndex);

  return xBestIndex;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xBestIndex_writer */
/* sha: 6cc0f9204737e6cc52f703bba160e14be4e70b39228324bcb8f28fe90f08835f */
#if BIND_Sqlite3Module_xBestIndex_FIELD_WRITER
/* set_xBestIndex
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, sqlite3_index_info *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xBestIndex(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* sha: 592adc082c48837ec73d535f30f8e0a33bcf730f42f8007523db8917d8be91cf */
#if BIND_Sqlite3Module_xDisconnect_FIELD_READER
/* get_xDisconnect
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xDisconnect(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_xDisconnect = native_self->xDisconnect;

  mrb_value xDisconnect = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_xDisconnect);

  return xDisconnect;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xDisconnect_writer */
/* sha: 38c891f36bec54e62223fcac8835fe5b65d848652b9d0ba1905b642f1d56368e */
#if BIND_Sqlite3Module_xDisconnect_FIELD_WRITER
/* set_xDisconnect
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xDisconnect(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* sha: 279539ec27b6192e0cf069e01199c8809a773165bd373ee39ca28b4547c73a76 */
#if BIND_Sqlite3Module_xDestroy_FIELD_READER
/* get_xDestroy
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xDestroy(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_xDestroy = native_self->xDestroy;

  mrb_value xDestroy = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_xDestroy);

  return xDestroy;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xDestroy_writer */
/* sha: 9546afff8132d1fc31647c15a464bcdf74e0e4751f1ada49297c986a78860354 */
#if BIND_Sqlite3Module_xDestroy_FIELD_WRITER
/* set_xDestroy
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xDestroy(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* sha: 09ada152faf917f57c4fdc273d5005a2abaa71a4f9636f2b161790e1b4cfcd46 */
#if BIND_Sqlite3Module_xOpen_FIELD_READER
/* get_xOpen
 *
 * Return Type: int (*)(sqlite3_vtab *, sqlite3_vtab_cursor **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xOpen(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, sqlite3_vtab_cursor **) native_xOpen = native_self->xOpen;

  mrb_value xOpen = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_sqlite3_vtab_cursor_PTR_PTR_RPAREN(mrb, native_xOpen);

  return xOpen;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xOpen_writer */
/* sha: b0b69fc406120d516a1a152a26a0d1350f035ea4347a6826570fa53fd297b630 */
#if BIND_Sqlite3Module_xOpen_FIELD_WRITER
/* set_xOpen
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, sqlite3_vtab_cursor **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xOpen(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* sha: 3e7d1ea15b056b4a5b72ef51f8933d93269bff508d10b33cb117ccf9c256439d */
#if BIND_Sqlite3Module_xClose_FIELD_READER
/* get_xClose
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xClose(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *) native_xClose = native_self->xClose;

  mrb_value xClose = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(mrb, native_xClose);

  return xClose;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xClose_writer */
/* sha: e488951aa961dd4067b6956e2cda3421decd9da99dd4ad3dca277613d8251ec8 */
#if BIND_Sqlite3Module_xClose_FIELD_WRITER
/* set_xClose
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xClose(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* sha: 42c0dc4c79d684ebcc613d785847eceae9c8cacd154d310c74ad0a9a5835c825 */
#if BIND_Sqlite3Module_xFilter_FIELD_READER
/* get_xFilter
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *, int, const char *, int, sqlite3_value **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xFilter(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *, int, const char *, int, sqlite3_value **) native_xFilter = native_self->xFilter;

  mrb_value xFilter = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_intCOMMAchar_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN(mrb, native_xFilter);

  return xFilter;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xFilter_writer */
/* sha: cb6e2723593eb11131f9f99923f32a01bb3efd46f95c273d933c734bbe7e7140 */
#if BIND_Sqlite3Module_xFilter_FIELD_WRITER
/* set_xFilter
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *, int, const char *, int, sqlite3_value **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xFilter(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* sha: 8c19e59443ce343aa2d02a652909cc0dc3e82e954a80c66864fa35776fce9d82 */
#if BIND_Sqlite3Module_xNext_FIELD_READER
/* get_xNext
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xNext(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *) native_xNext = native_self->xNext;

  mrb_value xNext = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(mrb, native_xNext);

  return xNext;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xNext_writer */
/* sha: 3ff1bba2537aa8aac808401c617c76a50b51a38e9fcfa15fd49b6f20231dd8c5 */
#if BIND_Sqlite3Module_xNext_FIELD_WRITER
/* set_xNext
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xNext(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* sha: 0ca3869597b176fd3774f8a3a58a0a8be23514c0f5b8e2260f0d581d80ab3a66 */
#if BIND_Sqlite3Module_xEof_FIELD_READER
/* get_xEof
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xEof(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *) native_xEof = native_self->xEof;

  mrb_value xEof = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_RPAREN(mrb, native_xEof);

  return xEof;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xEof_writer */
/* sha: 5b01ecd0fc9044a3381aae41d8067b10a48be1491c13cbc88d2065c5ccf293f0 */
#if BIND_Sqlite3Module_xEof_FIELD_WRITER
/* set_xEof
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xEof(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* sha: de69c7e021a577a9a2cc476657ac89de4205400b5bc27e87a5115b36c2dde617 */
#if BIND_Sqlite3Module_xColumn_FIELD_READER
/* get_xColumn
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *, sqlite3_context *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xColumn(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *, sqlite3_context *, int) native_xColumn = native_self->xColumn;

  mrb_value xColumn = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_context_PTR_COMMA_int_RPAREN(mrb, native_xColumn);

  return xColumn;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xColumn_writer */
/* sha: 1babda6d55c0e709b0e0381ab325458d8fa2f0ddaf96ec915bf5c2cb51e5c845 */
#if BIND_Sqlite3Module_xColumn_FIELD_WRITER
/* set_xColumn
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *, sqlite3_context *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xColumn(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* sha: 5921a30ccd140f07f1667f49aab6a876dcc3ed9443d3ade365d7fdf55e61f7a2 */
#if BIND_Sqlite3Module_xRowid_FIELD_READER
/* get_xRowid
 *
 * Return Type: int (*)(sqlite3_vtab_cursor *, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xRowid(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab_cursor *, sqlite3_int64 *) native_xRowid = native_self->xRowid;

  mrb_value xRowid = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_cursor_PTR_COMMA_sqlite3_int64_PTR_RPAREN(mrb, native_xRowid);

  return xRowid;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xRowid_writer */
/* sha: c993b64b388ec1466ff39d8bf453a50a13f6bc7b263d0b3fc60929e46ab9b410 */
#if BIND_Sqlite3Module_xRowid_FIELD_WRITER
/* set_xRowid
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab_cursor *, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xRowid(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* sha: 13b93bc19b22ac5c18ae4e21368226e8e8414e5bc114b9b909b052056a29003c */
#if BIND_Sqlite3Module_xUpdate_FIELD_READER
/* get_xUpdate
 *
 * Return Type: int (*)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xUpdate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *) native_xUpdate = native_self->xUpdate;

  mrb_value xUpdate = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_COMMA_sqlite3_int64_PTR_RPAREN(mrb, native_xUpdate);

  return xUpdate;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xUpdate_writer */
/* sha: dbb5ba48c9ce7de1cd5a604216e3d0aaea0d7cc8a4020da5ae8febb22a9f2807 */
#if BIND_Sqlite3Module_xUpdate_FIELD_WRITER
/* set_xUpdate
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xUpdate(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* sha: d52548a7261a212e4dfda27ce929b0d78efaa7cbfe5509c7759bf71e957dad3c */
#if BIND_Sqlite3Module_xBegin_FIELD_READER
/* get_xBegin
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xBegin(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_xBegin = native_self->xBegin;

  mrb_value xBegin = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_xBegin);

  return xBegin;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xBegin_writer */
/* sha: 528dbe78a6086ae0820b30c38d3a19de522201ae706cc5c732ca96fc724ffb3f */
#if BIND_Sqlite3Module_xBegin_FIELD_WRITER
/* set_xBegin
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xBegin(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* sha: a7c3cf478dca1c63661f4f36a475f1f2ffbf497b2dbed9b5276605380c1be513 */
#if BIND_Sqlite3Module_xSync_FIELD_READER
/* get_xSync
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xSync(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_xSync = native_self->xSync;

  mrb_value xSync = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_xSync);

  return xSync;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xSync_writer */
/* sha: 5b2cc5da1c19c946ef474605e0a3e470557b963864907604974ecad05690724d */
#if BIND_Sqlite3Module_xSync_FIELD_WRITER
/* set_xSync
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xSync(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* sha: 4bd811eaf00206f609502707365fa3c9f9c3de5192cb1c73a77d2602df0e2c02 */
#if BIND_Sqlite3Module_xCommit_FIELD_READER
/* get_xCommit
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xCommit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_xCommit = native_self->xCommit;

  mrb_value xCommit = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_xCommit);

  return xCommit;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xCommit_writer */
/* sha: f54a37814c7335c6b5fedbde3b4dbbb2e7a74198080ba7e1cf93d42542cf7756 */
#if BIND_Sqlite3Module_xCommit_FIELD_WRITER
/* set_xCommit
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xCommit(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* sha: 95dde2f9ecc5d3044fa12e5c17feb1e3e4d38c05e6169b1433173b7a23278a08 */
#if BIND_Sqlite3Module_xRollback_FIELD_READER
/* get_xRollback
 *
 * Return Type: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xRollback(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *) native_xRollback = native_self->xRollback;

  mrb_value xRollback = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_RPAREN(mrb, native_xRollback);

  return xRollback;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xRollback_writer */
/* sha: b1c9d412881906ff2e4dac6086d949c362ce563d1b39abdd24832629088be059 */
#if BIND_Sqlite3Module_xRollback_FIELD_WRITER
/* set_xRollback
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xRollback(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* sha: 169ed9ecfc31757c9cc85c57543bb3ff1e99fe86e2dd56ed7a6d2c23925d6ca8 */
#if BIND_Sqlite3Module_xFindFunction_FIELD_READER
/* get_xFindFunction
 *
 * Return Type: int (*)(sqlite3_vtab *, int, const char *, void (**)(sqlite3_context *, int, sqlite3_value **), void **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xFindFunction(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, int, const char *, void (**)(sqlite3_context *, int, sqlite3_value **), void **) native_xFindFunction = native_self->xFindFunction;

  mrb_value xFindFunction = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_intCOMMAchar_PTR_COMMA_void_LPAREN_PTR_PTR_RPAREN_LPAREN_sqlite3_context_PTR_COMMA_intCOMMA_sqlite3_value_PTR_PTR_RPAREN_COMMA_void_PTR_PTR_RPAREN(mrb, native_xFindFunction);

  return xFindFunction;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xFindFunction_writer */
/* sha: 84cf3c50ec89a581fb8ad8d68510650e830f6e5dce8a9fccfb7e827b239d06bc */
#if BIND_Sqlite3Module_xFindFunction_FIELD_WRITER
/* set_xFindFunction
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, int, const char *, void (**)(sqlite3_context *, int, sqlite3_value **), void **)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xFindFunction(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* sha: af6a1124b57582cc6bb36cb60e0342f02781ce093619b1b9947eb84ee67044e0 */
#if BIND_Sqlite3Module_xRename_FIELD_READER
/* get_xRename
 *
 * Return Type: int (*)(sqlite3_vtab *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xRename(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, const char *) native_xRename = native_self->xRename;

  mrb_value xRename = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMAchar_PTR_RPAREN(mrb, native_xRename);

  return xRename;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xRename_writer */
/* sha: 24353d7e05d80f8dee022b72cc4d4b9b4641701b5cafcf474ef76b75155f3104 */
#if BIND_Sqlite3Module_xRename_FIELD_WRITER
/* set_xRename
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, const char *)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xRename(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* sha: 8a6663ba800b68bab1647cf54d45e6e0783c4a719558f8fd41ce8350e32ec4d8 */
#if BIND_Sqlite3Module_xSavepoint_FIELD_READER
/* get_xSavepoint
 *
 * Return Type: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xSavepoint(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, int) native_xSavepoint = native_self->xSavepoint;

  mrb_value xSavepoint = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(mrb, native_xSavepoint);

  return xSavepoint;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xSavepoint_writer */
/* sha: dcc4688bc04b590fb3419cb01344a50cfae7eaef7beb86d5efcab10bf0c1733f */
#if BIND_Sqlite3Module_xSavepoint_FIELD_WRITER
/* set_xSavepoint
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xSavepoint(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* sha: fd2a4b676a147596c2e0e3ce7c27509bea638cbaeb502254c350e390fd23bdf2 */
#if BIND_Sqlite3Module_xRelease_FIELD_READER
/* get_xRelease
 *
 * Return Type: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xRelease(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, int) native_xRelease = native_self->xRelease;

  mrb_value xRelease = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(mrb, native_xRelease);

  return xRelease;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xRelease_writer */
/* sha: 733e4ade63d2000a225631c83ae2a8c05d956b66bbefb23e65a0a926529da1f9 */
#if BIND_Sqlite3Module_xRelease_FIELD_WRITER
/* set_xRelease
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xRelease(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* sha: cfb72e36c3b47f9f9fcbe9233817103d5e876f83beeb02652cedd1dbb2ea0f6a */
#if BIND_Sqlite3Module_xRollbackTo_FIELD_READER
/* get_xRollbackTo
 *
 * Return Type: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_get_xRollbackTo(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);

  int (*)(sqlite3_vtab *, int) native_xRollbackTo = native_self->xRollbackTo;

  mrb_value xRollbackTo = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_sqlite3_vtab_PTR_COMMA_int_RPAREN(mrb, native_xRollbackTo);

  return xRollbackTo;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::xRollbackTo_writer */
/* sha: b2e47a367161d41a3e58d57e2ada4edc55144578da46fc9cc65a03ac0718b5ab */
#if BIND_Sqlite3Module_xRollbackTo_FIELD_WRITER
/* set_xRollbackTo
 *
 * Parameters:
 * - value: int (*)(sqlite3_vtab *, int)
 */
mrb_value
mrb_SQLite_Sqlite3Module_set_xRollbackTo(mrb_state* mrb, mrb_value self) {
  struct sqlite3_module * native_self = mruby_unbox_sqlite3_module(self);
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
/* MRUBY_BINDING: Sqlite3Module::class_definition */
/* sha: dbb9ed353346f7e3d35daee2d9031ee660de4a7065e08f9e523f8e8cdac434e3 */
  struct RClass* Sqlite3Module_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Module", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Module_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Module::class_method_definitions */
/* sha: aa7f273a8850ec7c4c1f2119355f8168ce9df0dee72223c563c038ae2bc3430b */
#if BIND_Sqlite3Module_INITIALIZE
  mrb_define_method(mrb, Sqlite3Module_class, "initialize", mrb_SQLite_Sqlite3Module_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3Module_class, "disown", mrb_SQLite_Sqlite3Module_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3Module_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3Module_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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

/* MRUBY_BINDING: Sqlite3Module::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
