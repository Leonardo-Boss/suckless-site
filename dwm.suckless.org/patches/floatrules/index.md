floatrules
==========

Description
-----------
Inspired by [smartborders](../smartborders/).

This patch adds 5 extra variables to the 'rules' array in `config.def.h`. These are:
* `floatx`, `floaty`, `floatw`, `floath` (if the window has the rule `isfloating`, the window will spawn with the geometry specified by these vairables)
* `floatborderpx` (border width when window is floating)

Please note that this patch needs `rm config.h` to be added to the `Makefile`.
Using the latest version is recommended, as there have been a couple of bug fixes since the first.

Screenshots:
![floatrules screenshot](floatrules.png)

Updates
-------
* 2020-11-14: Fixed a bug that added borders to fullscreen windows (Alex Cole)
* 2020-11-07: Added support for multiple monitors (Alex Cole)
* 2020-03-22: Typo fix (Jakub Profota)

Download
--------
* [dwm-floatrules-20201114-d08dd9c.diff](dwm-floatrules-20201114-d08dd9c.diff)
* [dwm-floatrules-20201107-61bb8b2.diff](dwm-floatrules-20201107-61bb8b2.diff)
* [dwm-floatrules-6.2.diff](dwm-floatrules-6.2.diff) (2020-03-01)

Author
------
* Alex Cole (original)
* Jakub Profota
