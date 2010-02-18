FAQ
===

Aren't statically linked executables huge?
-------------------------------------------
It depends. Linking a stripped hello world program with glibc results in 600kb.
Linking it with uclibc in about 7kb. Linking OpenBSD's stripped [ksh](git://github.com/dryfish/openbsd-pdksh.git), which
will be stali's default shell, statically against uclibc results in a 170kb
binary -- linking it dynamically against glibc results in 234kb.
Of course this won't scale with every binary, for example we expect surf
being about 5-6MB in size, but the normal Unix userland will be rather small,
compared to most popular linux distros.

See also

* <http://9fans.net/archive/2008/11/142>

Aren't whole libraries linked into a static executable?
-------------------------------------------------------
No. Good libraries implement each library function in separate object (.o)
files, this enables the linker (ld) to only extract and link those
object files from an archive (.a) that export the symbols that are
actually used by a program.

See also

* <http://9fans.net/archive/2002/02/21>

What's wrong with glibc?
------------------------
We think nearly everything is wrong with it. Its enormous complexity,
its lack of good structure and well separated object files
(otherwise linking trivial programs wouldn't result in 600kb oberhead) and
even worse than that, its design decision to use dlopen for certain
"separated" library features (NSS, locales, IDN, ...), which makes it nearly
impossible to use glibc for static linking in non-trivial programs.
Unfortunately, for certain tools we will ship glibc for pragmatic reasons.

Of course [Ulrich Drepper thinks that dynamic linking is
great](http://people.redhat.com/drepper/no_static_linking.html), but clearly
that's because of his lack of experience and his delusions of grandeur.


Aren't statically linked executables less secure?
----------------------------------------------
Several people argue (with implicitly requiring ABI-stability) that dynamically
linked executables benefit from security fixes in libraries they depend on.
This is true to some extend, but if there is a security flaw in a dynamically
linked library, all programs are affected as well; whereas statically
executables aren't.

We know that there is some overhead in re-compiling all affected executables if
a dependent library is insecure, but we don't see this as a critical
disadvantage, because we also focus on a small and maintainable userland, where
only one tool for each task exists.

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
have a look at what [great ldd exploits](http://www.catonmat.net/blog/ldd-arbitrary-code-execution/) exist.

Another security issue with dynamic linking is versioning, see [this
excerpt](http://harmful.cat-v.org/software/dynamic-linking/versioned-symbols)
for some insight.

Also a security issue with dynamically linked libraries are executables with
the suid flag. A user can easily run dynamic library code using LD_PRELOAD in
conjunction with some trivial program like ping. Using a static 
executable with the suid flag eliminates this problem completely.

Apart from that we link against libraries with low footprint (eg uclibc instead
of glibc when possible). This leads to an increased likelihood
of lesser vulnerabilities, simply because lesser code contains fewer bugs from
a statistical point of view.

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
In nearly all cases the answer is "No". In the theoretical case of a huge static
executable, the payload might be loading the executable into memory; but we
focus on small, static executables. In experiments, the execution time of a static
executable was about 4000% faster than its dynamically linked counterpart
when no dependent libraries (except glibc) were pre-loaded, and 100% faster when
the dependent libraries were pre-loaded. We believe the overhead for looking up
all needed symbols in the dynamically loaded libraries seems to be very
expensive. On modern hardware this is only noticable with endlessly executing
the static and dynamic executable in a loop for several minutes and counting
the number of executions. 

A general conclusion is, the more dynamic libraries an executable depends on,
the slower it'll start, regardless if the libraries are preloaded or not.
This also means that usually big static executables (which we try to avoid)
easily outperform dynamic executables with lots of dependencies. If a big
static executable is already running, executing another one is nearly
instantaniously, because the payload is already in the memory. In the dynamic
case the startup is not instantaniously because the dynamic linker has to make
sure that there were no updates in the dependencies.

So all in all dynamic executables are painfully slow, regardless what hacks on
top people came up with in the past. There is zero evidence that dynamic
linking makes executables faster. There is only some evidence that preloading
dynamic libraries vs no preloading dynamic libraries improves the startup of
dynamic executables. But the introduction of preloading comes to a cost as
well, the kernel will have to do much more work when supporting such hacks.

Dynamic linking also greately increases the complexity of the kernel VM and
makes it much slower. And those hacks that try to prevent this make things more
complicated and add many more points of total failure.

How does stali compare to Google Chromium OS?
---------------------------------------------

See also
* <http://teddziuba.com/2008/09/a-web-os-are-you-dense.html>


