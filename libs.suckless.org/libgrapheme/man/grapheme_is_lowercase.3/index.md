GRAPHEME\_IS\_LOWERCASE(3) - Library Functions Manual

# NAME

**grapheme\_is\_lowercase** - check if codepoint array is lowercase

# SYNOPSIS

**#include <grapheme.h>**

*size\_t*  
**grapheme\_is\_lowercase**(*const uint\_least32\_t \*str*, *size\_t len*, *size\_t \*caselen*);

# DESCRIPTION

The
**grapheme\_is\_lowercase**()
function checks if the codepoint array
*str*
is lowercase and writes the length of the matching lowercase-sequence to the integer pointed to by
*caselen*,
unless
*caselen*
is set to
`NULL`.

If
*len*
is set to
`SIZE_MAX`
(stdint.h is already included by grapheme.h) the codepoint array
*src*
is interpreted to be NUL-terminated and processing stops when a
NUL-byte is encountered.

For UTF-8-encoded input data
grapheme\_is\_lowercase\_utf8(3)
can be used instead.

# RETURN VALUES

The
**grapheme\_is\_lowercase**()
function returns
`true`
if the codepoint array
*str*
is lowercase, otherwise
`false`.

# SEE ALSO

grapheme\_is\_lowercase\_utf8(3),
libgrapheme(7)

# STANDARDS

**grapheme\_is\_lowercase**()
is compliant with the Unicode 15.0.0 specification.

# AUTHORS

Laslo Hunhold ([dev@frign.de](mailto:dev@frign.de))

suckless.org - 2022-10-06
