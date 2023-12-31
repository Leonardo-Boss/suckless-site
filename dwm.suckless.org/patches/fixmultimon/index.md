fixmultimon
===========

Description
-----------
When the pointer is on an unselected monitor and is not moving, it
should not interfere what window is selected/focused.

1:

From  https://tronche.com/gui/x/xlib/events/input-focus/normal-and-grabbed.html:
> When the focus moves from window A to window B, A is an inferior of B,
> and the pointer is in window P, the X server does the following:
> It generates a FocusOut event on window A...
> It generates a FocusOut event on each win...
> It generates a FocusIn event on window B,...
> If window P is an inferior of window B but window P is not window A or
> an inferior or ancestor of window A, it generates a FocusIn event on
> each window below window B, down to and including window P, with the
> detail member of each XFocusInEvent structure set to NotifyPointer.

If focusmon selects a monitor with no clients then XSetInputFocus is
called on the root window. Due to the above rules, an FocusIn event is sent
to the window under the pointer which may be on another monitor. Now a
window on one monitor is getting our keyboard input but another monitor
is selected. In this undesirable state, a killclient shortcut (for
example) will not destroy the window that is accepting input.

We fix this by focusing on the bar window instead of root when an empty
monitor is selected. Windows on other monitors are not a children of the
bar window so they will not be focused by a NotifyPointer event.

2:

If a window is moved from the selected monitor to the monitor under the
pointer and the rearrangement of windows on the second monitor causes a
different window to be under the pointer, then an enternotify event is
sent for that window. This causes that window to be focused and the
second monitor to be selected. If the arrangement on the second monitor
did not cause the pointer to be under a different window then the
selected monitor would not change (very unpredictable behaviour!).

We fix this by suppressing all enternotify events at the end of an
arrange(NULL) call.

Mainline Patch
--------------

This patch was originally sent to the hackers mailing list to be included
in the mainline dwm repo.
[link](https://lists.suckless.org/hackers/2308/18950.html).
However, it has not yet been added due to insufficient feedback from
multi-monitor users and some doubt as to weather this patch follows X
focus-follow-mouse tradition.

I still believe this patch belongs in the mainline. But in the meantime it is
here to help multi-monitor users and gather more feedback.

Download
--------
* [dwm-fixmultimon-6.4.diff](dwm-fixmultimon-6.4.diff)

Authors
-------
* Christopher Lang <christopher.lang.256@gmail.com>
