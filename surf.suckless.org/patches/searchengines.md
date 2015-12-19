search engines
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

0.6 patch patches the searchengines array into the config.def.h file.

Download
--------

* [surf-0.1-searchengines.diff](surf-0.1-searchengines.diff) (1964) (20090923)
* [surf-0.3-searchengines.diff](surf-0.3-searchengines.diff) (2107) (20091204)
* [surf-0.4-searchengines.diff](surf-0.4-searchengines.diff) (2107) (20091204)
* [surf-0.5-searchengines.diff](surf-0.5-searchengines.diff) (1611) (20101028)
* [surf-0.6-searchengines.diff](surf-0.6-searchengines.diff) (20130514)
* [surf-0.7-searchengines.diff](surf-0.7-searchengines.diff) (20151219)

Author
------

* Nils Schweinsberg (McManiaC) <[mail@n-sch.de](mailto:mail@n-sch.de)>
* Samuel Baldwin (shardz) <[recursive.forest@gmail.com](mailto:recursive.forest@gmail.com)>
* Alex Puterbaugh (zombine) <[puterbaugh0@gmail.com](mailto:puterbaugh0@gmail.com)>
* Ivan Tham (pickfire) <[pickfire@riseup.net](mailto:pickfire@riseup.net)>
