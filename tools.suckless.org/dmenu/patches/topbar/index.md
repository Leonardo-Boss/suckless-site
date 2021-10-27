topbar
======

Currently `config.h` allows users to set the value of topbar to 0.
However if one does that, there's no way for him to get a topbar again.
This adds a new flag `-t` which will force a topbar.

NOTE: if both `-b` and `-t` are given as argument, the last one will take
precedence.

Download
--------

* [dmenu-topbar-d78ff08.patch](dmenu-topbar-d78ff08.patch)

Author
------
* NRK <nrk@disroot.org>
