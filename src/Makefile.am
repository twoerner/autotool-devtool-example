## Copyright (C) 2019  Trevor Woerner <Trevor Woerner <twoerner@gmail.com>>

########################
## src/Makefile.am
########################
SUBDIRS =
AM_CFLAGS = -Wall -Werror -Wextra -Wconversion -Wreturn-type -Wstrict-prototypes

bin_PROGRAMS = autotool-devtool-example
autotool_devtool_example_SOURCES = autotool-devtool-example.c
autotool_devtool_example_CFLAGS = -I$(top_srcdir)/lib
autotool_devtool_example_LDADD = $(top_builddir)/lib/libautotool-devtool-example.la
