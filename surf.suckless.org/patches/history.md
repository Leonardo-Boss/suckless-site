HISTORY
=======

Description
-----------

This patch writes the loaded URI to a file.

wart_ also provides a shell script using dmenu to display and select a URI:

	cat ~/.surf/history.txt | sort -r | uniq | dmenu -l 10 -b -i | xprop -id `cat ~/.surf/id` -f _SURF_URI 8s -set _SURF_URI

Tip: You might want to put this in your surf start script:

	cat ~/.surf/history.txt | sort -u >~/.surf/history.txt

This works well in conjunct with the dmenu history patch.

Download
--------

* [surf-0.2-history.diff](surf-0.2-history.diff) (891) (20091019)
* [surf-0.3-history.diff](surf-0.3-history.diff) (1475) (20091203)
* [surf-tip-history.diff](surf-tip-history.diff) (2952) (20091215)

Authors
-------

* Jason Thigpen (cdarwin) <[darwin@senet.us](mailto:darwin@senet.us)>
* Peter John Hartman (wart_) <[http://antiopus.trilidun.org/durandus/](htttp://antiopus.trilidun.org/durandus/)>
* Samuel Baldwin (shardz) <[recursive.forest@gmail.com](mailto:recursive.forest@gmail.com)>
