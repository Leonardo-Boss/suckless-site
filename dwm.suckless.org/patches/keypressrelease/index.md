keypressrelease
===

Description
---

This patch lets you specify whether a key binding should be executed at the _KeyPress_ or _KeyRelease_ event.  
Executing on _KeyRelease_ fixes bugs such as `scrot -s` failing to execute from a key binding due to keys not being released in time[1][2].

Note that the new parameter must be added to all non-standard key bindings manually after patching.

Usage
---
A working `scrot -s` key binding:

	static const char *scrot[] = { "scrot", "-s", NULL };
	...
	{ KeyRelease, 0,                XK_Print,  spawn,          {.v = scrot } },

Or to only display the bar while the toggle key is held down (requires that it is hidden to start with), add:

	{ KeyRelease, MODKEY,           XK_b,      togglebar,      {0} },

Download
---

* [dwm-keypressrelease-6.0.diff](dwm-keypressrelease-6.0.diff)

Author
------
* Niklas Høj - `<niklas at hoej dot me>`

---

[1] Error produced: "giblib error: couldn't grab keyboard: Resource temporarily unavailable"  
[2] Old discussion thread: [//lists.suckless.org/dev/1108/9185.html](//lists.suckless.org/dev/1108/9185.html)
