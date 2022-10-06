	GRAPHEME_IS_TITLECASE(3)   Library Functions Manual   GRAPHEME_IS_TITLECASE(3)
	
	NAME
	     grapheme_is_titlecase – check if codepoint array is titlecase
	
	SYNOPSIS
	     #include <grapheme.h>
	
	     size_t
	     grapheme_is_titlecase(const uint_least32_t *str, size_t len,
		 size_t *caselen);
	
	DESCRIPTION
	     The grapheme_is_titlecase() function checks if the codepoint array str is
	     titlecase and writes the length of the matching titlecase-sequence to the
	     integer pointed to by caselen, unless caselen is set to NULL.
	
	     If len is set to SIZE_MAX (stdint.h is already included by grapheme.h)
	     the codepoint array src is interpreted to be NUL-terminated and
	     processing stops when a NUL-byte is encountered.
	
	     For UTF-8-encoded input data grapheme_is_titlecase_utf8(3) can be used
	     instead.
	
	RETURN VALUES
	     The grapheme_is_titlecase() function returns true if the codepoint array
	     str is titlecase, otherwise false.
	
	SEE ALSO
	     grapheme_is_titlecase_utf8(3), libgrapheme(7)
	
	STANDARDS
	     grapheme_is_titlecase() is compliant with the Unicode 15.0.0
	     specification.
	
	AUTHORS
	     Laslo Hunhold <dev@frign.de>
	
	suckless.org			  2022-10-06			  suckless.org
