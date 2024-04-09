project('aslp-lifter-llvm', 'cpp',
  version : '0.1',
  default_options : [ 'warning_level=3', 'cpp_std=c++20' ])

version = meson.project_version()
llvm_dep = dependency('llvm')
empty_dep = dependency('', required: false)

lifter_name = 'aslp-lifter'
lifter_proj = dependency(lifter_name, version: version, fallback: [lifter_name])
instantiate_dep = lifter_proj.get_variable(internal: 'instantiate_dep', default_value: '')

if instantiate_dep == ''
  instantiate_srcdir = lifter_proj.get_variable(pkgconfig: 'instantiate_dir')
  instantiate_flags = lifter_proj.get_variable(pkgconfig: 'instantiate_cxxflags')

  find = run_command('find', instantiate_srcdir, '-name', '*.cpp', check : true)
  srcfiles = files(find.stdout().strip().split('\n'))
  instantiate_dep = declare_dependency(
    sources: srcfiles,
    compile_args: instantiate_flags,
    dependencies: lifter_proj,
  )
endif

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

dep = declare_dependency(link_with: lib, include_directories: incdir)

pkg = import('pkgconfig')
pkg.generate(lib, requires: lifter_name + '=' + version, variables: {'llvm_version': llvm_dep.version()})
