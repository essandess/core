AM_CPPFLAGS = \
	-I$(top_srcdir)/src/lib \
	-I$(top_srcdir)/src/lib-lda \
	-I$(top_srcdir)/src/lib-mail \
	-I$(top_srcdir)/src/lib-smtp \
	-I$(top_srcdir)/src/lib-storage

NOPLUGIN_LDFLAGS =
lib20_push_notify_plugin_la_LDFLAGS = -module -avoid-version

module_LTLIBRARIES = \
	lib20_push_notify_plugin.la

if DOVECOT_PLUGIN_DEPS
notify_deps = ../notify/lib15_notify_plugin.la
endif

lib20_push_notify_plugin_la_SOURCES = \
	push-notify-plugin.c

headers = \
	push-notify-plugin.h

pkginc_libdir = $(pkgincludedir)
pkginc_lib_HEADERS = $(headers)
