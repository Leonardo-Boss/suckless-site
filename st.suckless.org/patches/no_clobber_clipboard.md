Do not clobber clipboard
========================

Description
-----------

By default, st sets both the primary selection and the clipboard
selection to the (mouse) selected text.  This patch changes st so that
selecting text affects only the primary selection, not the clipboard
selection.  This patch makes st conform to the guidelines at
[freedesktop.org](http://standards.freedesktop.org/clipboards-spec/clipboards-latest.txt).

Download
--------

* [st-no-clobber-clipboard.diff](st-no-clobber-clipboard.diff)

Author
------

 * Wander Nauta - info@wandernauta.nl
