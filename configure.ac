dnl Copyright (C) 2019  Trevor Woerner <Trevor Woerner <twoerner@gmail.com>>

AC_PREREQ(2.57)
AC_INIT([Autotool Devtool Example], 1.0.1, twoerner@gmail.com, autotool-devtool-example)
AC_CONFIG_SRCDIR(src/autotool-devtool-example.c)
AC_CONFIG_AUX_DIR(cfg)
AM_INIT_AUTOMAKE([foreign no-dist-gzip dist-bzip2 1.9])

AM_CONFIG_HEADER(cfg/config.h)
AC_CONFIG_MACRO_DIRS([cfg])

SUBDIRS="cfg lib src"

AC_PROG_CC
AC_PROG_CPP

AC_PROG_MAKE_SET

AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_LIBTOOL

dnl **********************************
dnl checks for header files
dnl **********************************
AC_HEADER_STDC
AC_CHECK_HEADERS(stdio.h)
AC_CHECK_HEADERS(stdlib.h)

dnl **********************************
dnl other stuff
dnl **********************************
AC_SUBST(SUBDIRS)

dnl **********************************
dnl output
dnl **********************************
AC_CONFIG_FILES([
	Makefile
	cfg/Makefile
	lib/Makefile
	src/Makefile])
AC_OUTPUT
