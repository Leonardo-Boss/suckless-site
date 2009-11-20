XMMS-LIKE PATTERN MATCHING
==========================

This patch allows the user to match strings in several pieces.
For example to type:  

	 dme atc
  
could match  

	 http://tools.suckless.org/dmenu/patches/

 in someone's bookmarks file.

This feature is enabled by -xs command line flag, it can be useful to ease the matching on huge strings.

The code comes from a vertical patch for dmenu_3.9 wrote by Fresch, the original patch has a lot of options, I just cutted out the ones I use on top of Meillo's dmenu vertical patch. (multiselect, newline and this one) 

Cutter
------
- Julien Steinhauser <[julien.steinhauser@orange.fr](mailto:julien.steinhauser@orange.fr)>

Download
--------

* [dmenu_xmms.diff](dmenu_xmms.diff)
