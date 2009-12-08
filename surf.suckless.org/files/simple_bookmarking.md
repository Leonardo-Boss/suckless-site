SIMPLE_BOOKMARKING
==================

Description
-----------

change this script to fit your needs.

bookmarkurl :

	#!/bin/sh
	file=~/.surf/bookmarks
	url=`xprop -id $1 | grep URI | awk '{print $3}' | sed 's/\"//g'`
	title=`xprop -id $1 | grep WM_ICON_NAME\(STRING\) | cut -c 24-`
	echo $url $title | dmenu -nl >> $file
 
to add tags, when dmenu displays, simply tab, space and write your tag.
  
  

loadbookmark :
(needs a vertical patch on dmenu for convenience, choose the one you like,
Meillo's is the lightweight, Fresch's is the full featured)

	#!/bin/sh
	cat ~/.surf/bookmarks | dmenu -i -b -l 10 | awk '{print $1}'

To make dmenu display bookmark with a tag only, add a grep part in the
first line and launch this script with the tag as argument.

bookmarkurl and loadbookmark can be launched with the following in config.h above the  
"static Key keys[] = {" line :

	#define ADDBMK           { .v = (char *[]){ "/bin/sh", "-c", \
		"bookmarkurl $0", winid, NULL } }
	#define LOADBMK(p)       { .v = (char *[]){ "/bin/sh", "-c", \
        	"xprop -id $1 -f $0 8s -set $0 `loadbookmark` || exit 0", \
		 p, winid, NULL } }

and

	    { MODKEY,               GDK_a,      spawn,      ADDBMK },
 	    { MODKEY,               GDK_b,      spawn,      LOADBMK("_SURF_URI") },

in the "static Key keys[] = {" part.

 
Author
------
- Julien Steinhauser <[julien.steinhauser@orange.fr](mailto:julien.steinhauser@orange.fr)>
