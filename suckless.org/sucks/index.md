Stuff that sucks
================
See the [philosophy](http://suckless.org/philosophy) page about what
applies to this page.

Libraries
---------
These libraries are broken/considered harmful and should not be used if it's
possible to avoid them. If you use them, consider looking for alternatives.

* [glib][1] - implements C++ STL on top of C (because C++ sucks so much, let's
  reinvent it!), adding lots of useless data types for
  ["portability" and "readability" reasons][2].
  even worse, it is not possible to write robust applications using glib,
  since it [aborts in out-of-memory situations][8].
  glib usage is required to write gtk+ and gnome applications, but is also used
  when common functionality is needed (e.g. hashlists, base64 decoder, etc).
  it is not suited at all for static linking due to its huge size.

  Alternatives: [libmowgli][9], [libulz][10]

* [GMP][3] - GNU's bignum/arbitrary precision library. Quite bloated, slow and
  [calls abort() on failed malloc][4]

  Alternatives: [libtommath][5], [TomsFastMath][6], [MPI][7]


[1]: http://library.gnome.org/devel/glib/
[2]: http://library.gnome.org/devel/glib/unstable/glib-Basic-Types.html (glib Basic Types)
[3]: http://gmplib.org/ (The GNU Multiple Precision Arithmetic Library)
[4]: http://gmplib.org:8000/gmp/file/14cd74efb9de/memory.c#l44 "GMP calls abort() on failed malloc()"
[5]: http://libtom.org/?page=features&newsitems=5&whatfile=ltm
[6]: http://libtom.org/?page=features&newsitems=5&whatfile=tfm
[7]: http://spinning-yarns.org/michael/mpi/
[8]: https://bugzilla.gnome.org/show_bug.cgi?id=674446
[9]: https://github.com/atheme/libmowgli-2
[10]: https://github.com/rofl0r/libulz

Build Systems
-------------

* [cmake][11] (written in C++) - so huge and bloated, compilation takes longer
  than compiling GCC (!).
  It's not even possible to create freestanding Makefiles, since the generated
  Makefiles call back into the cmake binary itself.

* [waf][12] and [scons][13] (both written in Python) - waf code is dropped
  into the compilee's build tree, so it does not benefit from updated versions
  and bugfixes.

As these build systems are often used to compile C programs, one has to set up a
C++ compiler or Python interpreter respectively just in order to be able to build
some C code.

Alternatives: [mk][14], [gnu make][15]

[11]: http://www.cmake.org/
[12]: https://code.google.com/p/waf/
[13]: http://www.scons.org/
[14]: http://doc.cat-v.org/plan_9/4th_edition/papers/mk
[15]: https://www.gnu.org/software/make/

Programs
--------
There are many broken X programs. Go bug the developers of these broken
programs to fix them. Here are some of the main causes of this brokenness:

* The program **assumes a specific window management model**, e.g.
  assumes you are using a WIMP-window manager like those
  found in KDE or Gnome. This assumption breaks the
  [ICCCM conventions][icccm].
* The application uses a **fixed size** - this limitation does not fit
  into the world of tiling window managers very well, and can also be
  seen as breaking the ICCCM conventions, because a fixed sized window
  assumes a specific window management model as well (though the ICCCM
  does not forbid fixed-size windows). In any case, the ICCCM requests
  that clients accept any size the window manager proposes to them.
* The program is based on strange **non-standard window manager
  hints** that only work properly with a window manager supporting these
  extensions - this simply breaks the ICCCM as well. E.g. trash icon
  programs.
* The program does not conform to ICCCM due to some **missing or
  improperly set hints**.

The following programs are broken (see [rocking stuff](/rocks) for saner alternatives):

* [Firefox](http://www.mozilla.org/products/firefox) (doesn't set the TRANSIENT\_FOR
  hint correctly on its download dialog)
* mplayer with GUI (assumes special window management model. It works without the GUI)
* xine (assumes fixed size, doesn't set TRANSIENT\_FOR hint properly)

If you still need some program which expects a floating WM, use it in
floating mode.

Documentation
-------------
Somewhen GNU tried to make the world a bit more miserable by inventing
[texinfo][texinfo]. The result is that in 2015 man pages are still used and
the documentation of GNU tools requires you to run `info $application`. The
info browser is awkward and unintuitive and the reason why noone gets further
than finding 'q' to quit it.

Look at GNU tools how to not handle documentation.

Talking about the suck in enforced HTML documentation, which forces you to open
up a 1 Gb of RAM wasting web browser, just to see some eye-candy, which could
have been described in the source with some easy way to jump to that line in
the source code, is not worth the time.

The suckless way is to have a short usage and a descriptive manpage. The
complete details are in the source.

C Compilers
---------
* [GCC][gcc] is the virus which has spread into nearly every Linux
  distribution and has added its language extensions to be not easily
  replacable. As of 2015 it is now written in C++ and so complete suck. Why
  can't a compiler just be a simple binary doing its work, instead it adds
  path dependencies deep into the system?
* [Clang][clang] is written in C++. If you don't believe that it sucks, try to
  build clang by hand.

See also
--------

The [list of harmful software](http://harmful.cat-v.org/software/) at [cat-v.org](http://cat-v.org).

[aterm-ml-post]: http://lists.suckless.org/dev/1102/7141.html
[st]:     http://st.suckless.org/
[uuterm]: http://etalabs.net/uuterm.html
[icccm]:  http://tronche.com/gui/x/icccm/
[texinfo]: https://www.gnu.org/software/texinfo/
[gcc]:    http://gcc.gnu.org/
[clang]:  http://clang.llvm.org/

