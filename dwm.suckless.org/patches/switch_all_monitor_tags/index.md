switch all monitor tags
=======================

Description
-----------
Switches the selected tag of all monitors.

The patch modifies `config.def.h`. Make sure to update `config.h` accordingly,
if the file exists.

Example Usage
-------------
If monitor A is on tag 1, and monitor B is on tag 2, and the
user inputs `Alt+Super+3`,
both Monitors will switch to tag 3 (the currently selected monitor will not change).

Download
--------
* [dwm-switchallmonitortags-6.3.diff](dwm-switchallmonitortags-6.3.diff)

Author
------
* yasumori <ysmr@protonmail.com>
