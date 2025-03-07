Home of [dwm](//dwm.suckless.org), [dmenu](//tools.suckless.org/dmenu) and
other quality software with a focus on simplicity, clarity, and frugality.

Read more about our [philosophy](/philosophy) and join us on the [mailing
list](/community).

News
====

[Atom feed](//suckless.org/atom.xml)


2024-11-26
----------
* [svkbd 0.4.2](//tools.suckless.org/x/svkbd/) released: [download](//dl.suckless.org/tools/svkbd-0.4.2.tar.gz)

2024-04-05
----------
* [st 0.9.2](//st.suckless.org/) released: [download](//dl.suckless.org/st/st-0.9.2.tar.gz)

This reverts a commit and a regression with cursor move with wide glyphs, for
example with GNU readline.

2024-03-20
----------
Below are some highlights of the changes for the recent releases of dmenu, dwm,
st and tabbed, see the git logs for all details:

General small Makefile improvements, rationale being: just be verbose and show
what is done: do not abstract/hide details from the user/developer.
Respect (more) the package manager and build system flags (CFLAGS, LDFLAGS, etc).

[dwm](https://git.suckless.org/dwm/log.html):
* Improvements to signal handling.
* Fix: Avoid missing events when a keysym maps to multiple keycodes.

[dmenu](https://git.suckless.org/dmenu/log.html):
* Reduce memory usage for reading the lines.
* Fix: X11 BadMatch error when embedding on some windows.

[st](https://git.suckless.org/st/log.html):
* Fix: bounds checks of dc.col.
* Fix: buffer overflow when handling long composed input.
* Ignore C1 control characters in UTF-8 mode.
* Improvements to cell handling and wide characters.
* Default config: decrease the default minlatency.
* [Various other terminal fixes and compatibility improvements.](https://git.suckless.org/st/log.html)

[tabbed](https://git.suckless.org/tabbed/log.html):
* Fix: faulty zombie process reaping.
* Improvements to signal handling.
* Improve compatibility with compiling on older systems such as Slackware 11.

Thanks to all contributors who submitted patches.

2024-03-19
----------
* [dmenu 5.3](//tools.suckless.org/dmenu/) released: [download](//dl.suckless.org/tools/dmenu-5.3.tar.gz)
* [dwm 6.5](//dwm.suckless.org) released: [download](//dl.suckless.org/dwm/dwm-6.5.tar.gz)
* [st 0.9.1](//st.suckless.org/) released: [download](//dl.suckless.org/st/st-0.9.1.tar.gz)
* [tabbed 0.8](//tools.suckless.org/tabbed) released: [download](//dl.suckless.org/tools/tabbed-0.8.tar.gz)

2023-07-04
----------
[slstatus 1.0](//tools.suckless.org/slstatus) released: [download](//dl.suckless.org/tools/slstatus-1.0.tar.gz)

2022-12-28
----------
[lchat 1.0](//tools.suckless.org/lchat) released: [download](//dl.suckless.org/tools/lchat-1.0.tar.gz)

2022-11-02
----------
[libgrapheme 2.0.2](//libs.suckless.org/libgrapheme) released: [download](//dl.suckless.org/libgrapheme/libgrapheme-2.0.2.tar.gz)

2022-10-08
----------
[libgrapheme 2.0.1](//libs.suckless.org/libgrapheme) released: [download](//dl.suckless.org/libgrapheme/libgrapheme-2.0.1.tar.gz)

2022-10-06
----------
[libgrapheme 2.0.0](//libs.suckless.org/libgrapheme) released: [download](//dl.suckless.org/libgrapheme/libgrapheme-2.0.0.tar.gz)

2022-10-04
----------
* [dmenu 5.2](//tools.suckless.org/dmenu/) released: [download](//dl.suckless.org/tools/dmenu-5.2.tar.gz)
* [dwm 6.4](//dwm.suckless.org) released: [download](//dl.suckless.org/dwm/dwm-6.4.tar.gz)
* [ii 2.0](//tools.suckless.org/ii) released: [download](//dl.suckless.org/tools/ii-2.0.tar.gz)
* [sic 1.3](//tools.suckless.org/sic) released: [download](//dl.suckless.org/tools/sic-1.3.tar.gz)
* [slock 1.5](//tools.suckless.org/slock) released: [download](//dl.suckless.org/tools/slock-1.5.tar.gz)
* [st 0.9](//st.suckless.org/) released: [download](//dl.suckless.org/st/st-0.9.tar.gz)
* [tabbed 0.7](//tools.suckless.org/tabbed) released: [download](//dl.suckless.org/tools/tabbed-0.7.tar.gz)

2022-04-19
----------
Suckless now has a dark mode CSS style for its pages.
Surf also now has support for [dark mode](https://git.suckless.org/surf/commit/1f5b8f3bd1f37d4d3dc45d21285f34ef4752dbaa.html).

2022-02-11
----------
[dmenu 5.1](//tools.suckless.org/dmenu/) released: [download](//dl.suckless.org/tools/dmenu-5.1.tar.gz)

2022-01-07
----------
* [dwm 6.3](//dwm.suckless.org) released: [download](//dl.suckless.org/dwm/dwm-6.3.tar.gz)
* [ii 1.9](//tools.suckless.org/ii) released: [download](//dl.suckless.org/tools/ii-1.9.tar.gz)
* [st 0.8.5](//st.suckless.org/) released: [download](//dl.suckless.org/st/st-0.8.5.tar.gz)
* [svkbd 0.4.1](//tools.suckless.org/x/svkbd/) released: [download](//dl.suckless.org/tools/svkbd-0.4.1.tar.gz)

2021-12-22
----------
[libgrapheme 1.0.0](//libs.suckless.org/libgrapheme) released: [download](//dl.suckless.org/libgrapheme/libgrapheme-1.0.0.tar.gz)

2021-07-30
----------
[svkbd 0.4](//tools.suckless.org/x/svkbd/) released: [download](//dl.suckless.org/tools/svkbd-0.4.tar.gz)

2021-05-09
----------
On Tuesday, 2021-05-11 there will be scheduled maintenance of the suckless
servers. It's estimated this will take about 1 hour from about 21:00 to
22:00 UTC+02:00.

The mailinglist, website and source-code repositories will have some downtime.

**Update:** the maintenance was finished at 2021-05-12 23:33 UTC+02:00.
P.S.: It didn't actually take 26h30, I just had forgotten to do it.

2021-05-08
----------
[surf 2.1](//surf.suckless.org/) released: [download](//dl.suckless.org/surf/surf-2.1.tar.gz)

2021-03-28
----------
[svkbd 0.3](//tools.suckless.org/x/svkbd/) released: [download](//dl.suckless.org/tools/svkbd-0.3.tar.gz)

2021-03-28
----------
On Wednesday, 2021-03-31 there will be scheduled maintenance of the suckless
servers. It's estimated this will take about 2-3 hours from about 19:00 to
21:00 - 22:00 UTC+02:00.

The mailinglist, website and source-code repositories will have some downtime.

**Update:** the maintenance was finished at 2021-03-31 19:10 UTC+02:00.

2021-01-19
----------
[scroll 0.1](//tools.suckless.org/scroll/) released: [download](//dl.suckless.org/tools/scroll-0.1.tar.gz)

2020-12-11
----------
[svkbd 0.2.2](//tools.suckless.org/x/svkbd/) released: [download](//dl.suckless.org/tools/svkbd-0.2.2.tar.gz)

2020-09-18
----------
[svkbd 0.2.1](//tools.suckless.org/x/svkbd/) released: [download](//dl.suckless.org/tools/svkbd-0.2.1.tar.gz)

2020-09-13
----------
[svkbd 0.2](//tools.suckless.org/x/svkbd/) released: [download](//dl.suckless.org/tools/svkbd-0.2.tar.gz)

2020-09-02
----------
[dmenu 5.0](//tools.suckless.org/dmenu/) released: [download](//dl.suckless.org/tools/dmenu-5.0.tar.gz)

2020-06-19
----------
[st 0.8.4](//st.suckless.org/) released: [download](//dl.suckless.org/st/st-0.8.4.tar.gz)

2020-05-27
----------
The [slcon7](conferences/2020) has been cancelled due to the 2019-nCoV
pandemic.

2020-04-27
----------
[st 0.8.3](//st.suckless.org/) released: [download](//dl.suckless.org/st/st-0.8.3.tar.gz)

2019-12-01
----------
On Wednesday, 2019-12-04 there will be scheduled maintenance of the suckless
servers. It's estimated this will take about 2-3 hours from about 19:00 to
21:00 - 22:00 UTC+01:00.

The mailinglist, website and source-code repositories will have some downtime.

**Update:** the maintenance was finished at 2019-12-04 20:00 UTC+01:00.

2019-04-04
----------
Registrations are now open for [slcon6](conferences/2019) that will be held in
Bad Liebenzell, Germany on 2019-10-(04-06).

The CfP for interested participants will end on 2019-06-30.

2019-03-30
----------
There is now a [patch overview](//gunther.suckless.org/patches/) tool to have a
quick overview of the patch status list. This list is generated each day from
the [sites](//git.suckless.org/sites/) repository. It checks if patches apply
cleanly in a normal patching manner. Of course it does not check patch
combinations.

* [Hacking patches guidelines](//suckless.org/hacking/)
* [Tool source-code](//git.suckless.org/sites/file/testpatches.sh.html)

Please keep the patches tidy and maintain or remove them.

2019-02-09
----------
[st 0.8.2](//st.suckless.org/) released: [download](//dl.suckless.org/st/st-0.8.2.tar.gz)

This release has mostly bugfixes.

2019-02-03
----------
* [dwm 6.2](//dwm.suckless.org) released: [download](//dl.suckless.org/dwm/dwm-6.2.tar.gz)
* [dmenu 4.9](//tools.suckless.org/dmenu/) released: [download](//dl.suckless.org/tools/dmenu-4.9.tar.gz)

2018-06-01
----------
The maintainance is completed. Let me know of any important things that are broken.
Internally we will keep tweaking the server configuration over the course of
time.

2018-05-27
----------
There will be a scheduled server maintenance next Friday and Saturday, 2018-06-(01-02).
The migration to the new server will happen on these days and the git
repositories and mailing list will be frozen on the old (now current)
server.

2018-04-11
----------
[farbfeld 4](//tools.suckless.org/farbfeld/) released: [download](//dl.suckless.org/farbfeld/farbfeld-4.tar.gz)

2018-03-20
----------
[st 0.8.1](//st.suckless.org/) released: [download](//dl.suckless.org/st/st-0.8.1.tar.gz)

This release fixes some regressions introduced in the 0.8 release.

2018-03-19
----------
Registrations for [slcon5](/conferences/2018/) are now open.

2018-03-14
----------
* [dmenu 4.8](//tools.suckless.org/dmenu/) released: [download](//dl.suckless.org/tools/dmenu-4.8.tar.gz)
* [st 0.8](//st.suckless.org/) released: [download](//dl.suckless.org/st/st-0.8.tar.gz)

2018-02-04
----------
[ii 1.8](//tools.suckless.org/ii) released: [download](//dl.suckless.org/tools/ii-1.8.tar.gz)

2017-09-04
----------
[suckless hackathon](/conferences/2017): we met on Sep 1-3 2017 in Würzburg, Germany.

2017-09-04
----------
[sent 1](//tools.suckless.org/sent) released: [download](//dl.suckless.org/tools/sent-1.tar.gz)

2017-08-30
----------
suckless.org now supports TLS using [Let's Encrypt](https://letsencrypt.org/).
Cloning git repos over HTTPS now works. Some links on the page have been
changed to allow both HTTP and HTTPS.

HSTS is not fully working yet. This will be fixed.

The IPv6 AAAA record was added and IPv6 is fully working now.

suckless has many subdomains, these should hopefully all work via TLS. If you
see a subdomain without a signed certificate please report it. If you find any
broken links on the wiki pages, these can be fixed by anyone.

2017-07-03
----------
The suckless.org project is now hosted on a new server. All inactive accounts
have been removed during the relocation.

Please note that the new ECDSA key fingerprint is
SHA256:7DBXcYScmsxbv7rMJUJoJsY5peOrngD4QagiXX6MiQU.

2017-05-06
----------
[blind 1.1](//tools.suckless.org/blind) released:
[download](//dl.suckless.org/tools/blind-1.1.tar.gz)

2017-05-02
----------
[dmenu 4.7](//tools.suckless.org/dmenu) released:
[download](//dl.suckless.org/tools/dmenu-4.7.tar.gz)

2017-04-14
----------
[farbfeld 3](//tools.suckless.org/farbfeld/) released:
[download](//dl.suckless.org/farbfeld/farbfeld-3.tar.gz)

2017-03-28
----------
[surf](//surf.suckless.org/) now uses webkit2 by default. The webkit1 version
is kept in the [surf-webkit1](//git.suckless.org/surf/log/?h=surf-webkit1)
branch. The “master” branch doesn't exist anymore, HEAD is now
[surf-webkit2](//git.suckless.org/surf/log/), so be sure to rebase your local
master commits onto surf-webkit1.

2016-11-20
----------
[slock 1.4](//tools.suckless.org/slock) released:
[download](//dl.suckless.org/tools/slock-1.4.tar.gz)

2016-09-26
----------
Videos of the [slcon 2016 talks](conferences/2016) are now available.

2016-08-24
----------
[slcon3](conferences/2016) preliminary schedule now published. If you want to
attend please register before: **2016-09-01**.

2015-12-19
----------
[surf 0.7](//surf.suckless.org) released:
[download](//dl.suckless.org/surf/surf-0.7.tar.gz)

2015-11-25
----------
[sent 0.2](//tools.suckless.org/sent) released:
[download](//dl.suckless.org/tools/sent-0.2.tar.gz)

2015-11-13
----------
Videos of the [slcon2 talks](conferences/2015) are now available.

2015-11-09
----------
[dwm 6.1](//dwm.suckless.org) released:
[download](//dl.suckless.org/dwm/dwm-6.1.tar.gz)

2015-09-23
----------
Kai and Anselm gave an interview about suckless.org on Randal Schwartz's [FLOSS
Weekly show](https://twit.tv/shows/floss-weekly/episodes/355?autostart=false)

2015-07-07
----------
[st 0.6](//st.suckless.org) released:
[download](//dl.suckless.org/st/st-0.6.tar.gz)

2015-02-14
----------
[slcon2](conferences/2015) will be held in Budapest on 2015-10-(30-31).

The CfP for interested participants is now open and will end on 2015-04-30.

2014-11-29
----------
[lsw 0.3](//tools.suckless.org/x/lsw) released:
[download](//dl.suckless.org/tools/lsw-0.3.tar.gz)

2014-11-24
----------
There will be a
[suckless assembly](https://events.ccc.de/congress/2014/wiki/Assembly%3ASuckless)
at the [31C3](https://events.ccc.de/congress/2014). The whole suckless
community is invited to come, meet and hack!

2014-08-05
----------
[sinit 0.9.1](//core.suckless.org/sinit) released:
[download](//dl.suckless.org/sinit/sinit-0.9.1.tar.gz)

2014-05-01
----------
[ubase 0.1](//core.suckless.org/ubase) released:
[download](//dl.suckless.org/ubase/ubase-0.1.tar.gz)

2014-01-21
----------
[tabbed 0.6](//tools.suckless.org/tabbed) released:
[download](//dl.suckless.org/tools/tabbed-0.6.tar.gz)

2013-06-16
----------
[sic 1.2](//tools.suckless.org/sic) released:
[download](//dl.suckless.org/tools/sic-1.2.tar.gz)

2013-05-07
----------
[xssstate 1.1](//tools.suckless.org/x/xssstate) released:
[download](//dl.suckless.org/tools/xssstate-1.1.tar.gz)

2013-05-06
----------
[tabbed 0.5](//tools.suckless.org/tabbed) released:
[download](//dl.suckless.org/tools/tabbed-0.5.tar.gz)

2013-04-21
----------
We are glad to announce the [slcon 2013](/conferences/2013) programme.

2012-11-29
----------
We are glad to announce the switch to git from mercurial in all of our
repositories. You can find them at [git.suckless.org](//git.suckless.org) Many
thanks to 20h for his contribution!

2012-10-28
----------
[sprop 0.1](//tools.suckless.org/x/sprop) released:
[download](//dl.suckless.org/tools/sprop-0.1.tar.gz)

2012-10-14
----------
Today we heard a very sad news that our friend, contributor and philosophical
advisor Uriel has passed away peacefully. We will miss him a lot.

![uriel](/uriel.png)

RIP

2011-05-14
----------
Anselm gave a talk about **The 'suckless.org' universe** at the [LinuxTag
2011](http://www.linuxtag.org) conference in Berlin.

2011-01-31
----------
[ii 1.6](//tools.suckless.org/ii) released (regression fix):
[download](//dl.suckless.org/tools/ii-1.6.tar.gz)

2010-06-04
----------
[9base-6](//tools.suckless.org/9base) released:
[download](//dl.suckless.org/tools/9base-6.tar.gz)

2010-03-28
----------
We learned today that the previous wmii maintainer, who wasn't actively
involved since 2007, Denis Grelich,
[died on 2010-03-12](https://web.archive.org/web/20140208043925/http://www.lmt.uni-saarland.de/de/aktuelles/grelich.html).
We thank him for his work. Rest in peace.

2010-03-07
----------
We applied as a mentoring organisation for GSoC 2010. See our [project ideas
for GSoC 2010](/project_ideas) page for further details.

2010-02-13
----------
Some of us will visit [CLT2010](http://chemnitzer.linux-tage.de/2010/). Anselm
will give a
[talk](http://chemnitzer.linux-tage.de/2010/vortraege/detail.html?idx=308)
about stali on the second day of CLT2010 at 17:00.

2009-12-28
----------
There was a small community meeting in Berlin! Thanks to all attendees.

2008-08-02
----------
[wmname 0.1](//tools.suckless.org/x/wmname) released:
[download](//dl.suckless.org/tools/wmname-0.1.tar.gz)

2008-07-29
----------
[sselp 0.2](//tools.suckless.org/x/sselp) released:
[download](//dl.suckless.org/tools/sselp-0.2.tar.gz)
