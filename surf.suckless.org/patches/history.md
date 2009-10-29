HISTORY
=======

Description
-----------

This patch writes the loaded URI to a file.

wart_ also provides a shell script using dmenu to display and select a URI:

	cat ~/.surf/history | sort -r | uniq | dmenu -l 10 -b -i | xprop -id `cat ~/.surf/id` -f _SURF_URI 8s -set _SURF_URI

Download
--------

* [surf-0.2-history.diff](surf-0.2-history.diff) (891) (20091019)

Authors
-------

* Jason Thigpen (cdarwin) <[darwin@senet.us](mailto:darwin@senet.us)>
* Peter John Hartman (wart_) <[peterjohnhartman@gmail.com](mailto:peterjohnhartman@gmail.com)>
