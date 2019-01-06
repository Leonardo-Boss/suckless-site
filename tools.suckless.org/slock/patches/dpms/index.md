DPMS
====

Description
-----------
This patch interacts with the Display Power Signaling and automatically shuts
down the monitor after a configurable amount of seconds. The monitor will
automatically be activated by pressing a key or moving the mouse and the
password can be entered then.

Notes
-----
The number of seconds until the screen will be disabled is configured in
`config.h` via the `monitortime` option.

This patch was written against the `1.4`-tag.

Download
--------
* [slock-dpms-20170923-fa11589.diff](slock-dpms-20170923-fa11589.diff)

Authors
-------
* Alvar Penning <[post@0x21.biz](mailto:post@0x21.biz)>
