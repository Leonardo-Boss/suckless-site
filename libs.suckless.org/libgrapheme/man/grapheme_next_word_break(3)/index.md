	GRAPHEME_NEXT_WORD_BREAK(3)			      Library Functions Manual
	
	NAME
	     grapheme_next_word_break – determine codepoint-offset to next word break
	
	SYNOPSIS
	     #include <grapheme.h>
	
	     size_t
	     grapheme_next_word_break(const uint_least32_t *str, size_t len);
	
	DESCRIPTION
	     The grapheme_next_word_break() function computes the offset (in
	     codepoints) to the next word break (see libgrapheme(7)) in the codepoint
	     array str of length len.  If a word begins at str this offset is equal to
	     the length of said word.
	
	     If len is set to SIZE_MAX (stdint.h is already included by grapheme.h)
	     the string str is interpreted to be NUL-terminated and processing stops
	     when a codepoint with the value 0 is encountered.
	
	     For UTF-8-encoded input data grapheme_next_word_break_utf8(3) can be used
	     instead.
	
	RETURN VALUES
	     The grapheme_next_word_break() function returns the offset (in
	     codepoints) to the next word break in str or 0 if str is NULL.
	
	SEE ALSO
	     grapheme_next_word_break_utf8(3), libgrapheme(7)
	
	STANDARDS
	     grapheme_next_word_break() is compliant with the Unicode 15.0.0
	     specification.
	
	AUTHORS
	     Laslo Hunhold <dev@frign.de>
	
	suckless.org			  2022-10-06			  suckless.org
