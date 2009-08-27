<H1>SURF</H1>

<H2>NAME</H2>

surf - simple webkit-based browser
<H2>SYNOPSIS</H2>

<B>surf</B> [<B>-ehvx</B>] [<B>-f</B> FILE] [<B>-u</B> URI]

<H2>DESCRIPTION</H2>

surf is a simple web browser based on WebKit/GTK+. It is able
to display websites and follow links. It supports the XEmbed protocol
which makes it possible to embed it in another application. Furthermore,
one can point surf to another URI by setting its XProperties.

<H2>OPTIONS</H2>

<DL COMPACT>
<DT><B>-e</B>

<DD>
Prints xid to standard output and waits until an application reparents the
window.

<DT><B>-f FILE</B>

<DD>
Sets the browser's URI to FILE. It is also possible to read from standard input.

<DT><B>-h</B>

<DD>
Prints usage information to standard output, then exits.

<DT><B>-u URI</B>

<DD>
Sets the browser's URI.

<DT><B>-v</B>

<DD>
Prints version information to standard output, then exits.

<DT><B>-x</B>

<DD>
Prints xid to standard output. This can be used to script the browser by using <B>xprop</B>(1).
</DL>
<H2>USAGE</H2>

<DL COMPACT>
<DT><B>Ctrl-Left</B>

<DD>
Walks back the history.
<DT><B>Ctrl-Right</B>

<DD>
Walks forward the history.
<DT><B>Ctrl-/</B>

<DD>
Opens the search-bar.
<DT><B>Ctrl-g</B>

<DD>
Opens the URL-bar.
<DT><B>Ctrl-r</B>

<DD>
Reloads the website.
<DT><B>Ctrl-Shift-r</B>

<DD>
Reloads the website without using cache.
</DL>
<H2>SEE ALSO</H2>

<B><A HREF="http://tools.suckless.org/dmenu">dmenu</A></B>(1) <B>xprop</B>(1)
<H2>BUGS</H2>

Please report them!
