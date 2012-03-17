Fix WM_CLASS allocation
=======================

Description
-----------

This patch fixes the fact that the WM_CLASS on a window should start with a
capital letter, and resources on a window should be all in lowecase.  This
is per the ICCCM, which Surf was previously neglecting to do.

Download
--------

* [http://xteddy.org/surf.html#toc5](http://xteddy.org/surf/html#toc5)

Author
------

* Thomas Adam (thomas_adam) <[thomas.adam22@gmail.com](mailto:thomas.adam22@gmail.com)>
