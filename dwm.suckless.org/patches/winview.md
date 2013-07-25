Winview
========

Description
-----------

Adds a command to select the view of a window. The list of tags to be displayed
is matched to the window tag list. This command is typically used from the
all-window view.

Usage
-----

The winview command is assigned by default to the key `Mod1-o`.  To select the
view of a window which is not currently displayed, move to the all-window view
with `Mod1-0` key, give focus to this window (using the mouse or `Mod1-j`/`k`
keys) and switch to the window view with `Mod1-o`. We recommend [grid](grid)
layout for the all-window view, this layout is well adapted to display many
windows in a limited space.

Configuration and Installation
------------------------------

#### Using the default configuration file

* Make sure the directory where you build dwm does not contain a config.h file;
* Apply the patch;
* Run make and make install.

#### Using an existing customised configuration file

<ul>
<li>Apply the patch;
<li>Add the following element in the keys array:
</ul>
	        { MODKEY, XK_o, winview, {0} },
<ul>
<li>Run make and make install.
</ul>

An example of how to insert this line can be found in the default config file
template, config.def.h.

Download
--------

 * [dwm-6.0-winview.diff](dwm-6.0-winview.diff)

Author
------
 * Philippe Gras - `<philippe dot gras at free dot fr>`

