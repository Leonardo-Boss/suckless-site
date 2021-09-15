toggle-position
===============

Currently config.h allows users to have a default bottom bar by setting the
value of `topbar` to 0. However if one does that, there's no way to get a topbar
again at runtime.

This patch turns `-b` into a top/bottom toggle, which may be considered more useful.

Download
--------
* [dmenu-toggle-position-20210904-d78ff08.patch](dmenu-toggle-position-20210904-d78ff08.patch)

Author
------
* NRK <nrk@disroot.org>
