foreground
============

Description
-----------
Essentially a layout for a special class of ``foregrounded'' floating windows. When a window is foregrounded, it is floated, resized, and moved to a predictable location.

Useful for when there are several windows in the stack (which makes their heights small), and you want to temporarily enlarge one or more of them with minimal disturbance to the current tag context.

Layout
-----------
When there is one foregrounded window, it is centred on the monitor. It's size is specified by the user-defined `fgw` and `fgh` floats, are proportions of the monitor's width and height respectively.

When there are n > 1 foregrounded windows, they are arranged in n equally-spaced columns that combined take up 100% of the monitor's width, and [`fgh` * 100]% of the monitor's height.

In the diagram below, clients marked with an asterisk will be foregrounded next.

    +--------------------------+
    |               |    B*    |
    |               |          |
    |               +----------+
    |       A       |    C     |
    |               |          |
    |               +----------+
    |               |    D     |
    |               |          |
    +--------------------------+

    +--------------------------+
    |       A       |    C     |
    |    +----------------+    |
    |    |                |    |
    |    |       B        +----+
    |    |                |    |
    |    |                |    |
    |    +----------------+    |
    |               |    D*    |
    +--------------------------+

    +--------------------------+
    |       A*      |    C     |
    +--------------------------+
    |             |            |
    |      B      |     D      |
    |             |            |
    |             |            |
    +--------------------------+
    |               |          |
    +--------------------------+

    +--------------------------+
    |             C            |
    +--------------------------+
    |        |        |        |
    |   B    |   C    |   A    |
    |        |        |        |
    |        |        |        |
    +--------------------------+
    |                          |
    +--------------------------+

Usage
-----------
Set `fgw` and `fgh` floats in config.h.

Foreground a window by calling the `toggleforeground` function. By default this is set to Mod1 + Mod4 + Spacebar. 

Download
--------
* [dwm-foreground-20240220-9f88553.diff](dwm-foreground-20240220-9f88553.diff)

Authors
-------
* Eric Spero - <eric@ericspero.com>

