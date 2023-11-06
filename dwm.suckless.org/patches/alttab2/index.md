Alt-tab2
=======

Description
-----------
This patch is based on [alt-tab](../alt-tab/).
It adds alt-tab like functionality to dwm,
by cycling through windows/clients in their recently used order.
Tag `~0` is used to view all clients while doing so.
One can also click to focus a window.
In order to use this patch [winview](../winview/) is also necessary.

Rationale
---------
For whatever reason, the original alt-tab patch made dwm crash for me.
Besides, it was a huge patch, this version is simplified to use dwm's
core features + winview patch instead of drawing an alt tab window.

Configuration
---------------------
* `tabModKey` - If this key is hold the alt-tab functionality stays active. This key must be the same as key that is used to active function alttab
* `tabCycleKey` - If this key is hit the alt-tab program moves one position forward in clients. This key must be the same as key that is used to active function alttab

`tabModkey` and `tabCycleKey` are keycodes values.
In case you use to other keys, checkout the instructions in
[alt-tab](../alt-tab/index.md).

Support
-----
This patch is kept alive on my [github](https://github.com/lucas-mior/dwm).

Download
--------
* [dwm-alttab2-6.4.diff](dwm-alttab2-6.4.diff) (patch on top of winview)
* [dwm-alttab2+winview-6.4.diff](dwm-alttab2+winview-6.4.diff) (winview + alttab2 as a single patch)
