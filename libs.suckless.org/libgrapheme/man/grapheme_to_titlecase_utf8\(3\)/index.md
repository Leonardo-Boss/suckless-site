	GRAPHEME_TO_TITLECASE_UTF8(3)			      Library Functions Manual
	
	NAME
	     grapheme_to_titlecase_utf8 – convert UTF-8-encoded string to titlecase
	
	SYNOPSIS
	     #include <grapheme.h>
	
	     size_t
	     grapheme_to_titlecase_utf8(const char *src, size_t srclen, char *dest,
		 size_t destlen);
	
	DESCRIPTION
	     The grapheme_to_titlecase_utf8() function converts the UTF-8-encoded
	     string str to titlecase and writes the result to dest up to destlen,
	     unless dest is set to NULL.
	
	     If srclen is set to SIZE_MAX (stdint.h is already included by grapheme.h)
	     the UTF-8-encoded string src is interpreted to be NUL-terminated and
	     processing stops when a NUL-byte is encountered.
	
	     For non-UTF-8 input data grapheme_to_titlecase(3) can be used instead.
	
	RETURN VALUES
	     The grapheme_to_titlecase_utf8() function returns the number of bytes in
	     the array resulting from converting src to titlecase, even if destlen is
	     not large enough or dest is NULL.
	
	SEE ALSO
	     grapheme_to_titlecase(3), libgrapheme(7)
	
	STANDARDS
	     grapheme_to_titlecase_utf8() is compliant with the Unicode 15.0.0
	     specification.
	
	AUTHORS
	     Laslo Hunhold <dev@frign.de>
	
	suckless.org			  2022-10-06			  suckless.org
