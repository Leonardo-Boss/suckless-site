blinking cursor
===============

Description
-----------
This patch allows the use of a blinking cursor.

To demonstrate the available cursor styles, try these commands:
	echo -e -n "\x1b[\x30 q" # blinking block
	echo -e -n "\x1b[\x31 q" # blinking block (default)
	echo -e -n "\x1b[\x32 q" # steady block
	echo -e -n "\x1b[\x33 q" # blinking underline
	echo -e -n "\x1b[\x34 q" # steady underline
	echo -e -n "\x1b[\x35 q" # blinking bar
	echo -e -n "\x1b[\x36 q" # steady bar

Notes
-----
* Only cursor styles 0, 1, 3, and 5 blink.  Set `cursorstyle` accordingly.
* Cursor styles are defined [here](https://invisible-island.net/xterm/ctlseqs/ctlseqs.html#h4-Functions-using-CSI-_-ordered-by-the-final-character-lparen-s-rparen:CSI-Ps-SP-q.1D81).

Download
--------
* [st-blinking\_cursor-20200511-914fb82.diff](st-blinking_cursor-20200511-914fb82.diff)

Authors
-------
* Genki Sky - <https://lists.suckless.org/hackers/1708/15376.html>
* Steve Ward - <planet36@gmail.com> (914fb82 change)
