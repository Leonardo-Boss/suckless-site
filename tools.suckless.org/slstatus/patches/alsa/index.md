alsa
====

Description
-----------
This patch adds ALSA volume support. slstatus on-purpose makes use of
`/dev/mixer` per default because it is a much simpler interface and
all distributions still support it. Anyone refusing to use it may use
this patch.

To use, add `-DALSA` to `CPPFLAGS`, `-lasound` to `LDFLAGS` and pass the
control name (e.g. Master) as argument to `vol_perc` in config.h.

Download
--------
* [slstatus-alsa-4bd78c9.patch](slstatus-alsa-4bd78c9.patch)

Authors
-------
* Ivan Krylov <krylov.r00t@gmail.com>
* drkhsh <me@drkhsh.at>
