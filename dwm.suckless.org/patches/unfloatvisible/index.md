unfloatvisible
==============

Description
-----------
`unfloatvisible` resets isfloating on any visible windows that have it set.
Optionally also applies a layout.

	#include "push.c"
	static Key keys[] = {
		...
		{ MODKEY|ShiftMask,             XK_space,  unfloatvisible, {0} },
		{ MODKEY|ShiftMask,             XK_t,      unfloatvisible, {.v = &layouts[1]} },

Download
--------
* [dwm-unfloatvisible-6.2.diff](dwm-unfloatvisible-6.2.diff) (20190422)

Author
------
* Alexander Courtis
