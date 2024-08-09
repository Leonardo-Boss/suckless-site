Autoraise windows
=================

Description
-----------
Autoraise windows when gaining focus with mouse hovering - in floating layout only.
By default when hovering with mouse over windows they get focus, but they are not
autoraised. That's the optimal option on tiling or monocle layout, because small
floating windows could be hidden if mouse was moved on a bigger tiled or full screen
window.

This patch autoraises windows when gaining focus with mouse hovering - in floating
layout only. By default windows are raised if selected by key shortcut or if
mod key + left mouse button is pressed; impractical for my tastes.

Download
--------
* [dwm-autoraise_windows-20240809-d2e6bd5b.diff](dwm-autoraise_windows-20240809-d2e6bd5b.diff)

Authors
-------
* Κρακ Άουτ - <krackout [at] gmx dot com>
