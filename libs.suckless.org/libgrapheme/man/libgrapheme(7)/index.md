	LIBGRAPHEME(7)	       Miscellaneous Information Manual		LIBGRAPHEME(7)
	
	NAME
	     libgrapheme – unicode string library
	
	SYNOPSIS
	     #include <grapheme.h>
	
	DESCRIPTION
	     The libgrapheme library provides functions to properly handle Unicode
	     strings according to the Unicode specification in regard to character,
	     word, sentence and line segmentation and case detection and conversion.
	
	     Unicode strings are made up of user-perceived characters (so-called
	     “grapheme clusters”, see MOTIVATION) that are composed of one or more
	     Unicode codepoints, which in turn are encoded in one or more bytes in an
	     encoding like UTF-8.
	
	     There is a widespread misconception that it was enough to simply
	     determine codepoints in a string and treat them as user-perceived
	     characters to be Unicode compliant.  While this may work in some cases,
	     this assumption quickly breaks, especially for non-Western languages and
	     decomposed Unicode strings where user-perceived characters are usually
	     represented using multiple codepoints.
	
	     Despite this complicated multilevel structure of Unicode strings,
	     libgrapheme provides methods to work with them at the byte-level (i.e.
	     UTF-8 ‘char’ arrays) while also offering codepoint-level methods.
	     Additionally, it is a “freestanding” library (see ISO/IEC 9899:1999
	     section 4.6) and thus does not depend on a standard library. This makes
	     it easy to use in bare metal environments.
	
	     Every documented function's manual page provides a self-contained example
	     illustrating the possible usage.
	
	SEE ALSO
	     grapheme_decode_utf8(3), grapheme_encode_utf8(3),
	     grapheme_is_character_break(3), grapheme_is_lowercase(3),
	     grapheme_is_lowercase_utf8(3), grapheme_is_titlecase(3),
	     grapheme_is_titlecase_utf8(3), grapheme_is_uppercase(3),
	     grapheme_is_uppercase_utf8(3), grapheme_next_character_break(3),
	     grapheme_next_character_break_utf8(3), grapheme_next_line_break(3),
	     grapheme_next_line_break_utf8(3), grapheme_next_sentence_break(3),
	     grapheme_next_sentence_break_utf8(3), grapheme_next_word_break(3),
	     grapheme_next_word_break_utf8(3), grapheme_to_lowercase(3),
	     grapheme_to_lowercase_utf8(3), grapheme_to_titlecase(3),
	     grapheme_to_titlecase_utf8(3) grapheme_to_uppercase(3),
	     grapheme_to_uppercase_utf8(3),
	
	STANDARDS
	     libgrapheme is compliant with the Unicode 15.0.0 specification.
	
	MOTIVATION
	     The idea behind every character encoding scheme like ASCII or Unicode is
	     to express abstract characters (which can be thought of as shapes making
	     up a written language). ASCII for instance, which comprises the range 0
	     to 127, assigns the number 65 (0x41) to the abstract character ‘A’.  This
	     number is called a “codepoint”, and all codepoints of an encoding make up
	     its so-called “code space”.
	
	     Unicode's code space is much larger, ranging from 0 to 0x10FFFF, but its
	     first 128 codepoints are identical to ASCII's. The additional code points
	     are needed as Unicode's goal is to express all writing systems of the
	     world.  To give an example, the abstract character ‘Ä’ is not expressable
	     in ASCII, given no ASCII codepoint has been assigned to it.  It can be
	     expressed in Unicode, though, with the codepoint 196 (0xC4).
	
	     One may assume that this process is straightfoward, but as more and more
	     codepoints were assigned to abstract characters, the Unicode Consortium
	     (that defines the Unicode standard) was facing a problem: Many (mostly
	     non-European) languages have such a large amount of abstract characters
	     that it would exhaust the available Unicode code space if one tried to
	     assign a codepoint to each abstract character.  The solution to that
	     problem is best introduced with an example: Consider the abstract
	     character ‘Ǟ’, which is ‘A’ with an umlaut and a macron added to it.  In
	     this sense, one can consider ‘Ǟ’ as a two-fold modification (namely “add
	     umlaut” and “add macron”) of the “base character” ‘A’.
	
	     The Unicode Consortium adapted this idea by assigning codepoints to
	     modifications.  For example, the codepoint 0x308 represents adding an
	     umlaut and 0x304 represents adding a macron, and thus, the codepoint
	     sequence “0x41 0x308 0x304”, namely the base character ‘A’ followed by
	     the umlaut and macron modifiers, represents the abstract character ‘Ǟ’.
	     As a side-note, the single codepoint 0x1DE was also assigned to ‘Ǟ’,
	     which is a good example for the fact that there can be multiple
	     representations of a single abstract character in Unicode.
	
	     Expressing a single abstract character with multiple codepoints solved
	     the code space exhaustion-problem, and the concept has been greatly
	     expanded since its first introduction (emojis, joiners, etc.). A sequence
	     (which can also have the length 1) of codepoints that belong together
	     this way and represents an abstract character is called a “grapheme
	     cluster”.
	
	     In many applications it is necessary to count the number of user-
	     perceived characters, i.e. grapheme clusters, in a string.	 A good
	     example for this is a terminal text editor, which needs to properly align
	     characters on a grid.  This is pretty simple with ASCII-strings, where
	     you just count the number of bytes (as each byte is a codepoint and each
	     codepoint is a grapheme cluster).	With Unicode-strings, it is a common
	     mistake to simply adapt the ASCII-approach and count the number of code
	     points.  This is wrong, as, for example, the sequence “0x41 0x308 0x304”,
	     while made up of 3 codepoints, is a single grapheme cluster and
	     represents the user-perceived character ‘Ǟ’.
	
	     The proper way to segment a string into user-perceived characters is to
	     segment it into its grapheme clusters by applying the Unicode grapheme
	     cluster breaking algorithm (UAX #29).  It is based on a complex ruleset
	     and lookup-tables and determines if a grapheme cluster ends or is
	     continued between two codepoints.	Libraries like ICU and libunistring,
	     which also offer this functionality, are often bloated, not correct,
	     difficult to use or not reasonably statically linkable.
	
	     Analogously, the standard provides algorithms to separate strings by
	     words, sentences and lines, convert cases and compare strings.  The
	     motivation behind libgrapheme is to make unicode handling suck less and
	     abide by the UNIX philosophy.
	
	AUTHORS
	     Laslo Hunhold <dev@frign.de>
	
	suckless.org			  2022-10-06			  suckless.org
