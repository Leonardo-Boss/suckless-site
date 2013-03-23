\singular borders
===========

Description
-----------
`deck` is a new layout for DWM (inspired by the TTWM window manager). It is like tile(), but with monocle in the stack. You have a master client (complete with nmaster et all), but the stack clients now overlap one another as in monocle(). (The stacked clients are like a deck of cards, hence the name).


	Tile :
	+-----------------+--------+
	|                 |        |
	|                 |  S1    |
	|                 |        |
	|        M        +--------+
	|                 |        |
	|                 |   S2   |
	|                 |        |
	+-----------------+--------+


	Deck :
	+-----------------+--------+
	|                 |        |
	|                 |        |
	|                 |        |
	|        M        |   S1   |
	|                 |        |
	|                 |        |
	|                 |        |
	+-----------------+--------+

Download
--------
* [dwm-6.0-deck.diff](dwm-6.0-deck.diff)

Author
------
* Jente Hidskes - `<jthidskes at outlook dot com>`
