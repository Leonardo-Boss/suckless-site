wordbreak
=========

Description
-----------

This patch allows you to configure which characters are used as
word boundaries for double click selections (instead of just ' ').
This feature is already implemented in all versions later than 0.5.

Usage
-----

config.h example:

	#define WORD_BREAK " ()<>[]\""

Download
--------
* [st-0.3-wordbreak.diff](st-0.3-wordbreak.diff)
* [st-0.4-wordbreak.diff](st-0.4-wordbreak.diff)
* [st-0.4.1-wordbreak.diff](st-0.4.1-wordbreak.diff)
* [st-0.5-wordbreak.diff](st-0.5-wordbreak.diff)

Authors
-------

 * Stephen Paul Weber - singpolyma@singpolyma.net
 * Laslo Hunhold - dev@frign.de (st-0.4, st-0.4.1, st-0.5 ports)
