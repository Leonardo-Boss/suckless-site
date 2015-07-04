# One clipboard

## Description

<abbr title="simple terminal">st</abbr> since [March 2015 only sets PRIMARY on
selection](http://git.suckless.org/st/commit/?id=28259f5750f0dc7f52bbaf8b746ec3dc576a58ee),
in accordance to the [Freedesktop
standard](http://standards.freedesktop.org/clipboards-spec/clipboards-latest.txt).

However I don't like this <abbr title="User eXperience">UX</abbr>. I don't like
having to think about two clipboards. I don't like having to use typically
three key combination to copy my selected text into the clipboard used by my
browser.

## Download

* [[1clipboard.diff]]

or

Append `clipcopy(NULL);` to the end of the xsetsel function in [st.c](http://git.suckless.org/st/tree/st.c).

## Author

[Kai Hendry](http://hendry.iki.fi/)
