Keycode
=======
With this patch, handling key input is done with keycodes instead of keysyms.
This way, input is keyboard layout independant (adapt config.h to your keyboard using for example xev).

Download
--------
* [tabbed-0.6-keycode.diff](tabbed-0.6-keycode.diff)
* [tabbed-keycode-20160103-eb0ff62.patch](tabbed-keycode-20160103-eb0ff62.patch)

Author
------
* Quentin Rameau <quinq@fifth.space>
