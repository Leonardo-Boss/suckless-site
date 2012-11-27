dwmstatus
=========

**dwm**'s status bar text can be set using the `xsetroot -name $status`
notion. This very well leads to big scripts, which pull in unneeded
dependencies. One solution for this is to write everything in C. C is much
more efficient. This page will give you a barebone dwmstatus project and
show examples on how to extend it to your needs.

The Barebone
------------

* [dwmstatus-1.1.tar.gz](dwmstatus-1.1.tar.gz)

This is a barebone project you can use for changing it to your needs.

User submitted versions
-----------------------

Please add your own version of dwmstatus here. 

* [profil-dwmstatus-1.0.c](profil-dwmstatus-1.0.c) - cpufreq, battery percent and date/time


Helper functions
----------------

If you have simple C functions for gathering system information, please
add them here as file or as code example.

* [Support for ACPI battery status Linux](new-acpi-battery.c)
* [Reading out a temperature from /sys](dwmstatus-temperature.c)

Questions
---------

If you have any questions regarding dwmstatus, contact Christoph Lohmann
<20h@r-36.net>.

