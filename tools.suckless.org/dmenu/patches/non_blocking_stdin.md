NON BLOCKING STDIN
==================

Description
-----------

A patch to have dmenu read stdin in a non blocking way, making it wait for
input both from stdin and from X. This way, you can continue feeding dmenu
while you type. This patch is meant to be used along with the incremental
patch, so that you can use stdout to feed stdin.

Download
--------

This patch should apply on mercurial version 2b9683c50723 (the latest -
2010-12-08)

* [dmenu-tip-non-blocking-stdin.diff](dmenu-tip-non-blocking-stdin.diff)

Author
------

* Christophe-Marie Duquesne <chm.duquesne@gmail.com>
