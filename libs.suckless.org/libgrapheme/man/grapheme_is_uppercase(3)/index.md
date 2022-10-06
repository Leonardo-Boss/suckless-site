GRAPHEME\_IS\_UPPERCASE(3) - Library Functions Manual

# NAME

**grapheme\_is\_uppercase** - check if codepoint array is uppercase

# SYNOPSIS

**#include &lt;grapheme.h>**

*size\_t*  
**grapheme\_is\_uppercase**(*const uint\_least32\_t \*str*, *size\_t len*, *size\_t \*caselen*);

# DESCRIPTION

The
**grapheme\_is\_uppercase**()
function checks if the codepoint array
*str*
is uppercase and writes the length of the matching uppercase-sequence to the integer pointed to by
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
grapheme\_is\_uppercase\_utf8(3)
can be used instead.

# RETURN VALUES

The
**grapheme\_is\_uppercase**()
function returns
`true`
if the codepoint array
*str*
is uppercase, otherwise
`false`.

# SEE ALSO

grapheme\_is\_uppercase\_utf8(3),
libgrapheme(7)

# STANDARDS

**grapheme\_is\_uppercase**()
is compliant with the Unicode 15.0.0 specification.

# AUTHORS

Laslo Hunhold &lt;[dev@frign.de](mailto:dev@frign.de)&gt;

suckless.org - 2022-10-06
