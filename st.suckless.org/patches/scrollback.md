scrollback
==========

Description
-----------

Scroll back through terminal output using Shift+{PageUp, PageDown}.

Download
--------

* [st-scrollback-git-20160620-528241a.diff](st-scrollback-git-20160620-528241a.diff)

Apply the following patch on top of the previous to allow scrolling
using `Shift+MouseWheel`.

* [st-scrollback-mouse-git-20160620-528241a.diff](st-scrollback-mouse-git-20160620-528241a.diff)

Apply the following patch on top of the previous two to allow scrollback using
mouse wheel only when not in `MODE_ALTSCREEN`. eg. The content is being
scrolled instead of the scrollback buffer in `less`. Consequently the Shift
modifier for scrolling is not needed anymore.  **Note: It might break other
mkeys excluding scrolling functions.**

* [st-scrollback-mouse-altscreen-git-20160620-528241a.diff](st-scrollback-mouse-altscreen-git-20160620-528241a.diff)

Authors
-------

 * [Jochen Sprickerhof](mailto:project@firstname.lastname.de)
 * M Farkas-Dyck - strake888@gmail.com
 * Ivan Tham - pickfire@riseup.net (mouse scrolling)
 * Laslo Hunhold - dev@frign.de (unscrambling, git port)
 * Ori Bernstein - ori@eigenstate.org (fix memory bug)
 * Matthias Schoth - mschoth@gmail.com (auto altscreen scrolling)
