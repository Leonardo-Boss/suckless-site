MOUSE EVENTS ON TITLE
=====================

Last update: 2007-10-25

Adds mouse events on the title bar to switch between clients using
the mouse wheel and using the left click to zoom, right click kill
and middle click for toggling the floating.

This way you can easily manage tiled clients with the mouse.

The right click on the layout area maximizes the client.

If you are using the nmaster patch you will be able to change the nmaster value using the mouse wheel.

Change the mwfact using the wheel at x=0 placing the cursor inside the bar.

Patch
-----

Latest patch for [dwm 4.7][2] is here.
For [dwm 4.6][1] take this one.

See in event.c at function 'buttonpress()' to patch older dwm releases.

AUTHOR
------

* pancake &lt;youterm.com&gt;

[1]:http://news.nopcode.org/mouseontitle-4.6.diff
[2]:http://news.nopcode.org/mouseontitle-4.7.diff

