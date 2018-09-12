center
======

Description
-----------

This patch centers dmenu in the middle of the screen.

Previously this has been achieved through the [xyw patch][1] and a bash script
to calculate the centered x and y positions. However, this is a slow and overly
complex way which is hard to integrate into programs which call dmenu directly,
eg surf or tabbed. On the other hand, This small standalone patch is
instantaneous and works globally.

[1]: https://tools.suckless.org/dmenu/patches/xyw

Download
--------

* [dmenu-center-4.8.diff](dmenu-center-4.8.diff)

Authors
-------

* Ed van Bruggen <edvb@uw.edu>