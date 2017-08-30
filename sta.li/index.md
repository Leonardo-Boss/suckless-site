![sta.li](logo.svg)

About
=====
stali is a brand new **sta**tic **li**nux distribution based on the original pre-2010
plans of the [suckless.org](//suckless.org) project, but with a couple of revised goals:

stali goals
-----------
* Follow the suckless [philosophy](//suckless.org/philosophy)
* Target x86\_64 and arm (RPi) support 
* Use custom stali.mk Makefile's for the base system (except Linux kernel so far)
* Ignore FHS of Linux, it simply sucks. Use a decent [filesystem](/filesystem) structure instead
* Don't use systemd (read [more](http://uselessd.darknedgy.net/ProSystemdAntiSystemd/)  about why it [sucks](//suckless.org/sucks/systemd))
* Make everything [musl libc](http://www.musl-libc.org/) based
* Achieve binary size reduction (through the avoidance of glibc and other bloated GNU libraries)
* Achieve better performance than any other x86\_64 or arm distribution, as only statically linked binaries are used
* Achieve better memory footprint than heavyweight distros using dynamic linking and all its problems
* Achieve better ABI stability and long-term maintenability of the static binaries (compared to their dynamic counterparts)
* Minimize security threat vector - potential flaws only on a per static binary basis (say good bye to the famous LD\_PRELOAD and .so dependency resolver problems)
* Include a hand selected collection of the best tools for each task (including [sbase](//core.suckless.org/sbase), [ubase](//core.suckless.org), ...)
* Upgrade/install using git, no package manager needed

Source
------
Check out all repositories at [git.sta.li](http://git.sta.li).

Download
--------
* 20160825 stali for RPi [stapi.img.gz](http://dl.sta.li/stapi.img.gz) available for download.
* 20160402 second [stali.iso](http://dl.sta.li/stali.iso) available for download.

Contributing
------------
Join the [suckless community](//suckless.org/community) to
discuss further development of stali.

Some related links
------------------
* 20160407 [InfoWorld article](http://www.infoworld.com/article/3048737/open-source-tools/stali-distribution-smashes-assumptions-about-linux.html) on "Stali distribution smashes assumptions about Linux"
* [musl libc](http://www.musl-libc.org/)
* [morpheus](http://morpheus.2f30.org/) - a statically linked musl based distro
* [oasis](https://github.com/michaelforney/oasis) - a statically linked musl/suckless/OpenBSD/plan9port based distro
* [bare](http://bare.li/) - a bare linux distro
* [Bifrost/Linux](http://bifrost.slu.se/) - a minimalist Linux distro for USB media
* [ldd arbitrary code execution](http://www.catonmat.net/blog/ldd-arbitrary-code-execution/) - Nice exploit
* [static linking](http://wayback.archive.org/web/20090525150626/http://blog.garbe.us/2008/02/08/01_Static_linking/) - My old blog entry
* [blog post about stali](http://wayback.archive.org/web/20110727064007/http://elevenislouder.blogspot.com/2010/02/stali.html)
* [On the Effectiveness of Address-Space Randomization](http://benpfaff.org/papers/asrandom.pdf)
