Mouse support with multisel
===========================

This provides the basic mouse support described in the 'mouse support' patch,
but against 4.6 (32f2564dbbbf5aeafb7190a3d35066142f34448f).

In addition, multisel is supported via Ctrl-leftclick.
(i.e. Ctrl-leftclick does for mouse operation what Ctrl-Return does for
keyboard, as described in the 'multisel' patch; however, the 'multisel' patch
itself is no longer needed in 4.6 because its functionality has been previously
merged in and now it's part of the master)

Download
--------
* [dmenu-4.6-mouse-support-msel.diff](dmenu-4.6-mouse-support-msel.diff)

Author
------
* Xarchus
