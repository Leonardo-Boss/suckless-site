setxkbgroup
===========

Description
-----------
The patch adds a new `setxkbgroup` function to be used inside
`keys[]`. It allows idempotent keyboard layout switching from dwm
itself.

Suppose you've configured keyboard layouts in X server like this:

`setxkbmap -option 'grp:rctrl_toggle' -layout 'us,ru,epo,gr(bare)'`

And then have defined a few key bindings in the `keys[]` array in dwm
`config.h` like this:

	...
		{ MODKEY,                       XK_u,      setxkbgroup,    {.ui = 0 } },
		{ MODKEY,                       XK_r,      setxkbgroup,    {.ui = 1 } },
		{ MODKEY,                       XK_e,      setxkbgroup,    {.ui = 2 } },
		{ MODKEY,                       XK_g,      setxkbgroup,    {.ui = 3 } },
	...

Configured like this, `MOD+r` in dwm immediately activates Russian
layout, `MOD+g` switches to Greek and `MOD+u` gets the US layout. You
don't need to track how many times to press Right Ctrl (or whatever)
key to use a desired layout.

Download
--------
* [dwm-setxkbgroup-6.4.diff](dwm-setxkbgroup-6.4.diff)

Author
------
* Anton Yabchinskiy <arn+53a4f52@bestmx.net>
