boldcolor
=========

Description
-----------

This is a hack to allow using different color for bold, italic
or underlined text when the text is in defaultfg color otherwise.

Makes the special attributes more visible, when no bold or italic
font is available, or the defaultfg is a special color (>255 value).

Usage
-----

example config.h

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
* [st-0.3-boldcolor.diff][0]

[0]: st-0.3-boldcolor.diff

Author
------

 * Szabolcs Nagy - nsz
