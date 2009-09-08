# NMASTER PATCH

## Description

This patch restores the ability to have multiple clients in the master area of the tiled layout.
This feature was dropped from vanilla dwm in version 4.4.

	ntile         (-|=)
	+----------+------+
	|          |      |
	|          +------+
	|----------|      |
	|          +------+
	|          |      |
	+----------+------+

	nbstack       (-|-)
	+--------+--------+
	|        |        |
	|        |        |
	|-----+--+--+-----+
	|     |     |     |
	|     |     |     |
	+-----+-----+-----+

## Usage

* Download `nmaster.c` into the source directory of dwm.
* Add `nmaster` default value to your `config.h`.
* Include `nmaster.c` in `config.h` after the definition of `nmaster`.
* Add `ntile` and/or `nbstack` to your layouts.
* Add keybindings to `incnmaster` and/or `setnmaster` to your `config.h`.

## Example

	static const int nmaster = 2;  /* default number of clients in the master area */
	
	#include "nmaster.c"
	
	static const Layout layouts[] = {
		/* symbol     arrange function */
		{ "-|=",      ntile },
		{ "-|-",      nbstack },
	...
	
	static Key keys[] = {
		/* modifier                     key        function        argument */
		{ MODKEY,                       XK_a,      incmaster,      {.i = +1 } },
		{ MODKEY,                       XK_z,      incmaster,      {.i = -1 } },
		{ MODKEY,                       XK_x,      setmaster,      {.i = 2 } },
		{ MODKEY,                       XK_t,      setlayout,      {.v = &layouts[0] } },
		{ MODKEY,                       XK_b,      setlayout,      {.v = &layouts[1] } },
	...

## Download

* [nmaster.c](nmaster.c) (dwm 5.6.1) (20090908)
* see older versions in [historical patches](../historical)
