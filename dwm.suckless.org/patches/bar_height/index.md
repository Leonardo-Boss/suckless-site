bar height
==========

This patch allows user to change dwm's default bar height.

Usage
-----

Change `user_bh` variable in you're config.h If `user_bh` is equal to 0 dwm will calculate bar height like it did before.

	static const int user_bh = 0; /* 0 means that dwm will calculate bar height, >= 1 means dwm will user_bh as bar height */

Download
--------
* [dwm-bar-height-6.2.diff](dwm-bar-height-6.2.diff)

The following patch is following the way mentioned in [Archwiki](https://wiki.archlinux.org/title/Dwm#Space_around_font_in_dwm's_bar): the variable (renamed from `user_bh` to `barspacing`) is instead added to the font size. As a result, the bar height respects the DPI (which defines the font height).
* [dwm-bar-height-spacing-6.3.diff](dwm-bar-height-spacing-6.3) (2022-05-19)

Authors
-------
* bit6tream <bit6tream@cock.li> ([bit6tream's gitlab](https://gitlab.com/bit9tream)): original patch
* Acid Bong ([github](https://github.com/acid-bong)): `bar-height-spacing` patch
