History
=======

Description
-----------

A patch to have dmenu do "smart" history. It will re-order the options in a
history file based on frequency of use, with the most used heading to the
top. This is best in conjunction with the history patch to surf. In surf, I
have "^G" point to:

	dmenu -hist /home/peterjh/.dmenu.history -b -l 10 < ~/.surf/history

Enjoy! 

Download
--------

* [dmenu-tip-history.diff](dmenu-tip-history.diff) (3545) (20091216)

Author
------

* Peter John Hartman (wart_) <[http://antiopus.trilidun.org/durandus/](http://antiopus.trilidun.org/durandus/)>

Note
----

As an alternative to the patch above, the following script is meant to replace
`dmenu_run` : it handles the command history in a similar way as the patch and
can be used with an unpatched dmenu 4.6.
[dmenu_run_history](http://tools.suckless.org/dmenu/scripts/dmenu_run_with_command_history) 
