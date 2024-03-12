backlight
=========

Description
-----------
This diff adds a backlight component to slstatus. It displays
backlight percentages. On OpenBSD device permissions have to be
adapted or slstatus has to be run as root (strongly discouraged!).

It was previously denied, because the backlight percentage can be
literally "seen" when looking at a screen, and porting it is not
possible without dirty hacks.

Download
--------
* [slstatus-backlight-4bd78c9.diff](slstatus-backlight-4bd78c9.diff)

Updated patch, with FreeBSD support:

* [slstatus-backlight-20240127-f68f492.diff](slstatus-backlight-20240127-f68f492.diff)

Authors
-------
* Tobias Tschinkowitz <he4d@posteo.de>
* David Demelier <markand@malikania.fr>
* drkhsh <me@drkhsh.at>
* Son Phan Trung <phantrungson17@gmail.com> (FreeBSD support)
