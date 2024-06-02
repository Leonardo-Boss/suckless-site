autodarkmode
============

Description
-----------
This patch lets you define separate dark and light color schemes, and
provides a way to switch between them automatically.

If dwm finds a file named `.lightmode` in your home directory it will
start up in light mode, otherwise it uses dark mode. dwm re-checks for
this file upon receiving SIGHUP, so you can use tools like
[darkman](https://darkman.whynothugo.nl/) or
[Redshift](http://jonls.dk/redshift/) to change dwm's colors at sunset
and sunrise.

An example setup is described
[here](https://plexwave.org/blog/auto-dark-mode).

Configuration
-------------
    static const char *colorsdark[][3]      = {
    	/*               fg         bg         border   */
    	[SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
    	[SchemeSel]  = { col_gray4, col_cyan,  col_cyan  },
    };
    static const char *colorslight[][3]      = {
    	/*               fg         bg         border   */
    	[SchemeNorm] = { col_gray1, col_gray3, col_gray2 },
    	[SchemeSel]  = { col_cyan,  col_gray4, col_cyan  },
    };
    
    static const char *dmenudark[] =  { "dmenu_run", "-m", dmenumon, "-i", "-fn", dmenufont, "-nb", col_gray1, "-nf", col_gray3, "-sb", col_cyan, "-sf", col_gray4, NULL };
    static const char *dmenulight[] = { "dmenu_run", "-m", dmenumon, "-i", "-fn", dmenufont, "-nb", col_gray3, "-nf", col_gray1, "-sb", col_cyan, "-sf", col_gray4, NULL };
    
    /* You must use spawndmenu instead of spawn for your dmenu bindings */
    static const Key keys[] = {
    	{ MODKEY,                       XK_p,      spawndmenu,     {0} },
    }

Download
--------
* [dwm-autodarkmode-20240602-6.5.diff](dwm-autodarkmode-20240602-6.5.diff)

Author
------
* Spencer Williams - <spnw@plexwave.org>
