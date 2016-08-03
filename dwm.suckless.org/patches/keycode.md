Keycode
========
With this patch, handling key input is done with keycodes instead of keysyms.
This way, input is keyboard layout independant (adapt config.h to your keyboard
using for exemple xev).

Download
--------
* [dwm-keycode-6.1.diff](dwm-keycode-6.1.diff)
* [dwm-keycode-20160702-56a31dc.diff](dwm-keycode-20160702-56a31dc.diff)

Author
------
* Quentin Rameau <quinq@fifth.space>
