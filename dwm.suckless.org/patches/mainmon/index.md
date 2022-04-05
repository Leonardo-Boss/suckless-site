mainmon
==========

Description
-----------
By default, the contents of the status bar are shown on the selected monitor.
This can be an annoyance in a couple of scenarios:

* If you have a vertical monitor, it might not be possible to see the entire
  status bar on it.
* If you use your computer in public (i.e. using a projector), you might not
  want others to see the contents of the status bar.

This patch adds a configurable `mainmon` option to the `config.def.h` which
defines the monitor where the status bar is shown. It no longer follows
focus.

Download
--------
* [dwm-mainmon-20220330-bece862.diff](dwm-mainmon-20220330-bece862.diff)

Author
-------
* Benjamin Chausse - <benjamin@chausse.xyz>
