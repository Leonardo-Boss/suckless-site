# One clipboard

## Description

st only sets PRIMARY on selection since
[March 2015](http://git.suckless.org/st/commit/?id=28259f5750f0dc7f52bbaf8b746ec3dc576a58ee)
according to the
[Freedesktop standard](http://standards.freedesktop.org/clipboards-spec/clipboards-latest.txt).

This patch brings back the old behaviour, namely additionally setting
CLIPBOARD.

## Download

* [st-0.6-clipboard.diff](st-0.6-clipboard.diff)
* [st-git-20150917-clipboard.diff](st-git-20150917-clipboard.diff)

## Authors

 * Kai Hendry - hendry@iki.fi
 * Laslo Hunhold - dev@frign.de (st-git-20150917 port)
