<H1>DWM</H1>

<H2>NAME</H2>

dwm - dynamic window manager
<H2>SYNOPSIS</H2>

<B>dwm</B>

[<B>-v</B>]

<H2>DESCRIPTION</H2>

dwm is a dynamic window manager for X. It manages windows in tiled, monocle
and floating layouts. Either layout can be applied dynamically, optimising the
environment for the application in use and the task performed.
<P>

In tiled layouts windows are managed in a master and stacking area. The master
area contains the window which currently needs most attention, whereas the
stacking area contains all other windows. In monocle layout all windows are
maximised to the screen size. In floating layout windows can be resized and
moved freely. Dialog windows are always managed floating, regardless of the
layout applied.
<P>

Windows are grouped by tags. Each window can be tagged with one or multiple
tags. Selecting certain tags displays all windows with these tags.
<P>

Each screen contains a small status bar which displays all available tags, the
layout, the number of visible windows, the title of the focused window, and the
text read from the root window name property, if the screen is focused. A
floating window is indicated with an empty square and a maximised floating
window is indicated with a filled square before the windows title.  The
selected tags are indicated with a different color. The tags of the focused
window are indicated with a filled square in the top left corner.  The tags
which are applied to one or more windows are indicated with an empty square in
the top left corner.
<P>

dwm draws a small border around windows to indicate the focus state.
<H2>OPTIONS</H2>

<DL COMPACT>
<DT><B>-v</B>

<DD>
prints version information to standard output, then exits.
</DL>
<H2>USAGE</H2>

<H3>Status bar</H3>

<DL COMPACT>
<DT><B>Standard input</B>

<DD>
is read and displayed in the status text area.
<DT><B>Button1</B>

<DD>
click on a tag label to display all windows with that tag, click on the layout
label toggles between tiled and floating layout.
<DT><B>Button3</B>

<DD>
click on a tag label adds/removes all windows with that tag to/from the view.
<DT><B>Mod1-Button1</B>

<DD>
click on a tag label applies that tag to the focused window.
<DT><B>Mod1-Button3</B>

<DD>
click on a tag label adds/removes that tag to/from the focused window.
</DL>
<H3>Keyboard commands</H3>

<DL COMPACT>
<DT><B>Mod1-Shift-Return</B>

<DD>
Start
<B>xterm.</B>

<DT><B>Mod1-,</B>

<DD>
Focus previous screen, if any.
<DT><B>Mod1-.</B>

<DD>
Focus next screen, if any.
<DT><B>Mod1-Shift-,</B>

<DD>
Send focused window to previous screen, if any.
<DT><B>Mod1-Shift-.</B>

<DD>
Send focused window to next screen, if any.
<DT><B>Mod1-b</B>

<DD>
Toggles bar on and off.
<DT><B>Mod1-t</B>

<DD>
Sets tiled layout.
<DT><B>Mod1-f</B>

<DD>
Sets floating layout.
<DT><B>Mod1-m</B>

<DD>
Sets monocle layout.
<DT><B>Mod1-space</B>

<DD>
Toggles between current and previous layout.
<DT><B>Mod1-j</B>

<DD>
Focus next window.
<DT><B>Mod1-k</B>

<DD>
Focus previous window.
<DT><B>Mod1-h</B>

<DD>
Decrease master area size.
<DT><B>Mod1-l</B>

<DD>
Increase master area size.
<DT><B>Mod1-Return</B>

<DD>
Zooms/cycles focused window to/from master area (tiled layouts only).
<DT><B>Mod1-Shift-c</B>

<DD>
Close focused window.
<DT><B>Mod1-Shift-space</B>

<DD>
Toggle focused window between tiled and floating state.
<DT><B>Mod1-Tab</B>

<DD>
Toggles to the previously selected tags.
<DT><B>Mod1-Shift-[1..n]</B>

<DD>
Apply nth tag to focused window.
<DT><B>Mod1-Shift-0</B>

<DD>
Apply all tags to focused window.
<DT><B>Mod1-Control-Shift-[1..n]</B>

<DD>
Add/remove nth tag to/from focused window.
<DT><B>Mod1-[1..n]</B>

<DD>
View all windows with nth tag.
<DT><B>Mod1-0</B>

<DD>
View all windows with any tag.
<DT><B>Mod1-Control-[1..n]</B>

<DD>
Add/remove all windows with nth tag to/from the view.
<DT><B>Mod1-Shift-q</B>

<DD>
Quit dwm.
</DL>
<H3>Mouse commands</H3>

<DL COMPACT>
<DT><B>Mod1-Button1</B>

<DD>
Move focused window while dragging. Tiled windows will be toggled to the floating state.
<DT><B>Mod1-Button2</B>

<DD>
Toggles focused window between floating and tiled state.
<DT><B>Mod1-Button3</B>

<DD>
Resize focused window while dragging. Tiled windows will be toggled to the floating state.
</DL>
<H2>CUSTOMIZATION</H2>

dwm is customized by creating a custom config.h and (re)compiling the source
code. This keeps it fast, secure and simple.
<H2>SEE ALSO</H2>

<B><A HREF="http://tools.suckless.org/dmenu">dmenu</A></B>(1)

<H2>BUGS</H2>

Java applications which use the XToolkit/XAWT backend may draw grey windows
only. The XToolkit/XAWT backend breaks ICCCM-compliance in recent JDK 1.5 and early
JDK 1.6 versions, because it assumes a reparenting window manager. As a workaround
you can use JDK 1.4 (which doesn't contain the XToolkit/XAWT backend) or you
can set the following environment variable (to use the older Motif
backend instead):
<B>AWT_TOOLKIT=MToolkit</B>.

<P>

GTK 2.10.9+ versions contain a broken <B>Save-As</B> file dialog implementation,
which requests to reconfigure its window size in an endless loop. However, its
window is still respondable during this state, so you can simply ignore the flicker
until a new GTK version appears, which will fix this bug, approximately
GTK 2.10.12+ versions.
<P>
