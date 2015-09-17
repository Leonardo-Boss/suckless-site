externalpipe
============

Description
-----------

This patch lets you write st's screen through a pipe.

Example
-------

config.h example, binding Mod1+u to extract all visible URLs and present
dmenu to select and open one:

	static Shortcut shortcuts[] = {
		...
		{ MODKEY, 'u', externalpipe, { .s = "xurls | dmenu -l 10 | xargs -r open" } },
	};

([xurls](https://raw.github.com/bobrippling/perlbin/master/xurls) and
[open](https://github.com/bobrippling/open) are external scripts)


Download
--------

* [st-0.4.1-externalpipe.diff](st-0.4.1-externalpipe.diff)
* [st-0.5-externalpipe.diff](st-0.5-externalpipe.diff)
* [st-0.6-externalpipe.diff](st-0.6-externalpipe.diff)
* [st-git-20150917-externalpipe.diff](st-git-20150917-externalpipe.diff)

Authors
-------

 * Rob Pilling - robpilling@gmail.com
 * Laslo Hunhold - dev@frign.de (st-0.4.1, st-0.5, st-0.6, st-git-20150917 ports)
