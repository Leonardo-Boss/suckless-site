MOVERESIZE AND MAXIMIZE VERTICAL/HORIZONTAL PATCH
=================================================

Description
-----------
These patches provide helper functions for moving and resizing floating windows using keybindings.

From dwm 6.0 onward the moveresize is aware of the screen sizes in a multi monitor setup.

There is another implementation found below the download section.

Configuration
-------------
This is a sample 'hjkl'-style configuration:

    { MODKEY,                       XK_a,           moveresize,          {.v = "-10x 0y 0w 0h" } },
    { MODKEY,                       XK_d,           moveresize,          {.v = "10x 0y 0w 0h" } },
    { MODKEY,                       XK_s,           moveresize,          {.v = "0x 10y 0w 0h" } },
    { MODKEY,                       XK_w,           moveresize,          {.v = "0x -10y 0w 0h" } },
    { MODKEY|ControlMask,           XK_a,           moveresize,          {.v = "0X 0y 0w 0h" } },
    { MODKEY|ControlMask,           XK_d,           moveresize,          {.v = "9000X 0y 0w 0h" } },
    { MODKEY|ControlMask,           XK_s,           moveresize,          {.v = "0x 9000Y 0w 0h" } },
    { MODKEY|ControlMask,           XK_w,           moveresize,          {.v = "0x 15Y 0w 0h" } },
    { MODKEY|ShiftMask,             XK_a,           moveresize,          {.v = "0x 0y -10w 0h" } },
    { MODKEY|ShiftMask,             XK_d,           moveresize,          {.v = "0x 0y 10w 0h" } },
    { MODKEY|ShiftMask,             XK_s,           moveresize,          {.v = "0x 0y 0w 10h" } },
    { MODKEY|ShiftMask,             XK_w,           moveresize,          {.v = "0x 0y 0w -10h" } },
    { MODKEY|ControlMask|ShiftMask, XK_h,           togglehorizontalmax, NULL },
    { MODKEY|ControlMask|ShiftMask, XK_l,           togglehorizontalmax, NULL },
    { MODKEY|ControlMask|ShiftMask, XK_j,           toggleverticalmax,   NULL },
    { MODKEY|ControlMask|ShiftMask, XK_k,           toggleverticalmax,   NULL },
    { MODKEY|ControlMask,           XK_m,           togglemaximize,      {0} },


Download
--------

6.0

 * [dwm-6.0-moveresize.diff][9]
 * [dwm-6.0-maximize_vert_horz.diff][10]

5.0

 * [dwm-5.0-moveresize.diff][7]
 * [dwm-5.0-maximize_vert_horz.diff][8]

4.6

 * [dwm-4.6-moveresize.diff][5]
 * [dwm-4.6-maximize_vert_horz.diff][6]

4.5

 * [dwm-4.5-moveresize.diff][3]
 * [dwm-4.5-maximize_vert_horz.diff][4]

4.4

 * [dwm-4.4-moveresize.diff][1]
 * [dwm-4.4-maximize_vert_horz.diff][2]

Author
------
 * Jan Christoph Ebersbach - <jceb@e-jc.de>

[1]: http://www.e-jc.de/dwm/dwm-4.4-moveresize.diff
[2]: http://www.e-jc.de/dwm/dwm-4.4-maximize_vert_horz.diff
[3]: http://www.e-jc.de/dwm/4.5/dwm-4.5-tip_ac233c362502-moveresize.diff
[4]: http://www.e-jc.de/dwm/4.5/dwm-4.5-tip_ac233c362502-maximize_vert_horz.diff
[5]: http://www.e-jc.de/dwm/4.6/current/dwm-4.6-moveresize.diff
[6]: http://www.e-jc.de/dwm/4.6/current/dwm-4.6-maximize_vert_horz.diff
[7]: http://www.e-jc.de/dwm/5.0/current/dwm-5.0-moveresize.diff
[8]: http://www.e-jc.de/dwm/5.0/current/dwm-5.0-maximize_vert_horz.diff
[9]: dwm-6.0-moveresize.diff
[10]: dwm-6.0-maximize_vert_horz.diff

Description
-----------

This changes allows you to move and resize dwm's clients using keyboard
bindings.


Usage
-----

 1. Put the following `moveresize()` function somewhere in your `dwm.c`,
    **after** the line which includes the config.h file:

	static void
	moveresize(const Arg *arg)
	{

		XEvent ev;
		Monitor *m = selmon;

		if(!(m->sel && arg && arg->v && m->sel->isfloating))
			return;

		resize(m->sel, m->sel->x + ((int *)arg->v)[0],
			m->sel->y + ((int *)arg->v)[1],
			m->sel->w + ((int *)arg->v)[2],
			m->sel->h + ((int *)arg->v)[3],
			True);

		while(XCheckMaskEvent(dpy, EnterWindowMask, &ev));
	}

 2. Insert the bindings into the keys list. Here is an example which uses the
    arrow keys to move (mod+arrow) or resize (mod+shift+arrow) the selected
    client:

        { MODKEY,                       XK_Down,   moveresize,     {.v = (int []){ 0, 25, 0, 0 }}},
        { MODKEY,                       XK_Up,     moveresize,     {.v = (int []){ 0, -25, 0, 0 }}},
        { MODKEY,                       XK_Right,  moveresize,     {.v = (int []){ 25, 0, 0, 0 }}},
        { MODKEY,                       XK_Left,   moveresize,     {.v = (int []){ -25, 0, 0, 0 }}},
        { MODKEY|ShiftMask,             XK_Down,   moveresize,     {.v = (int []){ 0, 0, 0, 25 }}},
        { MODKEY|ShiftMask,             XK_Up,     moveresize,     {.v = (int []){ 0, 0, 0, -25 }}},
        { MODKEY|ShiftMask,             XK_Right,  moveresize,     {.v = (int []){ 0, 0, 25, 0 }}},
        { MODKEY|ShiftMask,             XK_Left,   moveresize,     {.v = (int []){ 0, 0, -25, 0 }}},

If you want to automatically toggle the client floating when move/resize,
replace the `if()` statement above with this code:

	if(!(m->sel && arg && arg->v))
		return;
	if(m->lt[m->sellt]->arrange && !m->sel->isfloating)
		togglefloating(NULL);

Mantainer
---------

 * Claudio M. Alessi - <smoppy@gmail.com>
