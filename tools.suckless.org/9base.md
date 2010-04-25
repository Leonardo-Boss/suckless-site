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
* factor
* fortune
* freq
* getflags
* grep
* hoc
* ls
* mk
* mkdir
* mtime
* primes
* rc
* read
* sed
* seq
* sleep
* sort
* tail
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
* [9base-5](http://dl.suckless.org/tools/9base-5.tar.gz) (20100425)
* <code>hg clone [http://hg.suckless.org/9base](http://hg.suckless.org/9base)</code>

Usage
-----
9base can be used to run [werc](http://werc.cat-v.org) instead of the full blown [plan9port](http://swtch.com/plan9port).
