FIFO
====

Description
-----------

This patch adds a small command language that allows the browser to
be controlled through a FIFO pipe. The format of the language is just:
	[command] [argument]

The fifo pipe of the window is stored in the `~/.surf/fifo/` directory
by default, with the name of the file being the window id.

Most of the commands are the same as their respective functions, (loaduri,
scrollv, scrollh, etc.), though there are a couple that are different. In
addition, a new function (injectjs) was added to allow injection of javascript
through the pipe, though it can also be bound to a key.

Download
--------
* [surf-fifo-20220310-c5c1646.diff](surf-fifo-20220310-c5c1646.diff) (8.2K)

Scripts
-------
* Bitwarden autofiller: [bw-dmenu-fill](bw-dmenu-fill) (2.4K)

Authors
-------
* Avalon Williams <avalonwilliams@protonmail.com>
