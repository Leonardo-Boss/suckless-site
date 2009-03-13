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
* [patches written by InfinityX](http://flash.metawaredesign.co.uk/4/)
* [polachok](http://koluthcka.ru/fwm/projects.html)
* [displaydate](http://henry.precheur.org/2008/8/25/Switching%20to%20dwm.html)


external repositories / related projects
----------------------------------------
* [awesome](http://awesome.naquadah.org/)
* [awm](http://www.freaknet.org/alpt/src/alpt-wm/readme)
* [bwm](http://suckless.org/pipermail/dwm/2007-August/003088.html)
* [bug.n](http://freenet-homepage.de/bug.n/)
* [DWM-Hacked](http://sourceforge.net/projects/dwm-hacked/) -- A compilation of all the DWM hacks that I could find
* [dwm-gtx](http://s01.de/~gottox/index.cgi/proj_dwm)
* [dwm-mitch](http://www.cgarbs.de/dwm-mitch.en.html)
* [dwm-pancake](http://news.nopcode.org/miau/pvc.cgi?prj=dwm)
* [dwm-rfigura](http://spuerwerk.dyndns.org/~rfigura/dwm)
* [echinus](http://koluthcka.ru/fwm)
* [fnegronidwm](http://sharesource.org/project/fnegronidwm/wiki/)
* [scrotwm](http://www.peereboom.us/scrotwm/html/scrotwm.html)
* [xmonad](http://www.xmonad.org/)
