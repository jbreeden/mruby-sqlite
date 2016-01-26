#include "mruby_SQLite.h"

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

void
mruby_SQLite_define_enum_constants(mrb_state* mrb) {
  struct RClass * SQLite_module = SQLite_module(mrb);
  mrb_value SQLite_mod = mrb_obj_value(SQLite_module(mrb));

}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
