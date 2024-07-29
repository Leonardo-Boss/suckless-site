keybindings
===========

Description
-----------
This patch allows you to map a key binding into different key binding.
Main objective is to utilise VIM-esque key bindings, such as:
- `Alt + [hjkl]`: `[Left/Down/Up/Right]`
- `Alt + Shift + [hjkl]`: `Shift + [Left/Down/Up/Right]`

This is useful when you have to use GUI applications which doesn't have good
support for VIM-like key binding, like editing text on modern GUI web browsers.

Default Key Bindings
--------------------
Most bindings work with `Shift` key:

### Two-Handed
- `Alt + [hjkl]`: `[Left/Down/Up/Right]`
- `Alt + [pn]`: `[Up/Right]`(`readline`-like binding)
- `Alt + [io]`: `Ctrl + [Left/Right]`(jump by word)
- `Alt + [=-]`: `Ctrl + [Home/End]`(page up/down)

### One-Handed
- `Alt + [sxzc]`: `[Up/Down/Left/Right]`
- `Alt + [ae]`: `[Home/End]`(`readline`-like binding)
- `Alt + d`: `Return`(This doesn't work with `Shift` key)

Download
--------
* [dwm-keybindings-6.5.diff](dwm-keybindings-6.5.diff)

Author
------
* suiso67 <suiso67@macadamia.rocks>
