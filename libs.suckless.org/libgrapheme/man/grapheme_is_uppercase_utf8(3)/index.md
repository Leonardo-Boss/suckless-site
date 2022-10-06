	GRAPHEME_IS_LOWERCASE_UTF8(3)			      Library Functions Manual
	
	NAME
	     grapheme_is_lowercase_utf8 – check if UTF-8-encoded string is lowercase
	
	SYNOPSIS
	     #include <grapheme.h>
	
	     size_t
	     grapheme_is_lowercase_utf8(const char *str, size_t len, size_t *caselen);
	
	DESCRIPTION
	     The grapheme_is_lowercase_utf8() function checks if the UTF-8-encoded
	     string str is lowercase and writes the length of the matching lowercase-
	     sequence to the integer pointed to by caselen, unless caselen is set to
	     NULL.
	
	     If len is set to SIZE_MAX (stdint.h is already included by grapheme.h)
	     the UTF-8-encoded string src is interpreted to be NUL-terminated and
	     processing stops when a NUL-byte is encountered.
	
	     For non-UTF-8 input data grapheme_is_lowercase(3) can be used instead.
	
	RETURN VALUES
	     The grapheme_is_lowercase_utf8() function returns true if the
	     UTF-8-encoded string str is lowercase, otherwise false.
	
	SEE ALSO
	     grapheme_is_lowercase(3), libgrapheme(7)
	
	STANDARDS
	     grapheme_is_lowercase_utf8() is compliant with the Unicode 15.0.0
	     specification.
	
	AUTHORS
	     Laslo Hunhold <dev@frign.de>
	
	suckless.org			  2022-10-06			  suckless.org
