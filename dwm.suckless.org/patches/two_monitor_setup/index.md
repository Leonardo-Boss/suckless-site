Two Monitor Setup
=================

Description
-----------
I have a two monitor setup, and I always find default config confusing. 
Using `ModKey + <` and `ModKey + ShiftKey + <` to move window or focus
to left monitor, and when it's on the leftmost monitor, it moves it to
the rightmost. It's probably good for multiple-monitor setup, but in my
setup it just switches back and forth, and if I accidentally press 
`ModKey + <` two times, it switches focus to the same monitor on which
I was before, which was confusing to me.

With this patch `ModKey + <` and `ModKey + ShiftKey + <` only sends the
focus or window to left monitor, and if it's already on the left monitor,
it does nothing. Same with `ModKey + >` and `ModKey + ShiftKey + >`, if
the focus is on left monitor, it will swith the focus to right monitor,
otherwise, it will do nothing.

Download
--------
* [dwm-twomonitorsetup-20240209-0b01a94.diff](dwm-twomonitorsetup-20240209-0b01a94.diff)

Authors
-------
* Slavko Stojshic - <stojshic@gmail.com>
