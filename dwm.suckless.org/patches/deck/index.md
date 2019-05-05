deck layout
===========

Description
-----------
`deck` is a dwm-layout which is inspired by the TTWM window manager.
It applies the monocle-layout only to the clients in the stack.
The master-client is still visible. The stacked clients are like
a deck of cards, hence the name.

WARNING: Doesn't respect patches which add gaps (ex. tilegap).

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
* [dwm-deck-6.2.diff](dwm-deck-6.2.diff)
* [dwm-deck-20170909-ceac8c9.diff](dwm-deck-20170909-ceac8c9.diff)
* [dwm-deck-6.0.diff](dwm-deck-6.0.diff)

Author
------
* Jente Hidskes - `<jthidskes at outlook dot com>`
* Aleksandrs Stier (6.2)
