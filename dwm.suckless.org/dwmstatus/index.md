dwmstatus
=========

**dwm**'s status bar text can be set using the `xsetroot -name $status`
notion. This very well leads to big scripts, which pull in unneeded
dependencies. One solution for this is to write everything in C. C is much
more efficient. This page will give you a barebone dwmstatus project and
show examples on how to extend it to your needs.

The Barebone
------------

	git clone git://git.suckless.org/dwmstatus

This is a barebone project you can use for changing it to your needs.

User submitted versions
-----------------------

Please add your own version of dwmstatus here. 

* [dwmsd](https://github.com/johnko/dwmsd) - a daemon that listens on localhost tcp (may be useful as a base for asynchronous updates)
* [profil-dwmstatus-1.0.c](profil-dwmstatus-1.0.c) - cpufreq, battery percent and date/time
* [p1c0-dwmstatus-volume.c](p1c0-dwmstatus-volume.c) - volume percentage & bar display
* [suspend-statusbar.c](suspend-statusbar.c) - loadavg, wifi, battery and date. If battery goes below threshold - run suspend command


Helper functions
----------------

If you have simple C functions for gathering system information, please
add them here as file or as code example.

* [Support for ACPI battery status Linux](new-acpi-battery.c)
* [Reading out a temperature from /sys](dwmstatus-temperature.c)
* [Reading eth0 up-, and downspeed from /proc/net](dwmstatus-netusage.c)
* [Counting number of mails in a Maildir/new](mail_counter.c)
* [Get disk usage and execute some check at different moments](diskspace_timechk.c) : Because you don't want to check new mails every second
* [Detecting Man-In-The-Middle](dwmstatus-mitm.c)
* [Show line per line the content of a file](dynamic_info.c) : See
  tmpinfo function. It prints line after line the content of
  /tmp/dwmbuf.
* [Simple function to have uptime](uptime.c)
* [Simple function to have mpd title/artist info](mpdstatus.c)
* [Print any info in dwm status bar via fifo](fifo.c). Replaces
  dynamic_info.
* [Battery function](batterystatus.c) : Battery percentage and status. + if
  charging, - if discharging, = if full.

Questions
---------

If you have any questions regarding dwmstatus, contact Christoph Lohmann
(<20h@r-36.net>).

