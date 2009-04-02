![wmii](wmii.gif)

WINDOW MANAGER IMPROVED 2
=========================

wmii is a small, dynamic window manager for X11. It is scriptable, has a 9p
filesystem interface and supports classic and tiling (acme-like) window
management. It aims to maintain a small and clean (read hackable and beautiful)
codebase.

<center>
[
![Screenshot](screenshots/wmii-20080117-thumb.png)
](screenshots/wmii-20080117.png)
</center>

Links
-----

* Latest release: [wmii-3.6](http://code.suckless.org/dl/wmii/wmii-3.6.tar.gz) (Note that it requires [dmenu](http://tools.suckless.org/dmenu) and [libixp-0.4](/libs/libixp.html), [p9p](http://plan9.us/) recommended)
* Latest snapshot: [wmii+ixp-20080520](http://code.suckless.org/dl/wmii/wmii+ixp-20080520.tgz)
* Latest devel tip: <code>hg clone [http://code.suckless.org/hg/wmii](http://code.suckless.org/hg/wmii)</code>
* Bugs: [Google Code issue tracker](http://code.google.com/p/wmii/issues)
* Mailing List: `wmii+subscribe@suckless.org` [(Archives)](http://lists.suckless.org/wmii) [(GMANE Archive)](http://dir.gmane.org/gmane.comp.window-managers.wmii)
* IRC channel: `#wmii at irc.oftc.net` [(irc log)](http://suckless.org/irc/)

Notes
-----
If [plan9port](http://plan9.us/) is found at runtime, wmii will use an
alternate controlling script, written in
[rc](http://plan9.bell-labs.com/sys/doc/rc.html). `rc.wmii` supports a
`rc.wmii.local` convention which allows you to keep local customisations
separate from the main script so you don't have to merge them every time
`rc.wmii` changes.

It is optional, the default `wmiirc` depends on only standard unix tools,
however - `rc.wmii` is better supported. All the code snippets/color schemes
on the site are written in rc and need some syntax adjustment to work in the
standard `wmiirc`.

Development
-----------
You can [browse](http://code.suckless.org/hg/wmii) its source code repository or get a copy using [Mercurial](http://www.selenic.com/mercurial/) with following command:

	hg clone http://code.suckless.org/hg/libixp
	hg clone http://code.suckless.org/hg/wmii

Older releases
--------------
* [wmii-3.6](http://code.suckless.org/dl/wmii/wmii-3.6.tar.gz) (historical, 2007-11-16)
* [wmii-3.5.1](http://code.suckless.org/dl/wmii/wmii-3.5.1.tar.gz) (historical, 2006-12-27)
* [wmii-3.1](http://code.suckless.org/dl/wmii/wmii-3.1.tar.gz) (historical, 2006-06-17)
* [9base-2](http://code.suckless.org/dl/misc/9base-2.tar.gz) (historical, 2006-01-25)
* [wmii-2.5.2](http://code.suckless.org/dl/wmii/wmii-2.5.2.tar.gz) (historical, 2006-01-27)
* [wmii-2](http://code.suckless.org/dl/wmii/wmii-2.tar.gz) (historical, 2005-10-21)
* [wmi-10](http://code.suckless.org/dl/misc/wmi-10.tar.gz) (historical, 2004-10-03)

Make sure that the X Window System headers are installed, if you want to build
wmii from source.

Packages
--------
If there are no packages for your Linux distribution/OS yet, ask the
appropriate maintainers to create one or compile wmii from source.

Debian
------
Official debian packages are available in the unstable and testing repository
on debian.org. Backports for stable are available on
[backports.org](http://www.backports.org/). Prospective packages and/or
snapshots can be downloaded from the [maintainers
website](http://archive.daniel-baumann.ch/debian/packages/wmii/).

Source Mage
-----------
A Source Mage spell for the 20070516 wmii snapshot is available. As usual, just
type

`cast wmii`

in a term to install it.

FreeBSD
-------
Port is available at x11-wm/wmii.

NetBSD
------
A pkgsrc package for wmii is available in [wm/wmii](http://pkgsrc.se/wm/wmii) and [wip/wmii-devel](http://pkgsrc.se/wip/wmii-devel).

OpenBSD
-------
wmii is included in the OpenBSD ports tree ([x11/wmii](http://www.openbsd.org/cgi-bin/cvsweb/ports/x11/wmii/)), and binary packages are available from most [OpenBSD mirrors](http://openbsd.org/ftp.html).

Arch Linux
----------
* [wmii-3.6](http://archlinux.org/packages/search/?q=wmii) is available in the Arch \[extra\] repository.
* [wmii-hg](http://aur.archlinux.org/packages.php?ID=3497) is available in AUR \[unsupported\]. Building with `makepkg` pulls the latest hg revision.

Gentoo
------
Ebuild is available at [x11-wm/wmii](http://packages.gentoo.org/package/x11-wm/wmii).

