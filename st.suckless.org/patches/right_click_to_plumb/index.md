# Right click to plumb

Pretty much like plan9's acme and plumber: right-click some selected text to send it to the plumbing program of your choosing:

* open an URL in a browser
* view an image, PDF, ...
* jump from logs to editor, at the specified line/col
* etc

The shell current working directory is set by the shell via `OSC 7` (borrowed from vte, see `/etc/profile.d/vte.sh` if you have it installed).

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

		[ -n "$ZSH_VERSION"  ] && precmd_functions+=(__vte_osc7)

The patch itself only adds a `cwd` global and a button3 entry that will run a shell, change directory to cwd and run the plumber with the primary selection. Maybe I should use pass cwd as an argument too, like plan9 plumber does.

The plumbing program can be defined via `config.h`: 

		static char plumber[] = "plumb.sh";

## Download

* [right_click_to_plumb.diff](right_click_to_plumb.diff) (2017-09-11)

## Authors

* [jerome](http://blog.jardinmagique.info) <jerome@gcu.info>

