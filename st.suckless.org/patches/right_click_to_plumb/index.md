Right click to plumb
====================
Pretty much like plan9's acme and plumber: right-click some selected text to
send it to the plumbing program of your choosing:

* open an URL in a browser
* view an image, PDF, ...
* jump from logs to editor, at the specified line/col
* etc

The shell current working directory is set by the shell via `OSC 7` (borrowed
from vte, see `/etc/profile.d/vte.sh` if you have it installed).

For zsh :
	__vte_urlencode() (
	    # This is important to make sure string manipulation is handled
	    # byte-by-byte.
	    LC_ALL=C
	    str="$1"
	    while [ -n "$str" ]; do
	        safe="${str%%[!a-zA-Z0-9/:_\.\-\!\'\(\)~]*}"
	        printf "%s" "$safe"
	        str="${str#"$safe"}"
	        if [ -n "$str" ]; then
	            printf "%%%02X" "'$str"
	            str="${str#?}"
	        fi
	    done
	)

	__vte_osc7 () {
	    printf "\033]7;%s%s\a" "${HOSTNAME:-}" "$(__vte_urlencode "${PWD}")"
	}

	[ -n "$ZSH_VERSION" ] && precmd_functions+=(__vte_osc7)

The patch itself only adds a `cwd` global and a button3 entry that will run a
shell, change directory to cwd and run the plumber with the primary selection.
Maybe I should use pass cwd as an argument too, like plan9 plumber does.

The plumbing program can be defined via `config.h`: 

	static char plumber[] = "plumb.sh";

Download
--------
* [right\_click\_to\_plumb.diff](right_click_to_plumb.diff) (2017-09-11)

Authors
-------
* [jerome](http://blog.jardinmagique.info) <jerome@gcu.info>

A simpler plumb patch
=====================
The plumbing command is run in the working directory of the shell, with as
parameter the text selected with the mouse.

Configuration is done in config.h and an example is supplied in config.def.h:

	static char *plumb_cmd = "plumb";

I made this version since I had a hard time understanding how the OSC 7 stuff
works and I preferred a full C implementation of a plumbing patch.

Download
--------
* [plumb\_without\_shell\_OSC.diff](plumb_without_shell_OSC.diff) (2018-11-03)

Authors
-------
* [john](http://roxor.me) <j@roxor.me>

A simpler, more flexible plumb patch
====================================
A further development on the previous patch to allow for specifying the command line

	static char *plumb_cmd[] = {"plumb", "-m", NULL, NULL};

My plumb utility takes on the stdin by default, and requires another option to 
be passed input on the command line, so I made this to allow for that.  It can be
applied on its own, without the other patches.  It replaces the first NULL with
the current selection.

Download
--------
* [simple_plumb-0.8.5.diff](simple_plumb-0.8.5.diff) (2022-01-18)
* [simple_plumb.diff](simple_plumb.diff) (2020-04-10)

Authors
-------
* [dallin](https://dallinjdahl.github.io/) <dallinjdahl@gmail.com>
* [Alexander Arkhipov](gopher://mineeyes.cyou/) (0.8.5 port)

Double click to plumb
=====================
Adds additional functionality to the simple_plumb patch that allows the user to plumb a selected word
via double clicking while a mask key is held down.

This patch should be applied after simple_plumb.

Download
--------
* [simple\_plumb\_double\_click-0.8.5.diff](simple_plumb_double_click-0.8.5.diff) (2022-08-01)

Author
------
* yasumori <ysmr@protonmail.com>

An even simpler plumb patch
===========================
The differences of this patch to the simple, flexible plumb patch:

* The code for retrieving and setting the current working directory and executing is the 
  same as newterm, if patching with newterm it is suggested to keep the same function, hence 
  no global variables and initialization, and current selection of plumb.
* Double-fork execution of the plumber program, while this may have no benefit with programs
  that only launch in CLI, this may interfere with the swallow patch if launching GUI programs.
* No arguments are passed to the plumber program, only the plumber program name is accepted.
* The plumb function can be passed to the mouse shortcuts in `config.h`,
  instead of being hard-coded.

Download
--------
* [simpler\_plumb-0.9.diff](simpler_plumb-0.9.diff)

Author
------
* sewn <sewn@disroot.org>
