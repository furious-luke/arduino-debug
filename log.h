#ifndef debug_log_h
#define debug_log_h

#include <Arduino.h>

#define LOG_LEVEL 2

#ifndef LOG_LEVEL
#define LOG_LEVEL 2
#endif

#ifndef NLOG

#define LOG_INIT( baud )                        \
   do                                           \
   {                                            \
      Serial.begin( baud );                     \
   }                                            \
   while( 0 )

#define LOGLN( msg )                            \
   do                                           \
   {                                            \
      Serial.println( F( msg ) );               \
   }                                            \
   while( 0 )

#define LOG( msg )                              \
   do                                           \
   {                                            \
      Serial.print( F( msg ) );                 \
   }                                            \
   while( 0 )

#define LOGVLN( var )                           \
   do                                           \
   {                                            \
      Serial.println( var );                    \
   }                                            \
   while( 0 )

#define LOGV( var )                             \
   do                                           \
   {                                            \
      Serial.print( var );                      \
   }                                            \
   while( 0 )

#else

#define LOG_INIT( baud )
#define LOGLN( msg )
#define LOG( msg )
#define LOGVLN( var )
#define LOGV( var )

#endif

#endif
