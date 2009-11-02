FAQ
===

Aren't statically linked executables huge?
-------------------------------------------
It depends. Linking a stripped hello world program with glibc results in 600kb.
Linking it with uclibc in about 7kb. Linking OpenBSD's stripped ksh[1], which
will be stali's default shell, statically against uclibc results in a 170kb
binary -- linking it dynamically against glibc results in 234kb.
Of course this won't scale with every binary, for example we expect surf
being about 5-6MB in size, but the normal Unix userland will be rather small,
compared to most popular linux distros.

Aren't whole libraries linked into a static executable?
-------------------------------------------------------
No. Good libraries implement each library function in separate object (.o)
files, this enables the linker (ld) to only extract and link those
object files from an archive (.a) that export the symbols that are
actually used by a program.

What's wrong with glibc?
------------------------
We think nearly everything is wrong with it. Its enormous complexity,
its lack of good structure and well separated object files
(otherwise linking trivial programs wouldn't result in 600kb oberhead) and
even worse than that, its design decision to use dlopen for certain
"separated" library features (NSS, locales, IDN, ...), which makes it nearly
impossible to use glibc for static linking in non-trivial programs.
Unfortunately, for certain tools we will ship glibc for pragmatic reasons.  Of
course, Ulrich Drepper disagrees[2].

Aren't statically linked executables less secure?
----------------------------------------------
Several people argue (with implicitly requiring ABI-stability) that
dynamically linked executables benefit from security fixes in libraries they
depend on. This is true, however the opposite is also true: if there is a
security flaw in a dynamically linked library, all programs are affected; whereas
statically executables won't be affected in such a scenario (assuming they have
been linked against secure libraries).

We know that there is some overhead in re-compiling all affected executables if a
dependent library is insecure, but we don't see this as a critical
disadvantage, because we also focus on a small and maintainable userland,
where only one tool for each task exists.

Another argument often heard is that static functions have predictable
addresses, whereas dynamic linking provides the ability of address
randomization. We have two answers to this. The first is: Technically it is
possible to use platform-independent code in static executables and hence assuming
the kernel supports address randomization for executables we have a similar
feature. The second is: In reality, address randomization is predictable
and we usually see the same addresses when a dynamic library is loaded or has
been pre-loaded again and again. Thus we consider this as an issue with low
impact and this is not a real focus for us.

If you are really concerned about the security of statically linked executables,
have a look at what great ldd exploits[3] exist.

Aren't statically linked executables consuming more memory?
--------------------------------------------------------
We believe that due to the small size of the base system the opposite will be
the case. First of all, the kernel will load each static executable's .rodata, .data,
.text and .comment sections only once for all instances into memory.
Second, because each static binary has only been linked with the object files
necessary, it has already been optimised at linkage time for memory
consumption. When loading it, we don't require the kernel to map all
dependent dynamic libraries into memory from which our binary might only use 5%
of the functions they provide. So, in reality, the memory footprint is becoming
less, and the dead code hold in memory (or paged) reduces overall consumption.
This is also true for programs, like surf, which don't use all webkit/gtk/glib
functions.

Isn't starting statically linked executables slower?
----------------------------------------------------
In most cases the answer is "No". In the theoretical case of a huge static
executable, the payload might be loading the executable into memory; but we
focus on small, static executables. In experiments, the execution time of a static
executable was about 4000% faster than its dynamically linked counterpart
when no dependent libraries (except glibc) were pre-loaded, and 100% faster when
the dependent libraries were pre-loaded. We believe the overhead for looking up
all needed symbols in the dynamically loaded libraries seems to be very
expensive. On modern hardware this is only noticable with endlessly executing
the static and dynamic executable in a loop for several minutes and counting
the number of executions. We plan to publish the benchmark results for further
info at a later point.

References
---------
* [1] You can clone OpenBSD ksh using `git://github.com/dryfish/openbsd-pdksh.git`
* [2] http://people.redhat.com/drepper/no_static_linking.html
* [3] http://www.catonmat.net/blog/ldd-arbitrary-code-execution/
