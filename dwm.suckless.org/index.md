![dwm](dwm.svg)

dwm is a dynamic window manager for X. It manages windows in tiled, monocle and
floating layouts. All of the layouts can be applied dynamically, optimising the
environment for the application in use and the task performed.

In tiled layout windows are managed in a master and stacking area. The master
area contains the window which currently needs most attention, whereas the
stacking area contains all other windows. In monocle layout all windows are
maximised to the screen size. In floating layout windows can be resized and
moved freely. Dialog windows are always managed floating, regardless of the
layout applied.

Windows are grouped by tags. Each window can be tagged with one or multiple
tags. Selecting certain tags displays all windows with these tags.

Each screen contains a small status bar which displays all available tags, the
layout, the number of visible windows, the title of the focused window, and the
text read from the root window name property, if the screen is focused. A
floating window is indicated with an empty square and a maximised floating
window is indicated with a filled square before the windows title. The selected
tags are indicated with a different color. The tags of the focused window are
indicated with a filled square in the top left corner. The tags which are
applied to one or more windows are indicated with an empty square in the top
left corner.

dwm draws a small customizable border around windows to indicate the focus
state.

[![Screenshot](screenshots/dwm-20100318s.png)](screenshots/dwm-20100318.png)

Differences
-----------
In contrast to ion, larswm, and wmii, dwm is much smaller, faster and simpler.

* dwm has no Lua integration, no 9P support, no shell-based configuration, no
  remote control, and comes without any additional tools, such as for printing
  the selection or warping the mouse.
* dwm is only a single binary, and its source code is intended to never exceed
  2000 SLOC.
* dwm doesn't distinguish between layers: there is no floating or tiled layer.
  Whether or not the clients of currently selected tag(s) are in tiled layout,
  you can rearrange them on the fly. Popup and fixed-size windows are always
  floating, however.
* dwm is customized through editing its source code, which makes it extremely
  fast and secure - it does not process any input data which isn't known at
  compile time, except window titles and status text read from the root window's
  name. You don't have to learn Lua/sh/ruby or some weird configuration file
  format (like X resource files), beside C, to customize it for your needs: you
  only have to learn C (at least in order to edit the header file).
* Because dwm is customized through editing its source code, it's pointless to
  make binary packages of it. This keeps its userbase small and elitist. No
  novices asking stupid questions. There are some distributions that provide
  binary packages though.
* dwm reads from the root window's name to print arbitrary status text (like
  the date, load, battery charge). That's much simpler than larsremote, wmiir and
  what not...
* dwm creates a view for each Xinerama screen.

Links
-----
* Mailing List: `dev+subscribe@suckless.org`
  ([Archives](//lists.suckless.org/dev/),
  [Old Archives](//lists.suckless.org/dwm/),
  see [community](//suckless.org/community/) for details)
* IRC channel: #suckless at irc.oftc.net

Download
--------
* [MIT/X Consortium license](//git.suckless.org/dwm/file/LICENSE.html)
* [dwm 6.2](//dl.suckless.org/dwm/dwm-6.2.tar.gz) (26kb) (20190203)
* See also [dmenu](//tools.suckless.org/dmenu/)

Support
-------
See the [faq](//dwm.suckless.org/faq/) for the frequent problems that
arise. The next step is to look at the sourcecode and the config.h for obvious
names, which could be related to the problem that arose. If that does not help
to fix the problem, then there is the #suckless IRC channel and the
mailinglist.

If it is your first time using dwm, start with reading the
[tutorial](//dwm.suckless.org/tutorial/).

Development
-----------
You can [browse](//git.suckless.org/dwm/) its source code repository or get a copy using git with the following command:

	git clone https://git.suckless.org/dwm

Miscellaneous
-------------
* Optionally you can install [dmenu](//tools.suckless.org/dmenu/) to extend dwm
  with a wmii-like menu.
* Wikipedia [article about dwm](https://en.wikipedia.org/wiki/Dwm)

Related discussion
------------------
* [https://www.ghcif.de/tag/dynamic-window-manager/](https://web.archive.org/web/20180628152152/https://www.ghcif.de/tag/dynamic-window-manager/) (German)
* [dwm blog post in Persian](https://blog.efazati.org/post/DWM-%D8%B1%D8%A7%D9%87%DA%A9%D8%A7%D8%B1-%D9%85%D9%86%D8%A7%D8%B3%D8%A8%DB%8C-%D8%A8%D8%B1%D8%A7%DB%8C-%D9%85%D8%AF%DB%8C%D8%B1%DB%8C%D8%AA-%D9%BE%D9%86%D8%AC%D8%B1%D9%87-%D9%87%D8%A7-%D8%AF%D8%B1-%D9%84%DB%8C%D9%86%D9%88%DA%A9%D8%B3)
* [https://gambaru.de/blog/2011/12/10/elitare-fenstermanager-sind-vielleicht-doch-einfacher-zu-bedienen-als-gedacht/](https://gambaru.de/blog/2011/12/10/elitare-fenstermanager-sind-vielleicht-doch-einfacher-zu-bedienen-als-gedacht/)
* [https://www.linuxjournal.com/content/going-fast-dwm](https://www.linuxjournal.com/content/going-fast-dwm)
* [http://www.linuxgoodies.com/review_dwm.html](https://web.archive.org/web/20190304070414/http://www.linuxgoodies.com/review_dwm.html)
* [https://www.iyiz.com/20-most-simple-and-cool-x-window-managers-for-linux/](https://www.iyiz.com/20-most-simple-and-cool-x-window-managers-for-linux/)
* [https://lbolla.wordpress.com/2010/01/08/dwm-restart/](https://lbolla.wordpress.com/2010/01/08/dwm-restart/)
* [https://danielkaes.wordpress.com/2009/12/03/adding-a-pidgin-trayicon-to-dwm/](https://danielkaes.wordpress.com/2009/12/03/adding-a-pidgin-trayicon-to-dwm/)
* [https://openmindlifestyle.wordpress.com/2009/11/28/howto-compile-and-configure-dwm-tiling-window-manager-on-ubuntu/](https://openmindlifestyle.wordpress.com/2009/11/28/howto-compile-and-configure-dwm-tiling-window-manager-on-ubuntu/)
* [https://lsetc.wordpress.com/2009/11/27/gno-more-gnome/](https://lsetc.wordpress.com/2009/11/27/gno-more-gnome/)
* [https://houst0n.wordpress.com/2009/12/20/dwm-the-dynamic-window-manager-for-solaris/](https://houst0n.wordpress.com/2009/12/20/dwm-the-dynamic-window-manager-for-solaris/)
* [https://the-monkeymind.blogspot.com/2007/03/dwm-dynamic-window-manager-home-page-at.html](https://the-monkeymind.blogspot.com/2007/03/dwm-dynamic-window-manager-home-page-at.html)
* [https://tonytraductor.livejournal.com/120674.html](https://tonytraductor.livejournal.com/120674.html)
* [http://forums.debian.net/viewtopic.php?f=16&t=65110](http://forums.debian.net/viewtopic.php?f=16&t=65110)
* [https://wongdev.com/blog/dwm-tags-are-not-workspaces/](https://web.archive.org/web/20160211062829/http://wongdev.com/blog/dwm-tags-are-not-workspaces/)
* [dwm usage and configuration page (french)](https://yeuxdelibad.net/Logiciel-libre/Suckless/dwm/index.html)
* [https://www.youtube.com/watch?v=GQ5s6T25jCc](https://www.youtube.com/watch?v=GQ5s6T25jCc)
* [https://srobb.net/dwm.html](https://srobb.net/dwm.html)
* [https://rhunter.org/blog/2012/04/17/dwm-a-tutorial-for-beginners/](https://web.archive.org/web/20180628152159/https://rhunter.org/blog/2012/04/17/dwm-a-tutorial-for-beginners/)
* [https://cannibalcandy.wordpress.com/2012/04/26/installing-and-configuring-dwm-under-ubuntu/](https://cannibalcandy.wordpress.com/2012/04/26/installing-and-configuring-dwm-under-ubuntu/)
* [https://blog.yjl.im/2011/07/two-weeks-with-dwm.html](https://blog.yjl.im/2011/07/two-weeks-with-dwm.html)
* [http://www.murga-linux.com/puppy/viewtopic.php?p=258224](http://www.murga-linux.com/puppy/viewtopic.php?p=258224)
* [https://opensourceforu.com/2012/03/tiling-window-managers-getting-started-with-dwm/](https://opensourceforu.com/2012/03/tiling-window-managers-getting-started-with-dwm/)

related projects
----------------
* [awesome](https://awesomewm.org/) -- dwm fork with XCB, EWMH, Lua script, Xft, D-Bus, multihead.. support
* [awm](https://github.com/Alpt/awm/blob/master/README) -- (old) modified dwm with workspaces and /proc like interface
* [bwm](//lists.suckless.org/dwm/0708/3085.html) -- (old) modified dwm with extensive mouse support
* [cons-wm](https://github.com/dharmatech/psilab/tree/master/cons-wm) -- minimalist wm in scheme (not tiled)
* [bug.n](https://github.com/fuhsjr00/bug.n) -- dwm for Windows written in AutoHotkey
* [dvtm](https://www.brain-dump.org/projects/dvtm/) -- virtual terminal manager (dwm on the console)
* [dwm-gtx](https://s01.de/~gottox/index.cgi/proj_dwm) -- dwm branch with Xinerama support, pointer movement, different layout
* [dwm-sprinkles](https://0mark.unserver.de/software/dwm-sprinkles/) -- dwm with colorfull bar, transparency, pre-configured pertag and more
* [dwm-win32](https://www.brain-dump.org/projects/dwm-win32/) -- dwm ported to windows
* [echinus](https://web.archive.org/web/20100419215533/https://www.rootshell.be/~polachok/code/) -- dwm fork with EWMH, Xft support
* [gemini](https://web.archive.org/web/20100813114611/http://gemini.digitalmediaplanet.net/index.php/Main_Page) -- terminal manager
* [i3](https://i3wm.org/) -- wmii fork with XCB, multihead, vertical column, command mode
* [qtile](https://www.qtile.org/) -- pure python wm, used ideas from dwm
* [scrotwm](https://web.archive.org/web/20130327181513/http://www.peereboom.us/scrotwm/html/scrotwm.html) -- dwm clone with multihead, config file, restart.. support
* [TAL/wm](https://sourceforge.net/projects/talwm/) -- minimal tiled wm based on dwm (discontinued)
* [teslawm](https://teslawm.org/) -- dwm fork with multihead, mouse, stdin commands support (was dwm-rfigura)
* [xmonad](https://xmonad.org/) -- dwm clone in haskell
