![st](st.svg)

st is a simple terminal implementation for X.

[![Screenshot of dwm & st](screenshots/frign-2016-s.png)](screenshots/frign-2016.png)

Motivation
----------
Here's an excerpt from the xterm(1) README:

> Abandon All Hope, Ye Who Enter Here
> 
> This is undoubtedly the most ugly program in the distribution. It was one of
> the first "serious" programs ported, and still has a lot of historical baggage.
> Ideally, there would be a general tty widget and then vt102 and tek4014
> subwidgets so that they could be used in other programs.  We are trying to
> clean things up as we go, but there is still a lot of work to do.

It has over 65K lines of code and emulates obscure and obsolete terminals you
will [never need](https://ub.fnwi.uva.nl/computermuseum//tek4014.html).

The popular alternative, rxvt has *only* 32K lines of code. This is just too
much for something as simple as a terminal emulator; it's yet another example
of code complexity.

Terminal emulation doesn't need to be so complex.

Status
------
Things that have already been implemented are:

* most VT10X escape sequences
* serial line support
* XIM support
* utmp via utmp(1)
* clipboard handling
* mouse and keyboard shortcuts (via config.h)
* UTF-8
* wide-character support
* resize
* 256 colors and [true colors](https://gist.github.com/XVilka/8346728)
* antialiased fonts (using fontconfig)
* fallback fonts
* line drawing

See the [goals](//st.suckless.org/goals) for more details and the
[TODO](//git.suckless.org/st/plain/TODO) for what still needs to be
implemented or fixed.

Configuration
-------------
Configuration is done with `config.h`. Read the comments in the generated
`config.h` to edit it according to your needs. Defaults are stored in
`config.def.h`.

FAQ
---
The [FAQ](//git.suckless.org/st/plain/FAQ) is maintained in the st source code
repository.

Development
-----------
st is actively developed. You can [browse](//git.suckless.org/st) its source
code repository or get a copy using git with the following command:

	git clone https://git.suckless.org/st

Download
--------
* [st 0.9.2](//dl.suckless.org/st/st-0.9.2.tar.gz) (48kb) (2024-04-05)
* [LICENSE](//git.suckless.org/st/plain/LICENSE)

