deck layout
===========

Description
-----------
`deck` is a dwm-layout which is inspired by the TTWM window manager.
It applies the monocle-layout to the clients in the stack.
The master-client is still visible. The stacked clients are like
a deck of cards, hence the name.

The vanilla patch doesn't respect patches which add gaps (ex. tilegap).
This means that when the deck-layout is activated gaps are omitted.
To make it work with the tilegap-patch use the dwm-deck-tilegap patch.

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
* [dwm-deck-6.0.diff](dwm-deck-6.0.diff)
* [dwm-deck-tilegap-6.2.diff](dwm-deck-tilegap-6.2.diff)

Author
------
* Jente Hidskes - `<jthidskes at outlook dot com>`
* Joshua Haase - `<hahj87 at gmail dot com>`
* Aleksandrs Stier
