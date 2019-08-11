desktopentry
============

Description
-----------
Enable to find st in a graphical menu and to display it with a nice icon.

After applying this patch you need to run `sudo make install` to
install the desktop-entry. The Makefile is modified such that a symlink
to */usr/share/applications/st.desktop* is created during install and
removed during uninstall.

Download
--------
* [st-desktopentry-0.8.2.diff](st-desktopentry-0.8.2.diff)

Authors
-------
* Aleksandrs Stier
