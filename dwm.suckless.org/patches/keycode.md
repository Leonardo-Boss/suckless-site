Keycode
========
With this patch, handling key input is done with keycodes instead of keysyms.
This way, input is keyboard layout independant (adapt config.h to your keyboard
using for exemple xev).

Download
--------
* [dwm-6.0-keycode.diff](dwm-6.0-keycode.diff)
* [dwm-keycode-20160702-56a31dc.patch](dwm-keycode-20160702-56a31dc.patch)

Author
------
* Quentin Rameau <quinq@fifth.space>
