rulerefresher
=============

Description
-----------
This patch reruns the defined rules on a window name change.

Example use case
----------------

Zoom:

Every zoom window has the same name at creation und changes it afterwards.
That renders different rules for different Zoom windows useless.
With this patch the rules are reapplied after the rename.


Download
--------
* [dwm-rulerefresher-6.2.diff](dwm-rulerefresher-6.2.diff)(2021-12-03)

Author
------
* Lars Niesen - <lars.niesen@gmx.de>
