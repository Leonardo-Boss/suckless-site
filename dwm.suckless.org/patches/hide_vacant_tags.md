hide vacant tags
================

Description
-----------

This patch prevents dwm from drawing tags with no clients
(i.e. vacant) on the bar. It also makes sure that pressing a tag on
the bar behaves accordingly by not reserving reactive regions on the
bar for vacant tags.

Download
--------

* [dwm-6.1-hide_vacant_tags.diff](dwm-6.1-hide_vacant_tags.diff) (957b) (20140607)

Author
------

Ondřej Grover - <ondrej dot grover at gmail dot com>
