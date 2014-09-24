# Arduino debug library

## Description

A dead-simple couple of debugging routines. Just needed a place
to put them.

## Installation

Drop the contents of the repository into a folder in your sketchbook
libraries called "debug".

## Usage

### Assertions

I love assertions. But, it's nice to have them be a little more
informative. I've added an assertion that also prints a message:

```c++
ASSERT( result > 0, "Result should be >0!" );
```

### Insist

While assertions are great, I found a few places where it was
a little more helpful to have the expression remain around
even in optimised mode, but without the check:

```c++
INSIST( important_func(), > 0, "Important func should be >0!" );
```

When in optimised mode, the above compiles to:

```c++
important_func();
```

### Logging

Dead simple logging. All I needed was to be able to dump a whole
bunch of information, then in optimised mode remove it all. To
begin with, an initialisation must be called (essentially just
sets the baud rate):

```c++
void setup() {
  LOG_INIT( 9600 );
}
```

Then there are a few different flavors of log commands:

```c++
LOG( "A line without a new line." );
LOGLN( "With a new line." );
LOGV( a_variable ); // log a variable
LOGVLN( a_variable ); // as above but with a new line
```

When in optimised mode all of the log commands will vanish.

### Optimised mode

`ASSERT` and `INSIST` commands can be removed by including:

```c++
#define NDEBUG
```

Likewise, all logging commands can be removed by adding:

```c++
#define NLOG
```
