Omnibar
=======
Run a command each time an URI is loaded. Since the URI may be passed as
argument, this patch along with a proper script allows to manage browsing
history in many convenient ways. If the default omnibar script (see below)
don't fit your needs it's easy to refine the ONLOAD and GOTO constants in the
config.h file.

URIs visited by clicking on links will be stored as well.

Note: the patch also changes the config.def.h file.

Tabbed integration
------------------
For [tabbed](http://tools.suckless.org/tabbed/) users, you may also want to add
the following to your tabbed config.h:

	#define GOTO { \
		.v = (char *[]){"/bin/sh", "-c", \
			"~/.surf/omnibar goto $0 $1", winid, "_TABBED_SELECT_TAB", NULL \
		} \
	}

Now you can use the following key (don't forget to remove the old one):

	{ MODKEY,                       XK_t,      spawn,          GOTO },


Download
--------
* [surf-0.6-omnibar.diff](surf-0.6-omnibar.diff) (1.4k) (20151006)
* [omnibar-7b4a6055f2a7a8326e93f4d6eb6a3a47bb17fec0](https://github.com/clamiax/.surf/blob/7b4a6055f2a7a8326e93f4d6eb6a3a47bb17fec0/omnibar)

Author
------
* Claudio Alessi <[smoppy@gmail.com](mailto:smoppy@gmail.com)>
