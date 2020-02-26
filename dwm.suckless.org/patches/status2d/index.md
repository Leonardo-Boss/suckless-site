status2d
========

Description
-----------
Status2d allows colors and rectangle drawing in your DWM status bar. See below
an example of my status bar with multi-cpu and battery.

![Status2d screenshot](status2d.png)

Download
--------

* [dwm-status2d-6.2.diff](dwm-status2d-6.2.diff)


Usage
-----
* ^rx,y,w,h^: draw a rectangle.

* ^c#FF0000^: set foreground color.

* ^b#55cdfc^: set background color, only applies to text, use the ^r^ command to add backgrounds to your drawings

* ^f11^: forward the x drawing cursor, only needed for drawings, not text.

* ^d^: reset colors to SchemeNorm.

Example
-------
xsetroot -name "[status2d] ^c#FF0000^red text with blue
rectangle^c#55cdfc^^r3,3,14,14^^f20^^c#FFFFFF^^b#f7a8b8^
and white text on pink background "

Authors
-------
* [sipi](https://github.com/sipi)
* lhark - <lhark@ntymail.com> (6.2 port, ^b^ command)

