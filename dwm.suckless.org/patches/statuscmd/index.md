statuscmd
=========

Description
-----------
This patch adds the ability to execute shell commands based on the mouse
button and position when clicking the status bar.

Usage
-----
Fill 'statuscmds' with commands. Choose which command to run by prefixing
the status text with a raw byte of the command's index in 'statuscmds',
offset by +1 since '\0' terminates strings. statuscmds[0] runs by default
if there is no index to the left of the mouse position. The mouse button
clicked is exported as $BUTTON.

Example
-------
With these commands:

	static const char *statuscmds[] = { "volume", "cpu", "battery" };

And root name set like this:

	xsetroot -name "$(echo -e 'volume |\x02 cpu |\x03 battery')"

Clicking on 'volume |' would run `volume`, clicking on ' cpu |'
would run `cpu` and clicking on ' battery' would run `battery`.

The `cpu` script could look like this:

	#!/bin/sh

	case $BUTTON in
		1) notify-send "CPU usage" "$(ps axch -o cmd,%cpu --sort=-%cpu | head)";;
		3) st -e htop;;
	esac

Notes
-----
If you have 10 or more commands, make sure to be careful when adding or
removing newline characters since '\n' is equal to '\x0a'. The problem
where having certain unprintable characters such as '\n' in the status
string can make dwm laggy is "fixed", since they are not copied to the
string that is actually drawn.

Download
--------
* [dwm-statuscmd-6.2.diff](dwm-statuscmd-6.2.diff)

Author
------
* Daniel Bylinka - <daniel.bylinka@gmail.com>
