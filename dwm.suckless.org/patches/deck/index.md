deck layout
===========

Description
-----------
`deck` is a dwm-layout which is inspired by the TTWM window manager.
It applies the monocle-layout to the clients in the stack.
The master-client is still visible. The stacked clients are like
a deck of cards, hence the name.

deck-rmaster
------------
The vanilla patch doesn't respect the master-area which is defined by
the rmaster-patch. To make it work with the rmaster-patch use the
dwm-deck-rmaster version.

deck-tilegap
------------
The vanilla patch doesn't respect patches which add gaps (ex. tilegap).
This means that when the deck-layout is activated gaps are omitted.
To make it work with the tilegap-patch use the dwm-deck-tilegap version.

Showcase
--------

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
* [dwm-deck-rmaster-6.1.diff](dwm-deck-rmaster-6.1.diff)
* [dwm-deck-tilegap-6.2.diff](dwm-deck-tilegap-6.2.diff)

TODO
----
Make deck-rmaster and -tilegap simpler by pulling out the deck-logic.
They should be used on top of the vanilla deck-patch and not separately.

Author
------
* Jente Hidskes - `<jthidskes at outlook dot com>`
* Joshua Haase - `<hahj87 at gmail dot com>`
* Aleksandrs Stier
