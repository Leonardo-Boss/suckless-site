![dwm](/dwm/dwm.gif)

DYNAMIC WINDOW MANAGER
======================

Description
-----------
dwm is a dynamic window manager for X. It manages windows in tiled and
floating layouts. Either layout can be applied dynamically, optimizing the
environment for the application in use and the task performed. It is 
the little brother of [wmii](/wmii/).

In tiled layout, windows are managed in a master and stacking area. The master
area contains the windows which currently need most attention, whereas the
stacking area contains all other windows. In floating layout, windows can be
resized and moved freely. Dialog windows are always managed floating,
regardless of the layout selected.

Windows are grouped by tags. Each window can be tagged with one or multiple
tags. Selecting certain tags displays all windows with those tags.

dwm contains a small status bar which displays all available tags, the layout,
the title of the focused window, and text read from standard input. The
selected tags are highlighted with a different color, while the tags of the focused
window are highlighted with a small point.

dwm draws a small border around windows to indicate their focus state.

<center>[![Screenshot](/dwm/screenshots/dwm-20070930s.png)](/dwm/screenshots/dwm-20070930.png)</center>

Differences
-----------
In contrast to ion, larswm, and wmii, dwm is much smaller, faster and simpler.

* dwm has no Lua integration, no 9P support, no shell-based configuration, no remote control, and comes without any additional tools, such as for printing the selection or warping the mouse.
* dwm is only a single binary, and its source code is intended to never exceed 2000 SLOC.
* dwm doesn't distinguish between layers: there is no floating or tiled layer. Whether or not the clients of currently selected tag(s) are in tiled layout, you can rearrange them on the fly. Popup and fixed-size windows are always floating, however.
* dwm is customized through editing its source code, which makes it extremely fast and secure - it does not process any input data which isn't been known at compile time, except window titles and status text read from the standard input. You don't have to learn Lua/sh/ruby or some weird configuration file format (like X resource files), beside C, to customize it for your needs: you only have to learn C (at least editing header files).
* Because dwm is customized through editing its source code, it's pointless to make binary packages of it. This keeps its userbase small and elitist. No novices asking stupid questions.
* dwm reads from the standard input to print arbitrary status text (like the date, load, battery charge). That's much simpler than larsremote, wmiir and what not...

Links
-----
* [Man page](/dwm/manpage.html)
* Mailing List: `dwm+subscribe@suckless.org` [(Archives)](http://lists.suckless.org/dwm) [(GMANE Archive)](http://dir.gmane.org/gmane.comp.window-managers.dwm)
* IRC channel: #dwm at irc.oftc.net [(irc log)](TODO)

Download
--------
* [MIT/X Consortium license](http://code.suckless.org/hg/dwm/raw-file/tip/LICENSE)
* [dwm 5.4.1](http://code.suckless.org/dl/dwm/dwm-5.4.1.tar.gz) (18kb) (20090208)
* See also [dmenu](/programs/dmenu.html)

Development
-----------
dwm is actively developed in parallel to wmii. You can [browse](http://code.suckless.org/hg/dwm) its source code repository or get a copy using [Mercurial](http://www.selenic.com/mercurial/) with following command:

	hg clone http://code.suckless.org/hg/dwm

Miscellaneous
-------------
* Optionally you can install [dmenu](/programs/dmenu.html) to extend dwm with a wmii-alike menu.

