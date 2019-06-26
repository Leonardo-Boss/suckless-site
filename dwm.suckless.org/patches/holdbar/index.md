holdbar
=======

Description
-----------
This patch does 3 things:
1. Disables status bar by default
2. Changes the Mod key to the super key (MOD4)
3. Modifies super key behavior so that the status bar shows whenever MOD4 is held down

This is useful if you want to save as much screen space as possible but still want frequent access to the information it provides. 

NOTE: This also modifies the status bar so that it only overlays windows. No readjustment will happen upon tag switches either. 

Directions
----------
On a fresh dwm install do 
1. git apply (PATCHDIR)/dwm-holdbar-6.2.diff 
2. in project dir, sudo make clean install
3. Restart manager


Download
--------
* [dwm-holdbar-6.2.diff](dwm-holdbar-6.2.diff)

Author
------
* Hayden Szymanski <hsszyman@gmail.com>
