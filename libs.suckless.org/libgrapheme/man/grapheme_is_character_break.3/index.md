GRAPHEME\_IS\_CHARACTER\_BREAK(3) - Library Functions Manual

# NAME

**grapheme\_is\_character\_break** - test for a grapheme cluster break between two codepoints

# SYNOPSIS

**#include <grapheme.h>**

*size\_t*  
**grapheme\_is\_character\_break**(*uint\_least32\_t cp1*, *uint\_least32\_t cp2*, *uint\_least16\_t \*state*);

# DESCRIPTION

The
**grapheme\_is\_character\_break**()
function determines if there is a grapheme cluster break (see
libgrapheme(7))
between the two codepoints
*cp1*
and
*cp2*.
By specification this decision depends on a
*state*
that can at most be completely reset after detecting a break and must
be reset every time one deviates from sequential processing.

If
*state*
is
`NULL`
**grapheme\_is\_character\_break**()
behaves as if it was called with a fully reset state.

# RETURN VALUES

The
**grapheme\_is\_character\_break**()
function returns
*true*
if there is a grapheme cluster break between the codepoints
*cp1*
and
*cp2*
and
*false*
if there is not.

# EXAMPLES

	/* cc (-static) -o example example.c -lgrapheme */
	#include <grapheme.h>
	#include <stdint.h>
	#include <stdio.h>
	#include <stdlib.h>
	
	int
	main(void)
	{
		uint_least16_t state = 0;
		uint_least32_t s1[] = ..., s2[] = ...; /* two input arrays */
		size_t i;
	
		for (i = 0; i + 1 < sizeof(s1) / sizeof(*s1); i++) {
			if (grapheme_is_character_break(s[i], s[i + 1], &state)) {
				printf("break in s1 at offset %zu0, i);
			}
		}
		memset(&state, 0, sizeof(state)); /* reset state */
		for (i = 0; i + 1 < sizeof(s2) / sizeof(*s2); i++) {
			if (grapheme_is_character_break(s[i], s[i + 1], &state)) {
				printf("break in s2 at offset %zu0, i);
			}
		}
	
		return 0;
	}

# SEE ALSO

grapheme\_next\_character\_break(3),
grapheme\_next\_character\_break\_utf8(3),
libgrapheme(7)

# STANDARDS

**grapheme\_is\_character\_break**()
is compliant with the Unicode 15.0.0 specification.

# AUTHORS

Laslo Hunhold <[dev@frign.de](mailto:dev@frign.de)>

suckless.org - 2022-10-06
