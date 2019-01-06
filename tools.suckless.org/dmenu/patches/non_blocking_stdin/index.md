Non-blocking stdin
==================

Description
-----------
A patch to have dmenu read stdin in a non blocking way, making it wait for
input both from stdin and from X. This way, you can continue feeding dmenu
while you type. This patch is meant to be used along with the incremental
patch, so that you can use stdout to feed stdin.

Download
--------
* [dmenu-nonblockingstdin-20160702-3c91eed.diff](dmenu-nonblockingstdin-20160702-3c91eed.diff)

Author
------
* Christophe-Marie Duquesne <chm.duquesne@gmail.com>
* koniu at riseup.net (update for 20160615 git master)
