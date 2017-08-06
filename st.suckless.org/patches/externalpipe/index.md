externalpipe
============

Description
-----------

Reading and writing st's screen through a pipe.

Example
-------

config.h example, binding `TERMMOD + U` to extract all visible URLs and present
dmenu to select and open one:

	static char *openurlcmd[] = { "/bin/sh", "-c",
		"xurls | dmenu -l 10 -w $1 | xargs -r open",
		"externalpipe", winid, NULL };
	Shortcut shortcuts[] = {
		...
		{ TERMMOD, XK_U, externalpipe, { .v = openurlcmd } },
	};

([xurls](https://raw.github.com/bobrippling/perlbin/master/xurls) and
[open](https://github.com/bobrippling/open) are external scripts)


Download
--------

* [st-externalpipe-0.4.1.diff](st-externalpipe-0.4.1.diff)
* [st-externalpipe-0.5.diff](st-externalpipe-0.5.diff)
* [st-externalpipe-0.6.diff](st-externalpipe-0.6.diff)
* [st-externalpipe-0.7.diff](st-externalpipe-0.7.diff)
* [st-externalpipe-20170608-b331da5.diff](st-externalpipe-20170608-b331da5.diff)

Authors
-------

 * Rob Pilling - <robpilling@gmail.com>
 * Laslo Hunhold - <dev@frign.de> (0.4.1, 0.5, 0.6, git ports)
 * Lucas Gabriel Vuotto - <lvuotto92@gmail.com> (0.7, git ports)