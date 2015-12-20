desc "Generate bindings"
task :bindings do
  sh "clang2json sqlite3/sqlite3.h | egrep -v 'mutex|scanstatus' | ruby ../mruby-bindings/mruby_bindings.rb -skip mrbgem.rake -m SQLite -g mruby-sqlite -l config/macro_types.rb -l config/fn_types.rb -f"
end

namespace :pull do
  desc 'Pull include files from the generated bindings into the mrbgem'
  task :include do
    mkdir 'include' unless Dir.exists?('include')
    sh "cp -r bindings/include/* ./include"
  end
  
  desc 'Pull src files from the generated bindings into the mrbgem'
  task :src do
    mkdir 'src' unless Dir.exists?('src')
    sh "cp -r bindings/src/* ./src"
  end
  
  desc 'Pull mrbgem.rake file from the generated bindings into the mrbgem'
  task :mrbgem do
    sh "cp bindings/mrbgem.rake ./mrbgem.rake" if File.exists?('bindings/mrbgem.rake')
  end
  
  desc 'Pull all files from the generated bindings into the mrbgem'
  task :all => [:include, :src, :mrbgem]
end

task :fncount do
  sh "cat bindings/include/mruby_*_functions.h | egrep 'TRUE|FALSE' | wc -l"
end

task :bound do
  sh "cat bindings/include/mruby_*_functions.h | egrep 'TRUE'"
end

task :boundcount do
  sh "cat bindings/include/mruby_*_functions.h | egrep 'TRUE' | wc -l"
end

task :unbound do
  sh "cat bindings/include/mruby_*_functions.h | egrep 'FALSE'"
end

task :unboundcount do
  sh "cat bindings/include/mruby_*_functions.h | egrep 'FALSE' | wc -l"
end

task :macros do
  sh "cat bindings/src/mruby_*_macro_constants.c | ruby -ne 'match = $_[/mrb_define.*\"(.*)\"/, 1]; puts match if match'"
end
