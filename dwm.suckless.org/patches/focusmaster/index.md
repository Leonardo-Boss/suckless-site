focusmaster
===========

Description
-----------
Switch focus to the (tiled) master client from anywhere in the stack.

focusmaster-return
------------------
Switch to the master from anywhere in the stack, when the master is selected
return to the client switched from using the same keybind.

Configuration
-------------
Add the following line to the keys array in your config.h (or config.def.h) to bind Mod+Ctrl+Space to focusmaster.

	{ MODKEY|ControlMask,           XK_space,  focusmaster,    {0} },

Download
--------
* [dwm-focusmaster-20200717-bb2e722.diff](dwm-focusmaster-20200717-bb2e722.diff) (2020.07.17)
* [dwm-focusmaster-return-20210729-138b405.diff](dwm-focusmaster-return-20210729-138b405.diff) (2021.07.29)

Author
------
* Mateus Auler - <mateusauler at protonmail dot com>
* Jack Bird - <jack.bird@dur.ac.uk> (focusmaster return patch)
