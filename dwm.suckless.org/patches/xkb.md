xkb
=====
Description
-----------
This patch replaces main functionality of xxkb. It will remember the
client's xkb status and restores it when client became focused.

Applying
--------
Firstly you have to configure xkb as you need as described here:
http://www.x.org/archive/X11R7.5/doc/input/XKB-Config.html
The patch depends on two variables: showxkb flag defines, should patch show
current xkb group on the bar; xkb_layouts array defines the text, which will
appear on the bar according to current group if showxkb set to TRUE.

Download
--------

 * [dwm-6.1-xkb.diff](dwm-6.1-xkb.diff) (2014-02-15)

Author
------

 * Yury Shvedov - shved at lvk dot cs dot msu dot su (or mestofel13 at gmail dot com).
