tsv alt
=======

Description
-----------
This patch is similar to [tsv](https://tools.suckless.org/dmenu/patches/tsv/), but differs in the following way:

All text before the first tab character will be the text displayed by
dmenu and the text that matching is performed on, while all text after
it will be the text outputted by dmenu. Subsequent tab characters do
not affect anything.

Configuration
-------------
Both a config.def.h value and runtime flag (`-r`) are available to
reverse the behavior of tab separation. Be sure to check with any other
patches for conflicts.

Notes
-----
This patch is incompatible with any commit before `32db2b1` (2022-09-02)
due to said commit changing how stdin is read.

Download
--------
* [dmenu-tsv-alt-20220919-fce06f4.diff](dmenu-tsv-alt-20220919-fce06f4.diff)
* [dmenu-tsv-alt-5.3.diff](dmenu-tsv-alt-5.3.diff)

Authors
-------
* yosh
* Max Schillinger - <maxschillinger@web.de> (5.3 version)
