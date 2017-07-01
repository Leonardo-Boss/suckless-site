Build stali from source
=======================

We require a recent x86\_64 based linux system as build environment, on Debian we require

	; sudo apt-get install build-essential

(on other distros you will need at least gmake)

Create a build directory

	; mkdir stalibuild-root
	; cd stalibuild-root

Retrieve the stali toolchain

	; git clone http://git.sta.li/toolchain

Retrieve the stali src

	; git clone http://git.sta.li/src

Retrieve the kernel source

	; cd src
	; git clone http://git.sta.li/sys.x86_64 # for x86_64 platform
	; git clone http://git.sta.li/sys.pi # for Raspberry Pi platform

Build stali

	; export STALISRC=/path/to/stalibuild-root/src
	; cd src
	; vi config.mk # fit your needs, esp. DESTDIR and TARGETS
	; make

Install stali in DESTDIR

	; make install

You have now built stali from source.

