project('aslp-lifter-llvm', 'cpp',
  version : '0.1',
  default_options : [ 'warning_level=3', 'cpp_std=c++20' ])

version = meson.project_version()
llvm_dep = dependency('llvm')

lifter_name = 'aslp-lifter'
lifter_proj = subproject(lifter_name, version: version)
lifter_dep = lifter_proj.get_variable('gen_dep')
instantiate_dep = lifter_proj.get_variable('instantiate_dep')

incdir = 'include'
install_subdir(incdir, install_dir : get_option('includedir'), strip_directory : true)

lib = library(
  meson.project_name(),
  [],
  include_directories : incdir,
  dependencies: [ llvm_dep, instantiate_dep ],
  cpp_args: [
    '-includeaslp/llvm_lifter_traits.hpp',
    '-DASLP_LIFTER_INSTANTIATE=llvm_lifter_traits'],
  cpp_pch: 'pch/cpp_pch.hpp',
  install : true)

dep = declare_dependency(link_with: lib, include_directories: incdir, dependencies: [ llvm_dep, lifter_dep ])

pkg = import('pkgconfig')
pkg.generate(lib, requires: lifter_name + '=' + version)
