project('aslp-lifter-demo', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++20'])

incdir = 'include'

aslp_lifter_llvm_dep = subproject('aslp-lifter-llvm').get_variable('dep')

srcfiles = files('src/main.cpp')

executable(
  'aslp-lifter-demo',
  sources: srcfiles,
  dependencies: aslp_lifter_llvm_dep,
  install: true)

