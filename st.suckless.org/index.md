st is a simple terminal implementation for X.

->[![Screenshot of dwm & st](screenshots/20h-2012s.png)](screenshots/20h-2012.png)<-

What is wrong with xterm?
-------------------------
xterm is bloated and unmaintainable. Here's an excerpt from the README:

					Abandon All Hope, Ye Who Enter Here


	This is undoubtedly the most ugly program in the distribution.	It was one of
	the first "serious" programs ported, and still has a lot of historical baggage.
	Ideally, there would be a general tty widget and then vt102 and tek4014
	subwidgets so that they could be used in other programs.  We are trying to
	clean things up as we go, but there is still a lot of work to do.

Needless to say things have *not* changed, it's still ugly.
It has over 65K lines of code and emulates obscure and obsolete terminals
you will [never need](http://www.science.uva.nl/museum/tek4014.php).
The popular alternative, rxvt has *only* 32K lines of code. This is just
too much for something as simple as a terminal emulator; it's yet another
example of code complexity.

Current state
-------------
See the [TODO](http://git.suckless.org/st/plain/TODO) file for what needs to
be implemented or fixed.

What has been implemented:

* 256 colors
* most VT10X escape sequences
* utf8
* X11 copy/paste
* antialiased fonts (using fontconfig)
* fallback fonts
* resize
* shortcuts via config.h
* line drawing

See the [goals](http://st.suckless.org/goals) section for more details.

Configuration
-------------

The configuration is done in `config.h` (like in dwm). See the comments in the
generated `config.h` to edit it to your needs.

## Why does st not handle utmp entries?

Use the excellent tool of [utmp](http://git.suckless.org/utmp/) for this task.

## Some _random program_ complains that st is unknown/not recognised/unsupported/whatever!

It means that st doesn’t have any terminfo entry on your system. Chances are
you did not `make install`. If you just want to test it without installing it,
you can manualy run `tic -s st.info`.

## Nothing works, and nothing is said about an unknown terminal!

* Some programs just assume they’re running in xterm i.e. they don’t rely on
  terminfo. What you see is the current state of the “xterm compliance”.
* Some programs don’t complain about the lacking st description and default to
  another terminal. In that case see the question about terminfo.

## I get some weird glitches/visual bug on _random program_!

Try launching it with a different TERM: $ TERM=xterm myapp. toe(1) will give
you a list of available terminals, but you’ll most likely switch between xterm,
st or st-256color. The default value for TERM can be changed in config.h
(TNAME).

## How do I scroll back up?

Using a terminal multiplexer.

* `st -e tmux` using C-b [
* `st -e screen` using C-a ESC

## Why doesn't the Del key work in some programs?

Taken from the terminfo manpage:

	If the terminal has a keypad that transmits codes when the keys
	are pressed, this information can be given. Note that it is not
	possible to handle terminals where the keypad only works in
	local (this applies, for example, to the unshifted HP 2621 keys).
	If the keypad can be set to transmit or not transmit, tive these
	codes as smkx and rmkx. Otherwise the keypad is assumed to
	always transmit.

In the st case smkx=E[?1hE= and rmkx=E[?1lE>, so it is mandatory that
applications which want to test against keypad keys, have to send these
sequences.

But buggy applications like bash and irssi for example don't do this. A fast
solution for them is to use the following command:

	$ printf "\033?1h\033=" >/dev/tty 

or
	$ echo $(tput smkx) >/dev/tty

In the case of bash readline is used. Readline has a different note in its
manpage about this issue:

	enable-keypad (Off)
		When set to On, readline will try to enable the
		application keypad when it is called. Some systems
		need this to enable arrow keys.

Adding this option to your .inputrc will fix the keypad problem for all
applications using readline.

If you are using zsh, then read the zsh FAQ
<http://zsh.sourceforge.net/FAQ/zshfaq03.html#l25>:

	It should be noted that the O / [ confusion can occur with other keys
	such as Home and End. Some systems let you query the key sequences
	sent by these keys from the system's terminal database, terminfo.
	Unfortunately, the key sequences given there typically apply to the
	mode that is not the one zsh uses by default (it's the "application"
	mode rather than the "raw" mode). Explaining the use of terminfo is
	outside of the scope of this FAQ, but if you wish to use the key
	sequences given there you can tell the line editor to turn on
	"application" mode when it starts and turn it off when it stops:

		function zle-line-init () { echoti smkx }
		function zle-line-finish () { echoti rmkx }
		zle -N zle-line-init
		zle -N zle-line-finish

Putting these lines into your .zshrc will fix the problems.

Links
-----
* Mailing List: `dev+subscribe@suckless.org` [(Archives)](http://lists.suckless.org/dev)
* IRC channel: #suckless at irc.oftc.net

Download
--------
* [st 0.5](http://dl.suckless.org/st/st-0.5.tar.gz) (2014-04-05)
* [MIT/X Consortium license](http://git.suckless.org/st/plain/LICENSE)

Development
-----------
st is actively developed. You can [browse](http://git.suckless.org/st) its source code repository or get a copy using git with the following command:

	git clone http://git.suckless.org/st

Contributors
------------
* Anselm R. Garbe
* Aurélien Aptel
* Devin J. Pohly
* Christoph Lohmann
* Roberto E. Vargas Caballero

