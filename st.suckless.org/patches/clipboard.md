# One clipboard

## Description

st only sets PRIMARY on selection since
[March 2015](http://git.suckless.org/st/commit/?id=28259f5750f0dc7f52bbaf8b746ec3dc576a58ee)
according to the
[Freedesktop standard](http://standards.freedesktop.org/clipboards-spec/clipboards-latest.txt).

This patch brings back the old behaviour, namely additionally setting
CLIPBOARD.

## Download

* [clipboard.diff](clipboard.diff)

## Author

[Kai Hendry](http://hendry.iki.fi/)
