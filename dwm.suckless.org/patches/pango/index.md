Pango
=====

Description
-----------

This relatively simple patch adds pango support for the status bar. This not only adds
TrueType font support but also opens a couple of interesting possibilities that are
not possible under barebone xft:

* **Simple markup** for status messages (optional, enable/disable it in your config.h)
  using [pango markup](https://developer.gnome.org/pango/stable/PangoMarkupFormat.html).
  So you can format your status messages specifying fg/bg colors, sizes, sub/superscripts,
  underline, emphasis, bold, etc. You can do dynamic font switching, also! To play safe
  with the rest of the status bar, markup support is restricted to the status message area
  over which you have direct control.

* **Fallback fonts**, so you can use -for example- some set of iconic fonts as your second
  family: "DejaVu Sans, Icons 8" [1]. There are tons of monochromatic nice looking TTF
  icons around the web these days as webfonts are becoming more and more popular. Notice
  that you can also use the more powerful font switching enabled by pango markup to
  achieve the same goal.  Also don't be mislead by the fact that fontconfig understands
  descriptors like "DejaVu Sans, Icons-8" or even font sequences defined as alias in your
  fonts.conf. xft will pick one font once and for all, not on a char-by-char basis.

[1] The [Icons family](https://aur.archlinux.org/packages/ttf-font-icons/) is a
  non-overlapping merge of Awesome and Ionicons fonts I've made for my statusbar. In case
  you want to take a look at it, there is a
  [cheatsheet](https://www.dropbox.com/s/9iysh2i0gadi4ic/icons.pdf) listing the icons and
  their unicode points.

Download
--------

* [dwm-pango-6.0.diff](dwm-pango-6.0.diff)

Author
------

* Carlos Pita (memeplex) <carlosjosepita@gmail.com>
