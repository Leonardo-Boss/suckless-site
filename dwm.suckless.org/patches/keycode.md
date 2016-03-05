Keycode
========
With this patch, handling key input is done with keycodes instead of keysyms.
This way, input is keyboard layout independant (adapt config.h to your keyboard
using for exemple xev).

Download
--------
* [dwm-6.0-keycode.diff](dwm-6.0-keycode.diff)
* [dwm-20151110-5ed9c48-keycode.patch](dwm-20151110-5ed9c48-keycode.patch)

Author
------
* Quentin Rameau <quinq@fifth.space>
