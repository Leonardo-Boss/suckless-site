UNIX Socket Control
================================

Description
-----------
This patch removes the built-in keybinds and instead replaces them with a UNIX socket and protocol for input.
The idea is essentially the same as how bspwm uses bspc for controlling the windows and sxkhd to bind the bspc
commands to keys.

The UNIX socket path is `/tmp/tabbed_$WINID-socket` where `WINID` is the tabbed window id in decimal format.
The protocol uses the same names and arguments as the internal functions separated by `\0`.

For example, to select the next tab, you would use: `printf "%s\0%s\0" "rotate" "1" | nc -U "/tmp/tabbed_$WINID-socket"`

I have also created two scripts to be used in conjunction with this patch: `tabc` and `bspctab`.
The `tabc` script allows more easy access to common actions like changing tabs, moving tabs, etc.
For example, the above command to select the next tab using `tabc` would be simply: `tabc tabnext "$WINID"`

The `bspctab` uses `tabc` to making using tabs as seamless as possible in bspwm. The intent was for tabs in bspwm
to feel much like using tabs in i3 as that was the only feature I missed when switching to bspwm.
Details on how to implement `bspctab` in your `sxhkdrc` can be found along side the scripts in my repo listed below.

[Helper Scripts Repo](https://github.com/Jaywalker/tabbed-unix-socket-scripts)

Download
--------
* [tabbed-unix-socket-control-20240319.diff](tabbed-unix-socket-control-20240319.diff)

Authors
-------
* Justin Williams
