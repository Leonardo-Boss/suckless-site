Fuzzy matching support
======================

Description
-----------

This patch adds support for fuzzy matching to dmenu.  It allows you to type
non-consecutive portions of the string you want to match.

Usage
-----

* Apply patch and include `fuzzymatch.c` in `config.h`.

`#include fuzzymatch.c`

Download
--------

* [dmenu git](dmenu-git-fuzzymatch.diff) applies cleanly against 13a529ce63364544bdc851dfd5d3aa2ef8740914
* [dmenu 4.5](dmenu-4.5-fuzzymatch.diff)

History
------

Created by [Jan Christoph Ebersbach](https://github.com/jceb/dmenu-patches).
