warp
====

Description
-----------

This patch warps the mouse cursor each time another window gets focused to the
middle of the window.

Download
--------

* [dwm-5.9-warp.diff](dwm-5.9-warp.diff) (1.3k) (20111028)
* [dwm-r1525-warp.diff](historical/dwm-r1525-warp.diff) (2.3k) (20100911)
  In the patch for r1525, there is a problem with this caused by `XSelectInput`, causing the
  statusbar to freeze. Interestingly, the [stdin](stdin) patch works around this.

Author
------

* Evan Gates (emg) <evan.gates@gmail.com>
* Enno Boland (Gottox)
