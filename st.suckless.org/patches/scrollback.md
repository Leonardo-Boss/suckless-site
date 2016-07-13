scrollback
==========

Description
-----------

Scroll back through terminal output using Shift+{PageUp, PageDown}.

Download
--------

* [st-scrollback-20160710-528241a.diff](st-scrollback-20160710-528241a.diff)

Apply the following patch on top of the previous to allow scrolling
using `Shift+MouseWheel`.

* [st-scrollback-mouse-20160710-528241a.diff](st-scrollback-mouse-20160710-528241a.diff)

Apply the following patch on top of the previous two to allow scrollback using
mouse wheel only when not in `MODE_ALTSCREEN`. eg. The content is being
scrolled instead of the scrollback buffer in `less`. Consequently the Shift
modifier for scrolling is not needed anymore.  **Note: It might break other
mkeys excluding scrolling functions.**

* [st-scrollback-mouse-altscreen-20160710-528241a.diff](st-scrollback-mouse-altscreen-20160710-528241a.diff)

Authors
-------

 * Jochen Sprickerhof - <st@jochen.sprickerhof.de>
 * M Farkas-Dyck - <strake888@gmail.com>
 * Ivan Tham - <pickfire@riseup.net> (mouse scrolling)
 * Ori Bernstein - <ori@eigenstate.org> (fix memory bug)
 * Matthias Schoth - <mschoth@gmail.com> (auto altscreen scrolling)
 * Laslo Hunhold - <dev@frign.de> (unscrambling, git port)
