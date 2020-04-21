setborderpx
===========

Description
-----------

This patch allows you to change border pixels at runtime.

Default key bindings
--------------------
	 Key                    Argument   Description
	----------------------------------------------------
	 Mod-Shift-minus        +0.25      Increase borderpx
	 Mod-Shift-plus         -0.25      Decrease borderpx
	 Mod-Shift-numbersign    0.00      Reset borderpx

Notes
-----
You might want to set resizehints in config.h to zero to get smooth animations 
when increasing or decreasing border pixels.

Download
--------
* [dwm-setborderpx-6.2.diff](dwm-setborderpx-6.2.diff) - 05-08-2019

Author
------
* Aaron Duxler <aaron@duxler.xyz>
