HISTORY
=======

Description
-----------

This little patch writes the the loaded uri to a file.

wart_ also privides a little shell script that uses dmenu to display and select an uri
    cat ~/.surf/history | sort -r | uniq | dmenu -l 10 -b -i | xprop -id `cat ~/.surf/id` -f _SURF_URI 8s -set _SURF_URI

Download
--------

* [surf-0.2-history.diff](surf-0.2-history.diff) (891) (20091019)

Authors
-------

* Jason Thigpen (cdarwin) <[darwin@senet.us](mailto:darwin@senet.us)>
* Peter John Hartman (wart_) <[peterjohnhartman@gmail.com](mailto:peterjohnhartman@gmail.com)>
