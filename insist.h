#ifndef debug_insist_h
#define debug_insist_h

#include "assert.h"

#ifndef NDEBUG

#define INSIST( stmnt, cmp, msg )               \
   ASSERT( (stmnt) cmp, msg )

#else

#define INSIST( stmnt, cmp, msg ) stmnt;

#endif

#endif
