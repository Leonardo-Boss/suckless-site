alwaysontop
===========

Description
-----------
Choose one floating window to be always-on-top - this prevents other floating
windows from being raised above it. Useful for playing films, etc.
----------
Updates
* 2023-10-13 made it work so that any window you specify is ontop not just the one
Download
--------
* [alwaysontop-6.2.diff](alwaysontop-6.2.diff)
* [alwaysontopall-6.2.diff](alwaysontopall-6.2.diff)
Example Configuration
---------------------
Add the following to your keys array to bind mod+tab to toggle attach below.

	{ MODKEY|ShiftMask, XK_space, togglealwaysontop, {0} },

Author
------
* Rob Pilling - <robpilling@gmail.com>
* Matt Quintanilla - <mattquintanilla45@gmail.com>
