Google Summer of Code 2009
==========================
Suckless.org is applying as a mentoring organization for [Google Summer of
Code 2009](http://code.google.com/soc/).

Background
----------
We are home of quality software such as dwm, dmenu, libixp, and wmii, with
a focus on simplicity, clarity and frugality. Our [philosophy](/common/) is
about keeping things simple, minimal and elitist. We believe it should become
the mainstream philosophy in the IT sector. Unfortunately the tendency to
complex, error-prone and slow software seems to be predominanat in present-day
software industry. We intend to prove the opposite with our software projects.

Our project focuses on advanced and experienced computer users. In contrast
to the usual proprietary software world or many mainstream Free Software
projects who focus more on average and normal end users, we think that
experienced users are pretty much ignored by software projects. This is
particularly true for user interfaces, such as graphical environments on
desktop computers, on mobile devices, and in so-called Web applications. We
believe that the market of experienced users is growing continously, because
every computer user advances during the time and looks for more appropriate
solutions for his work style from time to time.

Furthermore, minimalism quickly yields reasonable and attainable results;
other organizations with a different approach may finish with unreliable
and uncompleted projects.

Unlike most Free Software projects strong leadership is essential to us.
Our projects are usually led by a single person, who maintains the mainline
code repository. Users discuss, review and contribute to the project on
[Dedicated project mailing lists and on IRC](/common/community.html).

Mentors
-------
We intend that each student will be the project leader of his/her particular
project and the only individual with commit privilege for the repository.

There will one mentor and one backup mentor per project. In addition, the
suckless.org community will act as more rigid external reviewers of the
student's progress, and also of the mentor.

The following persons have volunteered to serve as mentor during Google
Summer of Code 2009:

* Anselm R. Garbe <<garbeam@gmail.com>>

If you want to act as a mentor as well, please contact Anselm before you
add yourself to the list.

General ideas
-------------
Our project ideas for Google Summer of Code 2009 are in general intended
to focus on:

* Graphical user interfaces for expert users (such as more advanced
  concepts for mail clients, messaging clients, music players, text editors)
* Web applications for expert users collaborating the GUI concepts
* Mobile applications for expert user collaborating the GUI concepts
* General userland enhancements Unix-like operating systems, in particular
  GNU/Linux
* Audio applications
* Image/Streaming/Gallery desktop and web applications
* Foundations of a new windowing system for Unix-like operating systems
  (based on xorg drivers, but no X11- or XServer-dependency)
* Improvements of our existing software projects

Conrete ideas
-------------
Post your project ideas for students projects during Google Summer of Code
2009 here. See the [FAQ entry][FAQ] on the ideas list for further details.

The listed ideas generally require good knowledge in C and experience with
Unix-like operating systems. Their severity ranges from low to medium.
An academical background in computer science is usually not required.

Please consider to contact us first if you want to apply for a project, so we
can discuss the ideas at first and avoid misunderstandings in the first place.

### Unix utilities

Although there have been several attempts to replace GNU coretutils
on GNU/Linux by smaller counterparts, no suckless collection of fully
POSIX-compliant utilities exits. Existing programmes should be evaluated
and reused if possible.

### Port dwm to Microsoft Windows

Many dwm users who have to use Microsoft Windows regularly have proposed to
port dwm to Microsoft Windows. There are several tiling window managers, but
unfortunately the majority are proprietary software and can't keep up with dwm.

### ddm

There is no suckless display manager for X11 at the moment, thus a new
dynamic display manager (ddm) should designed and implemented.

### Comprehensive code audit

All software hosted at suckless.org should undergo a comprehensive
code audit. This includes search for vulnerabilities, verification of
all algorithms, proof-reading of the documentation and possibly a code
clean-up. The result has to be a report on all found errors and maybe some
advice for the project maintainers. This task requires experience in this
field.

### stm

There seems to be a need for a suckless ticket management system, as this
is a common task in today's daily activity in business and private time
management. This task includes the design and implementation of a suckless
system that solves the problem of TTS, ARS and TRS all together.

### Suckless programming language

Although sufficient, C is not a perfect programming language. It suffers from
legacy syntax and semantics and lacks features that make designing libraries
and developing abstractions much easier. To address these shortcomings the
student should survey the problems of C, evaluate possible solutions and
enhance the language.

Perhaps this is a bit utopian, but it's still worth considering. Anyhow, it
should be possible to build a working prototype by using existing software
for parsing and code generation.

[FAQ]: http://code.google.com/opensource/gsoc/2009/faqs.html#0_1_ideas_5167658354380897_772
