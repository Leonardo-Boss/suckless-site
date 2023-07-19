Keychord
================

Description
-----------
A patch that change the Key struct to Keychord, letting user map a sequence of key instead of one singular keystroke.

*update 01/19/2022:
change implementation to use array and pointer instead of dynamic heap allocation to minimize crash due heap allocation being too slow.

*update 07/19/2023:
changed grabkeys function to match the changes made in dwm-6.4.  


Download
--------
* [dwm-keychord-20211210-a786211.diff](dwm-keychord-20211210-a786211.diff) (10/12/2021)
* [dwm-keychord-6.2.diff](dwm-keychord-6.2.diff) (01/19/2022)
* [dwm-keychord-6.4.diff](dwm-keychord-6.4.diff) (07/19/2023) (latest version)

Authors
-------
* Hai Nguyen - <hhai2105@gmail.com>
* Aaron Züger - <contact@azureorange.xyz>
