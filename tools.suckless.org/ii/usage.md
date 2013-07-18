Multitail + Vim
---------------
To make ii a bit more comfortable, use it in combination with the multitail program and for example with vim. Run vim in the server directory and use key mapping like:
`map w1 :.w >> \\#ii/in<cr>`
`map w2 :.w >> \\#wmii/in<cr>`
to post to channels. Thanks to Matthias Kopfermann for this hint.

Another cool thing is to use it with splitvt so you have multitail windows on top and for example four lines of vim at the bottom.

There is also a blog post which describes the whole configuration: 
[http://nion.modprobe.de/blog/archives/440-Using-the-ii-irc-client.html](http://nion.modprobe.de/blog/archives/440-Using-the-ii-irc-client.html)

Popup Chat Windows
------------------
You can also try [pcw](http://bitbucket.org/emg/pcw) which will (by default) open a new terminal for each channel you join.  On startup, and after receiving SIGUSR1, pcw will open a terminal for every channel you are already in.  By default it depends on [srw](http://bitbucket.org/emg/srw) as a line editing wrapper.  Just run 'pcw ~/irc' (or whichever directory you have ii using) then start up ii.  Note that closing a terminal does not exit the channel.  If that channel receives a new message the terminal will open again.  To leave the channel you must first '/l' and then close the window.  (the combination of pcw + ii + bitlbee let me stop using pidgin :-D)

Web frontend
------------
phpii is a simple web frontend for ii. You can see a demo of it and download the php source here: [phpii homepage](http://yogan.meinungsverstaerker.de/phpii)

iii
---
[iii](https://github.com/c00kiemon5ter/iii) (maybe interactive ii, or something) is a collection of shell scripts to produce a cli frontend to ii.
iii looks like a "normal" irc client (ie irssi), working on top of ii.
It features connections to multiple servers and autojoin of channels, auto-reconnect to servers and channels on network failure, autocompletion through rlwrap, formatted and colored output etc. 
It can be used directly in the command line, or like pcw spawning terminals for each channel, or inside a dedicated tmux session. 
Read the readme file, and do not hesitate to ask c00kiemon5ter for help on freenode and oftc.

iil
---
The [iil](http://chiselapp.com/user/onys/repository/iil/home) (short for iiless) is fast viewer/reader for ii irc client, using your shell and less.

uii
---
[uii](https://github.com/erlehmann/uii) (usable irc it) is a set of shell scripts that provides readline support, uses inotify to monitor channels and pops up notifications.

im-scripts
----------
[im-scripts](http://github.com/gravicappa/im-scripts) is a set of sh-scripts for convenient use of ii and ji.

wii
---
[wii](http://github.com/younix/wii) is a simple web frontend for ii.
It just uses HTML, java-script and shell-script.

xii
---
[xii](http://github.com/younix/xii) is a simple X11 frontend for ii.
It is written in plain C based on Xaw and Xt library.
