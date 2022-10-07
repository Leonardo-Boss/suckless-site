GRAPHEME\_TO\_TITLECASE(3) - Library Functions Manual

# NAME

**grapheme\_to\_titlecase** - convert codepoint array to titlecase

# SYNOPSIS

**#include <grapheme.h>**

*size\_t*  
**grapheme\_to\_titlecase**(*const uint\_least32\_t \*src*, *size\_t srclen*, *uint\_least32\_t \*dest*, *size\_t destlen*);

# DESCRIPTION

The
**grapheme\_to\_titlecase**()
function converts the codepoint array
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
(stdint.h is already included by grapheme.h) the codepoint array
*src*
is interpreted to be NUL-terminated and processing stops when a
NUL-byte is encountered.

For UTF-8-encoded input data
grapheme\_to\_titlecase\_utf8(3)
can be used instead.

# RETURN VALUES

The
**grapheme\_to\_titlecase**()
function returns the number of codepoints in the array resulting
from converting
*src*
to titlecase, even if
*destlen*
is not large enough or
*dest*
is
`NULL`.

# SEE ALSO

grapheme\_to\_titlecase\_utf8(3),
libgrapheme(7)

# STANDARDS

**grapheme\_to\_titlecase**()
is compliant with the Unicode 15.0.0 specification.

# AUTHORS

Laslo Hunhold <[dev@frign.de](mailto:dev@frign.de)>

suckless.org - 2022-10-06
