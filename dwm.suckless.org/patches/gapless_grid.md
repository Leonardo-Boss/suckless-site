# GAPLESS GRID LAYOUT

## Description

This patch is an altered [gridmode](../historical/gridmode) layout for dwm,
which arranges the windows in a grid.
Instead of using a regular grid, which might leave empty cells when there are
not enough windows to fill the grid, it adjusts the number of windows in the
first few columns to avoid empty cells.

## Usage

Download `gaplessgrid.c` and add the gapless layout to your `config.h`:

	#include "gaplessgrid.c"
	
	static const Layout layouts[] = {
		/* symbol     arrange function */
		{ "###",      gaplessgrid },
	...
	
	static Key keys[] = {
		/* modifier                     key        function        argument */
		{ MODKEY,                       XK_g,      setlayout,      {.v = &layouts[0] } },
	...

## Download

* [gaplessgrid.c](gaplessgrid.c) (dwm 5.6.1) (20090908)
* see [historical patches](historical) for older versoins
