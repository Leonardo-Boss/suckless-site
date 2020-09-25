tatami layout
=============

Description
-----------
This patch adds a new layout, tatami, that arranges all windows like
tatami tiles. This patch forms 'mats' of 5 or less windows each, and
each mat has 5 different possible arrangements. The mats then form a 
stack as shown in the `7+ windows` diagram below.

	+-----------+-----------+  +-----------+-----------+
	|           |           |  |           |           |
	|           |           |  |           |     2     |
	|           |           |  |           |           |
	|     1     |     2     |  |     1     +-----------+
	|           |           |  |           |           |
	|           |           |  |           |     3     |
	|           |           |  |           |           |
	+-----------+-----------+  +-----------+-----------+
		2 windows                  3 windows

	+-----------+-----+-----+  +-----------+-----------+
	|           |     |     |  |           |     2     |
	|           |  2  |  3  |  |           +-----+-----+
	|           |     |     |  |           |     |     |
	|     1     +-----+-----+  |     1     |  3  |  4  |
	|           |           |  |           |     |     |
	|           |     4     |  |           +-----+-----+
	|           |           |  |           |     5     |
	+-----------+-----------+  +-----------+-----+-----+
		4 windows                  5 windows

	+-----------+---+-------+  +-----------+-----------+
        |           |   |   3   |  |           |    new    |
        |           | 2 +---+---+  |           +---+-------+
        |           |   |   |   |  |           |   |   4   |
        |     1     |   | 4 |   |  |     1     | 3 +---+---+
        |           |   |   | 5 |  |           |   | 5 |   |
        |           +---+---+   |  |           +---+---+ 6 |
        |           |   6   |   |  |           |   7   |   |
        +-----------+-------+---+  +-----------+-------+---+
		6 windows                  7+ windows


Usage
-----
1. Download the patch and apply according to the [general instructions](.).
2. Include the `tatami.c` source file and add `tatami` to the `Layout` 
   section of your `config.h` file. Example from `config.default.h`:

   	#include "tatami.c"
   	static Layout layout[] = {
   		/* symbol               function */
   		{ "[]=",                tile }, /* first entry is default */
   		{ "><>",                floating },
   		{ "|+|",                tatami },
   	};

3. The default keybinding is [Alt]+[y] for tatami.

Download
--------
* [dwm-tatami-6.2.diff](dwm-tatami-6.2.diff)

Maintainer
----------
* Sarthak Shah - <shahsarthakw@gmail.com>
