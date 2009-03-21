BUGS
====

Debugging
---------
If you find any crashes, please send a full backtrace to the dedicated mailing list.
You can create backtraces with `gdb`:

Before starting a program, you may have to allow core file creation. It is
recommended that you put this in your profile:

    $ ulimit -c unlimited

Then start the program as usual.

After the program crashes, do the following:

    $ gdb --quiet `which program` /path/to/core
    gdb> bt full

If you encounter freezes (no crash at all) of the program, you can debug as follows:

    $ gdb --quiet `which program` --attach `pgrep -o  program`
    gdb> bt full

Send the output of that command to the mailing list along with the output of
`program -v`! Thank you!

