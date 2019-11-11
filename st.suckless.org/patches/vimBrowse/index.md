Vim Browse
==========

![Screenshot](https://user-images.githubusercontent.com/9212314/68340852-7d6d9380-00e7-11ea-9705-51ed098eba2a.gif)


Description
-----------

This patch offers the possibility to move through the terminal history, search for strings and use
VIM-like motions, operations and quantifiers.


Default Behavior:
-----------------
The default behavior listed below can be adapted:

**Enter Vim Browse Mode**:
* `Alt`+`c`

**Operations in Vim Browse Mode**:
* Enter Visual Mode: `V` / `v`
* Enter Yank Mode: `Y`

**Motions in Vim Browse Mode**:
* Basic motions: `j`, `k,` `h`, `l`, `H`, `M`, `L`, `0`, `$` like in VIM
* Word Move operators: `w`, `W`, `e`, `E`, `b`, `B` similar to VIM
* Search Operators: `/`, `?`, `n`, `N` for forward / backward search
* Jump to the cursor position prior to entering Vim Browse Mode: `G`
* Repeat last command string: `.`
* in Visual Mode `v`: use `t` to toggle block selection mode

**Custom Commands**:
Custom arrangements of the aforementioned commands can be defined in the configuration file:

The shortcut

`
struct NormalModeShortcuts normalModeShortcuts [] = {
	{ 'C', "/Cheese\n" },
}
`

searches for the next occurrence of Cheese when the letter C is pressed.
Usecases are for instance to jump between executed commands or to last error in a compile error
output.

No sanity checks are performed wrt. the custom shortcuts; the program does not check if the command
is circular. Hence the (useless) shortcut

`
struct NormalModeShortcuts normalModeShortcuts [] = {
	{ 'C', "C" },
}
`

triggers an infinite loop as soon 'C' is typed in normal mode, because `C` is contained
in the shortcut as control character.

**Search Mode**
In search mode, the cursor jumps to the next occurrence of the search string, shifts the screen
if necessary  and highlights all occurrences of the search string that are currently visible on
screen.

All motions -- including the search mode -- are currently circular,  (hence if no search result is
found, the search is continued at the top or bottom of the history, depending on the search
direction).

Notes
-----
* Currently based on the [Scrollback patch](https://st.suckless.org/patches/scrollback/),
  this dependency will be removed (see __Bugs__ section).
* The patch is applied both to a non-patched version and to a patched version of st
  and can be tried out [here](https://github.com/juliusHuelsmann/st) (browse the available branches
  for finding the different versions of the patch). Contributions are welcome.

Bugs
-----
* The following two 'Bugs' will be resolved by removing the dependency on the Scrollback patch
  which is currently work in progress:
  * Normal mode overrides the output at the cursor position if the current command is still
      running and outputs text while not in alternate screen mode (not vim / htop etc)
  * in Alternate Screen mode, the current position is reset on repaint (e.g. htop).


Download
--------
* [st-vimBrowse-20191107-2b8333f.diff](https://github.com/juliusHuelsmann/st/releases/download/patchesV1/st-vimBrowse-20191107-2b8333f.diff)

Authors of the [Scrollback patch](https://st.suckless.org/patches/scrollback/)
------------------------------------------------------------------------------
* Jochen Sprickerhof - <st@jochen.sprickerhof.de>
* M Farkas-Dyck - <strake888@gmail.com>
* Ivan Tham - <pickfire@riseup.net> (mouse scrolling)
* Ori Bernstein - <ori@eigenstate.org> (fix memory bug)
* Matthias Schoth - <mschoth@gmail.com> (auto altscreen scrolling)
* Laslo Hunhold - <dev@frign.de> (unscrambling, git port)
* Paride Legovini - <pl@ninthfloor.org> (don't require the Shift modifier
  when using the auto altscreen scrolling)
* Lorenzo Bracco - <devtry@riseup.net> (update base patch, use static
  variable for config)
* Kamil Kleban - <funmaker95@gmail.com> (fix altscreen detection)
* Avi Halachmi - <avihpit@yahoo.com> (mouse + altscreen rewrite after `a2c479c`)
* Jacob Prosser - <geriatricjacob@cumallover.me>


Authors of the Vim-Browse Patch
--------------------------------
* Julius Hülsmann - <juliusHuelsmann [at] gmail [dot] com>
