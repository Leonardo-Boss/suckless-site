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


offsite patches
---------------
* [dwm-meillo](http://prog.marmaro.de/dwm-meillo/)
* [dwm-mitch](http://www.cgarbs.de/dwm-mitch.en.html)
* [fnegronidwm](http://sharesource.org/project/fnegronidwm/wiki/)
* [patches written by InfinityX](http://flash.metawaredesign.co.uk/4/)
* [displaydate](http://henry.precheur.org/2008/8/25/Switching%20to%20dwm.html)
* [DWM-Hacked](http://sourceforge.net/projects/dwm-hacked/) -- (old)


related projects
----------------
* [awesome](http://awesome.naquadah.org/) -- dwm fork with XCB, EWMH, Lua script, Xft, D-Bus, multihead.. support
* [awm](http://www.freaknet.org/alpt/src/alpt-wm/readme) -- (old) modified dwm with workspaces and /proc like interface
* [bwm](http://lists.suckless.org/dwm/0708/3085.html) -- (old) modified dwm with extensive mouse support
* [bug.n](http://freenet-homepage.de/bug.n/) -- dwm for windows written in AutoHotkey
* [dvtm](http://www.brain-dump.org/projects/dvtm/) -- virtual terminal manager (dwm on the console)
* [dwm-gtx](http://s01.de/~gottox/index.cgi/proj_dwm) -- dwm branch with Xinerama support, pointer movement, different layout
* [dwm-pancake](http://news.nopcode.org/miau/pvc.cgi?prj=dwm) -- (old) modified dwm with client per tag, nmaster patch
* [dwm-win32](http://lists.suckless.org/dwm/0904/7893.html) -- dwm ported to windows
* [echinus](http://www.rootshell.be/~polachok/code/) -- dwm fork with EWMH, Xft support
* [gemini](http://gemini.digitalmediaplanet.net) -- terminal manager
* [i3](http://i3.zekjur.net/) -- wmii fork with XCB, multihead, vertical column, command mode
* [scrotwm](http://www.peereboom.us/scrotwm/html/scrotwm.html) -- dwm clone with multihead, config file, restart.. support
* [teslawm](http://teslawm.org/) -- dwm fork with multihead, mouse, stdin commands support (was dwm-rfigura)
* [xmonad](http://www.xmonad.org/) -- dwm clone in haskell
