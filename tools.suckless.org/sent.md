sent
====

Simple plaintext presentation tool.

sent does not need latex, libreoffice or any other fancy file format, it uses
plaintext files and png images. Currently every paragraph represents a slide in
the presentation. Especially for presentations using the [Takahashi
method](https://en.wikipedia.org/wiki/Takahashi_method) this is very nice and
allows you to write down the presentation for a quick lightning talk within a
few minutes.

The presentation is displayed in a simple X11 window colored black on white for
maximum contrast even if the sun shines directly onto the projected image. The
content of each slide is automatically scaled to fit the window so you don't
have to worry about alignment. Instead you can really concentrate on the
content.

Demo
----

To get a little demo, just type

	make && ./sent example

You can navigate with the arrow keys and quit with `q`.

(Non-)Features
--------------

* A presentation is just a simple text file
* Each paragraph represents one slide
* Content is automatically scaled to fit the screen
* UTF-8 is supported
* PNG images can be displayed (no text on the same slide)
* Just around 1000 lines of C.
* No different font styles (bold, italic, underline)
* No fancy layout options (different font sizes, different colors, …)
* No animations

Usage
-----

Edit config.h to fit your needs then build again.

	sent FILE1 [FILE2 ...]

If one FILE equals `-`, stdin will be read. Use png images by prepending a `@`
before the filename. Lines starting with `#` will be ignored. A presentation
file could look like this:

	sent
	
	@nyan.png
	
	depends on
	- Xlib
	- libpng
	
	sent FILENAME
	one slide per paragraph
	# This is a comment and will not be part of the presentation
	\# This and the next line start with backslashes
	
	\@FILE.png
	
	thanks / questions?

Development
-----------

You can [browse](http://git.suckless.org/sent) its source code repository
or get a copy using the following command:

	git clone http://git.suckless.org/sent

Download
--------
* [sent-0.1](http://dl.suckless.org/tools/sent-0.1.tar.gz) (20151111)
