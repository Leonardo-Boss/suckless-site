horizontal
===============

Description
-----------
This patch provides a horizontal layout similar to many other window managers.
The width of each window is the width of the monitor divided by the number of
windows on the screen.

Currently, there is an issue with many GTK-based programs where having more than
three windows open on a tag causes the windows to overlap.

Horizontal Layout
----------------------
	horizontal    (III)
	+-----+-----+-----+
	|     |     |     |
	|     |     |     |
	|     |     |     |
	|     |     |     |
	|     |     |     |
	+-----+-----+-----+

Download
--------
* [dwm-horizontal-6.4.diff](dwm-horizontal-6.4.diff) (20230913)

Authors
-------
* Forrest Bushstone- `<fgb.1@protonmail.com>`
