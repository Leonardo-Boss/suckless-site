moveresize
==========

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

2. Add a moveresize() function definition in dwm.c below the line:
	static void movemouse(const Arg *arg);

	static void moveresize(const Arg *arg);

3. Insert the bindings into the keys list. Here is an example which uses the
   arrow keys to move (mod+arrow) or resize (mod+shift+arrow) the selected
   client:

	{ MODKEY,					XK_Down,	moveresize,		{.v = (int []){ 0, 25, 0, 0 }}},
	{ MODKEY,					XK_Up,		moveresize,		{.v = (int []){ 0, -25, 0, 0 }}},
	{ MODKEY,					XK_Right,	moveresize,		{.v = (int []){ 25, 0, 0, 0 }}},
	{ MODKEY,					XK_Left,	moveresize,		{.v = (int []){ -25, 0, 0, 0 }}},
	{ MODKEY|ShiftMask,			XK_Down,	moveresize,		{.v = (int []){ 0, 0, 0, 25 }}},
	{ MODKEY|ShiftMask,			XK_Up,		moveresize,		{.v = (int []){ 0, 0, 0, -25 }}},
	{ MODKEY|ShiftMask,			XK_Right,	moveresize,		{.v = (int []){ 0, 0, 25, 0 }}},
	{ MODKEY|ShiftMask,			XK_Left,	moveresize,		{.v = (int []){ 0, 0, -25, 0 }}},

If you want to automatically toggle the client floating when move/resize,
then replace the second if statement in the moveresize function with this code:

	if (!(m->sel && arg && arg->v))
		return;
	if (m->lt[m->sellt]->arrange && !m->sel->isfloating)
		togglefloating(NULL);

Multi-head
----------
From dwm 6.0 onward there's the following patch which is aware of the screen
sizes in a multi monitor setup. A second patch allows you to maximize windows.

Download
--------
* [dwm-moveresize-6.2.diff](dwm-moveresize-6.2.diff)
* [dwm-moveresize-20160731-56a31dc.diff](dwm-moveresize-20160731-56a31dc.diff)
* [dwm-moveresize-6.1.diff](dwm-moveresize-6.1.diff) (2095b) (20140209)
* [dwm-moveresize-6.0.diff](dwm-moveresize-6.0.diff) (2025b) (20120406)

Authors
-------
* Claudio M. Alessi - <smoppy@gmail.com>
* Jan Christoph Ebersbach - <jceb@e-jc.de>
