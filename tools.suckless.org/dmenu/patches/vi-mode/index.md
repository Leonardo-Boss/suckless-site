vi-mode
=======
Description
-----------
With this patch dmenu will have basic vi mode capabilities. 

Implemented actions
-------------------
* movements inside typed text with `[h|l|w|b|e|0|$]`
* movements through list with `[j|k|g|G|C-d|C-u]`
* standard insertions with `[a|A|i|I]`
* paste after|before cursor with `[p|P]`, use `ctrl` to use clipboard
* delete from cursor to eol with `D`
* delete the character under cursor with `x`

*Note* `Enter` and `Tab` work like normal

Flags
-----
When `-vi` is passed `Esc` will now put you into `normal mode` instead of
quitting `dmenu`.

Customization
-------------
This patch defines two `Key` structs made up of a `KeySym` and `ModMask`.

The first is a single `Key` variable `global_esc` set to `{ XK_n, Mod1Mask }`. 

The second is an array variable `quit_keys`. These keys will be used to quit
`dmenu` when using `vi_mode`. If `-vi` was passed this will be the only way to
quit `dmenu` besides using `C-c`.

Set `vi_mode` in `config[.def].h` to `1` to enable `vi_mode` wherever you use
`dmenu`. This will not change the behavior of `Esc`. Instead  your key defined
under `global_esc` will be respected. This is useful as you don't have to change
all your scripts to include the `-vi` flag.  `vi_mode` is set to `1` by default.

Set `start_mode` to `1` if you want to start in `normal mode` when the `-vi`
flag is passed.  Set to `0` by default so that you start in `insert mode`.

There is a new color scheme included in this patch.  It is an inversion of 
`SchemeNorm` called `SchemeCursor`

Download
--------
* [dmenu-vi_mode-20230416-0fe460d.diff](dmenu-vi_mode-20230416-0fe460d.diff)

Author
------
* zerg <zergrusherncrusher at disroot.org>
