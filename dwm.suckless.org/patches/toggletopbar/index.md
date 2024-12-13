toggletopbar
============

Description
-----------
This very simple patch adds a keybind (by default MODKEY + t) which changes the position of the bar during runtime.

Because of the way the barpadding patch works, there needs to be a special patch for barpadding users as otherwise the bar will be positioned outside the screen. This patch should be applied on top of barpadding.

The systray patch will also conflict, but only if barpadding is patched as well. To solve this, see [this commit](https://codeberg.org/speedie/speedwm/commit/0b9551fffe868c2efac6b3639443073c967d895c.patch) and [this commit](https://codeberg.org/speedie/speedwm/commit/1003d20915b7fab1492e3b7ea1c5038fa11ad324.patch). Adapt this to your own build.

Download
--------
* [dwm-toggletopbar-6.4.diff](dwm-toggletopbar-6.4.diff)
* [dwm-toggletopbar-barpadding-6.4.diff](dwm-toggletopbar-barpadding-6.4.diff)

Author
------
* speedie <speedie@duck.com>
