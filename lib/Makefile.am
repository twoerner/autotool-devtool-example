## Copyright (C) 2019  Trevor Woerner <Trevor Woerner <twoerner@gmail.com>>

########################
## lib/Makefile.am
########################
SUBDIRS =

AM_CFLAGS = -Wall -Werror -Wextra
pkginclude_HEADERS = libautotool-devtool-example.h

########################
## shared lib
########################
lib_LTLIBRARIES = libautotool-devtool-example.la
libautotool_devtool_example_la_SOURCES = libautotool-devtool-example.c libautotool-devtool-example.h
libautotool_devtool_example_la_LDFLAGS =  -release @VERSION@
libautotool_devtool_example_la_LDFLAGS += -version-info 1:0:0
