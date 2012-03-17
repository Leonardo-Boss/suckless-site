# push up/down

## Description

`pushup` and `pushdown` provide a way to move clients inside the clients list.

	#include "push.c"
	
	static Key keys[] = {
		...
		{ MODKEY|ControlMask,           XK_j,           pushdown,       {0} },
		{ MODKEY|ControlMask,           XK_k,           pushup,         {0} },

## Download

* [dwm-6.0-push.diff](dwm-6.0-push.diff) (1.3K) (20120214)
* [push.c](push.c) (dwm 5.7.1) (20090927)
* [push-5.6.c](historical/push-5.6.c) (1K) (20090709)
* [push-5.3.c](historical/push-5.3.c) (1K) (20090124)

## Note

This patch seems to be equivalent to the [movestack](movestack) patch.
