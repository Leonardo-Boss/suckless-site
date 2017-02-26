Keycode
========
With this patch, handling key input is done with keycodes instead of keysyms.
This way, input is independent from keyboard layout (you can get keycodes 
using xev to adapt config.h)

Download
--------
* [dwm-keycode-6.1.diff](dwm-keycode-6.1.diff)
* [dwm-keycode-20160702-56a31dc.diff](dwm-keycode-20160702-56a31dc.diff)

Author
------
* Quentin Rameau <quinq@fifth.space>
