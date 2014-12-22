slock
=====
Simple X display locker. This is the simplest X screen locker we are
aware of. It is stable and quite a lot of people in our community are using it
every day when they are out with friends or fetching some food from the local
pub.

Development
-----------
You can [browse](http://git.suckless.org/slock) its source code repository
or get a copy using the following command:

	git clone http://git.suckless.org/slock

Download
--------
* [slock-1.2](http://dl.suckless.org/tools/slock-1.2.tar.gz) (20141222)

Xautolock
---------
Slock can be started after a specific period of user inactivity using
[xautolock](http://www.ibiblio.org/pub/linux/X11/screensavers/). The
command syntax is:

	xautolock -time 10 -locker slock

Simpler alternatives to xautolock might be
[xssstate](http://git.suckless.org/xssstate/) or
[xss](http://woozle.org/~neale/src/xss.html).

