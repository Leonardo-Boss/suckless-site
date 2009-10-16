sta[tic] li[nux]
================

General system design
---------------------

* binary is primary focus, each executable is statically linked, potentially different executable format than ELF, since ELF is mainly designed to support dynamic linking
* kernel is a single monolit based on linux, by default no kernel module support
* system loader is lilo, no other loader supported
* no initrd initially
* perhaps later whole system in ramdisk? will see (20h idea)
* init system should be based on just 1 /etc/rc.{start,stop} script (look at p9 how they do it)

Basic filesystem design
-----------------------
Generally /usr will be removed, what a useless directory, for non-base system stuff we might consider /local perhaps

* /bin - all executables go here
* /bin/kernel (linux kernel)
* /dev - devices, check if we can avoid udev or what linux requires nowadays, simplest approach would be best
* /etc - system config/program config/user setup/network setup
* /etc/rc.{start,stop} (init scripts)
* /home/root (root's home)
* /home/* (user home dirs)
* /include (include)
* /lib - libraries, when used as devel box, only static libs, potentially
* /local - perhaps, dunno?
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

Note, end-user systems have no /lib, /include etc, they just have what's really
necessary and nothing else.


TBC

