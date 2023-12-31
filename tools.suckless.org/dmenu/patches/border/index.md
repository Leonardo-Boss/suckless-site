border
======

Description
-----------
This patch adds a border around the dmenu window. It is intended to be used
with the center or xyw patches, to make the menu stand out from similarly
coloured windows.


![dmenu border screenshot](dmenu_border.png)

Download
--------
* [dmenu-border-4.9.diff](dmenu-border-4.9.diff) (2019-05-19)
* [dmenu-border-5.2.diff](dmenu-border-5.2.diff) (2023-01-20)
* [dmenu-border-20230512-0fe460d](dmenu-border-20230512-0fe460d.diff) (2023-05-12)

Authors
-------
* Leon Plickat <leonhenrik.plickat[at]stud.uni-goettingen.de>

border command line option
==========================

Description
-----------
This patch is a derivative of the previous patch. The border witdh can be
specified through the command line using the -bw option. Width defaults to 0.

Create menu with border width 3:

	echo 'item1\nitem2\nitem3' | dmenu -bw 3

Download
--------
* [dmenu-border-20201112-1a13d04.diff](dmenu-border-20201112-1a13d04.diff) (2020-11-12)
* [dmenu-borderoption-20200217-bf60a1e.diff](dmenu-borderoption-20200217-bf60a1e.diff) (2020-02-17)

Authors
-------
* Ben Raskin <ben[at]0x1bi.net>

separate border color
=====================

Description
-----------
This patch is based on the border patch, but adds another colorscheme to
set the border color independently from SelBg

Download
--------
* [dmenu-bordercolor-20230512-0fe460d](dmenu-bordercolor-20230512-0fe460d.diff) (2023-05-12)
