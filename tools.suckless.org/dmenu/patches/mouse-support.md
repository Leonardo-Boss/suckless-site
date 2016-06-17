Mouse support
=============

With this patch dmenu will have basic mouse support. The following features are supported: 

Mouse actions supported:

* Left-mouse click:
    * On prompt and input field: clear input text and selection.
    * In horizontal and vertical mode on item: select and output item (same as pressing enter).
    * In horizontal mode on arrows: change items to show left or right.
* Right-mouse click: close.
* Middle-mouse click:
    * Paste current selection.
    * While holding shift: paste primary selection.
* Scroll up:
    * In horizontal mode: same as left-clicking on left arrow.
    * In vertical mode: show items above.
* Scroll down:
    * In horizontal mode: same as left-clicking on right arrow.
    * In vertical mode: show items below.

The attached patch applies cleanly to latest dmenu 4.6.

Download
--------
* [dmenu-4.6-mouse-support.diff](dmenu-4.6-mouse-support.diff)

Author
------
* Hiltjo Posthuma - <hiltjo@codemadness.org>
