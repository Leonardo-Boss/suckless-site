swallow
=======

Description
-----------

This patch adds "window swallowing" to dwm, a la `rio` from Plan 9.

Windows that are marked with the `isterminal` flag (settable using rules in
`config.h`) will swallow a window opened by any descendant processes.
For example, if you open a terminal and then in that terminal type `xclock`,
the `xclock` window takes the place of that terminal window.
Closing the `xclock` window restores the terminal window in the current
position.

This patch is useful for users who tend to do most or all of their work
from the command line, but sometimes need to use a graphical program.
This patch avoids cluttering the desktop with unused terminals.

(`dmenu` could be used, but if you are deep in a directory hierarchy and
want to, say, view a PDF, cutting and pasting the path to `dmenu` takes
longer than just running `mupdf`.)

Download
--------

 * [dwm-swallow-6.1.diff](dwm-swallow-6.1.diff)
 * [dwm-swallow-20160715-56a31dc.diff](dwm-swallow-20160715-56a31dc.diff)

Notes
-----

The window swallowing functionality requires `dwm` to walk the process tree,
which is an inherently OS-specific task. Only Linux is supported at this time.
Please contact the author (jking@deadpixi.com) if you would like to help
expand the list of supported operating systems.

Also please note that building with this patch requires `libxcb`,
`Xlib-libxcb`, and `xcb-res`.
This is due to the use of the latest revision of the X Resource Extension,
which is unsupported in vanilla Xlib.

Only terminals created by local processes can swallow windows, and only
windows created by local processes can be swallowed.

Please see [deadpixi-dwm](https://github.com/deadpixi/deadpixi-dwm) for the
development site.

Authors
-------

 * Rob King - <jking@deadpixi.com>
 * Laslo Hunhold - <dev@frign.de> (git port)
