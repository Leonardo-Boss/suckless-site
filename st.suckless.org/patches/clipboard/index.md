one clipboard
=============

Free Desktop mandates the user to remember which of two clipboards you are
keeping selections in. If you switch between a terminal and browser, you might
this UX jarring. This patch modifies st to work from one CLIPBOARD, the same as
your browser.

Description
-----------
st by default only sets PRIMARY on selection since
[March 2015](//git.suckless.org/st/commit/?id=28259f5750f0dc7f52bbaf8b746ec3dc576a58ee/)
according to the
[Freedesktop standard](https://specifications.freedesktop.org/clipboards-spec/clipboards-latest.txt).

This patch makes st set CLIPBOARD on selection.
Furthermore from `st-clipboard-0.8.2.diff` middle click pastes from CLIPBOARD.

You may want to replace selpaste with clippaste in your config.h to complete
the affect.

Download
--------
* [st-clipboard-0.8.2.diff](st-clipboard-0.8.2.diff)
* [st-clipboard-0.8.1.diff](st-clipboard-0.8.1.diff)
* [st-clipboard-0.6.diff](st-clipboard-0.6.diff)
* [st-clipboard-0.7.diff](st-clipboard-0.7.diff)
* [st-clipboard-20160727-308bfbf.diff](st-clipboard-20160727-308bfbf.diff)
* [st-clipboard-20170802-e2ee5ee.diff](st-clipboard-20170802-e2ee5ee.diff)
* [st-clipboard-20170925-b1338e9.diff](st-clipboard-20170925-b1338e9.diff)
* [st-clipboard-20180309-c5ba9c0.diff](st-clipboard-20180309-c5ba9c0.diff)

Authors
-------
* Kai Hendry - <hendry@iki.fi>
* Laslo Hunhold - <dev@frign.de> (git port)
* Matthew Parnell - <matt@parnmatt.co.uk> (0.7, git ports)
