dwmgetstatus
============

The status bar text of **dwm** is stored in the WM_NAME X11 property of the
root window, which is managed by dwm. It can be easily retrieved using
standard Unix tools.

Below is the script to do this:

	#!/bin/sh

	xprop -root -notype -f WM_NAME "8u" \
		| sed -n -r 's/WM_NAME = \"(.*)\"/\1/p'

Link: [dwmgetstatus.sh](http://dwm.suckless.org/dwmgetstatus.sh)

Questions
---------

If you have any questions regarding dwmgetstatus, contact Christoph Lohmann
(<20h@r-36.net>).

