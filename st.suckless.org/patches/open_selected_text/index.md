XDG-Open Selected
=================
This patch adds a function that can be bound to a key or button which attempts
to open the selected text using `xdg-open`.

Description
-----------
This functionality is most useful for opening URL's in a web-browser, but also
allows you to open any type of file in the default application for its mimetype
by having its path selected.

By default, `CTRL + Mouse2` will open the selected text.

OSC 7
-----
This patch also adds support for the `OSC 7` escape sequence, which allows for
automatically changing the current working directory of st from a shell.

This is useful because `xdg-open` is spawned as a child process of st, and so
by default you won't be able to open a file using its relative path (unless
that relative path happens to correspond with the CWD of st).

To allow opening files using the relative path of the shell instead, you just
need to add the following to your shell's rc:

* zshrc: `function precmd () { builtin print -Pn "\e]7;file://${PWD}\a" }`
* bashrc: `export PROMPT_COMMAND='echo -ne "\e]7;file://${PWD}\a"'`

Setting this up will ensure that st's CWD is always synced with the CWD of your
shell.

Download
--------
* [st-open-selected-0.9.2.diff](st-open-selected-0.9.2.diff)

Authors
-------
* Tim Keller - <tjk@tjkeller.xyz>
