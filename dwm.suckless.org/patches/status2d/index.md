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
* [dwm-status2d-20200508-60bb3df.diff](dwm-status2d-20200508-60bb3df.diff)

Use this patch if you want to include the extrabar patch

* [dwm-status2d-extrabar-6.2.diff](dwm-status2d-extrabar-6.2.diff)

Usage
-----
* __^rx,y,w,h^__
   Draw a rectangle of width w and height h, with its top left corner at (x,y) relative the X drawing cursor.


* __^c#FF0000^__
   Set foreground color.


* __^b#55cdfc^__
   Set background color, only applies to text, simply use the ^r^ command to change the background while drawing.


* __^f<px>^__
   Forward the X drawing cursor by <px> pixel. Please bear in mind that you have to move the cursor enough to 
   display your drawing (by the with of your drawing).


* __^d^__
   Reset colors to SchemeNorm.

Example
-------
`xsetroot -name "[status2d] ^c#FF0000^red text with blue
rectangle^c#55cdfc^^r3,3,14,14^^f20^^c#FFFFFF^^b#f7a8b8^
and white text on pink background "`


### Steps to draw a battery icon (ajust the values to fit your setup)
Draw the nose:                                 `"^r00,07,02,04^"`
Draw the battery:                              `"^r02,04,22,10^"`
Fill it so that the border stays:    `"^c#000000^^r03,05,20,08^"`
Fill it with the remaining capacaty: `"^c#ffffff^^r10,05,13,08^"`
Reset the colorscheme and forward the cursor:  `"^d^^f24^"`

Put it all together:
`xsetroot -name "^r0,7,2,4^^r2,4,22,10^^c#000000^^r3,5,20,8^^c#ffffff^^r10,5,13,8^^d^^f24^"`

Authors
-------
* [sipi](https://github.com/sipi)
* lhark - <lhark@ntymail.com> (6.2 port, ^b^ command)

