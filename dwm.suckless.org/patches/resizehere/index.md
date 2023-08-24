resizehere
==========

Description
-----------
Changes the resizing behaviour. Instead of warping the pointer to the bottom right corner,
the pointer will stay in the same place and the window will resize as you move your mouse.

	Positioning the Mouse over the Client
	+-------------------------+
	|                         |
	|   +---------+           |
	|   |         |           |
	|   |    C    |           |
	|   |  M      |           |
	|   +---------+           |
	|                         |
	+-------------------------+

	Original behaviour:
	Resizing warps the mouse to the bottom right corner
	+-------------------------+
	|                         |
	|   +-------------+       |
	|   |             |       |
	|   |    C        |       |
	|   |             |       |
	|   +-------------M       |
	|                         |
	+-------------------------+

	New behaviour:
	Mouse stays at the same place, resizing happens relative to mouse movement
	+-------------------------+
	|                         |
	|   +-------------+       |
	|   |             |       |
	|   |    C        |       |
	|   |      M      |       |
	|   +-------------+       |
	|                         |
	+-------------------------+

Download
--------
* [dwm-resizehere-20230824-e81f17d.diff](dwm-resizehere-20230824-e81f17d.diff)

Authors
-------
* Gergő Gutyina - <gutyina.gergo.2@gmail.com>
