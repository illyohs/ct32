project('ct32', 'cpp', version : '0.1',default_options : ['warning_level=3', 'cpp_std=c++17'])

incdir = include_directories('capi')
srcs = [
  'src/main.cc'
  ]

exe = executable('ct32', srcs, install : true, include_directories: incdir)

