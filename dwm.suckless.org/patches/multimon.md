multimon
========

Last Updated: 2014-03-25

Description
-----------

These patches provide enhancements for working in a multi-monitor environment.

  * monitor marker
    * Adds a small token to the bar that displays the dwm monitor number.
    * The token has a mouse binding, just like the rest of the bar objects.
  * unified view
    * Provides two wrapper functions that work across all monitors simultaneously.
    * Can change/toggle the view for all monitors, creating a unified workspace.
  * reset view
    * Function and settings for a "default view", for checking on primary tasks which may have been shuffled out of view doing more focused work.
    * Per-monitor default settings for nmaster and tags.
  * status all
    * Show/update the status on all bars.
    * Based on [statusbar on all monitors](http://dwm.suckless.org/patches/statusallmons), but uses a configurable boolean.

Each can be applied independently, if desired, except for "reset view" which references "ClkMonNum" from "unified view" in "config.def.h".  Simply remove the reference to get it to apply and compile.

Example configuration settings with comments are included in "config.def.h" within each patch.

The default settings and behavior of dwm are not modified by these patches.  They provide enhancements and new options only, so there should be minimal conflict with other dwm patches.

Usage
-----

Each patch can be applied using "patch -p1" or "git am":

    cd dwm; patch -p1 <multimon-1-added-monitor-marker-to-bar.diff
-OR-
    cd dwm; git pull; git am multimon-1-added-monitor-marker-to-bar.diff

There are default settings and bindings in "config.def.h" which you will likely want to customize.

Download
--------

Each of the patches was created by "format-patch" based on commit: [cdec9782a1789bd5c3a84772fd59abb9da288597](http://git.suckless.org/dwm/commit/?id=cdec9782a1789bd5c3a84772fd59abb9da288597)

  * monitor marker (6228b): [multimon-1-added-monitor-marker-to-bar.diff](multimon-1-added-monitor-marker-to-bar.diff) -[GitHub](https://github.com/garybgenett/.dwm/commit/143e7f2f3caa047469c7219cd6b0cb704466683f)-
  * unified view   (6558b): [multimon-2-added-n-view-wrappers-for-unified-multi-monitor.diff](multimon-2-added-n-view-wrappers-for-unified-multi-monitor.diff) -[GitHub](https://github.com/garybgenett/.dwm/commit/2521a74714bb7c4b8787f30584f1565cc582928b)-
  * reset view     (6816b): [multimon-3-added-reset_view-function.diff](multimon-3-added-reset_view-function.diff) -[GitHub](https://github.com/garybgenett/.dwm/commit/b9f79c3dd07b285e974b2dfdf2371a72467539bb)-
  * status all     (6165b): [multimon-4-added-statusall-toggle-replacing-need-for-patch.diff](multimon-4-added-statusall-toggle-replacing-need-for-patch.diff) -[GitHub](https://github.com/garybgenett/.dwm/commit/d318ffdc7ab7a365e548776a1d8ed5ccbd67cd42)-

The patches are intended to be applied in order, one after the other, but can also be used independently.

Author
------

 * Gary B. Genett - <me at garybgenett dot net>

---
Original Submission: [http://lists.suckless.org/dev/1403/20488.html](http://lists.suckless.org/dev/1403/20488.html)
