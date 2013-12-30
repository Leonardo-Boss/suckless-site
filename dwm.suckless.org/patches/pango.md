Pango
=====

Description
-----------

This patch adds pango support for the status bar.

I find pango a better alternative than xft because it supports chains of fallback fonts
out of the box, so you can use -for example- iconic fonts as your second family: "DejaVu
Sans, Icons 8". The Icons family is a non-overlapping merge of Awesome and Ionicons fonts
I've made for my statusbar. In case you're interested:
https://aur.archlinux.org/packages/ttf-font-icons/ (there is a cheatsheet with the icons
and their unicode points linked there).

This is not achievable using xft without further effort. Don't be mislead by the fact that
fontconfig understands descriptors like "DejaVu Sans, Icons-8" or even font sequences
defined as alias in your fonts.conf. xft will pick one font once and for all, not on a
char-by-char basis.

Download
--------

* [dwm-6.0-pango.diff](dwm-6.0-pango.diff) (8.3k) (30 Dec 2013)

Author
------

* Carlos Pita (memeplex)<carlosjosepita@gmail.com> (I just polished and fixed a patch that
  I found around the web).
