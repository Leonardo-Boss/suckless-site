st is a simple terminal implementation for X.

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
you will [never need](http://www.science.uva.nl/museum/tek4014.html). 
The popular alternative, rxvt has *only* 32K lines of code. This is just
too much for something as simple as a terminal emulator; it's yet another
example of code complexity.

Links
-----
* Mailing List: `dev+subscribe@suckless.org` [(Archives)](http://lists.suckless.org/dev)
* IRC channel: #suckless at irc.oftc.net

Download
--------
* [MIT/X Consortium license](http://hg.suckless.org/st/raw-file/tip/LICENSE)
* tip tarball: [http://hg.suckless.org/st/archive/tip.tar.gz](http://hg.suckless.org/st/archive/tip.tar.gz)

Development
-----------
st is actively developed. You can [browse](http://hg.suckless.org/st) its source code repository or get a copy using [Mercurial](http://www.selenic.com/mercurial/) with the following command:

	hg clone http://hg.suckless.org/st
