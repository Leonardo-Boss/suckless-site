
Gaps
====

Description
-----------

This patch modifies the tile layout to add a gap between clients that helps to visually
diferentiate between selected borders and normal borders and so provides an additional
visual hint to identify the currently selected client.  OTOH, there's no gap between a
client and the screen frame in order to reduce the waste of screen space.

To configure the gap size just set the configuration variable `gappx`.

There is a variation of the patch for the [xtile](xtile) layout also.

Download
--------

* For vanilla tile: [dwm-6.0-gaps.diff](dwm-6.0-gaps.diff)

* For xtile tile: [dwm-6.0-xtile-gaps.diff](dwm-6.0-xtile-gaps.diff)

Author
------

* Carlos Pita (memeplex) <carlosjosepita@gmail.com>
