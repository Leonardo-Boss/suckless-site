Xft Support
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

* [dmenu-4.4.1-xft.diff](dmenu 4.4.1)

History
------

Created from Dan Brown's [http://lists.suckless.org/dev/1011/6474.html](4.2.1 patch).
