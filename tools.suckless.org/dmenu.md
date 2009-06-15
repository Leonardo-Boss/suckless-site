DMENU
=====
dynamic menu is a generic menu for X, originally designed for [dwm](http://dwm.suckless.org/).
It  manages  huge  amounts  (up  to  10.000  and more) of user defined menu
items efficiently.

Download
--------
* [dmenu-4.0](http://code.suckless.org/dl/tools/dmenu-4.0.tar.gz) (20090417)

Mailing list
------------
* `dev+subscribe@suckless.org` ([Archives](http://lists.suckless.org/dev/)) ([Old Archives](http://lists.suckless.org/dwm/)) (see [community](http://suckless.org/common/community/) for details)

<H2>SYNOPSIS</H2>

<B>dmenu</B>

[<B>-i</B>]

[<B>-b</B>]

[<B>-fn</B> &lt;font&gt;]

[<B>-nb</B> &lt;color&gt;]

[<B>-nf</B> &lt;color&gt;]

[<B>-p</B> &lt;prompt&gt;]

[<B>-sb</B> &lt;color&gt;]

[<B>-sf</B> &lt;color&gt;]

[<B>-v</B>]

<A NAME="lbAD">&nbsp;</A>
<H2>DESCRIPTION</H2>

<A NAME="lbAE">&nbsp;</A>
<H3>Overview</H3>

dmenu is a generic menu for X, originally designed for
<B>dwm</B>(1).

It manages huge amounts (up to 10.000 and more) of user defined menu items
efficiently.
<A NAME="lbAF">&nbsp;</A>
<H3>Options</H3>

<DL COMPACT>
<DT><B>-i</B>

<DD>
makes dmenu match menu entries case insensitively.
<DT><B>-b</B>

<DD>
defines that dmenu appears at the bottom.
<DT><B>-fn &lt;font&gt;</B>

<DD>
defines the font.
<DT><B>-nb &lt;color&gt;</B>

<DD>
defines the normal background color (#RGB, #RRGGBB, and color names are supported).
<DT><B>-nf &lt;color&gt;</B>

<DD>
defines the normal foreground color (#RGB, #RRGGBB, and color names are supported).
<DT><B>-p &lt;prompt&gt;</B>

<DD>
defines a prompt to be displayed before the input area.
<DT><B>-sb &lt;color&gt;</B>

<DD>
defines the selected background color (#RGB, #RRGGBB, and color names are supported).
<DT><B>-sf &lt;color&gt;</B>

<DD>
defines the selected foreground color (#RGB, #RRGGBB, and color names are supported).
<DT><B>-v</B>

<DD>
prints version information to standard output, then exits.
</DL>
<A NAME="lbAG">&nbsp;</A>
<H2>USAGE</H2>

dmenu reads a list of newline-separated items from standard input and creates a
menu.  When the user selects an item or enters any text and presses Return, his/her
choice is printed to standard output and dmenu terminates.
<P>

dmenu is completely controlled by the keyboard. The following keys are recognized:
<DL COMPACT>
<DT><B>Any printable character</B>

<DD>
Appends the character to the text in the input field.  This works as a filter:
only items containing this text will be displayed.
<DT><B>Left/Right (Mod1-h/Mod1-l)</B>

<DD>
Select the previous/next item.
<DT><B>PageUp/PageDown (Mod1-k/Mod1-j)</B>

<DD>
Select the first item of the previous/next 'page' of items.
<DT><B>Home/End (Mod1-g/Mod1-G)</B>

<DD>
Select the first/last item.
<DT><B>Tab (Control-i)</B>

<DD>
Copy the selected item to the input field.
<DT><B>Return (Control-j)</B>

<DD>
Confirm selection and quit (print the selected item to standard output). Returns
<B>0</B>

on termination.
<DT><B>Shift-Return (Control-Shift-j)</B>

<DD>
Confirm selection and quit (print the text in the input field to standard output).
Returns
<B>0</B>

on termination.
<DT><B>Escape (Control-bracketleft)</B>

<DD>
Quit without selecting an item. Returns
<B>1</B>

on termination.
<DT><B>Backspace (Control-h)</B>

<DD>
Remove a character from the input field.
<DT><B>Control-u</B>

<DD>
Remove all characters from the input field.
<DT><B>Control-w</B>

<DD>
Remove all characters of current word from the input field.
</DL>
