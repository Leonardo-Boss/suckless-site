BROKEN PROGRAMS
===============

There are many broken X programs. Go bug the developers of these broken
programs to fix them. Here are some of the main causes of this brokenness:

* The program assumes a specific window management model, i.e.
  assumes you are using a WIMP-window manager like those
  found in KDE or Gnome. This assumption breaks the 
  [ICCCM conventions][icccm].
* The application uses a fixed size - this limitation does not fit
  into the world of tiling window managers very well, and can also be
  seen as breaking the ICCCM conventions, because a fixed sized window
  assumes a specific window management model as well (though the ICCCM
  does not forbid fixed-size windows). In any case, the ICCCM requests
  that clients accept any size the window manager proposes to them.
* The program is based on strange non-standard window manager
  hints that only work properly with a window manager supporting these
  extensions - this simply breaks the ICCCM as well. E.g. trash icon
  programs.
* The program does not conform to ICCCM due to some missing or
  improperly set hints.

WORKAROUND
----------

If you still need some program which expects a floating WM, use it in
floating mode.

The following programs are broken (see [cool
programs](/common/cool_programs.html) for saner alternatives):

* XMMS (assumes fixed size, doesn't set transient\_for hint properly)
* Xchat
* [Firefox](http://www.mozilla.org/products/firefox) (doesn't set the TRANSIENT\_FOR hint correctly on its download dialog)
* [GIMP](http://www.gimp.org/) (GIMP expects a float environment to be useable)
* beep-media-player
* gqview
* gthumb
* mplayer with GUI (assumes special window management model. It works without the GUI)
* xine (same as xmms)
* aterm (doesn't like being resized by the WM), See [aterm-ml-post]
	Alternatives: (u)xterm, urxvt, [st][st], [uuterm][uuterm]

SEE ALSO
--------

The [list of harmful software](http://harmful.cat-v.org/software/) at [cat-v.org](http://cat-v.org).

[aterm-ml-post]: http://lists.suckless.org/dev/1102/7141.html
[st]:     http://st.suckless.org/
[uuterm]: http://etalabs.net/uuterm.html
[icccm]:  http://tronche.com/gui/x/icccm/
