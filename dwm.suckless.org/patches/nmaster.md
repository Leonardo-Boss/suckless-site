# NMASTER PATCH

## Description

This patch restores the ability to have multiple clients in the master area of the tiled layout.
This feature was dropped from vanilla dwm in version 4.4.

See [nmaster.c][1] header documentation for installing this patch with tilecols and clientspertag for dwm 4.6.

    ntile         (-|=)
    +----------+------+
    |          |      |
    |          +------+
    |----------|      |
    |          +------+
    |          |      |
    +----------+------+

NOTE: The nmaster.c (patch for dwm 4.6) mixes the clientspertag patch together with another layout called tilecols. 

## Usage

 1. Download the patch and apply according to the [general instructions](.).
 2. Add the `NMASTER` value to your `config.h`.
    Example from `config.default.h`:

        #define NMASTER          2 /* clients in master area*/

 3. Add keybindings to `incmaster()` to your `config.h`.
    Example from `config.default.h`:

        { MODKEY|ShiftMask,       XK_k,       incnmaster,    "-1" }, \
        { MODKEY|ShiftMask,       XK_j,       incnmaster,    "1" }, \

The nmaster patch for dwm 4.6 (current development hg branch) installation is far more simple.
Installation instructions are placed on the top of the .c file.

The nmaster patch for dwm 4.6 adds two new layouts called ntile (classic) and dntile (dinamic).

## Download

 * [nmaster-4.7.c][4] (dwm 4.7) (7.3kb (20071123)
 * [nmaster.c][3] (dwm 4.6) (7.3kb) (20071025)
    - contains ntile, dntile and tilecols. Also supports the clients-per-tag
 * [nmaster-4.5.diff][2] (dwm 4.5) (2.7kb) (20071016)
 * [dwm-4.4.1-nmaster.diff][1] (dwm 4.4) (2.8kb) (20070826)
 * [nmaster+bstack-5.6.1.diff](nmaster+bstack-5.6.1.diff) (dwm 5.6.1) (5.9kb) (20090817)
    - another variation; contains bstack with nmaster support

[1]: http://schot.a-eskwadraat.nl/files/dwm-4.4.1-nmaster.diff
[2]: http://news.nopcode.org/nmaster-4.5.patch
[3]: http://news.nopcode.org/nmaster.c
[4]: http://news.nopcode.org/nmaster-4.7.c

## Maintainer

 * pancake &lt;youterm.com&gt;

