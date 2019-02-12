boxdraw
=======

Summary
-------
Custom-draw most of the lines/blocks characters for gapless alignment.

Description
-----------
Line drawing characters such as those used by `tree`, `tmux` pane splitters,
`mc` frames/menus etc, sometimes align with gaps - which looks suboptimal. This
can depend on font, size, scaling, and other factors.

Block drawing characters, such as lower-half-block which is sometimes used as a
terminal "pixel" to display images, can also suffer from this issue.

This patch adds an option to custom-draw most of the lines/blocks characters
using internal data (without using the font) so that they align perfectly with
any font, at any size, and with any `chscale`/`cwscale` configuration values.

138 shapes are supported - all the codepoints at U+2500 - U+259F except dashes,
diagonals and shades. The unsupported shapes render normally using the font.

See also: unicode references
[U2500.pdf](http://www.unicode.org/charts/PDF/U2500.pdf) and
[U2580.pdf](http://www.unicode.org/charts/PDF/U2580.pdf), libvte [test
page](https://github.com/GNOME/vte/blob/master/doc/boxes.txt).


Notes:
------
* The download is a `git --format-patch` file. It can be applied either with
  `git` (`am`/`apply`) or normally with `patch`. It also applies and works
  correctly with st 0.8.1 and/or the [vertcenter](../vertcenter/) patch.
* boxdraw is disabled by default and controlled via `config.h`. If you already
  have this file, you'll need to copy the boxdraw line from `config.def.h`.

Download
--------
* [st-boxdraw-2018-11-01-30ec9a3.diff](st-boxdraw-2018-11-01-30ec9a3.diff)

Author
------
* Avi Halachmi (:avih) - [https://github.com/avih](https://github.com/avih)
