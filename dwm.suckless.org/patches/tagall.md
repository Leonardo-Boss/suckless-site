# tag all #

## Description ##

Shortcut to move all (floating) windows from one tag to another.

## Download ##
 * [dwm-6.0-tagall.diff][1]

## Configuration ##

 * MODKEY+Shift+F1 moves all floating windows of the current tag to tag 1

    { MODKEY|ShiftMask,     XK_F1,      tagall,        "F1" }, \
    ...
    { MODKEY|ShiftMask,     XK_F9,      tagall,        "F9" }, \

 * MODKEY+Shift+F1 moves all windows of the current tag to tag 1

    { MODKEY|ShiftMask,     XK_F1,      tagall,        "1" }, \
    ...
    { MODKEY|ShiftMask,     XK_F9,      tagall,        "9" }, \

## Author ##
 * Jan Christoph Ebersbach - <jceb@e-jc.de>

[1]: dwm-6.0-tagall.diff
