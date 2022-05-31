setstatus
=========

Description
-----------
Enables to set the status with dwm itself. No more xsetroot bloat!
To change the status to `foo bar` execute:

    dwm -s "foo bar"

You can set the status with this command even if dwm is already running as your
wm. It will start a new process, set the status and exit. The parameter `-s` is
not meant to be used at startup when you launch dwm as your wm.

Piping into `dwm -s` is currently not supported but you can set the
status to the output of any command by doing something like:

    dwm -s "$(run_command_which_outputs_the_status)"

For example to set the status to the current date run:

    dwm -s "$(date)"

Download
--------
* [dwm-setstatus-6.2.diff](dwm-setstatus-6.2.diff)

Author
------
* Aleksandrs Stier - <aleks.stier@icloud.com> (6.2)
