Sandbox
=======

Ideas that could be worthwhile for the development of sta.li
will be collected here. Just add them using the known ways
of suckless wiki editing.

Principles
----------

* follow the UNIX philosophy
* each executable is statically linked

Ideas
-----

* maybe a different format to ELF
* kernel is a monolithic Linux kernel
	* still make less used modules loadable (all kind of USB)
* system loader is lilo
* no initrd
* make the whole system a ramdisk
* a basic initsystem
* updating is rsyncing the build files and rebuilding what is needed
* all applications need dbus to be removed

Quick Ideas
-----------

* use mdev for device management
	* add a »dev« command for controlling mdev
		* make some minor/major/netlink extractor to a script
* use busybox as first userland, then gradually move to sbase + ubase
* use svc for services
* first use X11 for graphics until Wayland is getting sane
	* if kernel graphics is getting faster use a framebuffer

Needed application replacements
-------------------------------

* new bluetooth stack without dbus
* simple mDNS without dbus

