Quick searching with dmenu
==================

Description
-----------

Prompts for a query with dmenu and posts it to the selected search engine.
The engine is specified by a single-character code that precedes the
actual query, e.g. 'w pancakes' would search en.wikipedia.org for the string
'pancakes'. This reduces the necessary shell plumbing to a couple of pipes
and a case statement.

Character ugliness in the query is avoided using od and tr. This
has worked so far.

**EDIT:** Replaced xxd with od and eliminated a sed pipe. Replaced cut pipes
with sh variable expansion.

Author
------

Wolfgang Corcoran-Mathe

Installation
------------

Copy the following code into an executable file and place it in PATH. Edit
surf/config.def.h as described in the header.

Code
----

	#!/bin/sh
	#
	# surf_qsearch:
	# Search script for surf. Takes the surf window id as argument.

	# Get the full query. The 'echo | dmenu' idiom may be a bit of
	# a hack, but it seems to work.
	q="$(echo | dmenu)"
	[ -z "$q" ] && exit 0

	# Extract the engine code.
	e="${q%% *}"

	# Encode the search string (i.e. the rest of q)
	s=$(printf %s "${q#* }" | od -t x1 -An | tr -d '\n' | tr ' ' '%')

	# These are examples. Change as desired.
	# 's' = startpage.com
	# 'w' = wikipedia.org
	# 'a' = wiki.archlinux.org
	# 'd' = en.wiktionary.org
	case $e in
		's')
			xprop -id $1 -f _SURF_GO 8s -set _SURF_GO "https://startpage.com/do/search?q=${s}"
			;;
		'w')
			xprop -id $1 -f _SURF_GO 8s -set _SURF_GO "https://en.wikipedia.org/wiki/index.php/Special:Search?search=${s}&go=Go"
			;;
		'a')
			xprop -id $1 -f _SURF_GO 8s -set _SURF_GO "https://wiki.archlinux.org/index.php/Special:Search?search=${s}&go=Go"
			;;
		'd')
			xprop -id $1 -f _SURF_GO 8s -set _SURF_GO "https://en.wiktionary.org/w/index.php?search=${s}&go=Go"
			;;
		*)
			exit 1
			;;
	esac
