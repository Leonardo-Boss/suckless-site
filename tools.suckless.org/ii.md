IRC IT (II)
===========
ii is a minimalist FIFO and filesystem-based IRC client. It creates an irc directory tree with server, channel and nick name directories. In every directory a FIFO in file and a normal out file is created.

The in file is used to communicate with the servers and the out files contain the server messages. For every channel and every nick name there are related in and out files created. This allows IRC communication from command line and adheres to the Unix philosophy.
example

Join a channel as follows: `$ echo "/j #wmii" > in`
and ii creates a new #wmii (channel) directory with in and out files.

    irc/irc.oftc.net
    |-- #wmii
    |   |-- in
    |   `-- out
    |-- #ii
    |   |-- in
    |   `-- out
    |-- #wmii
    |   |-- in
    |   `-- out
    |-- chanserv
    |   `-- out
    |-- nickserv
    |   |-- in
    |   `-- out
    |-- out
    `-- in

It consists of <= 500 lines of code and is the big brother of [sic](/sic)

Download
--------
* [ii 1.4](http://dl.suckless.org/tools/ii-1.4.tar.gz) (9.4kb) (20080809)

Development
-----------
You can [browse](http://hg.suckless.org/ii) its source code repository or get a copy using [Mercurial](http://www.selenic.com/mercurial/) with following command:

`hg clone http://hg.suckless.org/ii`

Usage
------
To make ii a bit more comfortable use it in combination with the multitail program and for example with vim. Run vim in the server directory and use key mapping like:
`map w1 :.w >> \\#ii/in<cr>`
`map w2 :.w >> \\#wmii/in<cr>`
to post to channels. Thanks to Matthias Kopfermann for this hint.

Another cool thing is to use it with splitvt so you have multitail windows on top and for example four lines of vim at the bottom.

There is also a blog entry which describes the whole configuration: 
[http://nion.modprobe.de/blog/archives/440-Using-the-ii-irc-client.html](http://nion.modprobe.de/blog/archives/440-Using-the-ii-irc-client.html)

You can also try [pcw](http://bitbucket.org/emg/pcw) which will (by default) open a new terminal for each channel you join.  By default it depends on [srw](http://bitbucket.org/emg/srw) as a line editing wrapper.  Just run 'pcw ~/irc' (or whichever directory you have ii using) then start up ii.  Note that closing a terminal does not exit the channel.  If that channel receives a new message the terminal will open again.  To leave the channel you must first '/l' and then close the window.  (the combination of pcw + ii + bitlbee let me stop using pidgin :-D)

Web frontend
------------
phpii is a simple web frontend for ii. You can see a demo of it and download the php source here: [phpii homepage](http://yogan.meinungsverstaerker.de/phpii)

Bots
----

Its also very easy to write shell script based bots with ii. As a short example look at this:

    tail -f \\#<CHANNEL>/out |  
    while read foo ; do  
        name=$(echo $foo | awk '{print $2}' | sed 's,<\\(.*\\)>,\\1,')  
        if awk 'BEGIN{srand(); exit rand()<.1)}' ; then  
            echo "$name: WHAT??" ;  
        fi;  
    done

Its just spamming a channel but I guess your imagination is boundless.
I also heard about people using it together with nagios to get the notifications into IRC.
Remember to strip input for example with tr(1), tr -cd "0-9a-zA-Z" for example would only allow numbers and characters.

If you want to see a live demonstration of a bot written for ii, join #grml on freenode, the grml-tips bot which searches
for [grml](http://www.grml.org) tips and gives a link or error messages is written in 45 lines of /bin/sh. No, I will not publish
the code since I really suck in shell programming :)

Stat scripts
------------

If you want to use for example [pisg](http://pisg.sf.net/) to generate channel stats this will also work if you choose the irssi log format.

Automatic reconnects
--------------------

If you want some kind of automatic reconnects in ii you can make a something like this in a shell script:

    while true; do  
        ii -s irc.oftc.net -n iifoo -f "John Doe"  
        iipid=$!  
        sleep 5  
        echo "/j #ii" > ~/irc/irc.oftc.net/in  
        while [[ -e /proc/$iipid ]]; do  
            sleep 30  
        done  
    done  

IPv6
----

There is no official IPv6 support included but there is a patch by Alexander Clouter to enable IPv6:  
[IPv6 patch by Alexander Clouter](http://suckless.org/~nion/ii-ipv6.patch)


bots for irc it (ii)
====================

nagios
------

Simple Perl script "nagios_post.pl" as interface between [Nagios](http://www.nagios.org/) and ii:

    #!/usr/bin/perl -w

    my $users = "your_nickname(s)";
    my $pipe = "$ENV{HOME}/irc/your_irc_server/#your_channel/in";
    my %color = (
       red    => "\0034",
       purple => "\0036",
       yellow => "\0038",
       clear  => "\00315",
       blue   => "\0032\002",
       green  => "\0033",
       normal => "\0031",
       );

    open(PIPE, '>', $pipe) or die "Can't write to $pipe: $!";
    while (<>) {
          s/Host [a-z0-9_.]+ is down/$color{red}$&$color{normal}/i;
          s/PROBLEM.*?CRITICAL/$color{red}$&$color{normal}/i;

          s/PROBLEM.*?WARNING/$color{yellow}$&$color{normal}/i;
          s/Host [a-z0-9_.]+ is up/$color{green}$&$color{normal}/i;

          s/RECOVERY.*?OK/$color{green}$&$color{normal}/i;

          print PIPE "$users: $_";
    }
    close(PIPE);

The appropriate Nagios configuration looks like this:

    # 'notify-by-irc' command definition
    define command{
            command_name    notify-by-irc
            command_line    /usr/bin/printf "%b" "$TIME$ $NOTIFICATIONTYPE$ $HOSTNAME$/$SERVICEDESC$ $SERVICESTATE$ $SERVICEOUTPUT$\n" | /home/nagios/bin/nagios_post.pl 
           }

    # 'host-notify-by-irc' command-notification
    define command{
            command_name    host-notify-by-irc
            command_line    /usr/bin/printf "%b" "$TIME$ Host $HOSTALIAS$ is $HOSTSTATE$ -- $HOSTOUTPUT$\n" | /home/nagios/bin/nagios_post.pl
           }

Start ii appropriately and add notify-by-irc and host-notify-by-irc to the appropriate "service&#x5f;notification&#x5f;commands" and "host&#x5f;notification&#x5f;commands" -- and you have your own Nagios IRC bot.

rsstail
-------

Just piping the output of [rsstail](http://www.vanheusden.com/rsstail/) into the fifo "in" should work. More detailed examples are welcome.


Contact
-------
send mail to [ii@modprobe.de]( mailto:ii@modprobe.de) or feel free to join #ii on irc.oftc.net

