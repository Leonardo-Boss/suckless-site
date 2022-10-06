GRAPHEME\_DECODE\_UTF8(3) - Library Functions Manual

# NAME

**grapheme\_decode\_utf8** - decode first codepoint in UTF-8-encoded string

# SYNOPSIS

**#include &lt;grapheme.h>**

*size\_t*  
**grapheme\_decode\_utf8**(*const char \*str*, *size\_t len*, *uint\_least32\_t \*cp*);

# DESCRIPTION

The
**grapheme\_decode\_utf8**()
function decodes the first codepoint in the UTF-8-encoded string
*str*
of length
*len*.
If the UTF-8-sequence is invalid (overlong encoding, unexpected byte,
string ends unexpectedly, empty string, etc.) the decoding is stopped
at the last processed byte and the decoded codepoint set to
`GRAPHEME_INVALID_CODEPOINT`.

If
*cp*
is not
`NULL`
the decoded codepoint is stored in the memory pointed to by
*cp*.

Given NUL has a unique 1 byte representation, it is safe to operate on
NUL-terminated strings by setting
*len*
to
`SIZE_MAX`
(stdint.h is already included by grapheme.h) and terminating when
*cp*
is 0 (see
*EXAMPLES*
for an example).

# RETURN VALUES

The
**grapheme\_decode\_utf8**()
function returns the number of processed bytes and 0 if
*str*
is
`NULL`
or
*len*
is 0.
If the string ends unexpectedly in a multibyte sequence, the desired
length (that is larger than
*len*)
is returned.

# EXAMPLES

	/* cc (-static) -o example example.c -lgrapheme */
	#include <grapheme.h>
	#include <inttypes.h>
	#include <stdio.h>
	
	void
	print_cps(const char *str, size_t len)
	{
		size_t ret, off;
		uint_least32_t cp;
	
		for (off = 0; off < len; off += ret) {
			if ((ret = grapheme_decode_utf8(str + off,
			                                len - off, &cp)) > (len - off)) {
				/*
				 * string ended unexpectedly in the middle of a
				 * multibyte sequence and we have the choice
				 * here to possibly expand str by ret - len + off
				 * bytes to get a full sequence, but we just
				 * bail out in this case.
				 */
				break;
			}
			printf("%"PRIxLEAST32"\n", cp);
		}
	}
	
	void
	print_cps_nul_terminated(const char *str)
	{
		size_t ret, off;
		uint_least32_t cp;
	
		for (off = 0; (ret = grapheme_decode_utf8(str + off,
		                                          SIZE_MAX, &cp)) > 0 &&
		     cp != 0; off += ret) {
			printf("%"PRIxLEAST32"\n", cp);
		}
	}

# SEE ALSO

grapheme\_encode\_utf8(3),
libgrapheme(7)

# AUTHORS

Laslo Hunhold &lt;[dev@frign.de](mailto:dev@frign.de)&gt;

suckless.org - 2022-10-06
