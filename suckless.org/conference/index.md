suckless conference 2016, Frankfurt/Main, Taunus, Germany
=========================================================

slcon3 will be held near Frankfurt/Main on 2016-09-(23-25).

The CfP is closed now. See the schedule below for details.

Registration
------------

Please note that we will collect a conference fee for the conference room and
lunch/drink package. If the preliminary schedule sticks to Saturday being the
only day when we book the conference room, we need to expect around *45 EUR*
conference fee per person.

Schedule
-------------------

Friday, 2016-09-23
==================

Arrival day.

(19:30) *Welcome* in the Biergarten "XXL Waldgeist", Anselm R Garbe

> We will gather together and check out the XXL Waldgeist.

	Waldgeist Hofheim
	Schlossstr. 70
	65719 Hofheim

	www.derwaldgeist.de


Saturday, 2016-09-24
====================

(10:00-10:05) *Welcome*, Anselm R Garbe

> Anselm will open slcon3 talk session

(10:10-10:40) libzahl -- simple bignum arithmetic, Mattias Andrée

	Software dependent on algorithms inherently perform
	better the more complex algorithms. Can we despite
	this compete with GNU MP and still have a simple
	solution? This is a discussion about libzahl's design
	and future.

(10:45-11:15) XML damage control, Silvan Jegen

	XML is a horrendously abused file format that suffers severely from
	over-engineering. There arguably is one legitimate use case for (a subset
			of) XML however: text markup. In this presentation I will show why that
	is and how to best deal with XML when encountered in such circumstances.

	To ease the pain for people like me who have to work with XML every day,
	I will first give an overview of different parsing strategies employed in
	XML libraries and introduce the most bearable APIs of the ones available.

	The second part of the presentation is dedicated to the benchmarking of the
	most sensible XML libraries and to the discussion of possible alternative
	parsing approaches as well as their implementation.

(11:20-11:40) Stali Pi B+, Manu Raster

	Report on readying Stali for the Raspberry Pi B+ (32 bit). It is
	also a story about monsters and maiden when we take into comparison
	other piles of code (kernels, distros etc.) and their build
	systems. Portability conceptions encountered en route are
	reviewed and ranked from 1 to 3 (depraved, naive and not too bad).

(11:40-12:00) sRGB and colorspace lightening talk, Laslo Hunhold

(12:00-13:00) Lunch break

(13:15-14:10) SCC and QBE for practical compilation, Roberto E. Vargas Caballero

	For now decades, we have witnessed a dramatic increase in the complexity
	of compilers. Mainstream compilers have become huge C++ programs that try
	to incorporate all the state-of-the-art research. SCC and QBE propose a
	new approach to compilation where simplicity and predictability prime over
	reckless efficiency. These new design constraints have security benefits
	(as advocated by the "boring crypto" movement) and allow bootstrapping
	new systems more easily.

(14:15-15:15) The Myrddin Programming Language, Ori Bernstein

	Myrddin is a programming language that was written for a saner, easier to
	use programming environment that I find more pleasant than C. The language
	lives somewhere between C and ML in design, with parametric polymorphism,
	type inference, closures, and pattern matching. In some ways, it can be
	thought of as a suckless rust.

	It also comes with a complete replacement for many standard libraries on a
	number of popular (and less popular) platforms.

(15:20-15:35)  ii-like chatting improvements, Jan Klemkow

	Since slcon2 I have made several improvements in my ii-like chat
	infrastructure.  In this talk I will give an overview of my various
	activities in this area.  I will present new features in my UCSPI tool
	chain, a new modular front end 'lchat' and the idea of runit integration.

(15:40-16:10) text engine, Francesc Hervada-Sala

	The right approach to software systems was introduced by the Unix programming
	environment over forty years ago with a file system that opened access to data
	across all applications and with a universal interface model based on strings.
	This approach must be deepened. Let us define "text" as the semantic data
	structure that results from parsing strings. Imagine that a software system has
	a "text engine" at its kernel. When you edit a run control file and save it,
	the text engine parses it and stores its parse tree into the central
	repository. When you execute an instruction at the shell, the text engine
	parses the command line and sets all parameters in the repository before
	executing the command. An application retrieves a configuration parameter by
	querying the text engine. In such a system parsers for particular formats or
	languages would not be embedded into particular applications or commands,
	they would be stand-alone software units with the sole purpose of converting
	a string into a semantic representation in the text engine's repository.
	Applications would not have to deal with and not be tied to particular file
	formats and languages, and the user would be able to choose the format or
	language to use for any configuration statement. The user would change the
	name of a file and would not need to adjust all references to it inside
	scripts and other files, because the reference in the repository (say as
	inode) would remain unchanged. To experiment with this new
	approach I am beginning to develop a text engine

(16:10-16:20) Coffee break

(16:20-16:55) Suckless Image Processing,  Enric Meinhardt-Llopis

	An image is an array of numbers.  Since arrays of numbers are
	natively represented in C, this language is well-suited for image
	processing algorithms.  Moreover, many complex image processing
	algorithms are pipelines of simple, independent steps.  Thus,
	the UNIX programming environment is an ideal platform for image
	processing, where several simple programs written in C share
	information through UNIX pipes.  In this talk, we will see many
	examples of simple image processing utilities (blur, local maxima
	detection, interpolation, warping, pointwise algebraic expressions,
	morphological filters, block matching, optical flow, image fusion)
	and how they are naturally combined to perform advanced imaging
	techniques;  in the selected example, we show a reflection removal
	method based on the combination of several images.  An important
	issue, with far-reaching philosophical consequences, is the data
	format written through the pipes.  We explain why the farbfeld image
	format---proposed by the suckless community---is inappropriate in
	general, because of the need to represent negative and floating-point
	pixel values.

(17:00-17:20) shared farbfeld, Jan Klemkow

	Farbfeld is a good base for general purpose image processing.  The
	tools that have been made so far demonstrate that sophisticated image
	processing can be achieved using cooperative programs.  In this talk I
	will present a shared memory interface that speeds up the usage of
	farbfeld tools.  Furthermore, I will sketch the architecture of a
	suckless-style Photoshop-like graphical image editor, and present a PoC
	implementation together with some benchmarks.

(17:20-17:45) Lightning talk session (please announce until Sep 23 for easier planning).

(17:50-18:05) stali learnings, Anselm R Garbe

	Anselm will present his learnings with stali since last slcon2. In
	particular he will discuss his new goals with stali and reasoning
	behind why making stali self-bootstrappable is a bad idea.

(18:05-18:25) stapi - stali for Pi as beehive observation platform, Anselm R Garbe

	Anselm will demonstrate his stali porting efforts for the Raspberry Pi
	in order to have a nice platform for observing his beehives. He will
	discuss temperature and moisture sensor equipment and his IR camera
	usage.

Official slcon3 talk session end.

(18:30-19:15) suckless.org e.V. Mitgliederversammlung (yearly suckless.org e.V. member meeting)

	- Report of the chairs, Anselm R Garbe, Laslo Hunhold
	- Report of the treasurer, Jan Klemkow
	- Other topics (members can raise topics until the begin of the Mitgliederversammlung)

(19:30-*) social event

Sunday, 2016-09-25
==================

No talk session plans, hack sessions and departure day.

Venue
-----
You can arrange your booking at the [venue](http://www.hotelamrosenberg.de) if you like:

	Hotel am Rosenberg
	Wielandstraße 24
	65719 Hofheim am Taunus
	Germany
	+49 (0) 6192 292-0
	hotel@hotelamrosenberg.de

When booking a room, use the booking code: slcon or refer to the suckless.org e.V. event.

Previous conferences
--------------------
* [slcon 2015](http://suckless.org/conference/2015)
* [slcon 2013](http://suckless.org/conference/2013)
