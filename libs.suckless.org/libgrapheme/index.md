![libgrapheme](libgrapheme.svg)

libgrapheme is an extremely simple C99 library providing utilities for
properly handling user-perceived characters ('grapheme clusters')
according to the Unicode standard. While providing convenience functions
to operate on UTF-8-strings, you can also use libgrapheme for any other
encoding as well.

The necessary lookup-tables and test-data are automatically generated
from the Unicode standard data, ensuring correctness and validation.
A specialized 'Heisenstate' state-handling combined with
O(log(n))-binary-search on the lookup-tables and data-recycling provides
great processing-performance in the order of millions of codepoints per
second.

There is no complicated build-system involved and it's all done using
one POSIX-compliant Makefile. All you need is a C99 compiler, because
the data-generators are also written in C99.

Motivation
----------
The goal of this project is to be a suckless and statically linkable
alternative to the existing bloated, complicated and overscoped solutions
for Unicode string handling (ICU, GNU's libunistring, etc.), motivating
more hackers to properly handle Unicode strings in their projects and
allowing this even in embedded applications.

The problem can be easily seen when looking at the sizes of the respective
libraries: The ICU library (libicudata.a, libicui18n.a, libicuio.a,
libicutest.a, libicutu.a, libicuuc.a) is around 38MB and libunistring
(libunistring.a) is around 2MB, which is unacceptable for static
linking. Both take many minutes to compile even on a good computer and
require a lot of dependencies, including Python for ICU. On
the other hand libgrapheme (libgrapheme.a) only weighs in at around 40K
and is compiled (including Unicode data parsing) in fractions of a
second, requiring nothing but a C99 compiler and make(1).

While ICU and libunistring offer a lot of functions and the weight mostly
comes from locale-data provided by the Unicode standard, which is applied
implementation-specifically (!) for some things, the same standard always
defines a sane 'default' behaviour as an alternative in such cases that
is satisfying in 99% of the cases and which you can rely on.

For some languages, for instance, it is necessary to have a dictionary
on hand to always accurately determine when a word begins and ends. The
defaults provided by the standard, though, already do a good job
respecting the language's boundaries in the general case and are not too
taxing in terms of performance.

Handling user-perceived characters is not locale-dependent, though, and
does not require locale-data.

Getting Started
---------------
Installing libgrapheme will install the header grapheme.h and both the
static library libgrapheme.a and the dynamic library libgrapheme.so in
the respective folders. Access the manual under libgrapheme(7) by typing

	man libgrapheme

and looking at the referred pages, e.g. grapheme_next_character_break(3).
Each page contains code-examples.

Development
-----------
You can [browse](//git.suckless.org/libgrapheme) the source code
repository or get a copy with the following command:

	git clone https://git.suckless.org/libgrapheme

Author
------
* Laslo Hunhold (dev@frign.de)

Please contact me if you find information that could be added to this page.
