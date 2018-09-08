open_copied_url
=======

Description
-----------

Open contents of the clipboard in a user-defined browser.

The clipboard in this case refers to the CLIPBOARD selection which gets
populated when pressing e.g. C-c.

Instructions
-----------

Add a keybinding like the following example to "shortcuts" in config.h:

	{ MODKEY, XK_v, opencopied, {.v = "firefox"} },

Set the .v field of the last parameter to the program you want to bind to the key.

Notes
-----

By default this patch binds the Mod+o to "xdg-open". This allows users
to open the contents of the clipboard in the default browser.

Download
--------

* [st-openclipboard-20180525-2c2500c.diff](st-openclipboard-20180525-2c2500c.diff)

Authors
-------

* Michael Buch - <michaelbuch12@gmail.com>
