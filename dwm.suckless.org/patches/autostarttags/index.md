autostarttags
=============

Description
-----------
Allow dwm to execute commands on specific tags during startup from an
`autostarttaglist` array in your config.h file. The `rules` array is bypassed for
commands in the `autostarttaglist` array. This allows you to initialize your session
with applications on different tags without having to use any keybindings. 

Example
-------

	static const char *browsercmd[]   = {"librewolf", NULL};
	static const char *keepassxccmd[] = {"keepassxc", NULL};
	static const char *emacscmd[]     = {"emacs",     NULL};
	static const char *termcmd[]      = {"xterm",     NULL };

	/* last cmd must be NULL! */
	Autostarttag autostarttaglist[] = {
		{.cmd = browsercmd,   .tags = 1 << 0 },
		{.cmd = keepassxccmd, .tags = 1 << 4 },
		{.cmd = emacscmd,     .tags = 1 << 7 },
		{.cmd = termcmd,      .tags = 1 << 8 },
		{.cmd = NULL,         .tags = 0 },
	};

Download
--------
* [dwm-autostarttags-6.4.diff](dwm-autostarttags-6.4.diff)

Author
------
* Christian Wills <cwills.dev+suckless@gmail.com>
