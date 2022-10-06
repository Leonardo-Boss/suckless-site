	GRAPHEME_TO_TITLECASE(3)   Library Functions Manual   GRAPHEME_TO_TITLECASE(3)
	
	NAME
	     grapheme_to_titlecase – convert codepoint array to titlecase
	
	SYNOPSIS
	     #include <grapheme.h>
	
	     size_t
	     grapheme_to_titlecase(const uint_least32_t *src, size_t srclen,
		 uint_least32_t *dest, size_t destlen);
	
	DESCRIPTION
	     The grapheme_to_titlecase() function converts the codepoint array str to
	     titlecase and writes the result to dest up to destlen, unless dest is set
	     to NULL.
	
	     If srclen is set to SIZE_MAX (stdint.h is already included by grapheme.h)
	     the codepoint array src is interpreted to be NUL-terminated and
	     processing stops when a NUL-byte is encountered.
	
	     For UTF-8-encoded input data grapheme_to_titlecase_utf8(3) can be used
	     instead.
	
	RETURN VALUES
	     The grapheme_to_titlecase() function returns the number of codepoints in
	     the array resulting from converting src to titlecase, even if destlen is
	     not large enough or dest is NULL.
	
	SEE ALSO
	     grapheme_to_titlecase_utf8(3), libgrapheme(7)
	
	STANDARDS
	     grapheme_to_titlecase() is compliant with the Unicode 15.0.0
	     specification.
	
	AUTHORS
	     Laslo Hunhold <dev@frign.de>
	
	suckless.org			  2022-10-06			  suckless.org
