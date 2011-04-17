dwm - Frequently asked questions
================================

	Q: I've got a 1 or 2 pixel gap between the right side of my terminal and the
	   right side of the screen, and I want to turn it off.

	A: This is due to the column-based nature of terminals. Terminals don't just
	   insert space somewhere, but tell the WM they can't be resized in a certain
	   way. The terminal can't use the "wasted space" anyway, so this is purely
	   aesthetics.

	   You can change `static const Bool resizehints = True;` to `False` in
	   config.h to turn resizehints off. This wastes the same amount of  space
	   inside the terminal window that would otherwise be wasted outside.

