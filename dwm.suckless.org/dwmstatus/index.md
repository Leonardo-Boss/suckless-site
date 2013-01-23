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

* [profil-dwmstatus-1.0.c](profil-dwmstatus-1.0.c) - cpufreq, battery percent and date/time
* [p1c0-dwmstatus-volume.c](p1c0-dwmstatus-volume.c) - volume percentage & bar display


Helper functions
----------------

If you have simple C functions for gathering system information, please
add them here as file or as code example.

* [Support for ACPI battery status Linux](new-acpi-battery.c)
* [Reading out a temperature from /sys](dwmstatus-temperature.c)
* [Reading eth0 up-, and downspeed from /proc/net](dwmstatus-netusage.c)
* [Counting number of mails in a Maildir/new](mail_counter.c)
* [Get disk usage and execute some check at different moments](diskspace_timechk.c) : Because you don't want to check new mails every second

Questions
---------

If you have any questions regarding dwmstatus, contact Christoph Lohmann
(<20h@r-36.net>).

