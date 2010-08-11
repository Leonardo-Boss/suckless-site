XMMS-LIKE PATTERN MATCHING
==========================

This patch allows the user to match strings in several pieces.
For example to type:  

	 dme atc
  
could match  

	 http://tools.suckless.org/dmenu/patches/

It can be useful to ease the matching on huge strings.

The patch comes in two flavours:

* **tok** (tokenise), for dmenu tip and upcoming release. Enabled with **-t** command line flag.

* **xmms**, for legacy dmenu. The original patch submitted by Julien Steinhauser. Enabled with the **-xs** command line flag.

Download tok
------------

* [dmenu-tip-tok.diff](dmenu-tip-tok.diff) (for hg tip (checked against 358) - **use at your own risk**)

Download xmms
-------------

* [dmenu-4.1.1-xmms.diff](dmenu-4.1.1-xmms.diff) (latest dmenu release at time of writing)

* [dmenu_xmms.diff](dmenu_xmms.diff) (for **dmenu_3.9** - the original patch submitted by Julien Steinhauser <[julien.steinhauser@orange.fr](mailto:julien.steinhauser@orange.fr)>, taken from [https://bbs.archlinux.org/viewtopic.php?pid=429090#p429090](fresch's patch))

