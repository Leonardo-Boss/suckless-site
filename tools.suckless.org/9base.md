9base
=====
9base is a port of various original Plan 9 tools for Unix, based on
[plan9port](http://swtch.com/plan9port/).

It currently contains the following original (no source changes) shell commands from Plan 9 for Unix:

* awk
* basename
* bc
* cat
* cleanname
* date
* dc
* echo
* grep
* ls
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
* uniq
* yacc

It also contains the Plan 9 libc, libbio, libregexp, libfmt and libutf.
The overall SLOC is about 36kSLOC, so this userland + all libs is much smaller as for example bash (duh!).


Download
--------
* [9base-3](http://dl.suckless.org/tools/9base-3.tar.gz) (20090803)
* <code>hg clone [http://hg.suckless.org/9base](http://hg.suckless.org/9base)</code>

Usage
-----
9base can be used to run [werc](http://werc.cat-v.org) instead of the full blown [plan9port](http://swtch.com/plan9port).

