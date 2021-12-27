noborderflicker
===============

Description
-----------
Depending on machine configuration and luck, borders may flicker when changing
focus to a new client. This happens because there may be a tangible delay
between unfocus(), which sets the normal border, and focus(), which sets the
focused border.

This patch avoids that flickering by deferring drawing the normal border around
the newly unfocused client until the new focused border has already been drawn.
Even better, in reality, these are now close enough together that it's very
likely the two updates will be rendered on the same monitor refresh.

Download
--------
* [dwm-noborderflicker-20211227-8657affa2a61.diff](dwm-noborderflicker-20211227-8657affa2a61.diff)

Authors
-------
* Chris Down - <chris@chrisdown.name>
