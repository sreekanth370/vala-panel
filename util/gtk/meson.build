util_gtk_enum_headers = files(
    'generic-config-dialog.h'
)
util_gtk_headers = util_gtk_enum_headers + files (
    'css.h',
    'util-gtk.h',
	'misc-gtk.h',
    'menu-maker.h',
    'launcher-gtk.h'
)
util_gtk_sources = files (
    'generic-config-dialog.c',
    'menu-maker.c',
	'misc-gtk.c',
    'css.c',
    'launcher-gtk.c'
)
enum = 'vala-panel-util-enums'
util_gtk_enums_gen = gnome.mkenums(
  enum,
  sources: util_gtk_enum_headers,
  c_template: enum + '.c.template',
  h_template: enum + '.h.template',
  install_header: true,
  install_dir: join_paths(includedir, meson.project_name()),
)
util_gtk_inc = include_directories('.')

util_gtk = static_library(
    'util-gtk', util_gtk_sources, util_gtk_headers, util_gtk_enums_gen,
    dependencies : core_deps,
    link_with: util,
    pic: true,
    include_directories: [core_inc,util_inc, util_gtk_inc],
)


install_headers(util_gtk_headers, subdir : meson.project_name())