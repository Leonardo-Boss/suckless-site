zoomswap
========

Description
-----------
This patch swaps the current window (C) with the previous master (P) when zooming.

	Original behaviour :
	+-----------------+-------+
	|                 |       |
	|                 |       |
	|                 |       |
	|        P        +-------|
	|                 |       |
	|                 |   C   |
	|                 |       |
	+-----------------+-------+

	+-----------------+-------+
	|                 |       |
	|                 |   P   |
	|                 |       |
	|        C        +-------|
	|                 |       |
	|                 |       |
	|                 |       |
	+-----------------+-------+


	New Behaviour :
	+-----------------+-------+
	|                 |       |
	|                 |       |
	|                 |       |
	|        C        +-------+
	|                 |       |
	|                 |   P   |
	|                 |       |
	+-----------------+-------+

Download
--------
* [dwm-6.0-zoomswap.diff](dwm-6.0-zoomswap.diff) (1.4K) (20120214)

Author
------
* Jan Christoph Ebersbach - `<jceb at e-jc dot de>`
