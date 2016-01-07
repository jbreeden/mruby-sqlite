/*
 * struct sqlite3_context
 * Defined in file sqlite3.h @ line 3431
 */

#include "mruby_SQLite.h"

#if BIND_Sqlite3Context_TYPE

/* MRUBY_BINDING: custom_header */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Sqlite3Context::initialize */
/* sha: 377c382daad3c0b6a32b9a4326e13e7a241c4059ea3c1b58f2c51bca128f355f */
#if BIND_Sqlite3Context_INITIALIZE
mrb_value
mrb_SQLite_Sqlite3Context_initialize(mrb_state* mrb, mrb_value self) {
  struct sqlite3_context* native_object = (struct sqlite3_context*)calloc(1, sizeof(struct sqlite3_context));
  mruby_giftwrap_sqlite3_context_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Context::initialize */
/* sha: 49b24d12383b71db99d8b67df4b0feccda834497314bf137e24cee03627d8847 */
mrb_value
mrb_SQLite_Sqlite3Context_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3Context.disown only accepts objects of type SQLite::Sqlite3Context");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Context::belongs_to_ruby */
/* sha: 05ef49045147235bf2d0e105de1b8259ff44affb672d8057dc68154c1ea0f933 */
mrb_value
mrb_SQLite_Sqlite3Context_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SQLite::Sqlite3Context.belongs_to_ruby only accepts objects of type SQLite::Sqlite3Context");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_SQLite_Sqlite3Context_init(mrb_state* mrb) {
/* MRUBY_BINDING: Sqlite3Context::class_definition */
/* sha: 928b5f23e2bf714e656d6a536c89099098e41c7f5dd167e3acee29e7eb920d7b */
  struct RClass* Sqlite3Context_class = mrb_define_class_under(mrb, SQLite_module(mrb), "Sqlite3Context", mrb->object_class);
  MRB_SET_INSTANCE_TT(Sqlite3Context_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Context::class_method_definitions */
/* sha: cbaefaa4349e9405cea2a492ca81093085e4fbe5f20a7a8bf39558fdfd6c2f14 */
#if BIND_Sqlite3Context_INITIALIZE
  mrb_define_method(mrb, Sqlite3Context_class, "initialize", mrb_SQLite_Sqlite3Context_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Sqlite3Context_class, "disown", mrb_SQLite_Sqlite3Context_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Sqlite3Context_class, "belongs_to_ruby?", mrb_SQLite_Sqlite3Context_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Context::attr_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Sqlite3Context::instance_method_definitions */
/* sha: e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855 */

/* MRUBY_BINDING_END */
}

#endif
