GRAPHEME\_NEXT\_CHARACTER\_BREAK(3) - Library Functions Manual

# NAME

**grapheme\_next\_character\_break** - determine codepoint-offset to next grapheme cluster break

# SYNOPSIS

**#include <grapheme.h>**

*size\_t*  
**grapheme\_next\_character\_break**(*const uint\_least32\_t \*str*, *size\_t len*);

# DESCRIPTION

The
**grapheme\_next\_character\_break**()
function computes the offset (in codepoints) to the next grapheme cluster
break (see
libgrapheme(7))
in the codepoint array
*str*
of length
*len*.
If a grapheme cluster begins at
*str*
this offset is equal to the length of said grapheme cluster.

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
grapheme\_next\_character\_break\_utf8(3)
can be used instead.

# RETURN VALUES

The
**grapheme\_next\_character\_break**()
function returns the offset (in codepoints) to the next grapheme cluster
break in
*str*
or 0 if
*str*
is
`NULL`.

# SEE ALSO

grapheme\_is\_character\_break(3),
grapheme\_next\_character\_break\_utf8(3),
libgrapheme(7)

# STANDARDS

**grapheme\_next\_character\_break**()
is compliant with the Unicode 15.0.0 specification.

# AUTHORS

Laslo Hunhold ([dev@frign.de](mailto:dev@frign.de))

suckless.org - 2022-10-06
