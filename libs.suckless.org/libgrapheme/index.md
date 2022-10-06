![libgrapheme](libgrapheme.svg)

libgrapheme is an extremely simple freestanding C99 library providing
utilities for properly handling strings according to the latest
Unicode standard 15.0.0. It offers fully Unicode compliant

* __grapheme cluster__ (i.e. user-perceived character) __segmentation__
* __word segmentation__
* __sentence segmentation__
* detection of permissible __line break opportunities__
* __case detection__ (lower-, upper- and title-case)
* __case conversion__ (to lower-, upper- and title-case)

on UTF-8 strings and codepoint arrays, which both can also be
null-terminated.

The necessary lookup-tables are automatically generated from the Unicode
standard data (contained in the tarball) and heavily compressed. Over
10,000 automatically generated conformance tests and over 150 unit tests
ensure conformance and correctness.

There is no complicated build-system involved and it's all done using
one POSIX-compliant Makefile. All you need is a C99 compiler, given
the lookup-table-generators and compressors are also written in C99.
The resulting library is freestanding and thus not even dependent on a
standard library to be present at runtime, making it a suitable choice
for bare metal applications.

It is also way smaller and much faster than the other established Unicode
string libraries (ICU, GNU's libunistring, libutf8proc).

Development
-----------
You can [browse](//git.suckless.org/libgrapheme) the source code
repository or get a copy with the following command:

	git clone https://git.suckless.org/libgrapheme

Download
--------
libgrapheme follows the [semantic versioning](https://semver.org/) scheme.

* [libgrapheme-1.0.0](//dl.suckless.org/libgrapheme/libgrapheme-1.tar.gz) (2021-12-22)


Getting Started
---------------
Installing libgrapheme via

	make install

will install the header grapheme.h and both the static library
libgrapheme.a and the dynamic library libgrapheme.so (with symlinks) in
the respective folders. The conformance and unit tests can be run with

	make test

and comparative benchmarks against libutf8proc (which is the only Unicode
library compliant enough to be comparable to) can be run with

	make benchmark

You can access the manual [here](man/) or via libgrapheme(7) by typing

	man libgrapheme

and looking at the referred pages, e.g.
[grapheme\_next\_character\_break_utf8(3)](man/grapheme_next_character_break_utf8(3)/).
Each page contains code-examples and an extensive description. To give
one example that is also given in the manuals, the following code
separates a given string 'Tëst 👨‍👩‍👦 🇺🇸 नी நி!'
into its user-perceived characters:

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
			printf("%2zu bytes | %.*s\n", ret, (int)ret, s + off, ret);
		}
		printf("\n");
	
		/* do the same, but this time string is length-delimited */
		len = 17;
		printf("grapheme clusters in input delimited to %zu bytes:\n", len);
		for (off = 0; off < len; off += ret) {
			ret = grapheme_next_character_break_utf8(s + off, len - off);
			printf("%2zu bytes | %.*s\n", ret, (int)ret, s + off, ret);
		}
	
		return 0;
	}

This code can be compiled with

	cc (-static) -o example example.c -lgrapheme

and the output is

	Input: "Tëst 👨‍👩‍👦 🇺🇸 नी நி!"
	grapheme clusters in NUL-delimited input:
	 1 bytes | T
	 2 bytes | ë
	 1 bytes | s
	 1 bytes | t
	 1 bytes |  
	18 bytes | 👨‍👩‍👦
	 1 bytes |  
	 8 bytes | 🇺🇸
	 1 bytes |  
	 6 bytes | नी
	 1 bytes |  
	 6 bytes | நி
	 1 bytes | !
	
	grapheme clusters in input delimited to 17 bytes:
	 1 bytes | T
	 2 bytes | ë
	 1 bytes | s
	 1 bytes | t
	 1 bytes |  
	11 bytes | 👨‍👩

Motivation
----------
The goal of this project is to be a suckless and statically linkable
alternative to the existing bloated, complicated, overscoped and/or
incorrect solutions for Unicode string handling (ICU, GNU's
libunistring, libutf8proc, etc.), motivating more hackers to properly
handle Unicode strings in their projects and allowing this even in
embedded applications.

The problem can be easily seen when looking at the sizes of the respective
libraries: The ICU library (libicudata.a, libicui18n.a, libicuio.a,
libicutest.a, libicutu.a, libicuuc.a) is around 38MB and libunistring
(libunistring.a) is around 2MB, which is unacceptable for static
linking. Both take many minutes to compile even on a good computer and
require a lot of dependencies, including Python for ICU. On
the other hand libgrapheme (libgrapheme.a) only weighs in at around 300K
and is compiled (including Unicode data parsing and compression) in
under a second, requiring nothing but a C99 compiler and POSIX make(1).

Some libraries, like libutf8proc and libunistring, are incorrect by
basing their API on assumptions that haven't been true for years
(e.g. offering stateless grapheme cluster segmentation even though the
underlying algorithm is not stateless). As an additional factor,
libutf8proc's UTF-8-decoder is unsafe, as it allows overlong encodings
that can be easily used for exploits.

While ICU and libunistring offer a lot of functions and the weight mostly
comes from locale-data provided by the Unicode standard, which is applied
implementation-specifically (!) for some things, the same standard always
defines a sane 'default' behaviour as an alternative in such cases that
is satisfying in 99% of the cases and which you can rely on.

For some languages, for instance, it is necessary to have a dictionary
on hand to always accurately determine when a word begins and ends. The
defaults provided by the standard, though, already do a great job
respecting the language's boundaries in the general case and are not too
taxing in terms of performance.

Author
------
* Laslo Hunhold (dev@frign.de)

Please contact me if you have information that could be added to this page.
