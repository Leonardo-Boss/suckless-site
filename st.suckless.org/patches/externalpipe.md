External Pipe
=============

Description
-----------

This patch lets you write st's screen text out through a pipe, for example,
url-select (below).

Example
-------

Bind alt+u to extract all visible urls and present dmenu, to choose and open
said urls:

	static Shortcut shortcuts[] = {
		...
		{ MODKEY, 'u', externalpipe, { .s = "xurls | dmenu -l 10 | xargs -r open" } },
	};


([xurls][1] and [open][2] are external scripts)


Download
--------

* [st-0.4.1-externalpipe.diff][0]

[0]: st-0.4.1-externalpipe.diff
[1]: https://raw.github.com/bobrippling/perlbin/master/xurls
[2]: https://github.com/bobrippling/open


Author
------

 * Rob Pilling - my name @ gmail
