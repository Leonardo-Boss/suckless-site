integrated status text
======================

Description
-----------
Allows dwm to handle the text by itself. You can think of it like a dwmblocks
integration into dwm itself. This is extracted from demwm, dwm fork[0], in
which you can find even more information.

Example:

	/* fg         command             interval  signal */
	{ "#000000",  "echo 'dwm block!",   10,       3},

- fg: the foreground color of the individual block, for the background it uses
  the bg of SchemeStatus. You can swap behaviour uncommenting a comment in
  dwm.c (search for 'uncomment to inverse the colors')

- command: it uses the output of the commands for the status text interval: in
  seconds, how much does it have to pass before updating the block.

- interval: in seconds, how many seconds until the block it's updated

- signal: have to be less than 30. This lets you update the block with `kill`
  by adding 35 to this value.
  For the block above it would be 34 + 3 = 37 -> `kill -37 $(pidof dwm)`.
  These signals are linux dependant.

You can change `$(pidof dwm)` with `$STATUSBAR` to 'fix' signaling multiple
instances of dwm, since this patch also wraps the PID of dwm into the
`$STATUSBAR` enviromental variable.

Last thing, mouse actions. For this you need to handle the env variable
`$BLOCK_BUTTON` in a script, this is so you can easily reuse the scripts used
in dwmblocks. And remember that mouse actions update the block.

[0] https://github.com/explosion-mental/demwm or
https://codeberg.org/explosion-mental/demwm

Download
--------
* [dwm-integrated-status-text-6.3.diff](dwm-integrated-status-text-6.3.diff)
* [codeberg mirror](https://codeberg.org/explosion-mental/demwm/src/branch/patches/dwm-integrated-status-text-6.3.diff)

Author
------
* explosion-mental - <explosion0mental@gmail.com>
