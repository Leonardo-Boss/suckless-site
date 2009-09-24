SEARCH ENGINES
============

Description
-----------

This little patch will allow the use of simple search engines. Put something
like this in your config.h:

	static SearchEngine searchengines[] = {
		{ "g",   "http://www.google.de/search?q=%s"   },
		{ "leo", "http://dict.leo.org/ende?search=%s" },
	};

This will enable searching in your favorit search engine by simply
putting the prefix of your search engine in front your keywords:

    g foo bar

Or:

    leo hello

Download
------

* [searchengines-0.1.diff](searchengines-0.1.diff) (4K) (20090923)

Author
------

- Nils Schweinsberg (McManiaC) <[mail@n-sch.de](mailto:mail@n-sch.de)>
