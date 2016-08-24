suckless conference 2016, Frankfurt/Main, Taunus, Germany
=========================================================

slcon3 will be held near Frankfurt/Main on 2016-09-(23-25).

The CfP is closed now. See the schedule below for details.

Registration
------------

Speakers are already registered. All other participants need to register until
**Sep 1 2016** to enable us to negotiate the best conditions in terms of the
conference room registration.

Please register by direct mail to [Anselm](mailto:anselm@garbe.us)

Please note that we will collect a conference fee for the conference room and
lunch/drink package. If the preliminary schedule sticks to Saturday being the
only day when we book the conference room, we need to expect around *45 EUR*
conference fee per person.

Preliminary schedule
--------------------

Friday, 2016-09-23
==================

Arrival day.

(20:00) *Welcome* in the bar, Anselm R Garbe

> We will gather together and check

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

(11:20-11:50) Stali Pie B+, Manu Raster

	Report on readying Stali for the Raspberry Pie B+ (32 bit). It is
	also a story about monsters and maiden when we take into comparison
	other piles of code (kernels, distros etc.) and their build
	systems. Portability conceptions encountered en route are
	reviewed and ranked from 1 to 3 (depraved, naive and not too bad).

(12:00-13:00) Lunch break

(13:00-13:50) SCC and QBE for practical compilation, Roberto E. Vargas Caballero

	For now decades, we have witnessed a dramatic increase in the complexity
	of compilers. Mainstream compilers have become huge C++ programs that try
	to incorporate all the state-of-the-art research. SCC and QBE propose a
	new approach to compilation where simplicity and predictability prime over
	reckless efficiency. These new design constraints have security benefits
	(as advocated by the "boring crypto" movement) and allow bootstrapping
	new systems more easily.

(14:00-14:25)  ii-like chatting improvements, Jan Klemkow

	Since slcon2 I have made several improvements in my ii-like
	chatting infrastructure.  In this talk I will show the hole
	picture of my different activities in this area.  I will show
	new features in my UCSPI tool chain, a new modular front end
	'lchat' and me idea of an runit integration.

(14:30-15:15) text engine, Francesc Hervada-Sala

	Francesc will introduce his text engine experiment.

(15:20-15:55) Suckless Image Processing,  Enric Meinhardt-Llopis

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

(15:55-16:10) Coffee break

(16:10-16:30) shared farbfeld, Jan Klemkow

	Farbfeld is a very good base for general purpose image
	processing.  The Tools which were made so far demonstrate how
	easy image processing could be divided into cooperative
	programs.  This talk will show an interface to speedup
	the usage of different farbfeld tools with shared memory.
	I will show and discuss an idea for an simple architecture of a
	suckless like photoshop based on my interface, is first
	implementation and some benchmarks i made.

(16:35-17:15) Lightning talk session (please announce until Sep 23 for easier planning).

(17:15-17:30) stali learnings Anselm R Garbe

	Anselm will present his learnings with stali since last slcon2. In
	particular he will discuss his new goals with stali and reasoning
	behind why making stali self-bootstrappable is a bad idea.

(17:30-17:55) stapi - stali for Pi as bee hive observation platform, Anselm R Garbe

	Anselm will demonstrate his stali porting efforts for the Raspberr Pi
	in order to have a nice platform for observing his beehives. He will
	discuss temperature and moisture sensor equipment and his IR camera
	usage.

Official slcon3 talk session end.

(18:00-19:00) suckless.org e.V. Mitgliederversammlung (yearly suckless.org e.V. member meeting)

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
