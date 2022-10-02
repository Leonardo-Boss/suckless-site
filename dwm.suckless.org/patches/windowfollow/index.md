windowfollow
============

![windowfollow screenshot](screenshot.png)

Description
-----------
Provides "window following" behaviour, which causes *the* tag/monitor a window
is moved to with `tag` or `tagmon` to be focused.
The behaviour is affected in strange ways by which monitor the cursor is on, but
this is true for dwm normally.

An icon indicating whether this behaviour is active is added to the bar:
* <code>v</code> means window following is off.
* <code>&gt;</code> means window following is on.

The `togglefollow` function toggles whether this occurs on the current monitor.
By default, this is triggered by `MODKEY+n` and by clicking the icon.

The `WFDEFAULT` macro in `config.def.h` is used to determine whether window
following should be on by default, and the values of `WFACTIVE` and `WFINACTIVE`
can be changed to other `char` values (which must be different) so the icon
looks different.


Download
--------
* [dwm-windowfollow-6.3.diff](dwm-windowfollow-6.3.diff)
(Probably compatible with 6.2 and older.)

* [dwm-windowfollow-20221002-69d5652.diff](dwm-windowfollow-20221002-69d5652.diff)
(Accounts for commit
[`5799dd1fca6576b662d299e210cd5933b29d502d`
](https://git.suckless.org/dwm/commit/5799dd1fca6576b662d299e210cd5933b29d502d.html))

Author
------
* Aidan Hall - aidan DOT hall202 AT google's email domain
