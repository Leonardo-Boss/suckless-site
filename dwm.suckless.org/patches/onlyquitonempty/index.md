onlyquitonempty
===============

Description
-----------
On the default keybinding of Alt-Shift-Q, it is possible to press it by
accident, closing all your work. This patch makes it so dwm will only exit via
quit() if no windows are open.

Because people may have different daemons, etc. open, you can configure the
count considered to be 'empty' via `EMPTY_WINDOW_COUNT`.

Download
--------
* [dwm-onlyquitonempty-20180428-6.2.diff](dwm-onlyquitonempty-20180428-6.2.diff)

Author
------
* thatlittlegit - <personal@thatlittlegit.tk>
