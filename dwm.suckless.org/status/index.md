status
======

The status bar text of **dwm** is stored in the WM_NAME X11 property of the
root window, which is managed by dwm.

It can be easily set and retrieved using standard Unix tools.

	xsetroot -name $status

	xprop -root -notype -f WM_NAME "8u" \
		| sed -n -r 's/WM_NAME = \"(.*)\"/\1/p'

Using shell scripts very well leads to big scripts, which pull in unneeded
dependencies. One solution for this is to write everything in C, which is much
more efficient.

slstatus - suckless status
--------------------------

General purpose status monitor for dwm and other window managers for Linux and
OpenBSD written in C for maxium efficiency.

You can read more [on the project page](https://tools.suckless.org/slstatus/).

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
