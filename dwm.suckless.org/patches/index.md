PATCHES
=======

diff generation
---------------
For mercurial users:

    cd dwm-directory
    hg diff > dwm-X.Y-yourpatchname.diff

For tarballs:

    cd modified-dwm-directory/..
    diff -up original-dwm-directory modified-dwm-directory > dwm-X.Y-yourpatchname.diff

where `X.Y` is a dwm tag name or version number.


patch application
-----------------
For mercurial users:

    cd dwm-directory
    hg patch path/to/patch.diff

For tarballs:

    cd dwm-directory
    patch -p1 < path/to/patch.diff


related projects
----------------
* [awesome](http://awesome.naquadah.org/) -- dwm fork with XCB, EWMH, Lua script, Xft, D-Bus, multihead.. support
* [awm](http://www.freaknet.org/alpt/src/alpt-wm/readme) -- (old) modified dwm with workspaces and /proc like interface
* [bwm](http://lists.suckless.org/dwm/0708/3085.html) -- (old) modified dwm with extensive mouse support
* [cons-wm](http://github.com/dharmatech/psilab/tree/master/cons-wm) -- minimalist wm in scheme (not tiled)
* [bug.n](http://freenet-homepage.de/bug.n/) -- dwm for windows written in AutoHotkey
* [dvtm](http://www.brain-dump.org/projects/dvtm/) -- virtual terminal manager (dwm on the console)
* [dwm-gtx](http://s01.de/~gottox/index.cgi/proj_dwm) -- dwm branch with Xinerama support, pointer movement, different layout
* [dwm-sprinkles](http://0mark.unserver.de/dwm-sprinkles/) -- dwm with colorfull bar, transparency, pre-configured pertag and more
* [dwm-win32](http://www.brain-dump.org/projects/dwm-win32/) -- dwm ported to windows
* [echinus](http://www.rootshell.be/~polachok/code/) -- dwm fork with EWMH, Xft support
* [gemini](http://gemini.digitalmediaplanet.net) -- terminal manager
* [i3](http://i3.zekjur.net/) -- wmii fork with XCB, multihead, vertical column, command mode
* [musca](http://aerosuidae.net/musca.html) -- inspired by dwm, more complex layout, configurable with commands, EWMH support
* [qtile](http://www.qtile.org/) -- pure python wm, used ideas from dwm
* [scrotwm](http://www.peereboom.us/scrotwm/html/scrotwm.html) -- dwm clone with multihead, config file, restart.. support
* [TAL/wm](http://talwm.sourceforge.net/) -- minimal tiled wm based on dwm (discontinued)
* [teslawm](http://teslawm.org/) -- dwm fork with multihead, mouse, stdin commands support (was dwm-rfigura)
* [xmonad](http://www.xmonad.org/) -- dwm clone in haskell
