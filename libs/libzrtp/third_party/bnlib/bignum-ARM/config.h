/* bnconfig.h.  Generated automatically by configure.  */
/*
 * bnconfig.h -- Configuration file for BigNum library.
 *
 * This file is automatically filled in by configure.
 * Everything must start out turned *off*, because configure
 * (or, more properly, config.status) only knows how to turn them
 * *on*.
 */
#ifndef CONFIG_H
#define CONFIG_H

/* Define to empty if the compiler does not support 'const' variables. */
/* #undef const */

/* Define to `unsigned' if <sys/types.h> doesn't define it. */
/* #undef size_t */

/* Checks for the presence and absence of various header files */
#define HAVE_ASSERT_H 1
#define NO_ASSERT_H !HAVE_ASSERT_H
#define HAVE_LIMITS_H 1
#define NO_LIMITS_H !HAVE_LIMITS_H
#define HAVE_STDLIB_H 1
#define NO_STDLIB_H !HAVE_STDLIB_H
#define HAVE_STRING_H 1
#define NO_STRING_H !HAVE_STRING_H

#define HAVE_STRINGS_H 0

/* We go to some trouble to find accurate times... */

/* Define if you have Posix.4 glock_gettime() */
#define HAVE_CLOCK_GETTIME 0
/* Define if you have Solaris-style gethrvtime() */
#define HAVE_GETHRVTIME 0
/* Define if you have getrusage() */
#define HAVE_GETRUSAGE 1
/* Define if you have clock() */
#define HAVE_CLOCK 1
/* Define if you have time() */
#define HAVE_TIME 1

/*
 * Define as 0 if #including <sys/time.h> automatically
 * #includes <time.h>, and doing so explicitly causes an
 * error.
 */
#define TIME_WITH_SYS_TIME 1

/* Defines for various kinds of library brokenness */

/* If not available, bcopy() is substituted */
#define HAVE_MEMMOVE 1
#define NO_MEMMOVE !HAVE_MEMMOVE
#define HAVE_MEMCPY 1
#define NO_MEMCPY !HAVE_MEMCPY

#endif /* CONFIG_H */
