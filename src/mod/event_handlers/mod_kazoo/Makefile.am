include $(top_srcdir)/build/modmake.rulesam
MODNAME=mod_kazoo
mod_LTLIBRARIES = mod_kazoo.la
mod_kazoo_la_SOURCES  = mod_kazoo.c kazoo_utils.c kazoo_node.c kazoo_event_stream.c kazoo_fetch_agent.c
mod_kazoo_la_CFLAGS   = $(AM_CFLAGS) @ERLANG_CFLAGS@ -D_REENTRANT
mod_kazoo_la_LIBADD   = $(switch_builddir)/libfreeswitch.la
mod_kazoo_la_LDFLAGS  = -avoid-version -module -no-undefined -shared @ERLANG_LDFLAGS@
