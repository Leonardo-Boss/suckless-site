clipboard
=========

Description
-----------

st only sets PRIMARY on selection since
[March 2015](http://git.suckless.org/st/commit/?id=28259f5750f0dc7f52bbaf8b746ec3dc576a58ee)
according to the
[Freedesktop standard](http://standards.freedesktop.org/clipboards-spec/clipboards-latest.txt).

This patch brings back the old behaviour, namely additionally setting
CLIPBOARD.

Download
--------

* [st-clipboard-0.6.diff](st-clipboard-0.6.diff)
* [st-clipboard-0.7.diff](st-clipboard-0.7.diff)
* [st-clipboard-20160727-308bfbf.diff](st-clipboard-20160727-308bfbf.diff)
* [st-clipboard-20170802-e2ee5ee.diff](st-clipboard-20170802-e2ee5ee.diff)

Authors
-------

 * Kai Hendry - <hendry@iki.fi>
 * Laslo Hunhold - <dev@frign.de> (git port)
 * Matthew Parnell - <matt@parnmatt.co.uk> (0.7, git ports)
