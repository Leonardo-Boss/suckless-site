BOTTOM STACK PATCH
==================

Description
-----------
This patch provides an additional bottom stack layout for the dwm window manager. (It no longer includes code for 'tileleft' or 'bstacklandscape'.)

Vertical Stack Tiling:
----------------------
	tile          ([]=)
	+----------+------+
	|          |      |
	|          +------+
	|          |      |
	|          +------+
	|          |      |
	|          |      |
	+----------+------+

Bottom Stack Tiling:
--------------------

	bstack        (TTT)
	+-----------------+
	|                 |
	|                 |
	|                 |
	+-----+-----+-----+
	|     |     |     |
	|     |     |     |
	+-----+-----+-----+

Download
--------
* [dwm-5.4-bstack.diff](http://download.sirmacik.lin4all.org/sources/dwm/dwm-5.4-bstack.diff) (2k) (20090406) <-- This is the working one.
* [dwm-5.5-bstack.diff](http://bsdgroup.org/files/dwm-5.5-bstack.diff) (2k) (20090307)
* [dwm-5.4-bstack.diff](http://bsdgroup.org/files/dwm-5.4-bstack.diff) (2k) (20081217)
