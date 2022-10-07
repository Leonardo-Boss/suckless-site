GRAPHEME\_NEXT\_WORD\_BREAK(3) - Library Functions Manual

# NAME

**grapheme\_next\_word\_break** - determine codepoint-offset to next word break

# SYNOPSIS

**#include <grapheme.h>**

*size\_t*  
**grapheme\_next\_word\_break**(*const uint\_least32\_t \*str*, *size\_t len*);

# DESCRIPTION

The
**grapheme\_next\_word\_break**()
function computes the offset (in codepoints) to the next word
break (see
libgrapheme(7))
in the codepoint array
*str*
of length
*len*.
If a word begins at
*str*
this offset is equal to the length of said word.

If
*len*
is set to
`SIZE_MAX`
(stdint.h is already included by grapheme.h) the string
*str*
is interpreted to be NUL-terminated and processing stops when
a codepoint with the value 0 is encountered.

For UTF-8-encoded input
data
grapheme\_next\_word\_break\_utf8(3)
can be used instead.

# RETURN VALUES

The
**grapheme\_next\_word\_break**()
function returns the offset (in codepoints) to the next word
break in
*str*
or 0 if
*str*
is
`NULL`.

# SEE ALSO

grapheme\_next\_word\_break\_utf8(3),
libgrapheme(7)

# STANDARDS

**grapheme\_next\_word\_break**()
is compliant with the Unicode 15.0.0 specification.

# AUTHORS

Laslo Hunhold <[dev@frign.de](mailto:dev@frign.de)>

suckless.org - 2022-10-06
