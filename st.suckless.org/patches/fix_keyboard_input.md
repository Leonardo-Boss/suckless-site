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

 - I'm not yet sure how to bind the new mappings to actions in viom.  It works
   for some keys while others appear to be not working at all.  The first
   mappings work for me with the patch while from the latter only `<S-Tab>`
   works:

```
nmap <C-enter> :echo "<C-enter>"<CR>
nmap <C-S-enter> :echo "<C-S-enter>"<CR>
nmap <C-S-M-enter> :echo "<C-S-M-enter>"<CR>
nmap <S-M-enter> :echo "<S-M-enter>"<CR>
nmap <M-enter> :echo "<M-enter>"<CR>
nmap <C-M-enter> :echo "<C-M-enter>"<CR>

nmap <C-Tab> :echo "<C-Tab>"<CR>
nmap <C-S-Tab> :echo "<C-S-Tab>"<CR>
nmap <S-Tab> :echo "<S-Tab>"<CR>
nmap <M-Tab> :echo "<M-Tab>"<CR>
```

- I tried to create mappings in vim the following way but it didn't work
  either:

```
nmap <Esc>[9;5u :echo "<C-Tab>"<CR>
```

Download
--------

 * [st-fix-keyboard-input-20170603-5a10aca.diff](st-fix-keyboard-input-20170603-5a10aca.diff)

Authors
-------

 * Jan Christoph Ebersbach - <jceb@e-jc.de>
