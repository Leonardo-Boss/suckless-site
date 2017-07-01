Installation
============

Raspberry Pi 2+
---------------
Download the [stapi.img.gz](http://dl.sta.li/stapi.img.gz) and flash your sd
card for the Pi 2+. It should boot out of the box.

PC
--

Prepare a disk partition for stali, we recommend formatting it with ext4fs

Mount the disk partition

	; sudo su
	# mkdir /mnt/rootfs-x86_64
	# mount /dev/sdX /mnt/rootfs-x86_64

Clone rootfs-x86\_64

	# cd /mnt
	# git clone http://git.sta.li/rootfs-x86_64

Setup the system

	# cd /mnt/rootfs-x86_64/etc
	# # adjust rc.init/exit, etc.

Prepare chroot

	# mount -t proc proc /mnt/rootfs-x86_64/proc
	# mount --rbind /sys /mnt/rootfs-x86_64/sys
	# mount --rbind /dev /mnt/rootfs-x86_64/dev

chroot into stali

	# chroot /mnt/rootfs-x86_64 /bin/sh
	# # build a custom kernel, setup system/bootloader etc # TODO

Finish the installation and boot into stali.

