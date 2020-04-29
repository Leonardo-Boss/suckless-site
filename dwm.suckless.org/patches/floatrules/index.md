floatrules
==========

Description
-----------
Inspired by [smartborders](../smartborders/).

This patch adds 5 extra variables to the 'rules' array in `config.def.h`. These are:
* `floatx`, `floaty`, `floatw`, `floath` (if the window has the rule `isfloating`, the window will spawn with the geometry specified by these vairables)
* `floatborderpx` (border width when window is floating)

Please note that this patch needs `rm config.h` to be added to the `Makefile`.

Screenshots:
![floatrules screenshot](floatrules.png)

Download
--------
* [dwm-floatrules-6.2.diff](dwm-floatrules-6.2.diff) (2020-03-01)

Author
------
* Alex Cole
* Jakub Profota (fix 2020-03-22)
