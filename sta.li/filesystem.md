Filesystem
==========

	/ - the root home
	/bin - all executables
	/sbin -> /bin # softlink pointing to /bin
	/boot - all boot files
	/etc - system configuration
	/home - user directories
	/var - spool, run, log, cache
	/share - man pages, locales, dependencies
	/include - include/headers
	/lib - static libraries for building stuff
	/mnt - mount points
	/usr -> / # softlink pointing to /

Based on the Linux assumption:

	/dev - devices
	/proc - proc files
	/sys - sys files

For crap stuff:

	/sucks - stuff that sucks, like ugly gnu library dependencies, or systemd fake handlers
 
