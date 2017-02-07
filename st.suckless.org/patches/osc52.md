OSC-52 tmux clipboard
=====

Description
-----------

This patch adds OSC 52 control sequence support to st to support the syncing of
tmux's clipboard to the X PRIMARY selection..

Notes
-----

For remote tmux instances, you must update the terminfo with the included
terminfo here.

Download
--------

 * [st-osc52-20170125-c63a87c.diff](st-osc52-20170125-c63a87c.diff)

Authors
-------

 * fpqc - <harry.gindi@live.com>
