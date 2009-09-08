# PUSH UP/DOWN

## Description

`pushup` and `pushdown` provide a way to move clients inside the clients list.

	#include "push.c"
	
	static Key keys[] = {
		...
		{ MODKEY|ControlMask,           XK_j,           pushdown,       {0} },
		{ MODKEY|ControlMask,           XK_k,           pushup,         {0} },

## Download

* [push.c](push.c) (dwm 5.6.1) (20090709)
