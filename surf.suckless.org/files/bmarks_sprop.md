BMARKS SPROP
============

Description
-----------
Peter, pancake, and nibble's [bmarks](bmarks) script, clobbered to work with
[sprop](http://tools.suckless.org/sprop).

Installation
------------
Replace the default setprop with this one:

	#define SETPROP(p) { .v = (char *[]){ "/bin/sh", "-c", "spurf.sh $0 $1", \
		winid, p, NULL } }

Modify `keys[]`:

	{ MODKEY,                 GDK_b,      spawn,  SETPROP("_SURF_BMARK") },
	{ MODKEY|GDK_SHIFT_MASK,  GDK_g,      spawn,  SETPROP("_SURF_URI_RAW") },
	{ MODKEY,                 GDK_g,      spawn,  SETPROP("_SURF_URI") },
	{ MODKEY,                 GDK_slash,  spawn,  SETPROP("_SURF_FIND") },


Development
-----------
Browse the [repository](http://github.com/antlechrist/bmarks_sprop) or
get a copy using [Git](http://git-scm.com/) with the
following command:

	git clone http://github.com/antlechrist/bmarks_sprop.git

Clobberer
---------
Andrew Antle

	<andrew at antlechrist dot org>
