COOL LIBRARIES
==============

This category is for small, usable development libraries, which can be used for
writing software that sucks less.
These should preferrably be under the MIT/X consortium or BSD licenses, WTFPL,
or public domain, or alternatively LGPL, because it makes them legally
compatible with other suckless projects. 

libc implementations
--------------------
* [uClibc](http://www.uclibc.org/) - strives to be a minimalist C library suitable for embedded computing
* [musl](http://www.etalabs.net/musl/) - standard C library that attempts to be even smaller than uClibc
* See also: [embedded libc comparison](http://www.etalabs.net/compare_libcs.html)

Configuration file parsers
--------------------------
* [iniparser](http://ndevilla.free.fr/iniparser/) - relatively small ini parsing library, contains a dictionary data structure and accessory functions (MIT licensed)
* [ini.c](http://c.snippets.org/snip_lister.php?fname=ini.c) - code snippet on snippets.org (public domain)
* [cfg.c](http://c.snippets.org/snip_lister.php?fname=cfg.c) - code snippet for parsing a simple key-value config file (public domain)
* [initvars.c](http://c.snippets.org/snip_lister.php?fname=initvars.c) - yet another snippet (public domain)

Compression
-----------
* [liblzf](http://oldhome.schmorp.de/marc/liblzf.html) - very fast, legally unencumbered compression library (dual licensed: 2-clause BSD or GPL License)
* [xz embedded](http://tukaani.org/xz/embedded.html) - lightweight decompressor for the xz LZMA compressor (public domain)
* [zlib](http://zlib.net/) - the "standard" compression/decompression library used in many applications ([zlib license](http://zlib.net/zlib_license.html))

libtom project
--------------
All of these are dual-licensed under WTFPL and also public domain. According
to the website, "[…] the GPG and OpenSSL folk assume that completely abhorrent
and messy source code is ok, so long as it works. The LibTom Projects aims to
change this line of thinking."
* [libtommath, libtomcrypt and libtomfastmath](http://libtom.org/)

Cryptography
------------
* [libtomcrypt](http://libtom.org/?page=features&newsitems=5&whatfile=crypt) - the cryptography library from the libtom project
* [polarssl](http://polarssl.org/) - lightweight SSL/TLS implementation using libmpi (unfortunately GPL)

Mathematics
-----------
* [libtommath](http://libtom.org/?page=features&newsitems=5&whatfile=ltm) - math/bignum library (can be used insted of the much bigger [GNU MP](http://gmplib.org) library).
* [libtomfastmath](http://libtom.org/?page=features&newsitems=5&whatfile=tfm) - port of libtommath using inline assembler for speedup on various architectures
* [libmpi](http://spinning-yarns.org/michael/mpi/) - lightweight math lib from which libtommath was originally forked

Miscellaneous
-------------
* [code snippets database](http://c.snippets.org/browser.php) - contains various code snippets, most of which are public domain
* [pjsip](http://www.pjsip.org/) - open source SIP stack (GPL)
