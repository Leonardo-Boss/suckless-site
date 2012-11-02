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
See the "[goals](http://st.suckless.org/goals)" section for a list of features that will (or won't) be implemented.

* 256 colors
* most VT10x escape sequences
* utf8
* X11 copy/paste
* antialiased fonts (experimental, see xft branch in the repo)
* resize

Configuration
-------------

The configuration is done in `config.h` (like in dwm). You can define:

* TERM environnement variable (TNAME)
* fonts (you can use `xfontsel(1)` to generate a valid XLFD)
* default colors
* special key
* line drawing characters. The VT100 name is used as an index in the `gfx` array. From terminfo(5):


	Line Graphics
	       Many  terminals have alternate character sets useful for forms-drawing.
	       Terminfo and curses build in support for the  drawing  characters  sup-
	       ported  by  the VT100, with some characters from the AT&T 4410v1 added.
	       This alternate character set may be specified by the acsc capability.
	
	
	                Glyph                  ACS                Ascii          VT100
	                 Name                  Name               Default        Name
	       UK pound sign                   ACS_STERLING       f              }
	       arrow pointing down             ACS_DARROW         v              .
	       arrow pointing left             ACS_LARROW         <              ,
	       arrow pointing right            ACS_RARROW         >              +
	       arrow pointing up               ACS_UARROW         ^              -
	       board of squares                ACS_BOARD          #              h
	       bullet                          ACS_BULLET         o              ~
	       checker board (stipple)         ACS_CKBOARD        :              a
	       degree symbol                   ACS_DEGREE         \              f
	       diamond                         ACS_DIAMOND        +              `
	       greater-than-or-equal-to        ACS_GEQUAL         >              z
	       greek pi                        ACS_PI             *              {
	       horizontal line                 ACS_HLINE          -              q
	       lantern symbol                  ACS_LANTERN        #              i
	       large plus or crossover         ACS_PLUS           +              n
	       less-than-or-equal-to           ACS_LEQUAL         <              y
	       lower left corner               ACS_LLCORNER       +              m
	       lower right corner              ACS_LRCORNER       +              j
	       not-equal                       ACS_NEQUAL         !              |
	       plus/minus                      ACS_PLMINUS        #              g
	       scan line 1                     ACS_S1             ~              o
	       scan line 3                     ACS_S3             -              p
	       scan line 7                     ACS_S7             -              r
	       scan line 9                     ACS_S9             _              s
	       solid square block              ACS_BLOCK          #              0
	       tee pointing down               ACS_TTEE           +              w
	       tee pointing left               ACS_RTEE           +              u
	       tee pointing right              ACS_LTEE           +              t
	       tee pointing up                 ACS_BTEE           +              v
	       upper left corner               ACS_ULCORNER       +              l
	       upper right corner              ACS_URCORNER       +              k
	       vertical line                   ACS_VLINE          |              x


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

If all else fails, send an email to a contributor/ML explaining your
problem in detail.

Links
-----
* Mailing List: `dev+subscribe@suckless.org` [(Archives)](http://lists.suckless.org/dev)
* IRC channel: #suckless at irc.oftc.net

Download
--------
* [st 0.3](http://hg.suckless.org/st/archive/st-0.3.tar.gz) (2012-11-02)
* tip tarball: [http://hg.suckless.org/st/archive/tip.tar.gz](http://hg.suckless.org/st/archive/tip.tar.gz)
* [MIT/X Consortium license](http://hg.suckless.org/st/raw-file/tip/LICENSE)

Development
-----------
st is actively developed. You can [browse](http://hg.suckless.org/st) its source code repository or get a copy using [Mercurial](http://www.selenic.com/mercurial/) with the following command:

	hg clone http://hg.suckless.org/st

Contributors
------------
* Anselm R. Garbe
* Aurélien Aptel
* Devin J. Pohly
* Christoph Lohmann
* Roberto E. Vargas Caballero

