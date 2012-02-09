Broken Libraries
================

These libraries are broken/considered harmful and should not be used if it's
possible to avoid them. If you use them, consider looking for alternatives.

* [glib][1] - implements C++ STL on top of C (because C++ sucks so much, let's
  reinvent it!), adding lots of useless data types for
  ["portability" and "readability" reasons][2].
  Alternatives: whoever thinks it needs alternatives shall fill this space.

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
