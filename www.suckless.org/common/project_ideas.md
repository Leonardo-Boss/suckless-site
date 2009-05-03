PROJECT IDEAS FOR FUTURE GSOCs
==============================
We applied as a mentoring organization for [Google Summer of Code 2009](http://code.google.com/soc/), but were rejected this time. Perhaps we will apply in 2010 again.

Background
----------
We are the home of quality software such as [dwm](http://dwm.suckless.org),
[dmenu](http://tools.suckless.org), [libixp](http://libs.suckless.org/libixp),
[wmii](http://wmii.suckless.org) and plenty of other [tools](http://tools.suckless.org), with
a focus on simplicity, clarity and frugality. Our [philosophy](/common/) is
about keeping things simple, minimal and usable. We believe this should become
the mainstream philosophy in the IT sector. Unfortunately, the tendency for
complex, error-prone and slow software seems to be prevalent in the present-day
software industry. We intend to prove the opposite with our software projects.

Our project focuses on advanced and experienced computer users. In contrast
with the usual proprietary software world or many mainstream open source
projects that focus more on average and non-technical end users, we think that
experienced users are mostly ignored. This is particularly true for user
interfaces, such as graphical environments on desktop computers, on mobile
devices, and in so-called Web applications. We believe that the market of
experienced users is growing continuously, with each user looking for more
appropriate solutions for his/her work style.

Designing simple and elegant software is far more difficult than letting ad-hoc
or over-ambitious features obscure the code over time. However one has to pay
this price to achieve reliability and maintainability. Furthermore, minimalism
results in reasonable and attainable goals. We strive to maintain minimalism and
clarity to drive development to completion.

Mentors
-------
We intend that each student will be the project leader of his/her particular
project and the only individual with commit privilege for the repository.

There will be one mentor and one backup mentor per project. In addition, the
suckless.org community will act as a rigid external reviewer of the
student's progress, as well as of the mentor's.

General ideas
-------------
Our project ideas in general intended to focus on:

* Graphical user interfaces for expert users (such as more advanced
  concepts for mail clients, messaging clients, music players, text editors)
* Web applications for expert users following our GUI concepts
* Mobile applications for expert users following our GUI concepts
* General userland enhancements to Unix-like operating systems, in particular
  GNU/Linux
* Audio applications
* Image/Streaming/Gallery desktop and web applications
* Foundations of a new windowing system for Unix-like operating systems
  (based on xorg drivers, but no X11- or XServer-dependency)
* Improvements of our existing software projects

Concrete ideas
--------------
The listed ideas generally require good knowledge of C and experience with
Unix-like operating systems. The difficulty ranges from medium to high.
An academic background in computer science is desirable but not essential.

### Unix utilities

Projects like [dmenu](http://tools.suckless.org/dmenu) prove that it's possible
to bring the Unix philosophy onto the desktop and into the land of graphical
applications. We believe that there is big potential for doing similar things
for other purposes such as managing contacts, bookmarks, browsing
files/directories, reading/managing mails, organizing/viewing images/videos and
listening to music, all in a very elegant and Unix-like way. We believe that such
tools should have a GUI but communicate via standard I/O and be very flexible in
the combination of their purposes.

***Requirements:*** Good knowledge of the Unix userland, C and of the Xlib is essential.

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

***Requirements:*** Good knowledge of the Xlib and C is desirable. Also good
knowledge of the specific target platform, such as Cocoa/Quartz on Max OS X,
 resp. Win32 API on Windows would be desirable.

### ddm

There is no suckless display manager for X11 at the moment, thus a new
dynamic display manager (ddm) should be designed and implemented.

***Requirements:*** Good knowledge of the Xlib and C is desirable.

### stm

There seems to be a need for a suckless ticket management system, as this
is a common task in today's daily activity in business and private time
management. This task includes the design and implementation of a suckless
system that solves the problems of TTS (Trouble Ticket System), ARS (Action
Request System) and IRS (Incident Response System) all together.

***Requirements:*** Good knowledge of web technologies are essential, good knowledge of C is desirable.

### Lightweight volume manager alternative

We'd like to see a lightweight and simple alternative to gnome-volume-manager
and similar programs.

There's one such project already available at <http://github.com/dimigon/skvm/tree/master>.

***Requirements:*** Good C knowledge and knowledge of DBUS and similar techniques are essential.

### Yet another less sucking editor

Although vi(m) does its job, it has become a monster over the years. We
believe there is a gap between [ed](http://man.cat-v.org/plan_9/1/ed), [sam](http://sam.cat-v.org), [acme](http://acme.cat-v.org) and vim which must be filled with
a completely new, less-sucking editor.

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
environment which can be implemented on modern OS platforms in a straightforward manner. 
Our goal would be to realize an initial proposal on Linux.

***Requirements:*** Very good C knowledge is essential.

### Improve tcc

We'd like to see [tcc](http://bellard.org/tcc/) being continued and improved.  gcc is too slow and too
focused on language-agnostics and particularly focused on its C++ support. We
have the impression that most open source software is written in C and makes no
use of C++, so we desire an improved tcc.

We are also concerned about recent attempts to implement the C front-end of gcc
in C++. We believe that is a bad decision in general (due to demanding C++ as
bootstrapping environment) and would like to get rid of the gcc dependency
for these reasons.

We'd like the improved tcc to be able to build all suckless projects
and perhaps the modern libc replacement.

***Requirements:*** Very good C knowledge is essential as well as knowledge of x86 assembler and executable formats.

### Comprehensive code audit

All software hosted at suckless.org should undergo a comprehensive
code audit. This includes search for vulnerabilities, verification of
all algorithms, proof-reading of the documentation and possibly a code
clean-up. The result has to be a report on all found errors and maybe some
advice for the project maintainers. This task requires experience in this
field.

***Requirements:*** Good C knowledge is essential.

### Improve sltar

[sltar](http://s01.de/~gottox/index.cgi/proj_sltar) is a simplified tar
implementation which lacks gzip and bzip2 integration. The task requires to
extend sltar with these and to also write a test suite for it.

***Requirements:*** Good C knowledge would be desirable.

### Write a decent mailing list Web archive system

All web archive systems such as hypermail, pipermail, etc. have plenty
drawbacks and are quite out-dated. This task requires to write a completely new
web mailing list archiving tool that follows the thread view concepts found in
the mutt MUA and which is designed with low footprint and efficiency in mind.

We expect this tool as a stand-alone Unix tool written in C or shell.

***Requirements:*** Good C/Shell/HTML5 knowledge would be desirable.

### Extend werc with a repository browser

This task requires to extend [werc](http://werc.cat-v.org) with a source
browser for VCS repositories including support for
[subversion](http://subversion.tigris.org/),
[mercurial](http://www.selenic.com/mercurial/) and [git](http://git-scm.com).

***Requirements:*** Good knowledge of the [rc](http://en.wikipedia.org/wiki/Rc) shell
and the [Plan 9 userland for Unix](http://plan9.us) is essential. Good C
knowledge for the helper tools would be desirable.
