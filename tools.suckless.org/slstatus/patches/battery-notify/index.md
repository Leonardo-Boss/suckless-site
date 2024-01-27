battery notify
=========

Description
-----------
This diff adds a battery notifications for specific levels you defined to slstatus.
It sends notification using "notify-send" command.
In config.h file there is array called "notifiable_levels" add any levels you want.

Important
---------
* "libnotify" is required to be installed
* Add ({battery_notify, "", "BAT1"},) to config file in args array - replace BAT1 with your battery name
* FreeBSD and OpenBSD are not supported

Download
--------
* [slstatus-battery-notify-20240127-a56a0a5.diff](slstatus-battery-notify-20240127-a56a0a5.diff)

Authors
-------
* keroles [github](https://github.com/keroles-ashraf-dev)
