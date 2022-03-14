barconfig
=========

Description
-----------
This patch adds char \*barlayout to config(.def).h which can contain as
many or as few of the characters 'l', 'n', 's', 't', or '|' to configure the order of dwm's bar.

* l: layout indicator
* n: window name
* s: status (xsetroot)
* t: tag indicators
* |: split point

Everything before '|' (and if it is omitted) will appear on the left of the bar. Everything after will appear on the right, but in reverse order.

By default, this patch leaves the bar as is.

Download
--------
* [dwm-barconfig-6.3.diff](dwm-barconfig-6.3.diff) (2022-02-22)

Author
-------
* Dylan Cairns-Howarth - <dairnarth@dylancairns.co.uk>
