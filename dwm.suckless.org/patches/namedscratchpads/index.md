namedscratchpads
================

Description
-----------
Allows for the creation of multiple scratchpad windows, each assigned to different keybinds.

On pressing the keybind the window will either:
* Spawn based on the given command, if it's not already running
* Toggle visibility of the window

A new field in the rules array is added to associate the command with the corresponding rule.

Works well with [floatrules](../floatrules/) for window positioning.

Apply the scratchtagwins patch on top of this patch, to have 'scratchpad tags'
support. Contribute to this sub-patch on this [gitlab repo](https://gitlab.com/GasparVardanyan/dwm/-/tree/namedscratchpads-scratchtagwins).

Download
--------
* [dwm-namedscratchpads-6.2.diff](dwm-namedscratchpads-6.2.diff)
  * [dwm-scratchtagwins-6.3.diff](dwm-scratchtagwins-6.3.diff)
* [dwm-namedscratchpads-6.5.diff](dwm-namedscratchpads-6.5.diff)
  * [dwm-scratchtagwins-6.5.diff](dwm-scratchtagwins-6.5.diff)

Authors
-------
* Joshua O'Connor <joshua@joshuao.com>
* [Gaspar Vardanyan](https://gasparvardanyan.github.io/) (scratchtagwins)
