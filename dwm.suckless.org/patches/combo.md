combo
=====
Description
-----------
This patch tweaks the tagging interface so that you can select multiple tags 
for tag or view by pressing all the right keys as a combo. For example to 
view tags 1 and 3, hold MOD and then press and hold 1 and 3 together.

This makes selecting multiple tags very easy and fluid. 

Applying
--------
The patch adds two functions that you have to know about: combotag and 
comboview. Replace the tag and view functions with these in TAGKEYS and any 
other places you want. combotag and comboview are totally compatible with tag 
and view so you could replace all usages if you wanted.

Download
--------

 * [dwm-5.9-combo.diff](dwm-5.9-combo.diff) - 2010-10-30
 * [dwm-6.0-combo.diff](dwm-6.0-combo.diff) - 2012-10-09
 * [dwm-6.1-combo.diff](dwm-6.1-combo.diff) - 2016-01-22

Author
------

 * Wolf Tivy - wolf at tivy dot com.
 * Dan McNair - cosfx at h0v3 dot net (mechanical update to 6.0)
 * Matthew Boswell - mordervomubel+suckless at lockmail dot us (mechanical update to 6.1)
