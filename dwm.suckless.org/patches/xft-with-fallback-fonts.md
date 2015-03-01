Xft With Fallback-Font Support
==============================

Description
-----------

Adds Xft and fallback-font support to dwm. This patch was built on top of the
[Xft patch written by Quentin](http://lists.suckless.org/dev/1311/18279.html).
With fallback font support, multiple fonts can now be specified in config.h
which are used to render characters not present in the first font. If none of
the user-specified fonts contains a given character, this patch attempts to
automatically fallback to whatever suitable font it can find on the host
system.

With this patch, the "font" variable in config.h is superseded by the "fonts"
variable which is a priority-ordered list of fonts that should be used to
render text. Here's an example "fonts" definition:

    static const char *fonts[] = {
        "Sans:size=10.5",
        "VL Gothic:size=10.5",
        "WenQuanYi Micro Hei:size=10.5",
    };

At least one font must be specified, and a maximum of `DRW_FONT_CACHE_SIZE`
fonts can be used.

Download
--------

* [dwm-6.1-xft-with-fallback-font.diff](dwm-6.1-xft-with-fallback-font.diff) (20k) (2015-02-28)

Author
------

* [Eric Pruitt](https://github.com/ericpruitt/)
