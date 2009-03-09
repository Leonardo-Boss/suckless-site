LIMIT CLIENTS PER TAG PATCH
===========================

Last update: 2007-10-25

See [nmaster][2] for cpt on dwm-4.6.

This patch allows you to limit the number of clients to be shown.
This restriction only affects non-floating windows.

This patch can be used as a 'set' or 'toggle' mode.

Tips
----

* To show all windows put "-1" as argument value. 
* To only display floating windows put "0" as argument.
* For a toggling pair put "^2".

Configuration
-------------

The MODKEY+w toggles between two visible tiled windows and MODKEY+SHIFT+w hides all tiled windows.

        { MODKEY|ShiftMask,             XK_q,           clientspertag,  "0" }, \
        { MODKEY,                       XK_q,           clientspertag,  "^1" }, \
        { MODKEY,                       XK_w,           clientspertag,  "^2" }, \
        { MODKEY,                       XK_e,           clientspertag,  "^3" }, \

Download
--------

You can download this patch [dwm-4.4-cpt.patch](http://news.nopcode.org/dwm-4.4-cpt.patch) (3K)

See [nmaster][1] for dwm-4.6.

Here's a [patch][2] from <i>Ritesh Kumar</i> that modifies dwm.c to show cpt and total number of clients in the statusbar.

TODO
----

* Maybe it should be renamed to "tiledlimit" or "clientslimit". 
* Think about a way to make the focused client always visible (enhaced monocle patch?)

Feedback is welcome :)

AUTHOR
------

* pancake -- pancake /at/ youterm /dot/ com

[1]: /dwm/patches/nmaster.html
[2]: http://news.nopcode.org/cptdwm-4.6.diff

