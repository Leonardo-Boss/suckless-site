![stali](/stali.png)

static linux is based on a hand selected collection of the best tools for each
task and each tool being statically linked (including some X clients such as
st, surf, dwm, dmenu),

It also targets binary size reduction through the avoidance of glibc and other
bloated GNU libraries where possible (early experiments show that statically
linked binaries are usually smaller than their dynamically linked glibc
counterparts!!!). Note, this is pretty much contrary to what Ulrich Drepper
reckons about static linking.

Due to the side-benefit that statically linked binaries start faster, the
distribution also targets performance gains.

Contributing
------------

Sta.li is still in a design phase. You can contribute by adding ideas
to the [sandbox](http://sta.li/sandbox) or by working on
[the masterplan](http://sta.li/masterplan).

Join the [suckless community](http://suckless.org/community) to
discuss further development of sta.li.

Some related links
------------------
* [Bifrost/Linux](http://bifrost.slu.se/) - a minimalist Linux distro for USB media
* [$6M libc](http://codingrelic.geekhold.com/2008/11/six-million-dollar-libc.html) - Bionic is a nice library, though only usable for sane stuff
* [ldd arbitrary code execution](http://www.catonmat.net/blog/ldd-arbitrary-code-execution/) - Nice exploit
* [static linking](http://blog.garbe.us/2008/02/08/01_Static_linking/) - My old blog entry
* [blog post about stali](http://elevenislouder.blogspot.com/2010/02/stali.html)
* [On the Effectiveness of Address-Space Randomization](http://benpfaff.org/papers/asrandom.pdf)
* [musl libc](http://www.musl-libc.org/)
