# push up/down

## Description

`pushup` and `pushdown` provide a way to move clients inside the clients list.

	#include "push.c"
	
	static Key keys[] = {
		...
		{ MODKEY|ControlMask,           XK_j,           pushdown,       {0} },
		{ MODKEY|ControlMask,           XK_k,           pushup,         {0} },

## Download
Patches against different versions of dwm are available at
[dwm-clean-patches](https://bitbucket.org/jceb81/dwm-clean-patches/src).

 * [dwm-10e232f9ace7-push.diff](dwm-10e232f9ace7-push.diff) (1332b) (20120406)
 * [dwm-6.0-push.diff](dwm-6.0-push.diff) (1332b) (20120406)
 * [push.c](push.c) (dwm 5.7.1) (20090927)
 * [push-5.6.c](historical/push-5.6.c) (1K) (20090709)
 * [push-5.3.c](historical/push-5.3.c) (1K) (20090124)

## Note

This patch seems to be equivalent to the [movestack](movestack) patch.

## Author
 * Unknown?
 * Updated by Jan Christoph Ebersbach <jceb@e-jc.de>
