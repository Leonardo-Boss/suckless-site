# TAGLAYOUTS #

## Description ##

This patch enables one layout per tag in contrast of one layout for all tags. - A more general approach is the [pertag patch][4].

## Download ##
 * [taglayouts-4.6.diff][3] - static implementation of taglayouts (saves 7 LOCs)
 * [dwm-4.6-taglayouts.diff][2]
 * [dwm-4.5-taglayouts.diff][1]

## Known Bugs ##

 * If you had selected multiple tags and try to get back to them with the
   viewprevtag method, keep in mind that the layout of the FIRST tag is used,
   that was previously selected.

## Author ##

 * http://na.srck.net/dwm
 * Updated by Jan Christoph Ebersbach - <jceb@e-jc.de>

[1]: http://www.e-jc.de/dwm/4.5/dwm-4.5-tip_ac233c362502-taglayouts.diff
[2]: http://www.e-jc.de/dwm/4.6/current/dwm-4.6-taglayouts.diff
[3]: http://news.nopcode.org/taglayouts-4.6.diff
[4]: /dwm/patches/pertag.html

