quitprompt
===========

Description
-----------
This patch replaces the default quit behavior with a dmenu prompt.
Options are "yes", "no" and "restart".

![](quitprompt.png)

The additional confirmation can protect unsaved work from accidentally hitting the quit key by requiring two additional keystrokes (y/yes and RET).

Additionally, it allows for restarting / reloading dwm without ending the xsession and closing all x windows.
To abort, press ESC or n/no and RET.

Download
--------
* [dwm-quitprompt-20220718-6613d9f.diff](dwm-quitprompt-20220718-6613d9f.diff)

Configuration
---------------------
This patch replaces the default quit keybinding in `config.def.h` to quitprompt.

	{ MODKEY|ShiftMask, XK_q, quitprompt, {0} },

Author
------
* Laurenz Foglia - <lerrrtaste@protonmail.com>
