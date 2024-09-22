clientresizehints
=================

Description
-----------
`clientresizehints` allows the user to set rules about whether or not `resizehints` is applied per application.

Usage Example
-------------

The following rules will cause st resizehints to be ignored, but xterm resizehints to be obeyed:

    static const Rule rules[] = {
        /* class    instance    title   tags mask       isfloating      monitor     resizehints */
        { "St",     NULL,       NULL,   0,              0,              -1,         0 },
        { "xterm",  NULL,       NULL,   0,              0,              -1,         1 },

    };

The default behavior for applications without an associated rule is to follow the global `resizehints` variable, in `config.def.h`:

    static const int resizehints = 1; /* 1 means respect size hints in titled resizals */


Download
--------

* [dwm-clientresizehints-6.5.diff](dwm-clientresizehints-6.5.diff)

Author
------
* Fred Frey - [fred@fpf3.net](mailto:fred@fpf3.net)
