Filesystem
==========

This is a editable proposal for a filesystem layout that
will fit the changed principles of the OS.

	/bin - all executables
	/boot - all boot files
	/dev - devices
	/etc - system configuration
	/svc - services
	/home - user directories
	/root - the root home
	/var - spool, run, log, cache
	/share - man pages, locales, dependencies
	/devel - development environment
	/devel/include
	/devel/lib
	/devel/src

Based on the Linux assumption:

	/sys - sys files
	/proc - proc files

For old style emulation:

	/emul - chroot for packages that are too infected
	
 
