# centeredmaster

## `centeredmaster` 

makes the nmaster area centered
on screen, using `mfact * monitor width & height`, with the stacked windows
distributed on left and right.

With one client in master:

    +------------------------------+
    |+--------++--------++--------+|
    ||        ||        ||        ||
    ||        ||        ||        ||
    ||        ||        ||        ||
    ||  S2    ||   M    ||   S1   ||
    ||        ||        ||        ||
    ||        ||        ||        ||
    ||        ||        ||        ||
    ||        ||        ||        ||
    |+--------++--------++--------+|
    +------------------------------+

With two clients in master:

    +------------------------------+
    |+--------++--------++--------+|
    ||        ||        ||        ||
    ||        ||   M1   ||        ||
    ||        ||        ||        ||
    ||        |+--------+|        ||
    ||        |+--------+|        ||
    ||        ||        ||        ||
    ||        ||   M2   ||        ||
    ||        ||        ||        ||
    |+--------++--------++--------+|
    +------------------------------+

## `centeredfloatingmaster` 

makes the nmaster area centered
on screen, using `mfact * monitor width & height`, over an
horizontally tiled `stack` area, pretty much like
a "scratchpad".

With one client in master:

    +------------------------------+
    |+--------++--------++--------+|
    ||        ||        ||        ||
    ||    +------------------+    ||
    ||    |                  |    ||
    ||    |                  |    ||
    ||    |        M         |    ||
    ||    |                  |    ||
    ||    +------------------+    ||
    ||        ||        ||        ||
    |+--------++--------++--------+|
    +------------------------------+

With two clients in master:

    +------------------------------+
    |+--------++--------++--------+|
    ||        ||        ||        ||
    ||    +--------++--------+    ||
    ||    |        ||        |    ||
    ||    |        ||        |    ||
    ||    |   M1   ||   M2   |    ||
    ||    |        ||        |    ||
    ||    +--------++--------+    ||
    ||        ||        ||        ||
    |+--------++--------++--------+|
    +------------------------------+


I find it useful on large screens (say 1920px wide), where
`monocle` or `htile` feels either too large or makes me type in
a corner of the screen.

With `centeredmaster`, for instance, I can set my editor in the
center, while keeping an eye on what's happening in the windows
behind (logs, tests, ...).




## Links

* [centeredmaster.c](centeredmaster.c) - 2015/11/22
* [dwm-6.1-centeredmaster.diff](dwm-6.1-centeredmaster.diff) - 2015/11/21


[jerome](http://blog.jardinmagique.info) <jerome@gcu.info>
