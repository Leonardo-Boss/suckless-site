GRAPHEME\_TO\_TITLECASE\_UTF8(3) - Library Functions Manual

# NAME

**grapheme\_to\_titlecase\_utf8** - convert UTF-8-encoded string to titlecase

# SYNOPSIS

**#include &lt;grapheme.h>**

*size\_t*  
**grapheme\_to\_titlecase\_utf8**(*const char \*src*, *size\_t srclen*, *char \*dest*, *size\_t destlen*);

# DESCRIPTION

The
**grapheme\_to\_titlecase\_utf8**()
function converts the UTF-8-encoded string
*str*
to titlecase and writes the result to
*dest*
up to
*destlen*,
unless
*dest*
is set to
`NULL`.

If
*srclen*
is set to
`SIZE_MAX`
(stdint.h is already included by grapheme.h) the UTF-8-encoded string
*src*
is interpreted to be NUL-terminated and processing stops when a
NUL-byte is encountered.

For non-UTF-8 input data
grapheme\_to\_titlecase(3)
can be used instead.

# RETURN VALUES

The
**grapheme\_to\_titlecase\_utf8**()
function returns the number of bytes in the array resulting
from converting
*src*
to titlecase, even if
*destlen*
is not large enough or
*dest*
is
`NULL`.

# SEE ALSO

grapheme\_to\_titlecase(3),
libgrapheme(7)

# STANDARDS

**grapheme\_to\_titlecase\_utf8**()
is compliant with the Unicode 15.0.0 specification.

# AUTHORS

Laslo Hunhold &lt;[dev@frign.de](mailto:dev@frign.de)&gt;

suckless.org - 2022-10-06
