#ifndef __LIB_H
#define __LIB_H

/* default lib includes */
#ifdef HAVE_CONFIG_H
#  include "../../config.h"
#endif

/* default system includes - keep these at minimum.. */
#include <string.h> /* strcmp() etc. */
#include <stdarg.h> /* va_list is used everywhere */
#include <limits.h> /* INT_MAX, etc. */
#include <errno.h> /* error checking is good */
#include <sys/types.h> /* many other includes want this */

typedef struct _IOLoop *IOLoop;
typedef struct _IO *IO;
typedef struct _Timeout *Timeout;

typedef struct _IPADDR IPADDR;
typedef struct _IOBuffer IOBuffer;
typedef struct _TempString TempString;

#if defined (UOFF_T_INT)
typedef unsigned int uoff_t;
#elif defined (UOFF_T_LONG)
typedef unsigned long uoff_t;
#elif defined (UOFF_T_LONG_LONG)
typedef unsigned long long uoff_t;
#else
#  error uoff_t size not set
#endif

#include "compat.h"
#include "macros.h"
#include "failures.h"

#include "mempool.h"
#include "temp-mempool.h"
#include "imem.h"

#include "strfuncs.h"

unsigned int nearest_power(unsigned int num);

void lib_init(void);
void lib_deinit(void);

#endif
