allowkillrule
=============

Description
-----------

This patch adds a rule which disables the ability to kill clients through the
killclient function. You can choose if you want clients to be killable by
default or not by setting `allowkill` to either `0` or `1`. It also includes
a `toggleallowkill` keybind (by default MODKEY+q) which toggles it for the
focused client. This is useful if you find that you kill clients
often by accident.

Download
--------
* [dwm-allowkillrule-6.4.diff](dwm-allowkillrule-6.4.diff)

A mirror is also available [here](https://git.speedie.site/patches).

Author
------
* speedie <speedie@speedie.site>
