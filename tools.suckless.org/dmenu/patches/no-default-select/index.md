no-default-select
=================
This patch changes how the default selection works. It depends on [gridnav](../gridnav).

By default, dmenu selects the first entry.
I like the [gridnav](../gridnav) patch which along with [grid](../grid) lets you see the results in a grid and use right and left arrow to move around in dropdown. But you lose the ability to move in typed text because the default selection feature of dmenu.

This patch fixes it by not selecting anything by default. So, now one can move in text and in dropdown.

Download
--------
* [dmenu-nodefaultsel-5.2.diff](dmenu-nodefaultsel-20240105-9a6ef61.diff)

Author
------
* Vishal Tripathy <vishaltripathy54@gmail.com>
