slock
=====
Simple X display locker. This is the simplest X screen locker we are
aware of. It is stable and quite a lot of people in our community are using it
every day when they are out with friends or fetching some food from the local
pub.

Configuration
-------------

Slock is configured via `config.h` like most other suckless.org software. Per
default it will turn the screen red on any keyboard press, if you are less
paranoid and turning red on failed login attempts suffices for you, set
`failonclear = 0` in `config.h`.

Development
-----------
You can [browse](http://git.suckless.org/slock) its source code repository
or get a copy using the following command:

	git clone http://git.suckless.org/slock

Download
--------
* [slock-1.3](http://dl.suckless.org/tools/slock-1.3.tar.gz) (20160212)

Xautolock
---------
Slock can be started after a specific period of user inactivity using
[xautolock](http://www.ibiblio.org/pub/linux/X11/screensavers/). The
command syntax is:

	xautolock -time 10 -locker slock

Simpler alternatives to xautolock might be
[xssstate](http://git.suckless.org/xssstate/) or
[xss](http://woozle.org/~neale/src/xss.html).

