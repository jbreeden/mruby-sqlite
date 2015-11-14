MRuby::Gem::Specification.new('mruby-sqlite') do |spec|
  spec.author = "Jared Breeden"
  spec.version = "1.0.0"
  spec.license = "MIT"
  [spec.cc.flags, spec.cxx.flags].each do |flags|
    flags << "-DSQLITE_ENABLE_COLUMN_METADATA"
    flags << "-DSQLITE_THREADSAFE"
  end
end
