XDND drag-n-drop
================
This patch adds
[XDND Drag-and-Drop](https://www.freedesktop.org/wiki/Specifications/XDND/)
support for st.

Description
-----------
Dragging a file onto the st window from another XDND enabled window, such as a
graphical file manager, will insert the file path at your cursor. This behavior
is common in other modern terminal emulators. Multiple files are supported at
once.

Special characters in the file path (e.g. `space`, `&`, `'`, etc.) are also
escaped using the `\` character. The full list of escaped characters are stored
as a string `xdndescchar` in `config.h`.

Download
--------
* [st-drag-n-drop-0.9.2.diff](st-drag-n-drop-0.9.2.diff)

Authors
-------
* Tim Keller - <tjk@tjkeller.xyz>
