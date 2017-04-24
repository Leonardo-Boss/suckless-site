Keycodes
========
With this patch, key input handling is done with keycodes instead of keysyms.
This way, input is independand from keyboard layout.
You can adapt config.h to your keyboard by looking up keycodes with, for exemple, xev.

Download
--------
* [surf-webkit2-keycodes-20170424-5c52733.patch](surf-webkit2-keycodes-20170424-5c52733.patch)

Author
------
* Quentin Rameau <quinq@fifth.space>
