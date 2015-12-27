better borders
==============

Description
-----------

Like [Ebersbach's patch](http://dwm.suckless.org/patches/noborder), this patch
removes the border when there is only one window visible, but this patch does
not depend on layout-specific changes and should automatically work with most
layouts. The patch also removes borders from any windows that are the same size
as the monitor and marks them full-screen even if their X properties indicate
otherwise. This eliminates nuisance borders that appear with some games and
applications while in full-screen mode.

Thanks to Alesandar Metodiev for reporting a bug that lead to the patch being
rewritten.

Download
--------

 * [dwm-6.1-better-borders.diff](dwm-6.1-better-borders.diff) (2015-12-27)

Author
------
 * Eric Pruitt - `<eric dot pruitt at gmail dot com>`
