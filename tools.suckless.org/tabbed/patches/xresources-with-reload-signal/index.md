xresources with signal reloading
================================

Description
-----------
This patch adds the ability to configure tabbed via Xresources and signal reloading.
This patch is not based on [tabbed's xresources patch](https://tools.suckless.org/tabbed/patches/xresources) and is extended from [my build of tabbed](https://git.mahdi.pw/tabbed).

You can basically pass a `USR1` signal to all tabbed processes, after updating your Xresources to reload the settings:

`pidof tabbed | xargs kill -s USR1`

This patch functions similiar to [st's xresources with reload signal patch](https://st.suckless.org/patches/xresources-with-reload-signal/).

Download
--------
* [tabbed-xresources-signal-reloading-20220622-014eabf.diff](tabbed-xresources-signal-reloading-20220622-014eabf.diff)

Authors
-------
* Mahdi Mirzade - <http://mahdi.pw>
