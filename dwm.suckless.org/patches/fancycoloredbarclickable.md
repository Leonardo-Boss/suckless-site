fancycoloredbarclickable
========================

Description
-----------
`fancycoloredbarclickable` provides colors in the status area, shows the
titles of all visible clients, and provides a function to select a client by
clicking on its title.

This patch combines [fancybar](fancybar) and [statuscolors](statuscolors) with
the additional `selectby-click-on-title` function.

The fancybar patch used is rather new and unchanged, while the statuscolor
patch is older and modified. The original statuscolor patch made gaps after
changing the color and used its own color definition everywhere. This modified
version creates no gaps and the default color definition is used everywhere
but in the status area.

[dwmd][2] is an extensible status script with color support.

Download
--------
* [dwm-fancycoloredbarclickable.diff][1]

Gluer
-----
...for this is a patch of patches; I'm not really the author, but the one who
glued things together. ;)

* Stefan Mark - <0mark@unserver.de>

[1]: https://svn.0mark.unserver.de/dwm/trunk/patches/dwm-fancycoloredbarclickable.diff
[2]: http://0mark.unserver.de/dwmd
