SIMPLE IRC CLIENT
=================
sic is an extremely simple IRC client. It consists of less than 250 lines of code. It is the little brother of [irc it](/ii).

Download
--------
* [sic 1.0](http://dl.suckless.org/tools/sic-1.0.tar.gz) (4kb) (20080729)

Development
-----------
You can [browse](http://hg.suckless.org/sic) its source code repository or get a copy using [Mercurial](http://www.selenic.com/mercurial/) with the following command:

	hg clone http://hg.suckless.org/sic


<H2>SYNOPSIS</H2>

<B>sic</B>

[<B>-h</B> &lt;host&gt;]

[<B>-p</B> &lt;port&gt;]

[<B>-n</B> &lt;nick&gt;]

[<B>-k</B> &lt;keyword&gt;]

[<B>-v</B>]

<A NAME="lbAD">&nbsp;</A>
<H2>DESCRIPTION</H2>

<B>sic</B>

is an extremely fast, small and simple irc client.  It reads commands from
standard input and prints all server output to standard output. It multiplexes 
all channel traffic into one output so you don't have to switch
different channel buffers; this is actually a feature.
<A NAME="lbAE">&nbsp;</A>
<H2>OPTIONS</H2>

<DL COMPACT>
<DT><B>-h &lt;host&gt;</B>

<DD>
Overrides the default host (irc.oftc.net)
<DT><B>-p &lt;port&gt;</B>

<DD>
Overrides the default port (6667)
<DT><B>-n &lt;nickname&gt;</B>

<DD>
Overrides the default nick ($USER)
<DT><B>-k &lt;keyword&gt;</B>

<DD>
Specifies the keyword to authenticate your nick on the host
<DT><B>-v</B>

<DD>
Prints version information to standard output, then exits.
</DL>
<A NAME="lbAF">&nbsp;</A>
<H2>COMMANDS</H2>

<DL COMPACT>
<DT><B>:j #channel</B>

<DD>
Join a channel
<DT><B>:l #channel</B>

<DD>
Leave a channel
<DT><B>:m #channel/user msg</B>

<DD>
Write a message to #channel/user
<DT><B>:s #channel/user</B>

<DD>
Set default channel/user
<DT>Everything which is not a command is simply sent to the server.<DD>
<P>
</DL>
