resetnmaster
============

Description
-----------
Set the number of clients in master area to 1.

This is also very useful with the [nrowgrid](../nrowgrid/) patch.

Configuration
-------------
Add the `resetnmaster` declaration before keys array in your config.h : 

    void resetnmaster(const Arg *arg);

Add the following line to the keys array in your config.h (or config.def.h) to bind Mod+o
to resetnmaster.

	{ MODKEY,           XK_o,  resetnmaster,    {0} },

Add at the end of you config.h:

	void
	resetnmaster(const Arg *arg)
	{
		selmon->nmaster = 1;
		arrange(selmon);
	}

Download
--------
* [dwm-resetnmaster-6.3.diff](dwm-resetnmaster-6.3.diff)

If you are already using the [pertag](../pertag/) patch, apply this version instead.

* [dwm-resetnmaster-pertag-6.3.diff](dwm-resetnmaster-pertag-6.3.diff)

Author
------
* cdarkly - <cdarkly@protonmail.com> - Added v6.3 diff files
* prx <prx at si3t dot ch>
