inplacerotate
=============

Description
-----------
This patch provides a keybinding to rotate all clients in the currently
selected area (master or stack) without affecting the other area.

This allows you to shift the ordering of clients in the master / stack area
without worrying clients will transfer between the master / stack (nmaster)
boundry. If your current focus is in the master area, clients in the master
rotate and stack clients are left alone. And inversely, if you're focused on
a client in the stack, stack clients are rotated but master clients are left
alone. Also in addition to not affecting the nmaster boundry, the focused
client is always kept fixed on the current position (e.g. the screen focus
area doesn't change) making this a fully 'in-place' rotation.


Download
--------
* [dwm-inplacerotate-6.2.diff](dwm-inplacerotate-6.2.diff)

Authors
-------
* Miles Alan - <m@milesalan.com>
