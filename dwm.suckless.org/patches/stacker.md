Stacker
=======

Description
-----------

This patch provides basic utilities for managing the client stack. It implements two new
commands: `focusstack` (which is a replacement for the original `focusstack` command) and
`pushstack`. The first one is for focusing clients while the second one moves clients
around the stack. Both commands take the same kind of argument:

* Pass `INC(inc)` to focus/push relatively to the selected client. This will wrap around the
  stack limits.

* Pass a positive number to focus/push relatively to the beginning of the stack. Out of
  limit values will be truncated to the position of the last visible client and won't
  wrap around.

* Pass a negative number to focus/push relatively to the last visible client in the stack.
  Here -1 means the last client, -2 the previous to last client, etc. Out of limit values
  will be truncated to the position of the first visible client (0) and won't wrap around.

Default key bindings
--------------------

There are two parallel sets of bindings: one for the `focus*` family and the other for the
`push*` family. The keys are the same for both sets but they do differ in the modifiers:
simply `MODKEY` for the `focus*` family and `MODKEY|ShiftMask` for the `push*` family.

  Key   |  Argument   |   Description
:------:|:-----------:|-----------------------
  `j`   |   `INC(+1)` |  Next to selected
  `k`   |   `INC(-1)` |  Previous to selected
  \`    |     `0`     |  First position
  `q`   |     `1`     |  Second position
  `a`   |     `2`     |  Third position
  `z`   |    `-1`     |  Last position

The \`, `q`, `a`, `z` keys are aligned more or less in the same keyboard column in the us
layout. The first three are intended to be used as quick positional shortcuts to specific
applications. So if you have 9 tags you get 9\*3=27 shortcuts in a two-level hierarchy of
windows. The `z` key is more like "I don't care so much about you just right now but you
can still live in this tag".

Notice that `MODKEY|ShiftMask+q` collides with the default binding for quitting dwm, which
stacker changes to `MODKEY|ShiftMask+BackSpace`.

Download
--------

* [dwm-6.0-stacker.diff](dwm-6.0-stacker.diff)

Author
------

* Carlos Pita (memeplex) <carlosjosepita@gmail.com>
