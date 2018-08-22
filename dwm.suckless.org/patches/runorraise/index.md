runorraise
==========

Description
-----------
This patch adds a equivalent to stumpwm's [run-or-raise] action for DWM.

The idea is to have each frequently-used application one key combination away at all times, irrespective of which workspace it is on,
or how recently it has been used, or even whether it’s running or not.

Usage
-----

1 In your config.h:

    static const char *emacs[] = { "emacsclient", "-c", NULL, NULL, "Emacs" };
    static const char *browser[] = { "firefox", NULL, NULL, NULL, "Firefox" };

2 In your keybindings add something like:

    { Modkey,                       XK_e,      runorraise,     {.v = emacs } },
    { Modkey,                       XK_f,      runorraise,     {.v = firefox } },

Download
--------

* [dwm-6.1-runorraise.diff](dwm-6.1-runorraise.diff)

Authors
-------
* Quentin Stievenart (acieroid) - `<quentin.stievenart at gmail dot com>`

Contributors
------------
* Ivaylo Kuzev (ivoarch) - `<ivkuzev at gmail dot com>`
