functionalgaps
==========

Description
-----------
Functionalgaps combines the beautifully simplistic gaps of [fullgaps](../fullgaps) with the non-gaps of [singularborders](../singularborders) and [noborder](../noborder). It is named functionalgaps because, since gaps are purely aesthetic, and therefore not useful whatsoever, this patch adds to their functionality by allowing them to easily be turned *off*.

It is also notable because of its out of the box integration with [pertag](../pertag), allowing gaps to be enabled/disabled and sized on a per-tag basis.

Gaps can be toggled with `[Alt]+[Shift]+[=]`, resized using `[Alt]+[+]` / `[Alt]+[-]`, and reset using `[Alt]+[Shift]+[-]` just like [fullgaps](../fullgaps).

The config variables `startwithgaps` and `gappx` are avaliable to change basic behavior.
The versions supporting pertag also have a feature to set these variables for individual tags.
* Example: setting 'startwithgaps[] = { 1, 0 }' will cause tag 1 to start with gaps, and tag 2 to start without; this behavior will then loop for the rest of the unset tags (3 has gaps, 4 doesn't; 5 has gaps, 6 doesn't; etc.). You can also, of course, set a value for each tag individually.

The modified noborder patch can also be easily removed, if not desired, by deleting or commenting out the 'if' statement added to the `resizeclient` c function. It is included for purely asthetic reasons since singularborders looks bad when a single window is open in tiled mode. The included version of the patch is modified to only activate when in singularborders mode.

Download
--------
* [dwm-functionalgaps-6.2.diff](dwm-functionalgaps-6.2.diff) (comes WITHOUT pertag support)
* [dwm-functionalgaps-pertagfunctionality-6.2.diff](dwm-functionalgaps-pertagfunctionality-6.2.diff) (comes WITH pertag support but WITHOUT the pertag patch)
* [dwm-functionalgaps+pertag-6.2.diff](dwm-functionalgaps+pertag-6.2.diff) (comes WITH pertag support + the pertag patch itself)

Author
------
* Timmy Keller <applesrcol8796@gmail.com>
