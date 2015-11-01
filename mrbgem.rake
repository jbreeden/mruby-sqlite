MRuby::Gem::Specification.new('mruby-sqlite') do |spec|
  spec.author = "Jared Breeden"
  spec.version = "0.0.0"
  spec.license = "TODO - No license yet"
  spec.cc.flags << "-DSQLITE_ENABLE_COLUMN_METADATA"
  spec.cxx.flags << "-DSQLITE_ENABLE_COLUMN_METADATA"
end
