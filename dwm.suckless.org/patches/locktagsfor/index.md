locktagsfor
===========

Description
-----------

To reduce procrastination and focus on individual tasks in workflows
where multiple projects are open in disjoint tag sets, this patch
enables users to lock their currently selected tags for some duration
and force them to focus on what is currently shown on their screen.

The patch retains all WM functionality that does not change tags,
especially multi-monitor setups and layout changes.

Of course it does not support you at all if you procrastinate
away from your computer or just open new unrelated windows.
Forbidding the latter would be much harder and too restrictive
from the perspective of the patch author.

To use this patch add a shortcut to your config.h.
E.g., to lock tags for 300 seconds via MOD+F1, add
`{ MODKEY, XK_F1, locktagsfor, {.ui = 300 } }`

Lastly, if you notice (you will at some point) that the forced
lock hampers your productivity, find the `#if` to enable a
way to break out from the lock.

Download
--------
* [dwm-locktagsfor-20210928-3465be.diff](dwm-locktagsfor-20210928-3465be.diff)

Authors
-------
* v4hn - `<me at v4hn dot de>`

Feedback is more than welcome :-)
