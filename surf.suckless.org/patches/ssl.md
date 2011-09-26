SSL Verification
================

Description
-----------

Adds basic SSL verification to surf. The status bar is blue for plain HTTP pages,
green for verified HTTPS pages, and red for HTTPS pages which can't be verified.

Optionally, you can set strictssl to true in config.h, which will cause attempts
to connect to unverifiable HTTPS pages to fail, rather than just change the status
bar color.

Download
--------

* [surf-0.4.1-ssl.diff](surf-0.4.1-ssl.diff) (2.8k) (20110926)

Author
------

* Nick White <[http://njw.me.uk](http://njw.me.uk)>
