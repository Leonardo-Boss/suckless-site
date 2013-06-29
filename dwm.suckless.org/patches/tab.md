Tab
===

Description
-----------

Add a bar at top or bottom of the screen with a label for each <i>displayed</i>
window. This feature was primarily designed for the monocle window layout. In
this mode the labels appear like tabs, transforming the layout into a
<i>tabbed</i> layout. Navigating from window to window can be done by clicking
on the window tabs or using the usual Mod1-j, Mod1-k keys. The bar can be
enabled and disabled at runtime. This patch can be used as an alternative to the
[tabbed](http://tools.suckless.org/tabbed/) tool. It differs in two ways: the
''tab'' feature is limited to the monocle mode; it works with any application
without requiring to support the XEmbed protocol nor to define in advance the
set of applications to be supported.

Usage
-----

With the default configuration, use the key combination Mod1-w to toggle the tab
bar display. Switch focus to a window with a mouse left-click on its tab or by
using the usual Mod1-j, Mod1-k commands. Usage is also documented in the dwm man
page once the patch is applied.

In the right corner of the tab bar the window ''tag'' currenlty selected for
display is recalled. This feature is interesting when the standard status bar is
disabled. If multiple tags are selected for viewing then three dots are
displayed without more details.

Configuration and installation
------------------------------

Apply to the dwm code the patch you can find in the download section below. If
you don't already have a dwm config.h file, the make command will produce one
that contains already the necessary configuration lines. If you already have
one, then you must add to it the following lines:

    static const Bool showtab           = True;     /* False means no tab bar */
    static const Bool toptab            = False;    /* False means bottom tab bar */

The first variable tells if the tab bar must be displayed by default; the second
one if it should be displayed on top of the screen or at bottom.

If the tab bar is displayed at bottom, then a better experience will be obtained
with the variable resizehints of the config.h file set to False. This setting
prevents possible gap between the windows and the tab bar.  You can find more
details about this variable and gaps between windows in the dwm FAQ.

In order to allow enabling and disabling the tab bar by pressing Mod1-w, add to
the `keys` array, the following element:

    { MODKEY,                       XK_w,      toggletab,      {0} }

Selection of a window by a mouse left-click on its tab is enabled by adding the
following element to the `buttons` array:

    { ClkTabBar,            0,              Button1,        focuswin,       {0} },

An example on how to insert these line can be found in the default config file template, config.def.h.

Download
--------

 * [dwm-6.0-tab.diff](dwm-6.0-tab.diff)
 * [dwm-6.0-pertag-tab.diff](dwm-6.0-pertag-tab.diff) combined patch with the [pertag](pertag) patch from Jan Christoph Ebersbach. Follow the [link](pertag) for the description of this patch and the credits.

Authors
-------
 * Philippe Gras - `<philippe dot gras at free dot fr>`

