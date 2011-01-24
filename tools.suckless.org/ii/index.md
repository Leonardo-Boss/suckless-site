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
* [ii 1.5](http://dl.suckless.org/tools/ii-1.5.tar.gz) (9.8kb) (20110124)

Development
-----------
You can [browse](http://hg.suckless.org/ii) its source code repository or get a copy using [Mercurial](http://www.selenic.com/mercurial/) with following command:

`hg clone http://hg.suckless.org/ii`

Contact
-------
send mail to [ii@modprobe.de]( mailto:ii@modprobe.de) or feel free to join #ii on irc.oftc.net
