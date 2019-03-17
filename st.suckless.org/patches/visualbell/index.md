visualbell
==========
This page contains two unrelated implementations of visual bell which are not
compatible with each other. If you have one of them applied, remove it before
trying the other.


# Visual bell 1

Description
-----------
Briefly inverts window content on terminal bell event.

Notes
-----
In order to be noticeable you might have to reduce the `xfps` value in
`config.h` to less than equal the refresh rate of your monitor.

Download
--------
* [st-visualbell-20160727-308bfbf.diff](st-visualbell-20160727-308bfbf.diff)
* [st-visualbell-20180101-1f24bde.diff](st-visualbell-20180101-1f24bde.diff)
* [st-visualbell-0.8.1.diff](st-visualbell-0.8.1.diff)

Authors
-------
* Matthias Schoth - <mschoth@gmail.com>
* Laslo Hunhold - <dev@frign.de> (git port)
* Alexis Ben Miloud--Josselin; panpo; alexisbmj+code at protonmail dot com.


# Visual bell 2

Description
-----------
Briefly renders a configurable visual indication on terminal bell event.

Notes
-----
* There are two variants available for download: basic and enhanced.
* The enhanced version file already includes the basic version in it, and
  supports the basic options too.
* Both variants can be applied with either `git am <patch-file>` or ` patch -p1
  < <patch-file>`.
* Visual bell is disabled by default, and can be enabled/configured via
  `config.h`. If you already have this file, you'll need to add the visual-bell
  values by copying them from `config.def.h` - which also includes their docs.

### The basic variant supports:
* Invert the whole screen (default).
* Invert only the outer (border) cells for a less jarring effect.
* Configuring the flash duration (default: 100ms).

### The enhanced variant:
This version experiments with a more graphical indication, by adding support
for rendering a filled circle (needs to be chosen at `config.h`), which can be
configured for:

* Position: any corner/edge, center of the screen, or anything in between.
* Size: relative to the window width or to the cell width.
* Colors: base and outline.

The enhanced variant allows, for instance, to render what looks like a LED
indicator at a tmux status bar, with correct cell height, and can be positioned
at the side/middle of a top/bottom bar, etc.

Download
--------
* [st-visualbell2-basic-2018-10-16-30ec9a3.diff](st-visualbell2-basic-2018-10-16-30ec9a3.diff)
* [st-visualbell2-enhanced-2018-10-16-30ec9a3.diff](st-visualbell2-enhanced-2018-10-16-30ec9a3.diff)

Author
------
* Avi Halachmi (:avih) - [https://github.com/avih](https://github.com/avih)
