GRAPHEME\_NEXT\_CHARACTER\_BREAK\_UTF8(3) - Library Functions Manual

# NAME

**grapheme\_next\_character\_break\_utf8** - determine byte-offset to next grapheme cluster break

# SYNOPSIS

**#include <grapheme.h>**

*size\_t*  
**grapheme\_next\_character\_break\_utf8**(*const char \*str*, *size\_t len*);

# DESCRIPTION

The
**grapheme\_next\_character\_break\_utf8**()
function computes the offset (in bytes) to the next grapheme cluster
break (see
libgrapheme(7))
in the UTF-8-encoded string
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
a NUL-byte is encountered.

For non-UTF-8 input
data
grapheme\_is\_character\_break(3) and
grapheme\_next\_character\_break(3)
can be used instead.

# RETURN VALUES

The
**grapheme\_next\_character\_break\_utf8**()
function returns the offset (in bytes) to the next grapheme cluster
break in
*str*
or 0 if
*str*
is
`NULL`.

# EXAMPLES

	/* cc (-static) -o example example.c -lgrapheme */
	#include <grapheme.h>
	#include <stdint.h>
	#include <stdio.h>
	
	int
	main(void)
	{
		/* UTF-8 encoded input */
		char *s = "T\xC3\xABst \xF0\x9F\x91\xA8\xE2\x80\x8D\xF0"
		          "\x9F\x91\xA9\xE2\x80\x8D\xF0\x9F\x91\xA6 \xF0"
		          "\x9F\x87\xBA\xF0\x9F\x87\xB8 \xE0\xA4\xA8\xE0"
		          "\xA5\x80 \xE0\xAE\xA8\xE0\xAE\xBF!";
		size_t ret, len, off;
	
		printf("Input: \"%s\"\n", s);
	
		/* print each grapheme cluster with byte-length */
		printf("grapheme clusters in NUL-delimited input:\n");
		for (off = 0; s[off] != '\0'; off += ret) {
			ret = grapheme_next_character_break_utf8(s + off, SIZE_MAX);
			printf("%2zu bytes | %.*s\n", ret, (int)ret, s + off);
		}
		printf("\n");
	
		/* do the same, but this time string is length-delimited */
		len = 17;
		printf("grapheme clusters in input delimited to %zu bytes:\n", len);
		for (off = 0; off < len; off += ret) {
			ret = grapheme_next_character_break_utf8(s + off, len - off);
			printf("%2zu bytes | %.*s\n", ret, (int)ret, s + off);
		}
	
		return 0;
	}

# SEE ALSO

grapheme\_next\_character\_break(3),
libgrapheme(7)

# STANDARDS

**grapheme\_next\_character\_break\_utf8**()
is compliant with the Unicode 15.0.0 specification.

# AUTHORS

Laslo Hunhold ([dev@frign.de](mailto:dev@frign.de))

suckless.org - 2022-10-06
