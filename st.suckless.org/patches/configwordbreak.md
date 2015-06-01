configwordbreak
===============

Description
-----------

This is a patch to allow configuring which characters are used as
word boundaries for double click selection (instead of just ' ').
This feature is already implemented in all versions later than 0.5.

Usage
-----

example config.h

	#define WORD_BREAK " ()<>[]\""

Download
--------
* [st-0.3-configwordbreak.diff](st-0.3-configwordbreak.diff)
* [st-0.4-configwordbreak.diff](st-0.4-configwordbreak.diff)
* [st-0.4.1-configwordbreak.diff](st-0.4.1-configwordbreak.diff)
* [st-0.5-configwordbreak.diff](st-0.5-configwordbreak.diff)

Author
------

 * Stephen Paul Weber - singpolyma
 * FRIGN - dev@frign.de (st-0.4, st-0.4.1, st-0.5 ports)
