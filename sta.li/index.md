stali (sta[tic] li[nux]) is a new new linux distribution based on a hand
selected collection of the best tools for each task and each tool being
statically linked (including some X clients such as xterm, surf, dwm, dmenu,
mplayer).

It also targets binary size reduction through the avoidance of glibc and other
bloated GNU libraries where possible (early experiments show that statically 
linked binaries are usually smaller than their dynamically linked glibc counterparts!!!).
Note, this is pretty much contrary to what Ulrich Drepper reckons about static linking.

Due to the side-benefit that statically linked binaries start faster, the
distribution also targets performance gains.

It is expected that the first usable version will be available during Nov 2009.

General system design
---------------------

* binary is primary focus, each executable is statically linked, potentially different executable format than ELF, since ELF is mainly designed to support dynamic linking
* kernel is a single monolith based on linux, by default no kernel module support
* system loader is lilo (maybe we will start maintaining it)
* no initrd initially
* perhaps later whole the system will be a ramdisk? will see (20h idea)
* init system should be based on just one /etc/rc.{start,stop} script (look at p9 how they do it)

Basic filesystem design
-----------------------
Generally, /usr will be removed, what a useless directory, for non-base system stuff we might consider /local

* /bin - all executables go here
* /bin/kernel (linux kernel)
* /dev - devices, check if we can avoid udev or what linux requires nowadays, the simplest approach would be best
* /etc - system config/program config/user setup/network setup
* /etc/rc.{start,stop} - init scripts
* /home/root (root's home)
* /home/* - user home dirs
* /include - include files
* /lib - libraries, when used as devel box, only static libs, potentially
* /local - possibly for software that's no in the base
* /mnt - mounts
* /proc - linux crap
* /share - man pages, locales and crap that several libraries ship
* /sys - linux crap
* /tmp - obvious
* /var - spool, run, log, cache
* /usr -> / (potentially softlink, will see if we can avoid this, mainly for broken packages)

Updating system is simply rsync'ing from distro server.

Typical end-user system
-----------------------

	[anselm@x200s rootfs]$ tree
	.
	|-- bin
	|-- dev
	|-- etc
	|-- home
	|   `-- root
	|-- mnt
	|-- proc
	|-- sys
	|-- tmp
	`-- var

Note: End-user systems have no /lib, /include, et cetera. They just have
what is really necessary and nothing else.

Development
-----------
The current state of the build environment can be cloned with the following command:

	git clone git://sta.li/stali

Size: 1.2 GB

HELP
----
We need a proper server to host the git repository (expected size of the
build environment repo is 2GB). Any mirror service is welcome; expect 
100 clones per month, at least (so, 200GB traffic volume in the mid term).

Some related links
------------------
* [$6M libc](http://codingrelic.geekhold.com/2008/11/six-million-dollar-libc.html) - Bionic is a nice library, though only usable for sane stuff
* [ldd arbitrary code execution](http://www.catonmat.net/blog/ldd-arbitrary-code-execution/) - Nice exploit
* [static linking](http://blog.garbe.us/2008/02/08/01_Static_linking/) - My old blog entry
