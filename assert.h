#ifndef debug_assert_hh
#define debug_assert_hh

#include <Arduino.h>

#ifndef NDEBUG

#define ASSERT( expr, msg )                     \
   if( !(expr) )                                \
   {                                            \
      Serial.print( "Assertion failed: " );     \
      Serial.println( #expr );                  \
      Serial.println( msg );                    \
      while( 1 );                               \
   }

#else

#define ASSERT( expr, msg )

#endif

#endif
