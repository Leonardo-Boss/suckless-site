solarized
=========

Description
-----------

[Solarized](http://ethanschoonover.com/solarized) is a color scheme by
Ethan Schoonover which exists in a dark and a light variant.  These
patches make the Solarized color scheme available for st.


Notes
-----

Once applied, only the terminal colors are changed.  For applications
such as tmux or vim, you may need to
[adjust the colors there as well](https://bbs.archlinux.org/viewtopic.php?id=164108).


Example
-------

[![Screenshot](st-solarized-light-s.png)](st-solarized-light.png)
[![Screenshot](st-solarized-dark-s.png)](st-solarized-dark.png)

The font used is Source Code Pro.

Download
--------

To get correct colors, you first need to apply the following patch
to disable lighting up bold colors.

 * [st-0.5-no-bold-colors.diff](st-0.5-no-bold-colors.diff)
 * [st-0.6-no-bold-colors.diff](st-0.6-no-bold-colors.diff)
 * [st-git-20150917-no-bold-colors.diff](st-git-20150917-no-bold-colors.diff)

Choose one of the following patches to get either the light
or the dark color scheme:

*Light*:

 * [st-0.5-solarized-light.diff](st-0.5-solarized-light.diff)
 * [st-0.6-solarized-light.diff](st-0.6-solarized-light.diff)
 * [st-git-20150917-solarized-light.diff](st-git-20150917-solarized-light.diff)

*Dark*:

 * [st-0.5-solarized-dark.diff](st-0.5-solarized-dark.diff)
 * [st-0.6-solarized-dark.diff](st-0.6-solarized-dark.diff)
 * [st-git-20150917-solarized-dark.diff](st-git-20150917-solarized-dark.diff)

Authors
-------

 * Nils Reuße - nilsreusse@gmail.com
 * Laslo Hunhold - dev@frign.de (st-0.5, st-0.6, st-git-20150917 ports)
