st is a simple terminal implementation for X.

<a href="http://st.suckless.org/screenshots/20h-2012.png" title="dwm &amp; st"><img src="http://st.suckless.org/screenshots/20h-2012.png" width="500" height="313" alt="dwm &amp; st" /></a>

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


Common Problems
---------------

### 1. *random program* complains that st is unknown/not recognised/unsupported/whatever!
It means that st doesn't have any terminfo entry on your
system. Chances are you did not `make install`.  If you just want to
test it without installing it, you can manualy run `tic -s st.info` in st
dir. It will compile st.info into a fully working local terminfo
description. You can delete it when you're done.

### 2. Nothing works, and nothing is said about an unknown terminal!
* Some programs just assume they're running in xterm i.e. they don't rely on terminfo. What you see is the current state of the "xterm compliance".
* Some programs don't complain about the lacking st description and default to another terminal. In that case see 1.

### 3. I get some weird glitches/visual bug on *random program*!
Try lauching it with a different TERM: `$ TERM=xterm myapp`.  toe(1)
will give you a list of available terminals, but you'll most likely
switch between `xterm`, `st` or `st-256color`. The default value for TERM can be
changed in config.h (TNAME).

### 4. How do I scroll back up?
Invoke st with a screen multiplexer like <a
href="http://en.wikipedia.org/wiki/GNU_Screen">GNU screen</a> or <a
href="http://en.wikipedia.org/wiki/Tmux">tmux</a>. `st -e screen` works
better for [text reflowing](http://superuser.com/a/346784/4929). To enter
screen's scroll back mode aka "copy mode", it's C-a ESC. You probably want
`defscrollback 10000` in your `~/.screenrc` too.

### 5. Why does st not handle utmp entries?
Use the excellent tool of [utmp](http://git.suckless.org/utmp) for this task.


If all else fails, send an email to a contributor/ML explaining your
problem in detail.

Links
-----
* Mailing List: `dev+subscribe@suckless.org` [(Archives)](http://lists.suckless.org/dev)
* IRC channel: #suckless at irc.oftc.net

Download
--------
* [st 0.3](http://dl.suckless.org/st/st-0.3.tar.gz) (2012-11-02)
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

