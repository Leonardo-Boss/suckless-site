Project ideas
=============

Please read our [philosophy](/philosophy) for background information.

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

The [stali](http://sta.li/) build system is not using autotools for good
reason, however many Unix/Linux open source packages do. To create statically
linked libraries out of the ld arguments we need an ld wrapper or
re-implementation that creates static libraries or executables. This would
enable us to build static libraries and executables out of any automake
generated makefiles without the need to write make replacements or patching the
build system of a particular package.

The ld wrapper needs to be extended to also link against uclibc first and if
that fails to fallback to glibc, in order to produce smaller executables in the
general case.

***Requirements:*** Good C/Unix knowledge is essential, knowledge about linking/linker internals are desirable..

### goblin

Write the most useful unix userland commands in the new [Go
language](http://golang.org) created by Google to form a robust base for future
Unix-like userlands that do not suffer from the vulnerabilities that are common
in C or C++ code. The minimum of commands that need to be implemented in Go are
those found in [9base](http://tools.suckless.org/9base), with the exception of
rc and awk which could be separated into a second project for another student.

Having goblin would allow to migrate decent web frameworks like
[werc](http://werc.cat-v.org) on a proper foundation.

***Requirements:*** Good C/Unix and Go knowledge is essential.

### Write a decent bug and issue tracking system

We a need a decent ticket management system, as this is a common task in
today's daily activity in business and private time management. This task
includes the design and implementation of a suckless system that solves the
problems of TTS (Trouble Ticket System), ARS (Action Request System) and IRS
(Incident Response System) all together. It also must be usable as a bug
tracking system.

* <https://github.com/blog/411-github-issue-tracker>

***Requirements:*** Good C/Shell/web technology/HTML knowledge would be desirable, knowledge of bug tracking and issue tracking in practice is essential.

### Write a decent mailing list Web archive system

All web archive systems such as hypermail, pipermail, etc. have plenty
drawbacks and are quite out-dated. This task requires to write a completely new
web mailing list archiving tool that follows the thread view concepts found in
the mutt MUA and which is designed with low footprint and efficiency in mind.

We expect this tool as a stand-alone Unix tool written in C or shell. To get
started you could use [Dovecot](http://dovecot.org/) to produce a sanitized
structure:

	printf "1 select inbox\n2 thread references us-ascii all\n3 fetch 1:*
	envelope\n4 logout\n" |
	/usr/local/libexec/dovecot/imap  2>/dev/null

* <http://www.codinghorror.com/blog/2012/12/web-discussions-flat-by-design.html>

***Requirements:*** Good C/Shell/HTML knowledge would be desirable.

### Yet another less sucking editor

Although vi(m) does its job, it has become a monster over the years. We
believe there is a gap between [ed](http://man.cat-v.org/plan_9/1/ed),
[sam](http://sam.cat-v.org), [acme](http://acme.cat-v.org) and vim which must
be filled with a completely new, less-sucking editor.

It has been [suggested](http://lists.suckless.org/dev/0911/2255.html) that
"...a curses interface for the sam protocol would be interesting and perhaps
even useful..."

***Requirements:*** Good C knowledge and knowledge of I/O APIs is essential.

### Improve sltar

[sltar](https://github.com/Gottox/sltar) is a simplified tar
implementation which lacks gzip and bzip2 integration. The task requires
extending sltar with support for these compression applications and writing a
test suite for it.

***Requirements:*** Good C knowledge would be desirable.

### Write cookie handler for surf

The biggest disadvantage of [surf](http://surf.suckless.org) is sloppy
cookie handling. libwebkit and libsoup (which are used for HTTP) were never
designed to run in multiple processes simultaneously.

This task requires writing a new cookie handler in surf which:

* creates a nice human-readable cookie file
* is able to run in multiple concurrent processes

***Requirements:*** Good knowledge of C and POSIX file locking. Basic knowledge
of GTK and its other evil friends.
