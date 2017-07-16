Irc it (ii)
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
    |-- #suckless
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
* [ii 1.7](http://dl.suckless.org/tools/ii-1.7.tar.gz) (10kb) (20130105)

Development
-----------
You can [browse](http://git.suckless.org/ii) its source code repository or get
a copy using the following command:

`git clone http://git.suckless.org/ii`

Contact
-------
send mail to [dev@suckless.org](mailto:dev@suckless.org) or feel free to join #suckless on irc.oftc.net

