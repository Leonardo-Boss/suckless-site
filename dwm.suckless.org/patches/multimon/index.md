multimon
========

Description
-----------
These patches provide a number of enhancements for working in a multi-monitor
environment.

monitor marker:
* Adds a small token to the bar that displays the `dwm` monitor number

unified view:
* Provides two wrapper functions that work across all monitors simultaneously
* Can change/toggle the view for all monitors with a single click/key, creating
  a unified workspace

reset view:
* Function and settings for a "default view"
* Supports workflows with a number of always-open core windows, on specific
  tags, where a single click/key switches to them
* Enables per-monitor `mfact`, `nmaster` and list of highlighted tags
* Switches to the configured view on startup

status all:
* Show/update the status on all bars
* Based on [statusallmons](http://dwm.suckless.org/patches/statusallmons), but
  uses a configurable boolean

push up/down:
* Move windows up and down the clients list
* Ported version of [push](http://dwm.suckless.org/patches/push), so it applies
  seamlessly with these patches

swap focus:
* Switch focus between current/last window with a single shortcut
* Based on [swapfocus](http://dwm.suckless.org/patches/swapfocus), but updated
  to work on the newest version

focus on active:
* Switch focus to activated windows
* Based on
  [focusonnetactive](http://dwm.suckless.org/patches/focusonnetactive), but
  uses the original `dwm` code instead of resetting the highlighted tags.

Usage
-----
Other than "focus on active", the default settings and behavior of `dwm` are not
modified by these patches.  The `config.h` configuration needs to be modified
to take advantage of them.

They are intended to be applied in order, one after the other.  They can also
be used independently, except for "reset view" which depends on "monitor
marker".  Using `patch -F10 -p1` will automatically address any rejects.

Example configuration settings with comments are included in `config.def.h` for
each patch.

Download
--------
Version 6.4 (2023-02-19) --
*(commit: `2023-02-17 348f6559ab0d4793db196ffa56ba96ab95a594a6`)*
* [dwm-multimon-1-monitor_marker-6.4.patch](dwm-multimon-1-monitor_marker-6.4.patch)
  (6902b)
* [dwm-multimon-2-unified_view-6.4.patch](dwm-multimon-2-unified_view-6.4.patch)
  (6582b)
* [dwm-multimon-3-reset_view-6.4.patch](dwm-multimon-3-reset_view-6.4.patch)
  (7758b)
* [dwm-multimon-4-status_all-6.4.patch](dwm-multimon-4-status_all-6.4.patch)
  (3946b)
* [dwm-multimon-5-push_up_down-6.4.patch](dwm-multimon-5-push_up_down-6.4.patch)
  (5895b)
* [dwm-multimon-6-swap_focus-6.4.patch](dwm-multimon-6-swap_focus-6.4.patch)
  (6495b)
* [dwm-multimon-7-focus_on_active-6.4.patch](dwm-multimon-7-focus_on_active-6.4.patch)
  (1851b)

Version 6.1 (2014-03-26) --
*(commit: `2013-08-27 cdec9782a1789bd5c3a84772fd59abb9da288597`)*
* [dwm-multimon-1-monitor_marker-6.1.patch](dwm-multimon-1-monitor_marker-6.1.patch)
  (6228b)
* [dwm-multimon-2-unified_view-6.1.patch](dwm-multimon-2-unified_view-6.1.patch)
  (6558b)
* [dwm-multimon-3-reset_view-6.1.patch](dwm-multimon-3-reset_view-6.1.patch)
  (6816b)
* [dwm-multimon-4-status_all-6.1.patch](dwm-multimon-4-status_all-6.1.patch)
  (6165b)

Forked `dwm` repository is maintained at:
[github.com/garybgenett/.dwm](http://github.com/garybgenett/.dwm)

Author
------
* Gary B. Genett - [me@garybgenett.net](mailto:me@garybgenett.net)

Original Submission:
[lists.suckless.org/dev/1403/20488.html](http://lists.suckless.org/dev/1403/20488.html)
