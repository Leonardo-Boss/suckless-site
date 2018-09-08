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
Patches against different versions of dwm are available at
[dwm-clean-patches](https://github.com/jceb/dwm-clean-patches).

* [dwm-zoomswap-20160731-56a31dc.diff](dwm-zoomswap-20160731-56a31dc.diff)
* [dwm-6.1-zoomswap.diff](dwm-6.1-zoomswap.diff) (2585b) (20120406)
* [dwm-zoomswap-6.0.diff](dwm-zoomswap-6.0.diff) (1.6K) (20120406)

Author
------
* Jan Christoph Ebersbach - `<jceb at e-jc dot de>`
