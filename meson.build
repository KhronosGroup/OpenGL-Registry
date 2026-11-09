project('OpenGL-Registry', 'c', meson_version: '>=0.62.0')

inc_dir = 'api'

cc = meson.get_compiler('c')
glext_version = cc.get_define(
  'GL_GLEXT_VERSION',
  prefix: '#include <GL/glext.h>',
  include_directories: inc_dir,
)

install_subdir(
  inc_dir,
  install_dir: get_option('includedir'),
  strip_directory: true,
)

pkgconfig = import('pkgconfig')
pkgconfig.generate(
  name: 'opengl-headers',
  description: 'OpenGL headers',
  version: glext_version,
  variables: {
    'includedir': '${prefix}' / get_option('includedir'),
  },
  dataonly: true,
)

meson.override_dependency('opengl-headers', declare_dependency(
  include_directories: inc_dir,
))
