SPROP BOOKMARKING
=================

Description
-----------
Create bma.sh in your $PATH:

	$ cat ~/bin/bma.sh
	#!/bin/sh
	
	BMARKS=$HOME/.surf/bmarks
	URI="`sprop $1 _SURF_URI`"
	
	echo "$URI" >> $BMARKS

Create bml.sh in your $PATH, as well:

	$ cat ~/bin/bml.sh
	#!/bin/sh
	
	CACHE=$HOME/.surf/bmarks
	
	cat "$CACHE" | sort | uniq > "$CACHE".$$ &&
	mv "$CACHE".$$ "$CACHE"
	
	cat "$CACHE" | dmenu

Modify your config.h just before the definition of `keys[]`:

	#define BMA    { .v = (char *[]){ "/bin/sh", "-c", \
		"bma.sh $0", winid, NULL } }

	#define BML(p) { .v = (char *[]){ "/bin/sh", "-c", \
		"sprop $1 $0 `bml.sh` || exit 0", \
		winid, NULL } }

Then, inside `keys[]`, add:

	{ MODKEY,               GDK_b,      spawn,      BML("_SURF_URI") },
	{ MODKEY|GDK_SHIFT_MASK,GDK_b,      spawn,      BMA },

Development
-----------

	hg clone http://bitbucket.org/antlechrist/sprop-bm-surf/

or browse the [repository](http://bitbucket.org/antlechrist/sprop-bm-surf/)

Author
------
Andrew Antle `<andrew dot antle at gmail dot com>`
