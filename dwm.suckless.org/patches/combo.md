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

 * [dwm-5.9-combo.diff](dwm-5.9-combo.diff) (2010-10-30)

Author
------

 * Wolf Tivy - wolf at tivy dot com.
