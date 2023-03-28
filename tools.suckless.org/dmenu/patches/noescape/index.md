noescape
======

Currently dmenu will be killed if pressing the escape key.
And this is probably what everybody wants.
But if anyone wanted to run something through dmenu and does not want dmenu to be killed, this is the patch for you.

This patch introduces the `-no-escape` flag, which will block the escape key from killing dmenu.

Download
--------

* [dmenu-noescape-20230328-dfbbf7f.diff](dmenu-noescape-20230328-dfbbf7f.diff)

Author
------
* Aaron Züger <contact@azureorange.xyz>
