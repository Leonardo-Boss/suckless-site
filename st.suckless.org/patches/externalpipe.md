externalpipe
============

Description
-----------

Reading and writing st's screen through a pipe.

Example
-------

config.h example, binding Mod1+u to extract all visible URLs and present
dmenu to select and open one:

	static Shortcut shortcuts[] = {
		...
		{ MODKEY, 'u', externalpipe, { .v = "xurls | dmenu -l 10 | xargs -r open" } },
	};

([xurls](https://raw.github.com/bobrippling/perlbin/master/xurls) and
[open](https://github.com/bobrippling/open) are external scripts)


Download
--------

* [st-externalpipe-0.4.1.diff](st-externalpipe-0.4.1.diff)
* [st-externalpipe-0.5.diff](st-externalpipe-0.5.diff)
* [st-externalpipe-0.6.diff](st-externalpipe-0.6.diff)
* [st-externalpipe-20170603-b331da5.diff](st-externalpipe-20170603-b331da5.diff)

Authors
-------

 * Rob Pilling - <robpilling@gmail.com>
 * Laslo Hunhold - <dev@frign.de> (0.4.1, 0.5, 0.6, git ports)
 * Lucas Gabriel Vuotto - <lvuotto92@gmail.com> (git ports)
