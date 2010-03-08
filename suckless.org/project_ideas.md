PROJECT IDEAS FOR GSOC 2010
===========================
We are applying as a mentoring organization for
[Google Summer of Code 2010](http://socghop.appspot.com/).

Please read our [philosophy](/manifest) for background information.

Mentors
-------
We intend that each student will be the project leader of his/her particular
project and the only individual with commit privilege for the repository.

There will be one mentor and one backup mentor per project. In addition, the
suckless.org community will act as a rigid external reviewer of the
student's progress, as well as of the mentor's.

General ideas
-------------
Our project ideas in general intend to focus on our innovative development
environment, including graphical user interfaces and development tools.

* Graphical user interfaces for developers (such as more advanced
  concepts for mail clients, messaging clients, music players, text editors)
* Web applications for developers following our GUI concepts (issue and bug
  tracking)
* Mobile applications for developers that integrate well into our general
  development environment
* General userland enhancements to Unix-like operating systems, in particular
  GNU/Linux
* Foundations of a new windowing system for Unix-like operating systems
* Improvements to our existing software projects

Concrete ideas
--------------
The listed ideas generally require good knowledge of C and experience with
Unix-like operating systems. The difficulty ranges from medium to high.
An academic background in computer science is desirable but not essential.

### Port [stali](http://sta.li) to use bionic

So far [static linux](http://sta.li) requires [uclibc](http://www.uclibc.org) for most userland
tools and glibc for some exceptions. We'd like to replace the uclibc dependency
with bionic from android.

This project can be achieved on a tool by tool basis because it will require
some code patching.

***Requirements:*** Good C/Unix knowledge is necessary.

### Port [9base](http://tools.suckless.org/9base) to use bionic

So far 9base uses the hosts C library. We'd like to replace the host libc
dependency with bionic from android.

This project can be extended to do the same in
[plan9port](http://swtch.com/plan9port/) by Russ Cox, if the progress is fast
in achieving this.

***Requirements:*** Good C/Unix knowledge is essential.

### Write ld wrapper or replacement for static linking

The GNU autotools such as automake and autoconf are completely unusable in
non-chroot'ed cross-compile environments and often completely fail to produce
statically linked libraries or executables.  Also they are
extremely slow and bloated.

The stali build system is not using autotools for good reason, however many
Unix/Linux open source packages do. To create statically linked libraries out
of the ld arguments we need an ld wrapper or re-implementation that creates
static libraries or executables. This would enable us to build static libraries
and executables out of any automake generated makefiles without the need to
write make replacements or patching the build system of a particular package. 

The ld wrapper needs to be extended to also link against uclibc first and if
that fails to fallback to glibc, in order to produce smaller executables in the
general case.

***Requirements:*** Good C/Unix knowledge is essential, knowledge about linking/linker internals are desirable..

### goblin 

Write the most used unix userland commands in the new [Go
language](http://golang.org) created by Google to form a robust base for future
Unix-like userlands that do not suffer from the vulnerabilities that are common
in C or C++ code. The minimum of commands that need to be implemented in Go are those found in [9base](http://tools.suckless.org/9base).

Having goblin would allow to migrate decent web frameworks like
[werc](http://werc.cat-v.org) on a proper foundation.

***Requirements:*** Good C/Unix and Go knowledge is essential.

### Write a decent bug and issue tracking system

All bug and issue tracking systems that exist have many issues themselves, some
are too simplistic and have a web-only approach, some only focus mails, some do
many unrelated things, most of them are very complicated and monstrous.

We need a decent bug and issue tracking system that not only can be used for
bug tracking but also for dealing with issues in customer relations.

It is crucial that all communication can be done via email but also that all
communication can tracked and done via a proper web interface.

The system should not attempt to achieve too many features such as enforcing
some role management which is found in some existing systems. It should focus
on the most basic tasks instead and get them right. Most existing systems
provide all such functionality but often in very cumbersome ways.

***Requirements:*** Good C/Shell/web technology/HTML5 knowledge would be desirable, knowledge of bug tracking and issue tracking in practice is essential.

### Write a decent mailing list Web archive system

All web archive systems such as hypermail, pipermail, etc. have plenty
drawbacks and are quite out-dated. This task requires to write a completely new
web mailing list archiving tool that follows the thread view concepts found in
the mutt MUA and which is designed with low footprint and efficiency in mind.

We expect this tool as a stand-alone Unix tool written in C or shell.

***Requirements:*** Good C/Shell/HTML5 knowledge would be desirable.


### Unix utilities

Projects like [dmenu](http://tools.suckless.org/dmenu) prove that it's possible
to bring the Unix philosophy onto the desktop and into the land of graphical
applications. We believe that there is big potential for doing similar things
for other purposes such as managing contacts, bookmarks, browsing
files/directories, reading/managing mails, organizing/viewing images/videos and
listening to music, all in a very elegant and Unix-like way. We believe that such
tools should have a GUI but communicate via standard I/O and be very flexible in
the combination of their purposes.

***Requirements:*** Good knowledge of the Unix userland, C and Xlib is essential.

### Port dwm to different platforms

Many dwm users who have to use Microsoft Windows regularly have requested a
port of dwm to Microsoft Windows. There are several tiling window managers, but
unfortunately the majority are proprietary software and can't keep up with dwm.

Similarly we believe that porting dwm to Mac OS X, or onto mobile devices (with
certain constraints) might create a new paradigm of future window management
concepts in mainstream software.

There might also be the opportunity to make dwm itself more friendly with
well-established desktop environments, to integrate well with Gnome or KDE in
order to prove that dynamic and tiled window management should be the default
in future window management concepts.

***Requirements:*** Good knowledge of Xlib and C is desirable. Also good
knowledge of the specific target platform, such as Cocoa/Quartz on Max OS X
or the Win32 API on Windows would be desirable.

### ddm

There is no suckless display manager for X11 at the moment, thus a new
dynamic display manager (ddm) should be designed and implemented.

***Requirements:*** Good knowledge of Xlib and C is desirable.

### stm

There seems to be a need for a suckless ticket management system, as this
is a common task in today's daily activity in business and private time
management. This task includes the design and implementation of a suckless
system that solves the problems of TTS (Trouble Ticket System), ARS (Action
Request System) and IRS (Incident Response System) all together.

***Requirements:*** Good knowledge of web technologies are essential, good
knowledge of C is desirable.

### Lightweight volume manager alternative

We'd like to see a lightweight and simple alternative to gnome-volume-manager
and similar programs.

There is one such project already available at <http://tools.suckless.org/skvm>.

***Requirements:*** Good C knowledge and knowledge of DBUS and similar techniques
are essential.

### Yet another less sucking editor

Although vi(m) does its job, it has become a monster over the years. We
believe there is a gap between [ed](http://man.cat-v.org/plan_9/1/ed),
[sam](http://sam.cat-v.org), [acme](http://acme.cat-v.org) and vim which must
be filled with a completely new, less-sucking editor.

It has been [suggested](http://lists.suckless.org/dev/0911/2255.html) that
"...a curses interface for the sam protocol would be interesting and perhaps
even useful..."

***Requirements:*** Good C knowledge and knowledge of I/O APIs is essential.

### Less sucking C99 subset spec

Although sufficient, C99 is not a perfect programming language. It suffers from
legacy syntax and semantics and lacks features that make designing libraries
and developing abstractions much easier. To address these shortcomings the
student should survey the problems of C, evaluate possible solutions and
enhance the language as a subset of C99.

***Requirements:*** Very good C knowledge is essential.

### Modern libc

The standard libc is full of awkward and legacy concepts. We believe that
recent approaches such as Google's bionic libc are a step into the right
direction, though not radical enough. We think there is a great opportunity to
implement a completely new libc which abstracts a very nice standard
environment which can be implemented on modern OS platforms in a straightforward
manner. 
Our goal would be to realize an initial proposal on Linux.

***Requirements:*** Very good C knowledge is essential.

### Improve tcc

We would like to see [tcc](http://bellard.org/tcc/) development continued and
improved. gcc is too slow, too focused on language-agnostics and particularly
too focused on C++ support. We believe most open source software is written in
C and makes no use of C++; hence, we desire an improved tcc.

We are also concerned about recent attempts to implement the C front-end of gcc
in C++. Requiring C++ in a bootstrapping environment is a bad decision in
general, so we would like to get rid of the gcc dependency for the above reasons.

We'd like the improved tcc to be able to build all suckless projects and perhaps
even the modern libc replacement.

***Requirements:*** Very good C knowledge is essential as well as knowledge of
x86 assembler and executable formats.

### Comprehensive code audit

All software hosted at suckless.org should undergo a comprehensive
code audit. This includes searching for vulnerabilities, a verification of
all algorithms, proof-reading of the documentation and possibly a code
cleanup. The result has to be a report on all found errors and maybe some
advice for the project maintainers. This task requires experience in this
field.

***Requirements:*** Good C knowledge is essential.

### Improve sltar

[sltar](http://s01.de/~gottox/index.cgi/proj_sltar) is a simplified tar
implementation which lacks gzip and bzip2 integration. The task requires
extending sltar with support for these compression applications and writing a
test suite for it.

***Requirements:*** Good C knowledge would be desirable.


### Extend werc with a repository browser

This task requires to extend [werc](http://werc.cat-v.org) with a source
browser for VCS repositories including support for
[subversion](http://subversion.tigris.org/),
[mercurial](http://www.selenic.com/mercurial/) and [git](http://git-scm.com).

***Requirements:*** Good knowledge of the [rc](http://en.wikipedia.org/wiki/Rc) shell
and the [Plan 9 userland for Unix](http://plan9.us) is essential. Good C
knowledge for the helper tools would be desirable.

### Write cookie handler for surf

The biggest disadvantage of [surf](http://surf.suckless.org) is sloppy
cookie handling. libwebkit and libsoup (which are used for HTTP) were never
designed to run in multiple processes simultaneously.

This task requires writing a new cookie handler in surf which:

* creates a nice human-readable cookie file
* is able to run in multiple concurrent processes

***Requirements:*** Good knowledge of C and POSIX file locking. Basic knowledge
of GTK and its other evil friends.
