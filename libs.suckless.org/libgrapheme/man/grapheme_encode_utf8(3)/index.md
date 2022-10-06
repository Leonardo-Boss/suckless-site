	GRAPHEME_ENCODE_UTF8(3)	   Library Functions Manual    GRAPHEME_ENCODE_UTF8(3)
	
	NAME
	     grapheme_encode_utf8 – encode codepoint into UTF-8 string
	
	SYNOPSIS
	     #include <grapheme.h>
	
	     size_t
	     grapheme_encode_utf8(uint_least32_t cp, char *str, size_t len);
	
	DESCRIPTION
	     The grapheme_encode_utf8() function encodes the codepoint cp into a
	     UTF-8-string.  If str is not NULL and len is large enough it writes the
	     UTF-8-string to the memory pointed to by str.  Otherwise no data is
	     written.
	
	RETURN VALUES
	     The grapheme_encode_utf8() function returns the length (in bytes) of the
	     UTF-8-string resulting from encoding cp, even if len is not large enough
	     or str is NULL.
	
	EXAMPLES
	     /* cc (-static) -o example example.c -lgrapheme */
	     #include <grapheme.h>
	     #include <stddef.h>
	     #include <stdlib.h>
	
	     size_t
	     cps_to_utf8(const uint_least32_t *cp, size_t cplen, char *str, size_t len)
	     {
		     size_t i, off, ret;
	
		     for (i = 0, off = 0; i < cplen; i++, off += ret) {
			     if ((ret = grapheme_encode_utf8(cp[i], str + off,
							     len - off)) > (len - off)) {
				     /* buffer too small */
				     break;
			     }
		     }
	
		     return off;
	     }
	
	     size_t
	     cps_bytelen(const uint_least32_t *cp, size_t cplen)
	     {
		     size_t i, len;
	
		     for (i = 0, len = 0; i < cplen; i++) {
			     len += grapheme_encode_utf8(cp[i], NULL, 0);
		     }
	
		     return len;
	     }
	
	     char *
	     cps_to_utf8_alloc(const uint_least32_t *cp, size_t cplen)
	     {
		     char *str;
		     size_t len, i, ret, off;
	
		     len = cps_bytelen(cp, cplen);
	
		     if (!(str = malloc(len))) {
			     return NULL;
		     }
	
		     for (i = 0, off = 0; i < cplen; i++, off += ret) {
			     if ((ret = grapheme_encode_utf8(cp[i], str + off,
							     len - off)) > (len - off)) {
				     /* buffer too small */
				     break;
			     }
		     }
		     str[off] = '\0';
	
		     return str;
	     }
	
	SEE ALSO
	     grapheme_decode_utf8(3), libgrapheme(7)
	
	AUTHORS
	     Laslo Hunhold <dev@frign.de>
	
	suckless.org			  2022-10-06			  suckless.org
