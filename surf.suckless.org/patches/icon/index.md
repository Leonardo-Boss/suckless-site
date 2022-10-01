Icon
====

Description
-----------

This patch sets the `_NET_WM_ICON` ewmh property for gtk-created windows.

This property is used by some window managers to display an icon for the window on the title bar.
It is also used by some programs (like pagers and taskbars) to show a miniature for the window.

This patch sets icons of size 16x16, 32x32 and 48x48.
The icons are found on the new file `surf.xpm`, which is included directly in the source code.
The icons look like `surf.png` except that they have a white border (to make them distinguishable on dark taskbars/titlebars), and the proportion is slightly modified to make the image fit on small icons.

If you use dwm, you can get window icons on the status bar with the [winicon](https://dwm.suckless.org/patches/winicon/) patch.

Download
--------

* [surf-icon-2.1.diff](surf-icon-2.1.diff) (5876) (20221001)

Authors
-------

* Lucas de Sena <lucas at seninha dot org>
