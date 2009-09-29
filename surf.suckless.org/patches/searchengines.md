SEARCH ENGINES
==============

Description
-----------

This little patch allows the simple use of search engines. Put something
like this in your config.h:

	static SearchEngine searchengines[] = {
		{ "g",   "http://www.google.de/search?q=%s"   },
		{ "leo", "http://dict.leo.org/ende?search=%s" },
	};

Then you can access each search engine by putting its prefix in front of your 
keywords:

    g foo bar

Or:

    leo hello

Download
--------

* [searchengines-0.1.diff](searchengines-0.1.diff) (4K) (20090923)

Author
------

* Nils Schweinsberg (McManiaC) <[mail@n-sch.de](mailto:mail@n-sch.de)>
