columns
=======

Description
-----------
This patch adds an extra layout to dwm called `col` in which the windows in the
master area are arranged in colums of equal size. The number of columns is
always nmaster + 1, and the last column is a stack of leftover windows just
like the normal tile layout. It effectively acts like the default tiling mode,
except provides for vertical instead of horizontal master windows.

Download
--------
* [dwm-columns-6.0.diff](dwm-columns-6.0.diff)
* [dwm-columns-6.2.diff](dwm-columns-6.2.diff)

Author
------
* Evan Gates (emg)<evan.gates@gmail.com>
* Noah Rosser <noah.rosser@gmail.com>
* Louis Bettens <louis@bettens.info> (6.2 port)
