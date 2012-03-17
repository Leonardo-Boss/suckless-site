# fibonacci layouts

## Description

This patch adds two new layouts (`spiral` and `dwindle`) that arranges all
windows in Fibonacci tiles: The first window uses half the screen, the second
the half of the remainder, etc. ASCII art and a real screenshot of the spiral
arrangement can be seen below.

    +-----------+-----------+  +-----------+-----------+
    |           |           |  |           |           |
    |           |     2     |  |           |     2     |
    |           |           |  |           |           |
    |     1     +--+--+-----+  |     1     +-----+-----+
    |           | 5|-.|     |  |           |     |  4  |
    |           +--+--+  3  |  |           |  3  +--+--+
    |           |  4  |     |  |           |     | 5|-.|
    +-----------+-----+-----+  +-----------+-----+-----+
             spiral                     dwindle

[![dwm in spiral layout.][1]][2]

*Links2, sic, xterm & xclock in spiral layout.*

## Usage

 1. Download the patch and apply according to the [general instructions](.).
 2. Include the `fibonacci.c` source file and add `spiral` and/or `dwindle` to
    the `Layout` section of your `config.h` file.
    Example from `config.default.h`:

        #include "fibonacci.c"
        static Layout layout[] = { \
            /* symbol               function */ \
            { "[]=",                tile }, /* first entry is default */ \
            { "><>",                floating }, \
            { "(@)",                spiral }, \
            { "[\\]",               dwindle }, \
    };

## Download

 * [dwm-5.8.2-fibonacci.diff](dwm-5.8.2-fibonacci.diff)

## Maintainer

 * Niki Yoshiuchi - <aplusbi@gmail.com>

Joe Thornber's spiral tiling for [Xmonad][3] formed the inspiration for this
patch. Thanks to Jan Christoph Ebersbach for updating this patch for versions
4.5 to 4.9.

[1]: http://schot.a-eskwadraat.nl/images/dwm-spiral_small.png
[2]: http://schot.a-eskwadraat.nl/images/dwm-spiral.png
[3]: http://www.xmonad.org
