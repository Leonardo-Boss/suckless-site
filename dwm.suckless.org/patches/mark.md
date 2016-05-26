# mark #

## Description ##

This patch provides an mechanism to easily jump between any 2 clients, or to
swap any 2 clients through shortcuts by introcuding mark. The mark is global,
and only one mark is allowed at the same time. The marked client is
distinguished from other clients by having a different border color.

This patch adds 3 functions to dwm:

 * togglemark - mark/unmark current focused client.
 * swapclient - swap focused client with marked client
 * swapfocus - swap focus with mark.

## Configuration ##

	static const char normmarkcolor[]   = "#775500";	/*border color for marked client*/
	static const char selmarkcolor[]    = "#775577";	/*border color for marked client on focus*/

	/*basic key mappings*/
	{ MODKEY,                       XK_semicolon,togglemark,   {0} },
	{ MODKEY,                       XK_o,      swapfocus,      {0} },
	{ MODKEY,                       XK_u,      swapclient,     {0} },

Some ideas for combinations of key mappings:

 * togglemark x2  
clear the mark
 * swapclient, swapfocus  
shift the client to another client frame without losing focus
 * swapclient, togglemark x2  
swap 2 clients and clear the mark
 * swapfocus, togglemark x2  
jump to mark and clear the mark

## Download ##
this patch has been revised, it's recommended to use dwm-6.1-mark-new.diff
old behaviours of the patch(dwm-6.1-mark.diff):

 1. crashes when using mark features while the marked client has been killed.
 2. swapclient clears the mark.
 3. swapclient falls back to zoom() if the mark is not set.
 4. swapfocus does not activate tags for the marked client
 5. swapfocus does not focus monitors correctly

* [dwm-6.1-mark-new.diff](dwm-6.1-mark-new.diff) (5815b) (20160309)
* [dwm-6.1-mark.diff](dwm-6.1-mark.diff) (7161b) (20160220)

## Author ##
* phi <crispyfrog@163.com>
