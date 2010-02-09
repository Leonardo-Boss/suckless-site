Following the default binds configured by the header file
[config.def.h](http://hg.suckless.org/dwm/file/tip/config.def.h).

	[Shift]+[Alt]+[Enter] - launch terminal
	[Alt]+[p] - dmenu for running programs like the x-www-browser

By default there are 9 tags (~workspaces).

Launch a few terminals `[Shift]+[Alt]+[Enter]` and dwm will _tile_ the windows
between the **master** and **stack**. A new terminal appears on the **master**
window. Existing windows are pushed upon a **stack** to the right of the
screen. `[Alt]+[Enter]` toggles windows between master and stack.

To move a terminal pane/tile/window to another tag you select the window by
hovering over the window. Then execute the bind `[Shift]+[Alt]+[2]` to move the
window to the 2 tag. `[Alt]+[2]` moves your focus to tag 2.

As stated in the manpage you can click tags with the left
mouse button and simulating `[Alt]+[tag number]`, but you can also click an
other tag with the right mouse button in order to bring those windows additionally
into your current focus.

To kill a window:

	[Shift]+[Alt]+[c]

By default dwm is in **tiled** layout mode. Ensure it is tiled mode with:

	[Alt]+[t]

You should also notice the `[]=` symbol between the tag numbers and the title bar.

dwm has two further layout modes, **floating** `><>` `[Alt]+[f]` and
**monocle** `[M]` `[Alt]+[m]`. Monocle is good for ensuring a window is kept
maximized and focused. This is useful in web kiosk environments and watching
flash videos.

Floating layout will be familiar to Windows users. Use `[Alt]+[mouse button]` to
move or resize a window.

To quit dwm cleanly:

	[Shift]+[Alt]+[q]

To launch dwm, ideally you should setup an [xinitrc](http://git.webconverger.org/?p=home.git;a=blob_plain;f=.xinitrc).
