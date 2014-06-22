st on OpenBSD
=============

Description
-----------

On OpenBSD, terminfo descriptions are searched for in terminfo 
databases, before terminfo files are considered.  At present,
the terminfo information stored in the systemwide terminfo db
are from st version 0.1.1, conflicting with newer versions of
st and thus causing misbehaviour.  This patch renames the name
of st to st-git, so that no terminfo description can be found
in the OpenBSD database, and therefore the right information is
loaded from the installed terminfo file.


Notes
-----

I tested this diff with the latest code from git, but the principle
applies to the released versions of st as well, i just have not tried
them.  Once a new stable version of st is out, the corresponding 
changes to st.info can be pushed upstream (to ncurses) and then be 
merged back to OpenBSD, making this patch obsolete for future stable
versions of st.  More information on the issue can be found in this 
[thread][1].



Download
--------

* [st-on-openbsd.diff][2]

[1]: http://marc.info/?l=openbsd-misc&m=139540215025526&w=2
[2]: st-on-openbsd.diff


Author
------

 * Nils Reuße - nilsreusse @ gmail
