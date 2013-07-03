Chrome Bar
==========

Description
-----------

This patch is an extension of the [searchengines
patch](http://surf.suckless.org/patches/searchengines).  It parses what you
type in the dmenu window when you input new address or a query.  If what
you wrote is not an internet address, it will use default search engine to
query for that phrase: like the google bar.


Configuration
-------------

Add something like this to your `config.h`:

    static const char * defaultsearchengine = "http://www.google.co.uk/search?q=%s";
    static SearchEngine searchengines[] = {
	    { "g",   "http://www.google.de/search?q=%s"   },
	    { "leo", "http://dict.leo.org/ende?search=%s" },
    };

Download
--------

* [surf-0.1-googlebar.diff](surf-0.1-googlebar.diff) (20130703)

Author
------

* Marcin Szamotulski (coot) <[mszamot@gmail.com](mailto:mszamot@gmail.com)>
