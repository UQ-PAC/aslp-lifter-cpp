project('aslp-lifter-demo', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++20'])

incdir = 'include'

llvm_dep = dependency('llvm')
aslp_lifter_llvm_dep = dependency('aslp-lifter-llvm', fallback: ['aslp-lifter-llvm', 'dep'])
aslp_lifter_dep = dependency('aslp-lifter', fallback: ['aslp-lifter', 'gen_dep'])

srcfiles = files('src/main.cpp')

executable(
  'aslp-lifter-demo',
  sources: srcfiles,
  dependencies: [ llvm_dep, aslp_lifter_llvm_dep, aslp_lifter_dep ],
  install: true)

