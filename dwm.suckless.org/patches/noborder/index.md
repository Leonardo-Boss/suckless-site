noborder
========

Description
-----------
Remove the border when there is only one window visible.

Download
--------
* [dwm-noborder-6.1.diff](dwm-noborder-6.1.diff)
* [dwm-noborder-6.2.diff](dwm-noborder-6.2.diff)

* The normal version of noborder will cause a single window in floating layout to continuously grow whilst being moved. This version checks if the layout is floating before hiding the border:
  * [dwm-noborderfloatingfix-6.2.diff](dwm-noborderfloatingfix-6.2.diff)

* A version of the patch which avoids border flickering between SchemeSel and
  SchemeNorm when another client appears, in addition to the floating fix, is
  available here:
  [dwm-noborderselflickerfix-2022042627-d93ff48803f0.diff](dwm-noborderselflickerfix-2022042627-d93ff48803f0.diff)

Authors
-------
* Eric Pruitt - <eric.pruitt@gmail.com>
* Laslo Hunhold - <dev@frign.de> (6.1, git port)
* Markus Teich - markus(DOT)teich(AT)stusta(DOT)de (simplification)
* Aidan Hall - <aidan.hall@outlook.com> (floating fix)
* Chris Down - <chris@chrisdown.name> (flicker fix)
