
Mark
====

Description
-----------

This patch provides an mechanism to easily jump between any clients, or to swap any clients through shortcuts by introcuding mark. The mark is global, and only one mark is allowed at the same time. The marked client is distinguished from other clients by having a different border color.
This patch adds 3 functions and 2 variables:
* functions:
        togglemark - mark/unmark current focused client.
        swapclient - swap focused client with marked client, falls back to
                     zoom() if the mark is not being set.
        swapfocus  - swap focus with mark.
* variables:
        normmarkcolor - border color for marked client.
        selmarkcolor  - border color for current focused client that is 
                        also being marked.
And example of key mappings for this patch:
        { MODKEY,                       XK_semicolon,togglemark,   {0} }, 
        { MODKEY,                       XK_o,      swapfocus,      {0} },
        { MODKEY,                       XK_Return, swapclient,     {0} },
/*togglemark twice to remove the mark, emulates the behaviour of zoom()*/
        { MODKEY,                       XK_Return, togglemark,     {0} },
        { MODKEY,                       XK_Return, togglemark,     {0} },
        { MODKEY,                       XK_u,      swapclient,     {0} },
/*swapclient and swapfocus at the same time, it's useful in some cases*/
        { MODKEY,                       XK_i,      swapclient,     {0} },
        { MODKEY,                       XK_i,      swapfocus,      {0} },

Download
--------

* [dwm-6.1-mark.diff](dwm-6.1-mark.diff) (7161b) (20160220)

Author
------
* phi <crispyforg@163.com>
