shift-tools
================

Description
-----------
A group of functions that shift. Inspired by
[shiftview](https://lists.suckless.org/dev/1104/7590.html) and
[focusadjacenttag](../focusadjacenttag). There is also a
[version](shift-tools-scratchpads) compatible with the
[scratchpads](../scratchpads) patch with only needs you to include the file
(#include "shift-tools-scratchpads.c") before the keys[] array.



- shifttag, moves the current selected client to the adjacent tag
- shifttagclients, moves the current selected client to the adjacent tag that
  has at least one client else acts as shifttag
- shiftview, view adjacent tag
- shiftviewclients, view the closes tag that has a client. If none acts as
  shiftview
- shiftboth, shifttag and shiftview. Basically moves the window to the
  next/prev tag and follows it.
- shiftswaptags, its a shift implementation on the swaptags function, which in
  short 'swaps tags' (swaps all clients with the clients on the adjacent tag).
  A pretty useful example of this is chosing a tag empty and sending all your
  clients to that tag.
- swapfunction is the 'helper' function for the shiftswaptags.  remember that
  these functions **shift**, which means you can go from tag 1 to 9 or 9 to 1.
  Also remember that the default argument is 1 and you can change it.

Download
--------
* [dwm-shif-tools-6.2.diff](dwm-shif-tools-6.2.diff)
* [Github mirror](https://github.com/explosion-mental/Dwm/blob/main/Patches/dwm-shif-tools-6.2.diff)
* [shift-tools.c](shift-tools.c)
* [shift-tools-scratchpads.c](shift-tools-scratchpads.c)

Authors
-------
* explosion-mental - <explosion0mental@gmail.com>
