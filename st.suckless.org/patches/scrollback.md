scrollback
==========

Description
-----------

Scroll back through terminal output using Shift+{PageUp, PageDown}.

Download
--------

* [st-git-20151217-scrollback.diff](st-git-20151217-scrollback.diff)

Apply the following patch on top of the previous to allow scrolling
using Shift+MouseWheel.

* [st-git-20151106-scrollback-mouse.diff](st-git-20151106-scrollback-mouse.diff)

Apply the following patch on top of the previous two to allow scrolling
the backbuffer using MouseWheel only when not in MODE_ALTSCREEN.
This way when e.g. viweing files in less the content is being scrolled instead of the 
scrollback buffer. Consequently the Shift modifier for scrolling is not needed anymore.

* [st-git-20160203-scrollback-mouse-altscreen.diff](st-git-20160203-scrollback-mouse-altscreen.diff)

Authors
-------

 * Jochen Sprickerhof - dwm@jochen.sprickerhof.de
 * M Farkas-Dyck - strake888@gmail.com
 * Ivan Tham - pickfire@riseup.net (mouse scrolling, st-git-20151122 port)
 * Laslo Hunhold - dev@frign.de (unscrambling, st-git-20151106 port)
 * Ori Bernstein - ori@eigenstate.org (fix memory bug, st-git-20151216 port)
 * Matthias Schoth - mschoth@gmail.com (auto altscreen scrolling)
