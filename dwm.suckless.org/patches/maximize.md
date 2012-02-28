MOVERESIZE
==========

Description
-----------

These patch provide helper functions for maximizing, horizontally and
vertically, floating windows using keybindings.

Usage
-----
Insert the bindings into the keys list. Here is an example:

	{ MODKEY|ControlMask|ShiftMask, XK_h,           togglehorizontalmax, NULL },
	{ MODKEY|ControlMask|ShiftMask, XK_l,           togglehorizontalmax, NULL },
	{ MODKEY|ControlMask|ShiftMask, XK_j,           toggleverticalmax,   NULL },
	{ MODKEY|ControlMask|ShiftMask, XK_k,           toggleverticalmax,   NULL },
	{ MODKEY|ControlMask,           XK_m,           togglemaximize,      {0} },

Download
--------
* [dwm-6.0-moveresize.diff][0]

[0]: dwm-6.0-moveresize.diff

Author
------

 * Jan Christoph Ebersbach - <jceb@e-jc.de>
