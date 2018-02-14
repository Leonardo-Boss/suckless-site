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

Please add your own version of dwmstatus here (keeping the list sorted).

* [barM](barM.c) - can display all, time/date, ram usage, output of commands (the New BarMonitor).
* [dstat](https://www.umaxx.net/dl) [Screenshot](https://www.umaxx.net/dstat.png) - displays the current network throughput, CPU usage, performance settings, battery status, temperature, volume settings, as well as the current date and time (OpenBSD only, no support for Linux).
* [dwms](https://github.com/ianremmler/dwms) - displays time, network, audio, and battery status, written in Go using XGB.
* [dwmsd](https://github.com/johnko/dwmsd) - a daemon that listens on localhost tcp (may be useful as a base for asynchronous updates)
* [dwmstat](https://notabug.org/kl3/dwmstat) - small and simple | IP, CPU temperature, system volume, current local time (and more) | config.h | OpenBSD
* [go-dwmstatus](https://github.com/oniichaNj/go-dwmstatus) - A Go bar that prints current MPD song, load averages, time/date and battery percentage.
* [gods](https://github.com/schachmat/gods) - implemented in Go. prints network speed, cpu, ram, date/time
* [profil-dwmstatus-1.0.c](profil-dwmstatus-1.0.c) - cpufreq, battery percent and date/time
* **slstatus** - suckless alternative to bash scripts (inefficient) and conky (bloated for this use) - it displays various system information and can be customized via config.h - [git mirror](https://git.drkhsh.at/slstatus), [github](https://github.com/drkhsh/slstatus)
* [suspend-statusbar.c](https://github.com/snobb/dwm-statusbar) - date, loadavg, battery and more. If battery goes below threshold - run suspend command

Helper functions
----------------

If you have simple C functions for gathering system information, please
add them here as file or as code example.

* [Support for ACPI battery status Linux](new-acpi-battery.c)
* [Reading out a temperature from /sys](dwmstatus-temperature.c)
* [Reading up-, and downspeeds of all network interfaces from /proc/net](dwmstatus-netusage.c)
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
* [Alsa Volume API](getvol.c) : Alsa Volume via the Alsa API

Questions
---------

If you have any questions regarding dwmstatus, contact Christoph Lohmann
(<20h@r-36.net>).

