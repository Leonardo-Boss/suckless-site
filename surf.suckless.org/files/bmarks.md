BOOKMARKS FOR SURF
==================

Description
-----------

This script enables bookmarks and url handlers for surf.

Keybindings
-----------
	^b (bookmark current url with given tags)
	^g (open url with bookmark autocompletion)
	^G (open url without bookmark autocompletion)

URL handlers
------------
	This script implements several url handlers
	"b tag .."  (open bookmark matching given tags or keywords)
	"d " (bookmark current url in delicious)
	"t " (create tinyurl from current page)
	"w word .." (lookup word in wikipedia)
	"g word .." (google for given word)
	"y word .." (search in youtube)

Author
------

- The code was originally from Peter John Hartman, but hardly simplified by pancake and nibble.

Installation
------------

Copy the following code into a shellscript named 'surf.sh' in $PATH. Edit config.h according to the rules explained in header.

Code
----
	#!/bin/sh
	# $1 = $xid
	# $2 = $p = _SURF_FIND _SURF_BMARK _SURF_URI (what SETPROP sets in config.h)
	#
	# // replace default setprop with this one
	# #define SETPROP(p) { .v = (char *[]){ "/bin/sh", "-c", "surf.sh $1 $0", p, winid, NULL } }
	#
	# // fix shift+slash keybinding in spanish keyboard (f.example)
	# { MODKEY, GDK_s, spawn, SETPROP("_SURF_FIND") },
	# { MODKEY, GDK_b, spawn, SETPROP("_SURF_BMARK") },
	# { MODKEY|GDK_SHIFT_MASK, GDK_g, spawn, SETPROP("_SURF_URI_RAW") },

	font='-*-terminus-medium-*-*-*-*-*-*-*-*-*-*-*'
	normbgcolor='#181818'
	normfgcolor='#e9e9e9'
	selbgcolor='#dd6003'
	selfgcolor='#e9e9e9'
	hist=~/.surf/history.txt

	xid=$1
	p=$2
	uri=`xprop -id $xid _SURF_URI | cut -d '"' -f 2`
	name=`xprop -id $xid WM_ICON_NAME | cut -d '"' -f 2`
	dmenu="dmenu -e $xid -fn $font -nb $normbgcolor -nf $normfgcolor \
		-sb $selbgcolor -sf $selfgcolor"

	s_set_uri() { # uri
		xprop -id $xid -f _SURF_URI 8s -set _SURF_URI "$1"
	}

	case "$p" in
	"_SURF_FIND")
		find="`echo | $dmenu -p find:`"
		xprop -id $xid -f _SURF_FIND 8s -set _SURF_FIND "$find"
		;;
	"_SURF_BMARK")
		tags="`echo | $dmenu -p tags:`"
		[ -n "$tags" ] && \
			grep "$uri" $hist >/dev/null 2>&1 || echo "$uri $tags" >> $hist
		;;
	"_SURF_URI_RAW")
		uri="`echo | $dmenu -p uri:`"
		s_set_uri "$uri"
		;;
	"_SURF_URI")
		sel=`tac $hist 2> /dev/null | cut -d ' ' -f 1 | $dmenu -p "uri [bdgtwy*]:"`
		# if we hit escape, then exit
		[ -z "$sel" ] && exit
		opt=$(echo $sel | cut -d ' ' -f 1)
		arg=$(echo $sel | cut -d ' ' -f 2-)
		case "$opt" in
		"b") # find in bookmarks
			kw=$(echo $arg | sed -s 's, , -e,g')
			uri="`grep -e $kw $hist | head -n 1 | cut -d ' ' -f 1`"
			;;
		"d") # del.icio.us
			uri="http://del.icio.us/save?url=$uri"
			;;
		"g") # google for it
			uri="http://www.google.com/search?q=$arg"
			;;
		"t") # tinyurl
			[ -n "$uri" ] && uri="http://tinyurl.com/create.php?url=$uri"
			;;
		"w") # wikipedia
			uri="http://wikipedia.org/wiki/$arg"
			;;
		"y") # youtube
			uri="http://www.youtube.com/results?search_query=$arg&aq=f"
			;;
		*)
			uri="$sel"
			;;
		esac
		s_set_uri "$uri"
		;;
	*)
		echo Unknown xprop
		;;
	esac
