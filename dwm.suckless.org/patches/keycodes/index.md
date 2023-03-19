Keycodes
========
With this patch, handling key input is done with keycodes instead of keysyms.
This way, input is independent from keyboard layout (you can get keycodes using
xev to adapt config.h)

Download
--------
* [dwm-keycodes-6.4.diff](dwm-keycodes-6.4.diff)
* [dwm-keycodes-6.1.diff](dwm-keycodes-6.1.diff)
* [dwm-keycodes-20230319-a38a8b3.diff](dwm-keycodes-20230319-a38a8b3.diff)

Authors
-------
* Quentin Rameau <quinq@fifth.space>
