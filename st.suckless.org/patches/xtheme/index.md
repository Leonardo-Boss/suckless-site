xtheme
======
Simple, suckless, xresources theme management system for st

Usage
-----
Simply *xrdb -merge* new theme and run *./xtheme; make install* to apply the new theme.

Precedence is given to *st\** or *st.* prexed resources.

xresources.list file structure
------------------------------
	*type resource alternative*
	*type resource alternative*
	*type resource alternative*
	*type resource alternative*
	...

If the resource doesn't found in X environment, the the alternative resource is used.

But if the alternative resource too doesn't found, the default resource is used

specified in *$themedefaults* file.

Applying new resources
----------------------
[This](https://gitlab.com/GasparVardanyan/dwm/-/commit/51e56cbf91645e8f81de15a1591c104eddf7385c) is how you can apply new resources (the example is for dwm version of xtheme).

NOTE: *xresources.defaults* is the *$themedefaults* of dwm's xtheme. Modify

*themes/st-defaults.h* for st.

GitLab
------
[https://gitlab.com/GasparVardanyan/st/-/tree/xtheme](https://gitlab.com/GasparVardanyan/st/-/tree/xtheme)

Download
--------
* [st-xtheme-20220128-063347-st-0.8.5.diff](st-xtheme-20220128-063347-st-0.8.5.diff)
* [st-xtheme-20220211-234150-st-0.8.5.diff](st-xtheme-20220211-234150-st-0.8.5.diff)
* [st-xtheme-20220213-170120.st-0.8.5.diff](st-xtheme-20220213-170120.st-0.8.5.diff)


Authors
-------
* [Gaspar Vardanyan](https://gitlab.com/GasparVardanyan)
