stairs layout
=============

Description
-----------
`stairs` is a dwm layout which is similar to [deck](/patches/deck),
but the clients in the stack area are arranged like stairs.

This layout can be modified using the 3 variables provided in `config.h`:
`stairpx`, `stairdirection` and `stairsamesize`.

If you have the [fullgaps](/patches/fullgaps) patch applied,
apply the `stairs-fullgaps` variant to get gaps.

	+-------------+--------+----------------+
	|             |        |                |
	|             |     +--|       S1       |
	|             |     |S2|                |
	|             |  +--|  |                |
	|             |  |S3|  |                |
	|      M      |--|  |  +----------------+
	|             |S4|  |                 | |
	|             |  |  +-----------------+ |
	|             |  |                  |   |
	|             |  +------------------+   |
	|             |                   |     |
	+-------------+-------------------+-----+
	            stairsamesize = 1

	+-------------+--------+----------------+
	|             |        |                |
	|             |     +--|       S1       |
	|             |     |S2|                |
	|             |  +--|  |                |
	|             |  |S3|  |                |
	|      M      |--|  |  |                |
	|             |S4|  |  |                |
	|             |  |  |  |                |
	|             |  |  |  |                |
	|             |  |  |  |                |
	|             |  |  |  |                |
	+-------------+--+--+--+----------------+
	            stairsamesize = 0

Download
--------
* [dwm-stairs-20220430-8b48e30.diff](dwm-stairs-20220430-8b48e30.diff)
* [dwm-stairs-fullgaps-20220430-8b48e30.diff](dwm-stairs-fullgaps-20220430-8b48e30.diff)

Authors
-------
* Ehsan Ghorbannezhad - <ehsan@disroot.org>
