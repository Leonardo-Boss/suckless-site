# GAPLESS GRID LAYOUT #

## Description ##

This patch is similar to [gridmode][1] (in fact it is an altered version) in that it provides a layout for dwm, which arranges the windows in a grid. Though instead of using a regular grid, which in case leaves empty cells (e. g. with 3 windows there are 4 cells, one cell is empty), it uses the same number of columns, but adjusts the number of rows (at first x rows and (x+1) rows, when needed) leaving no empty cells.


## Usage ##

Download the patch and apply it according to the [general instructions](.). The patch will make the following changes:

 - gaplessgrid.c: adding the file
 - config.def.h: adding the include-line for 'gaplessgrid.c'
 - config.def.h: adding the layout '"###", gaplessgrid'

Comment: There may be problems applying the patch, if another layout has been added before.


## Configuration ##

 * Transfer the changes made by the patch in 'config.def.h' to 'config.h', if needed.
 * Add a key definition like '{ MODKEY, XK_g, setlayout, {.v = &layouts[3]} },'.


## Download ##

 * [dwm-5.2-gaplessgrid.diff][2] (1.9k) (20081020)


[1]: /dwm/patches/gridmode.html
[2]: http://suckless.org/dwm/patches/dwm-5.2-gaplessgrid.diff

