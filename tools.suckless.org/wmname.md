WMNAME
======
wmname prints/sets the window manager name property of the root window similar
to how hostname(1) behaves.

wmname is a nice utility to fix problems with JDK versions and other broken
programs assuming a reparenting window manager for instance.

Download
--------
* [wmname-0.1](http://dl.suckless.org/tools/wmname-0.1.tar.gz)

Repository
----------
You can [browse](http://hg.suckless.org/wmname) the source code or get a
copy using [Mercurial](http://www.selenic.com/mercurial/) with following
command:

	hg clone http://hg.suckless.org/wmname

Usage
-----
The following command prints the window manager name, if any:

	; wmname

The following command sets the window manager name, e.g.

	; wmname LG3D

