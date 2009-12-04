SEARCH ENGINES
==============

Description
-----------

This patch allows the simple use of search engines. Put something
like this in your `config.h`:

	static SearchEngine searchengines[] = {
		{ "g",   "http://www.google.de/search?q=%s"   },
		{ "leo", "http://dict.leo.org/ende?search=%s" },
	};

Then you can access each search engine by putting its prefix in front of your 
keywords:

	g foo bar

or:

	leo hello

Download
--------

* [surf-0.1-searchengines.diff](surf-0.1-searchengines.diff) (1964) (20090923)
* [surf-0.3-searchengines.diff](surf-0.3-searchengines.diff) (2107) (20091204)

Author
------

* Nils Schweinsberg (McManiaC) <[mail@n-sch.de](mailto:mail@n-sch.de)>
* Samuel Baldwin (shardz) <[recursive.forest@gmail.com](mailto:recursive.forest@gmail.com)>
