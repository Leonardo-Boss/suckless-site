MOVE RESIZE AND MAXIMIZE VERTICAL/HORIZONTAL PATCH
==================================================

Description
-----------
These patches provide helper functions for moving and resizing floating windows using keybindings.

Configuration
-------------
This is a sample 'hjkl'-style configuration:

    { MODKEY,                       XK_h,           moveresize,          "-25x 0y 0w 0h" }, \
    { MODKEY,                       XK_l,           moveresize,          "25x 0y 0w 0h" }, \
    { MODKEY,                       XK_j,           moveresize,          "0x 25y 0w 0h" }, \
    { MODKEY,                       XK_k,           moveresize,          "0x -25y 0w 0h" }, \
    { MODKEY|ControlMask,           XK_h,           moveresize,          "0X 0y 0w 0h" }, \
    { MODKEY|ControlMask,           XK_l,           moveresize,          "9000X 0y 0w 0h" }, \
    { MODKEY|ControlMask,           XK_j,           moveresize,          "0x 9000Y 0w 0h" }, \
    { MODKEY|ControlMask,           XK_k,           moveresize,          "0x 15Y 0w 0h" }, \
    { MODKEY|ShiftMask,             XK_h,           moveresize,          "0x 0y -25w 0h" }, \
    { MODKEY|ShiftMask,             XK_l,           moveresize,          "0x 0y 25w 0h" }, \
    { MODKEY|ShiftMask,             XK_j,           moveresize,          "0x 0y 0w 25h" }, \
    { MODKEY|ShiftMask,             XK_k,           moveresize,          "0x 0y 0w -25h" }, \
    { MODKEY|ControlMask|ShiftMask, XK_h,           togglehorizontalmax, NULL }, \
    { MODKEY|ControlMask|ShiftMask, XK_l,           togglehorizontalmax, NULL }, \
    { MODKEY|ControlMask|ShiftMask, XK_j,           toggleverticalmax,   NULL }, \
    { MODKEY|ControlMask|ShiftMask, XK_k,           toggleverticalmax,   NULL }, \

Download
--------

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

