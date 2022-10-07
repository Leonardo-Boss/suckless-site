GRAPHEME\_IS\_TITLECASE\_UTF8(3) - Library Functions Manual

# NAME

**grapheme\_is\_titlecase\_utf8** - check if UTF-8-encoded string is titlecase

# SYNOPSIS

**#include <grapheme.h>**

*size\_t*  
**grapheme\_is\_titlecase\_utf8**(*const char \*str*, *size\_t len*, *size\_t \*caselen*);

# DESCRIPTION

The
**grapheme\_is\_titlecase\_utf8**()
function checks if the UTF-8-encoded string
*str*
is titlecase and writes the length of the matching titlecase-sequence to the integer pointed to by
*caselen*,
unless
*caselen*
is set to
`NULL`.

If
*len*
is set to
`SIZE_MAX`
(stdint.h is already included by grapheme.h) the UTF-8-encoded string
*src*
is interpreted to be NUL-terminated and processing stops when a
NUL-byte is encountered.

For non-UTF-8 input data
grapheme\_is\_titlecase(3)
can be used instead.

# RETURN VALUES

The
**grapheme\_is\_titlecase\_utf8**()
function returns
`true`
if the UTF-8-encoded string
*str*
is titlecase, otherwise
`false`.

# SEE ALSO

grapheme\_is\_titlecase(3),
libgrapheme(7)

# STANDARDS

**grapheme\_is\_titlecase\_utf8**()
is compliant with the Unicode 15.0.0 specification.

# AUTHORS

Laslo Hunhold <[dev@frign.de](mailto:dev@frign.de)>

suckless.org - 2022-10-06
