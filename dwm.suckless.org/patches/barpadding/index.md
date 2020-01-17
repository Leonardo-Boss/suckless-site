barpadding
==========

Description
-----------
This patch adds variables for verticle and horizontal space between the statusbar and the edge of the screen; unlike [statuspadding](../statuspadding/), which adds padding between the bar's content and the edge of the bar. This patch adds two new variables (both default to 10) to config.def.h:
* `vertpad` (amount of vertical padding)
* `sidepad` (amount of padding either side of the bar)

Compatible with both top and bottom bars as well as the togglebar function.

Please note the following:
* Modifies config.def.h, not config.h. You may need to add `rm config.h` to the 'clean' targets in the Makefile.
* Does not add padding between the statusbar and the window clients. This is so that if you apply the [fullgaps](../fullgaps/) patch or similar, there will be equal space between the windows/screen edge and windows/bar.
* May need `resizehints` to be set to 0 to make the patch look proper, especially if your bar is on the bottom. Modify the 'resizehints' variable in config.def.h.

Screenshots:
![barpadding screenshot](barpadding.png)

Download
--------
* [dwm-barpadding-6.2.diff](dwm-barpadding-6.2.diff) (10.12.2019 - DD.MM.YYYY)

Author
------
* Alex Cole