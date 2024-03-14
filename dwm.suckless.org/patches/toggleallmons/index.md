toggleallmons
====================

Description
-----------
This patch provides a keybinding to toggle the tagsets for all of your monitors at the same time.

Press MOD + Shift + Tab to toggle tagsets for all monitors.

This patch works by creating a new function that wraps the meat of the `view` function in a for loop that iterates through all the monitors, while changing all instances of `selmon` to the name of the iterating variable.

There are two patches provided, one for the base 6.4 release, and one for those who want to use pertag in conjuction.
Note that to use the pertag variant, you must already have applied the pertag patch.

Download
--------
* [dwm-toggleallmons-6.4.diff](dwm-toggleallmons-6.4.diff) - 2024-03-14
* [dwm-toggleallmonspertag-6.4.diff](dwm-toggleallmonspertag-6.4.diff) - 2024-03-14

Author
------
* Philip Thomas K. - <philtomk@gmail.com>
