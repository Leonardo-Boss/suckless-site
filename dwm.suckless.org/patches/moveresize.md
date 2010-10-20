# MOVERESIZE

## Description

This addition to `config.h` allows you to move and resize dwm's clients using
keyboard bindings. See [historical patches](historical) for older versions.

## Usage

 1. Put the following `moveresize()` function somewhere in your `config.h` file:

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

## Mantainer

 * Claudio M. Alessi - <smoppy@gmail.com>

