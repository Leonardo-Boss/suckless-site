focusbynum
==========

Description
-----------
This patch allows you to focus on a window with the corresponding number
in the stack on the current tagset just one key combination.

For example, there are 5 windows opened in the currently active tagset.
To access the 3rd window press ModKey+l.

All of the key combinations are enabled in the current config.def.h file
are listed below in the corresponding order:
1. ModKey+j 
2. ModKey+k
3. ModKey+l
4. ModKey+:
5. ModKey+f
6. ModKey+d
7. ModKey+s
8. ModKey+a

You can edit the key combinations however you want in the config.h file.

You can add any number of key combinations with the focusbynum function,
specifying the corresponding window number assigned to the .i variable.

Download
--------
* [dwm-focusbynum-20230720-e81f17d.diff](dwm-focusbynum-20230720-e81f17d.diff)

Author
------
* Dima Rogiv - <dirsednet.it@gmail.com>
