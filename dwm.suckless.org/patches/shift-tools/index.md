shift-tools
===========

Description
-----------
A group of functions that shift. Inspired by
[shiftview](https://lists.suckless.org/dev/1104/7590.html),
[focusadjacenttag](../focusadjacenttag) and [swaptags](../swaptags).


Usually you just `#include "shift-tools.c"` before the `keys[]` array to use
these function, since no internal changes are needed other than to add the
keybindings to `config.h`.


There is also a [version](shift-tools-scratchpads.c) compatible with the
[scratchpads](../scratchpads) patch: `#include "shift-tools-scratchpads.c"`


Whenever I say `next/prev` I'm describing the function with argument `+1/-1`,
default and generally what you will use. Changing these do make a difference on
how many tags the function should `shift`.


* **shifttag** - send a window to the next/prev tag.
* **shifttagclients** - send a window to the next/prev tag that has a client,
  else it moves it to the next/prev one.
* **shiftview** - view the next/prev tag.
* **shiftviewclients** - view the next/prev tag that has a client, else view
  the next/prev tag.
* **shiftboth** - move the active window to the next/prev tag and view it's new
  tag.
* **shiftswaptags** - swaps "tags" (all the clients on it) with the next/prev
  tag.

* helpers:
	* **swaptags** - used on shiftswaptags, original code on [swaptags](../swaptags).
	* **shift** - shift bits in acordance to the LENGTH of the `tags`.


Remember that these functions _shift_, which means you can go from tag 1 (the
first tag) to 9 (or whatever is your last tag).

Download
--------
* [dwm-shif-tools-6.2.diff](dwm-shif-tools-6.2.diff)
* [codeberg mirror](https://codeberg.org/explosion-mental/demwm/src/branch/patches/dwm-shif-tools-6.2.diff)
* [shift-tools.c](shift-tools.c)
* [shift-tools-scratchpads.c](shift-tools-scratchpads.c)

Author
------
* explosion-mental - <explosion0mental@gmail.com>
