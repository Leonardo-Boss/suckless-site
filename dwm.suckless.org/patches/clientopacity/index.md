clientopacity
=============

Description
-----------
This patch adds default transparency parameters to config.h which specify the starting transparencies of all windows.

It also adds opacities to the ruleset, enabling override of the opacities on a per client basis for both focus and unfocus.

Additionally, it adds some shortcuts:

* [Alt]+[Shift]+[a] -> increase focus opacity of currently focused window
* [Alt]+[Shift]+[s] -> decrease focus opacity of currently focused window

* [Alt]+[Shift]+[z] -> increase unfocus opacity of currently focused window
* [Alt]+[Shift]+[x] -> decrease unfocus opacity of currently focused window

It is based on the transparency patch of Christop Lohmann.

20220612-d3f93c7 Version
------------------------
This earlier version restricts control to focussed opacity, and has different default shortcuts:

* [Alt]+[Shift]+[Numpad_Add] -> increase opacity of currently focused window
* [Alt]+[Shift]+[Numpad_Subtract] -> decrease opacity of currently focused window

Download
--------
* [dwm-clientopacity-6.4.diff](dwm-clientopacity-6.4.diff)
* [dwm-clientopacity-20220612-d3f93c7.diff](dwm-clientopacity-20220612-d3f93c7.diff)

Authors
-------
* Fabian Blatz - fabian.blatz at gmail period com
* John Urquhart Ferguson (sympodius) - <mail@sympodius.net> (6.4 port with unfocussed opacity control)
