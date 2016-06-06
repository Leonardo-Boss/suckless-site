Systemd is the best example of Suck.
====================================
There is a menace which is spreading like a disease throughout the Linux
world, it is called [systemd](https://github.com/systemd/systemd).

Short Historical Summary
------------------------
Systemd is a replacement for the standard init command, which normally runs
as process id 1 on initialisation of a UNIX bootup. There has been a movement,
especially around the [Red Hat](http://www.redhat.com)-related developers to
copy [Microsoft Windows](http://www.microsoft.com/) and all of its features.
Now this interpretation of how a userspace should look like is implemented and
was introduced with big criticism and change in the Open Source world into
many distributions. The [debacle in Debian](https://wiki.debian.org/Debate/initsystem/systemd)
is the best example in how to not introduce such a changing technology into a
distribution.

What PID 1 Should Do
------------------------
When your system boots up the kernel is executing a given binary in its known
namespace. To
see what are the only tasks the application running as pid 1 has to do, see
[sinit](http://git.suckless.org/sinit/). Just wait for child process to reap
and run some other init scripts.

The Systemd Chronicles
----------------------
Now follows a list of unsorted links to the Systemd changelog with comments.
The list is exceeding the life-time of a philosopher to discuss all
implications on the sanity of a system design. That's why the comments are
kept short.

Part 2
------
* [System now does your DNS](https://lists.dns-oarc.net/pipermail/dns-operations/2016-June/014964.html)

Part 1
------
(If you are adding more parts, link to the right revision and not just the
plain file.)

[NEWS revision 3f80af378331748e1373d4c189a8e20cddb735c9](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c)

* [logind should wait](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n2089)
	* Systemd was introduced to decrease the boot up time. Now that they
	  do not understand all implications and dependencies, let us add some
	  artifical time we found out might work for the developers
	  laptops. More on this small world hypothesis of the systemd
	  developers below.
* [screen brightness](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1852)
	* Screen brightness is something that should crash your boot up when
	  it is not working.
* [hostnamed](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1763)
	* There really should be a process running which exposes the content
	  of a file. Complexity is without cost.
* [seqnum removed](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1742)
	* The sequential ordering of requests was one reason why udevd was
	  introduced. Now remove it, because the developer laptops do not have
	  a problem anymore.
* [floppy group removed](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1703)
	* Because we know what is right to know about groups. This is just one
	  example of the mass of group name dependencies systemd is adding.
	  See sinit for how to not need such dependencies.
* [sysv removed](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1651)
	* We have won. Now remove all remains of our defeated enemy as
	  fast as we can. As said in the beginning of the systemd crusade
	  against the UNIX infidels: »You can patch it out.« It is no more
	  there.
* [abnormal processes](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1627)
	* Now systemd is getting deep into philosophy. What is »abnormal«?
	  Well, let us just define it. There is no technical merit to accept
	  this.
* [systemd-resolved](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1578)
	* Every configuration file needs its own process and service.
	* Symlinks are a good way to solve all world problems.
* [new is better](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1571)
	* The systemd development process is flawed by always assuming »new is
	  best«.
	* Network configuration should be in my init process.
* [remote pid 1](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1500)
	* »Everything will end up having a remote API.« I wonder when systemd
	  will understand MIME and e-mail.
* [init does man](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1465)
	* My init process is too big, it needs its own file hierarchy and an
	  abstraction layer to find paths.
* [factory reset](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1401)
	* Welcome to the Windows OEM world: Factory reset for Linux! Of course
	  it is in your init process.
* [system runs runs](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1397)
	* Exactly. The predisposition of being able to call such a complex
	  command does not imply the running system. Let's check it again.
* [clean up directories](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1306)
	* There is another monster in systemd, it handles tmp files.
	  There are just some cases before it was introduced to have to clean up
	  a directory in the file tree. Now there are hundreds. And easily
	  another case can be added! Of course your init process does that.
* [firstboot](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1259)
	* »Interactive queries« pulls in many dependencies. Let us have it in
	  every installation out there on by default. Of course in pid 1.
* [journald](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1234)
	* This is a bit longer. Because the systemd developers were not able
	  to contribute to any syslog daemon they had to write their own with
	  some binary format so the principle of being able to read your log
	  files after a critical crash was violated. To be nice invaders the old
	  systems were allowed to order the system log through the specified
	  mechanism. Now that they implemented our specifics, turn off the
	  neutral syslog delivery. You will see this pattern of »now that we
	  conquered your culture, obey« more often in systemd.
* [systemd-terminal](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1224)
	* Why does the kernel have tty handling? So in serious situations you
	  will be able to debug it over the last standing PIN on your
	  motherboard. Let us remove this, run it in pid 1.
* [networkd is your oppressor](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1216)
	* Premature optimisation of IP configurations always leads to misery.
* [We do not understand broadcast](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1211)
	* With the growth of systemd in complexity and the new depending
	  software the implications of the added hacks are increasing.
* [Timezone hack](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1193)
	* Systemd is too complex for such a simple transaction with the
	  kernel. Do not inform the kernel and add another assumption which is
	  only documented in the changelog.
* [the web is a session](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1168) 
	* For the future generations: In 2015 nearly everyone was trying to
	  connect all you do to the web. In the UNIX model it is just a client
	  which should be simple and integrate into the system. Systemd is
	  doing it the other way around and does integrate itself into the
	  web.
	* The discussion about why my pid 1 is handling sessions is discussed
	  in other points.
* [pid 1 does DNS](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1128)
	* This change adds another open door to your pid 1, adds caches, new
	  APIs and of course it will never fail and break systemd on your
	  initial boot.
	* They are planning (2015-07) to add multicast DNS to your pid 1.
	  Multicast DNS implies an enforced timeout to know if someone answered.
	  Systemd was about speed, you know. Look at avahi in how to ruin this
	  concept for Linux. It has the same developer flaws as systemd: Too
	  many forced dependencies, you need to implement its API and when it is
	  taking over you are doomed.
* [policykit](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1113)
	* There is a bus inside your pid 1 and if it crashes you are flawed.
	  Exactly, there are a thousand more cases of errors that could occur
	  and make your system unbootable. Instead of using a separation of
	  functions, add everything to a big bus.
	* Of course when you are using a misdesign like dbus you need to add
	  interactions over the bus to add features you forgot in the initial
	  design. Now let us have our pid 1 have to query for the permission
	  to boot.
	* »Interactive authentication« will produce you a graphical input form
	  on your serial line.
* [Calendar](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n1044)
	* As you see, your pid 1 should handle your calendars and cron jobs
	  too.
* [utmp should go](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n994)
	* We have taken over your culture, now die! Another flaw in the
	  systemd small world theory: When something is getting optional it
	  will be removed.
* [password agent](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n964)
	* »Interactive authentication«
* [udev timeout](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n944)
	* Instead of patching the kernel to add a simple solution, add a hack.
	  Only the systemd developers tell you when it is allowed to wait or
	  sleep in userspace. The rest obey our orders!
* [systemd-pm](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n924)
	* Power management is required on boot up.
* [user systemd units](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n898)
	* What can go wrong when you are adding more paths that are read,
	  parsed and executed?
* [hack the reload](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n888)
	* First systemd was adding »better features« like socket activation to
	  make developers use their mechanism for daemons. They hit the
	  proprietary wall of disgust with this changelog entry. Systemd is
	  too big and you will lose your face if you change the misdesign. Now
	  add another hack because we can do it. Big empires fall too and
	  sadly have too many casualties when they are falling. :(
* [X11 in systemd](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n783)
	* Of course graphics were missing in pid 1.
* [complexity is purity](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n738)
	* You will of course need PPPoE when you do parallel bootup. Every
	  1000 lines of code add one critical bug you never fix.
* [gateway hostname](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n700)
	* We rule the world so we are above IETF and IANA. Now add our own
	  hostnames that of course won't add another assumption.
* [no editor in systemd](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n689)
	* This one is a setback. Why is there no default editor in systemd in
	  case of factory reset?
* [8x ctrl + alt + del](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n610)
	* In systemd you press eight times Ctrl+Alt+Del to trigger reboot.
* [privacy policy](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n594)
	* For the next generations: In 2015 privacy was a big issue because of
	  the mentioned hard-wiring between the web and software.
	  As you can see, every commit which adds some preparation for a 
	  feature adds another intepretation of what will be a major
	  assumption in a next release. If you
	  handle privacy you will have some features depending on that user
	  decision and of course the factory reset default value.
	* Why didn't they use XML for /etc/os-release?
* [fds cache](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n502)
	* We have talked about misdesign, too-big-to-fail and world
	  domination. This is the next example of a hack that is prone to
	  fail.
* [umount -rf](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n380)
	* This is umount for dummies. Just do one thing – right.
* [libudev will be orphaned](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n291)
	* With the advent of udevd there was a compatibility to its complexity
	  called libudev. X11 uses it to query the changing devices. And of
	  course make it a non-independent API in systemd. Why? You can guess
	  why: Defeating the infidels.
* [fsck indirections](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n281)
	* When there was syslog fsck did output errors to your display as
	  easy as possible. Now add a hack to have this possible again.
* [systemd-importd](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n236)
	* This is pure evil. Your pid 1 is now able to import complete system
	  images over the network and show them to you as your running system.
	  There is nothing that can go wrong.
* [CGI for systemd](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n166)
	* The web thing has been discussed before.
* [kdbus](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n57)
	* As of 2015-07-31 kdbus is not in the mainline Linux kernel. Systemd
	  made kdbus non-optional in its release. The kernel maintainers are
	  still debating the kdbus ABI or possible alternatives, but if
	  systemd depends on the current state of kdbus the kernel maintainers
	  are faced with the hard decision to either break Fedora userspace or
	  accept the current kdbus proposal into the kernel with its security
	  and maintainability issues. This is the best example how
	  systemd is forcing you into decisions. Of course if you are  a mindless
	  bureaucrat it helps you to keep your job.
* [readahead removed](http://cgit.freedesktop.org/systemd/systemd/tree/NEWS?id=2d1ca11270e66777c90a449096203afebc37ec9c#n950)
	* The first thing swallowed in on Fedora was readahead. Now that (of
	  course!) everyone is using an SSD (at least the developers of
	  systemd do that) it can be removed. Why was it there? Is it possible
	  to make it a separate tool again?  There's no time for that, we are implementing
	  new features.

---- Führerbunker, 2015-07-31

Further Reading
---------------
* [Without Systemd](http://without-systemd.org/wiki/index.php/Main_Page)
* [Arguments Against Systemd](http://without-systemd.org/wiki/index.php/Arguments_against_systemd)

