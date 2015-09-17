boldcolor
=========

Description
-----------

This is a hack allowing to use different colors for bold, italic
and underlined text when the text would be in defaultfg color otherwise.

This makes the special attributes more visible when no bold or italic
font is available or defaultfg is a special color (> 255).

Usage
-----

This is an example for a config.h set up with this patch:

	static const char *colorname[] = {
		// ...
		[255]=0,
		// extra
		"#00cc00",
		"#333333",
		"#cdba96",
		"#99ff00",
		"#ffff00",
	};

	static unsigned int defaultfg = 7;
	static unsigned int defaultbg = 0;
	static unsigned int defaultcs = 256;
	static unsigned int defaultucs = 257;
	// we don't want bold font (dc.bfont == dc.font)
	#define NOBOLDFONT 1
	// we have extra colors to mark bold, italic and underline
	#define DEFAULTBOLD 258
	#define DEFAULTITALIC 259
	#define DEFAULTUNDERLINE 260

Download
--------
* [st-0.3-boldcolor.diff](st-0.3-boldcolor.diff)

Author
------

 * Szabolcs Nagy - nsz@port70.net
