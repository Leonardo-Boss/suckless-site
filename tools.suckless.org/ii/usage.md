Multitail + Vim
---------------
To make ii a bit more comfortable use it in combination with the multitail program and for example with vim. Run vim in the server directory and use key mapping like:
`map w1 :.w >> \\#ii/in<cr>`
`map w2 :.w >> \\#wmii/in<cr>`
to post to channels. Thanks to Matthias Kopfermann for this hint.

Another cool thing is to use it with splitvt so you have multitail windows on top and for example four lines of vim at the bottom.

There is also a blog entry which describes the whole configuration: 
[http://nion.modprobe.de/blog/archives/440-Using-the-ii-irc-client.html](http://nion.modprobe.de/blog/archives/440-Using-the-ii-irc-client.html)

Popup Chat Windows
------------------
You can also try [pcw](http://www.deepcube.net/code/pcw) which will (by default) open a new terminal for each channel you join.  On startup, and after receiving SIGUSR1, pcw will open a terminal for every channel you are already in.  By default it depends on [srw](http://www.deepcube.net/code/srw) as a line editing wrapper.  Just run 'pcw ~/irc' (or whichever directory you have ii using) then start up ii.  Note that closing a terminal does not exit the channel.  If that channel receives a new message the terminal will open again.  To leave the channel you must first '/l' and then close the window.  (the combination of pcw + ii + bitlbee let me stop using pidgin :-D)

Web frontend
------------
phpii is a simple web frontend for ii. You can see a demo of it and download the php source here: [phpii homepage](http://yogan.meinungsverstaerker.de/phpii)
