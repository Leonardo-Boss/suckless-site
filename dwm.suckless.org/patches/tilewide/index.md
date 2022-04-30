tilewide
========

Description
-----------
`tilewide` is a stack layout for dwm. The `tilewide` layout is a variant of the standard `tile` layout. Windows added to the master area will be positioned side by side, instead of one on top of the other. This makes better use of screen space on ultra wide monitors. The stack area remains identical to the original `tile` layout.

	tilewide           ([][]=)       tilewide           ([][]=)
	(1 window in master area)        (2 windows in master area)
	+-----------------+------+       +--------+--------+------+
	|                 |  T1  |       |        |        |  T1  |
	|                 +------+       |        |        +------+
	|        M1       |  T2  |       |   M1   |   M2   |  T2  |
	|                 +------+       |        |        +------+
	|                 |  T3  |       |        |        |  T3  |
	+-----------------+------+       +--------+--------+------+

By default, `tilewide` can be selected with [Alt]+[w].

Download
--------
* [dwm-tilewide-6.3.diff](dwm-tilewide-6.3.diff)

Author
------
* John Urquhart Ferguson (sympodius) - <mail@sympodius.net>
