integrated status text
=============

Description
-----------
Allows dwm to handle the text by itself This is a dwmblocks integration into
dwm itself. You can update the blocks only with signals of with mouseclicks.
The 'interval' value does nothing and is meant to be there to 're-use' on
future patches. You can checkout my build with more features like 'async'
updates https://github.com/explosion-mental/Dwm, which is were I'm extracting
this patch.

What you need to know:
- dwm sets a enviromental variable with the PID of itself to be more
  'friendly'. With this you can do `kill -35 $STATUSBAR`, which updates
  block with signal 1 (34 + signal of the block)
- other way to update a block is inside dwm itself, with the
  `updateblock` function. It accepts an unsigned int (non negative)
  number which value indicates the signal of the block you want to
  update.
- mouse clicks are handled with `sendstatusbar` (a mouse function only!)
  which accepts the value that you want to pass to the block command
  as a 'variable' called `BLOCK_BUTTON`, which should be handled in the
  script (block command)
- since this uses real time signals to handle the updates, shouldn't
  work in openbsd, but I could be wrong.

Download
--------
* [dwm-integrated-status-text-6.3.diff](dwm-integrated-status-text-6.3.diff)
* [github mirror](https://github.com/explosion-mental/Dwm/blob/main/Patches/dwm-integrated-status-text-6.3.diff)

Authors
-------
* explosion-mental - <explosion0mental@gmail.com>
