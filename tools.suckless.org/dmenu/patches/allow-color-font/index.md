Allow Color font
================

Description
-----------
By default dmenu will block using colour fonts because a bug in libXft [will
cause dmenu to crash][bug]. However, if you build it against a [patched version
of libXft][patch] it will work fine, but you need to remove the special
condition in dmenu.

This simple patch removes that check, so colour fonts work.

Again, if you don't patch libXft then dmenu will *crash*.

[bug]: https://gitlab.freedesktop.org/xorg/lib/libxft/-/issues/6
[patch]: https://gitlab.freedesktop.org/xorg/lib/libxft/-/merge_requests/1

Download
--------
* For 5.0: [dmenu-allow-color-font-5.0.diff](dmenu-allow-color-font-5.0.diff)

Authors
-------
* Martin Tournoij
