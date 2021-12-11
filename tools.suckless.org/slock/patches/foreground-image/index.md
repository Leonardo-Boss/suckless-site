Foreground Image
================

Description
-----------
This patch lets you add a foreground image to your lock screen.

Configuration Options
---------------------
* `imgpath` - is path to image to display, image must be xpm file
* `imgwidth` - width of the image
* `imgheight` - height of the image
* `imgoffsetx` - image offset from left side
* `imgoffsety` - image offset from top side
* `showimgonlyatstart` - if set to 1 image will be shown only at the start (before tipying), if set to 0 image will be always shown


Xpm Image
---------
Xpm image is bitmap image used by X Windows System. It's one of the few image formats that is supported by Xorg by default.

Convert jpg to xpm:
```
convert image.jpg -geometry 1920x1080 -colors 216 image.xpm
```

Notes
-----
This is [patch](https://github.com/ViliamKovac1223/slock-foreground-image-patch) also hosted on my [github](https://github.com/ViliamKovac1223).

Download
--------
* [slock-foreground-image-20211210.diff](slock-foreground-image-20211210.diff)

Authors
-------
* Viliam Kováč - viliamkovac1223@gmail.com
