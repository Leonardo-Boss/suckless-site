launcher-colors
========

Description
-----------
This patch adds colors to the launcher icons which you click to launch programs and commands.

Usage:
------

File config.def.h

Append new color scheme to the colors array.
Example below.

    static const char *colors[][3]      = {
        /*                     fg       bg      border */
        [SchemeNorm]       = { gray3,   black,  gray2 },
        [SchemeSel]        = { gray4,   blue,   blue  },
        [SchemeTitle]      = { white,   black,  black  }, // active window title
        [TabSel]           = { blue,    gray2,  black },
        [TabNorm]          = { gray3,   black,  black },
        [SchemeTag]        = { gray3,   black,  black },
        [SchemeTag1]       = { blue,    black,  black },
        [SchemeTag2]       = { red,     black,  black },
        [SchemeTag3]       = { orange,  black,  black },
        [SchemeTag4]       = { green,   black,  black },
        [SchemeTag5]       = { pink,    black,  black },
        [SchemeLayout]     = { green,   black,  black },
        [SchemeBtnPrev]    = { green,   black,  black },
        [SchemeBtnNext]    = { yellow,  black,  black },
        [SchemeBtnClose]   = { red,     black,  black },
        [SchemeColorEW]    = { orange,   black,  black }, // color ewww launcher icon
        [SchemeColorFF]    = { yellow,   black,  black }, // color firefox launcher icon
        [SchemeColorDS]    = { red,   black,  black }, // color discord launcher icon
        [SchemeColorTG]    = { green,   black,  black }, // color telegram launcher icon
        [SchemeColorMS]    = { blue,   black,  black }, // color mintstick launcher icon
        [SchemeColorPC]    = { pink,   black,  black }, // color pavucontrol launcher icon
    };

The command names defined for the launchers are important since these are used again later.

    static const Launcher launchers[] = {
        /* command     name to display */
        { eww,         "" },
        { firefox,         "" },
        { discord,       "ﱲ" },
        { telegram,      "" },
        { mintstick,     "虜" },
        { pavucontrol,   "墳" },
    };

File dwm.c

Append new color schemes to the enum.
Example below.

    enum {
        SchemeNorm,
        SchemeSel,
        SchemeTitle,
        SchemeTag,
        SchemeTag1,
        SchemeTag2,
        SchemeTag3,
        SchemeTag4,
        SchemeTag5,
        SchemeLayout,
        TabSel,
        TabNorm,
        SchemeBtnPrev,
        SchemeBtnNext,
        SchemeBtnClose,
        SchemeColorEW,
        SchemeColorFF,
        SchemeColorDS,
        SchemeColorTG,
        SchemeColorMS,
        SchemeColorPC
    }; /* color schemes */

File dwm.c

Navigate to the line where the following is defined:

    w = TEXTW(m->ltsymbol);

Comment out line

    drw_setscheme(drw, scheme[SchemeLayout]);

Inside the for loop add if conditions to set the different color schemes for each launcher.

Example below.
Note. The command name should match the ones defined inside config.def.h

    w = TEXTW(m->ltsymbol);
    //drw_setscheme(drw, scheme[SchemeLayout]);
    x = drw_text(drw, x, 0, w, bh, lrpad / 2, m->ltsymbol, 0);
    
    for (i = 0; i < LENGTH(launchers); i++)
    {
        if (launchers[i].command == eww){
            drw_setscheme(drw, scheme[SchemeColorEW]);
        }

        if (launchers[i].command == firefox){
          drw_setscheme(drw, scheme[SchemeColorFF]);
        }

        if (launchers[i].command == discord){
          drw_setscheme(drw, scheme[SchemeColorDS]);
        }

        if (launchers[i].command == telegram){
          drw_setscheme(drw, scheme[SchemeColorTG]);
        }

        if (launchers[i].command == mintstick){
          drw_setscheme(drw, scheme[SchemeColorMS]);
        }

        if (launchers[i].command == pavucontrol){
          drw_setscheme(drw, scheme[SchemeColorPC]);
        }

        w = TEXTW(launchers[i].name);

After a rebuild.

The result will be as shown below.

https://imgur.com/a/JsqUKiC

Download
--------
[dwm-launchers-colors-20231221-81aca1b.diff](dwm-launchers-colors-20231221-81aca1b.diff)

Author
------
* [fennec](https://debugthis.dev) - <xovo6six@gmail.com>

