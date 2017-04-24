Keycodes
========
With this patch, key input handling is done with keycodes instead of keysyms.
This way, input is independand from keyboard layout.
You can adapt config.h to your keyboard by looking up keycodes with, for exemple, xev.

Download
--------
* [surf-webkit2-keycodes-20170424-5c52733.patch](surf-webkit2-keycodes-20170424-5c52733.patch)
* [surf-webkit1-keycodes-20170424-9ba143b.patch](surf-webkit1-keycodes-20170424-9ba143b.patch)

Author
------
* Quentin Rameau <quinq@fifth.space>
