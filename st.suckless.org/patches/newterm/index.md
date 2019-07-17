New terminal in current directory
=================================

This patch allows you to spawn a new st terminal using Ctrl-Shift-Return. It
will have the same CWD (current working directory) as the original st instance.

The `getcwd_by_pid` function is inspired on [the function with the same name of
dvtm](https://github.com/martanne/dvtm/blob/master/dvtm.c#L1027).

Download
--------

* [st-newterm-0.8.2.diff](st-newterm-0.8.2.diff)

Authors
-------
* Matías Lang
