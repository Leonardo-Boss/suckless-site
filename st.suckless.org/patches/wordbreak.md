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
* [st-wordbreak-0.3.diff](st-wordbreak-0.3.diff)
* [st-wordbreak-0.4.diff](st-wordbreak-0.4.diff)
* [st-wordbreak-0.4.1.diff](st-wordbreak-0.4.1.diff)
* [st-wordbreak-0.5.diff](st-wordbreak-0.5.diff)

Authors
-------

 * Stephen Paul Weber - singpolyma@singpolyma.net
 * Laslo Hunhold - dev@frign.de (0.4, 0.4.1, 0.5 ports)
