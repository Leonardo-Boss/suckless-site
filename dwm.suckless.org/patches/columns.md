columns
=======

Description
-----------
This patch adds an extra layout to dwm called `col` in which the windows are
arranged in colums of equal size.  The number of columns is always nmaster + 1,
and the last column is a stack of leftover windows just like the normal tile
layout.

Download
--------
* [dwm-r1580-col.diff](dwm-r1580-col.diff)

Author
------
* Evan Gates (emg)<evan.gates@gmail.com>

Special Version
---------------
This patch tweaks the one above to respect the master width % (mfact in config.h)
and resizings.  So instead of the entire screen divided into even columns only 
the master portion is, with the remaining space becoming the last column for the
stack.  It effectively acts like the default tiling mode, except provides for
vertical instead of horizontal master windows.

* [dwm-6.0-column_master.diff](dwm-6.0-column_master.diff)

* noah dot rosser gmail
