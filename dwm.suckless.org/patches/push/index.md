push up/down
============

Description
-----------
`pushup` and `pushdown` provide a way to move clients inside the clients list.

	#include "push.c"

	static Key keys[] = {
		...
		{ MODKEY|ControlMask,           XK_j,      pushdown,       {0} },
		{ MODKEY|ControlMask,           XK_k,      pushup,         {0} },

`push_no_master` is the same as the regular `push` patch, but it does not push
up nor push down into the master area. We have zoom() for that.

Download
--------
* [dwm-push-20160731-56a31dc.diff](dwm-push-20160731-56a31dc.diff)
* [dwm-push-6.0.diff](dwm-push-6.0.diff) (1332b) - 2012/4/6
* [dwm-6.0-push\_no\_master.diff](dwm-6.0-push_no_master.diff)
* [dwm-push-6.1.diff](dwm-push-6.1.diff) (1402b) - 2014/2/9
* [dwm-6.1-push\_no\_master.diff](dwm-6.1-push_no_master.diff) - 2015/11/21
* [dwm-6.2-push\_no\_master.diff](dwm-6.2-push_no_master.diff) - 2020/03/08

Note
----
This patch seems to be equivalent to the [movestack](../movestack/) patch.

Author
------
* Unknown?
* Updated by Jan Christoph Ebersbach <jceb@e-jc.de>
* push\_no\_master by Jente Hidskes <jthidskes@outlook.com>
