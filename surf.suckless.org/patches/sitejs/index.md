Site Specific JS
================

Description
-----------

This patch allows scripts to be injected based on the url matching
a regex, allowing scripts to be site-specfic.

It also can serve as a more complex replacement for the multijs patch.

Configuration
-------------

In your `config.h`:

	static char *scriptdir      = "~/.surf/scripts/";
	static SiteSpecific scripts[] = {
        /* regexp                script in $scriptdir */
        { "://duckduckgo\\.com", "example.js" },
	};

Download
--------

* [surf-sitejs-20220214-94226b8.diff](surf-sitejs-20220214-94226b8.diff) (3.3k)

Author
------

* Avalon Williams <avalonwilliams@protonmail.com>
