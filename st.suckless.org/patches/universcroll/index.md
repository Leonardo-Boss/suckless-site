universcroll
============

Description
-----------
With *scroll*(1) and default binds (as of 0.8.4), how to scroll?
- Inside alt screen? Mouse[4,5] to scroll [Up,Down]. :)
- Outside alt screen? Shift+Mouse[4,5] to scroll [Up,Down]. :(

With universcroll patch, always use Mouse[4,5] to scroll [Up,Down].
Doesn't matter alt screen or not. No more `^Y^Y^Y^Y^Y^E^E^E^E^E`!

`universcroll-example` on top of `universcroll` makes some extra
changes:
- Set scroll program = "scroll"
- Mouse wheel scroll enabled only with NO_MOD.
- Mouse wheel zoom enabled with ShiftMask/ANY_MOD.

Download
--------
- [st-universcroll-0.8.4.diff](st-universcroll-0.8.4.diff)
- [st-universcroll-example-0.8.4.diff](st-universcroll-example-0.8.4.diff)

Notes
-----
`universcroll` was made possible by
[scrollback-mouse-altscreen](https://st.suckless.org/patches/scrollback/).
All alt screen detection code is from that patch.

Author
------
- [Dennis Lee](mailto:dennis@dennislee.xyz)
