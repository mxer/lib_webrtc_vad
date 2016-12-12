dnl Process this file with autoconf to produce a configure script.

AC_PREREQ(2.59)
AC_INIT(webrtc-vad-lib, 1.0)


AC_CANONICAL_SYSTEM
AM_INIT_AUTOMAKE([subdir-objects])

AC_PROG_CXX
AC_LANG([C++])
AC_PROG_LIBTOOL

CXXFLAGS+=" -std=c++11"

# Checks for typedefs, structures, and compiler characteristics.
AC_HEADER_STDBOOL
AC_C_INLINE
AC_TYPE_UINT32_T
AC_TYPE_UINT8_T

#AC_CHECK_LIB([gtest], [main], [],
#[ 
#	echo "gtest failure." 
#	exit -1
#])

AC_CHECK_LIB([pthread], [main], [],
[
        echo "pthread failure."
        exit -1
])

# Checks for library functions.
AC_CHECK_FUNCS([memset])

AC_PREFIX_DEFAULT( "/usr/")

AC_CONFIG_MACRO_DIR([m4])


AC_CONFIG_FILES(Makefile 
				src/Makefile
				test/Makefile)
AC_OUTPUT

