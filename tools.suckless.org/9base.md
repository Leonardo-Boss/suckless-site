9base
=====
9base is a port of various original Plan 9 tools for Unix, based on
[plan9port](http://swtch.com/plan9port/).

It currently contains the following original (no source changes) shell commands from Plan 9 for Unix:

* awk
* basename
* bc
* cal
* cat
* cleanname
* date
* dc
* du
* echo
* grep
* hoc
* ls
* mk
* rc
* read
* sed
* seq
* sleep
* sort
* tee
* test
* touch
* tr
* troff
* uniq
* yacc

It also contains the Plan 9 libc, libbio, libregexp, libfmt and libutf.
The overall SLOC is about 40kSLOC, so this userland + all libs is much smaller than, e.g. bash (duh!).


Download
--------
* [9base-4](http://dl.suckless.org/tools/9base-4.tar.gz) (20090827)
* <code>hg clone [http://hg.suckless.org/9base](http://hg.suckless.org/9base)</code>

Usage
-----
9base can be used to run [werc](http://werc.cat-v.org) instead of the full blown [plan9port](http://swtch.com/plan9port).
