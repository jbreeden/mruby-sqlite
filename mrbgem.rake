MRuby::Gem::Specification.new('mruby-sqlite') do |spec|
  spec.author = "Jared Breeden"
  spec.version = "0.0.0"
  spec.license = "TODO - No license yet"
  [spec.cc.flags, spec.cxx.flags].each do |flags|
    flags << "-DSQLITE_ENABLE_COLUMN_METADATA"
    flags << "-DSQLITE_THREADSAFE"
  end
end
