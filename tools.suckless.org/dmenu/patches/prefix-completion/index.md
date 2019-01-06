prefix completion
=================

Description
-----------
Changes the behaviour of the matched items and the Tab key.

* Only items prefixed by the written text will match. E.g. query "foo" will
  match "foo", "foobar" and "fool", but not "world" or "barfoo".
* The Tab key will replace the current query with the longest common prefix of
  all matches. E.g. completing "f" with matches "foobar" and "fool" will become
  "foo".

Download
--------
* For 4.6: [dmenu-prefixcompletion-20161019-7ef1d5e.diff](dmenu-prefixcompletion-20161019-7ef1d5e.diff)
* For 4.7: [dmenu-prefixcompletion-4.7.diff](dmenu-prefixcompletion-4.7.diff)
* For 4.8: [dmenu-prefixcompletion-4.8.diff](dmenu-prefixcompletion-4.7.diff)

Authors
-------

* noctua


