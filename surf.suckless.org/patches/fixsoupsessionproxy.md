FIX SOUPSESSION http_proxy ENVIRONMENT HANDLING
===============================================

Description
-----------

This patch fixes the case where the "http_proxy" environment variable
does not have an "http://" prefix.  Since http_proxy is perfectly valid
without one, SoupSession will not work unless it is present -- so check to
see if it is so, and add it as necessarily.

Download
--------

* [http://xteddy.org/surf.html#toc4](http://xteddy.org/surf/html#toc4)

Author
------

* Thomas Adam (thomas_adam) <[thomas.adam22@gmail.com](mailto:thomas.adam22@gmail.com)>
