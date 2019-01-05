autostart
=========

Description
-----------

This patch will make dwm run "~/.dwm/autostart_blocking.sh" and
"~/.dwm/autostart.sh &" before entering the handler loop. One or both of these
files can be ommited.

Be aware that dwm will not startup as long as autostart_blocking.sh is running
and will stay completely unresponsive. For obvious reasons it is generally a
bad idea to start X-applications here :)

Download
--------

* [dwm-autostart-20161205-bb3bd6f.diff](dwm-autostart-20161205-bb3bd6f.diff)

Authors
-------

* Pulled from: [https://github.com/axelGschaider/dwm-patch-autostart.sh/](https://github.com/axelGschaider/dwm-patch-autostart.sh/)
* Adapted to recent version Simon Bremer <simon.bremer@sys24.org>
