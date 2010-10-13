PER-WINDOW KEYBOARD LAYOUT
===========

Description
-----------
Basically, this patch implements per-window keyboard layout support in dwm.
It makes dwm remember current keyboard layout when a window is unfocued,
and restore it back when that window is focused again. 

Notes
-----------
Andreas Amann pointed out that "you cannot switch between tags per mouse
if an alternate layout is activated". He kindly created a patch that fixes
this: [see ml](http://lists.suckless.org/dev/1010/6195.html).

Download
--------
* [dwm-5.9-pwkl.diff](dwm-5.9-pwkl.diff) (1.4K) (20101013)

Author
------
* Evgeny Grablyk - <evgeny.grablyk@gmail.com>
