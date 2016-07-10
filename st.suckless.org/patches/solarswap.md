solarswap
=========

Description
-----------

This patch includes both the dark and light
[Solarized](http://ethanschoonover.com/solarized) color schemes. You can swap
between light and dark by pressing F6 (default).

Notes
-----

Once applied, only the terminal colors are changed.  For applications
such as tmux or vim, you may need to
[adjust the colors there as well](https://bbs.archlinux.org/viewtopic.php?id=164108).

Patches for the individual color schemes are [here](solarized.md).

Download
--------

To get correct colors, you first need to apply the following patch
to disable lighting up bold colors.

 * [st-no_bold_colors-git-20160620-528241a.diff](st-no_bold_colors-git-20160620-528241a.diff)

Then apply this patch:

 * [st-solarswap-20160709-528241a.diff](st-solarswap-20160709-528241a.diff)

Authors
-------

 * Ryan Roden-Corrent - ryan@rcorre.net
