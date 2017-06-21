Fix Keyboard Input (Alpha version, use with caution!)
=====================================================

Description
-----------

This patch allows cli applications to use all the fancy key combinations that
are available to gui applications.  The new scheme for encoding key combinations
was proposed by [Leonard](http://www.leonerd.org.uk/hacks/fixterms/) and appears
to have gained traction over the past years.


Notes
-----

 - Very early stage version of this patch - I'm just at the beginning of testing
   it in real world settings.  I tried to encode as many key combinations as
   possible according to the new scheme.  This might cause issues with existing
   applications if they're not aware of it.  Please report any issues that you
   come accross.
 - If you use `<C-[>` for `<Esc>`, I suggest that you remove the following line
   from this patch to reenable the behavior:

```
	{ XK_bracketleft,  ControlMask,                    "\033[91;5u",  0,  0,  0},
```

 - If you use `<C-6>` for changing to the alternative file, I suggest that you
   remove the following line from this patch to reenable the behavior:

```
	{ XK_6,            ControlMask,                    "\033[54;5u",  0,  0,  0},
```

 - I managed to bind the new mappings to actions in neovim.  If you're using
   tmux make sure that it's a recent version, 2.5 works fine for me.  The
   easiest way to know that this patch is working properly is to enter vim's
   command mode by pressing `:` followed by pressing `<C-v>` and the desired key
   combination.  This will print the key sequence that vim received.  Here are
   some example mappings for vim:

```
	nmap <C-CR> :echo "<C-CR>"<CR>
	nmap <C-S-CR> :echo "<C-S-CR>"<CR>
	nmap <C-S-M-CR> :echo "<C-S-M-CR>"<CR>
	nmap <S-M-CR> :echo "<S-M-CR>"<CR>
	nmap <M-CR> :echo "<M-CR>"<CR>
	nmap <C-M-CR> :echo "<C-M-CR>"<CR>
	nmap <C-Tab> :echo "<C-Tab>"<CR>
	nmap <C-S-Tab> :echo "<C-S-Tab>"<CR>
	nmap <S-Tab> :echo "<S-Tab>"<CR>
	nmap <M-Tab> :echo "<M-Tab>"<CR>
```

Download
--------

 * [st-fix-keyboard-input-20170603-5a10aca.diff](st-fix-keyboard-input-20170603-5a10aca.diff)
 * [st-fix-keyboard-input-20170621-b331da5.diff](st-fix-keyboard-input-20170621-b331da5.diff)

Authors
-------

 * Jan Christoph Ebersbach - <jceb@e-jc.de>
