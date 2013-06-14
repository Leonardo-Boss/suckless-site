Xft support
===========

Description
-----------

This patch provides Xft support to dmenu, thereby allowing use of 
anti-aliased fonts and more.  Fonts are specified using the standard 
Xft syntax:

	<family>-<size>:<name>=<value>

For example, 28pt Sans:

	dmenu -fn Sans-28

Download
--------

* [dmenu 4.5](dmenu-4.5-xft.diff)
* [dmenu 4.5 for debian](dmenu-4.5-xft-debian.diff)
* [dmenu 4.4.1](dmenu-4.4.1-xft.diff)

History
------

Created from Dan Brown's [4.2.1 patch](http://lists.suckless.org/dev/1011/6474.html).
