FAQ
===
### Which operating systems does wmii run on?
wmii is compatible with POSIX-compliant operating systems, including:

* Linux
* *BSD
* Mac OS X
* Solaris
* cygwin (*reported, not confirmed*)

### Which external libraries are needed?
* libc is the base userland library for all programs written in C, and is thus installed on all systems. 
* Xlib is the base of the X Window System, thus it is installed on systems with X11 support. A separate development package might have to be installed for compiling, such as `libx11-dev` Debian-based systems.
* [libixp](/libs/libixp.html) is a stand-alone client/server 9P library

Further dependencies are:

* `xmessage` - A standard part of most X11 installations.

### I've just installed the new snapshot but something doesn't work.
Please remove all old configuration files and install again.

### OMG, how come there's a massive border at the bottom of my terminal!?
Your terminal has asked to only be resized in certain
increments, and there's not enough space for another row. `wmii`
is forced to compromise and leave blank space around it.

### On FreeBSD, using [p9p](http://plan9.us), I get an error on the console about not being able to open /dev/fd/7.
You need to mount fdescfs on /dev/fd. See the BUGS section of
[rc(1)](http://swtch.com/plan9port/man/man1/rc.html) for
details.

### How do I get a list of the key bindings that are currently in use?
The best place to look is the `rc.wmii` or `wmiirc` file. You
can check which one is being used via
`ps aux | grep wmii | grep rc`
while `wmii` is running. You can also check `wmii(1)` for a
table of default key bindings.

### How do I move a window to a different view?
Just retag it. Tag it `a+b` to let it show up on both views `a`
and `b`. Or, you can tag with `+b` to make the window appear on the
`b` view without removing it from existing views.

### How do I enable tabbing?
Tabbing has been replaced with stacking. Press `$MODKEY-s` to
set a column to stacking. If you want to hide the titlebars of
collapsed windows in a stack, run 

    wmiir xwrite /tag/sel/ctl colmode sel +max

### How do I get information about a specific client window?
In general, that's the job of X applications like `xprop`,
`xwininfo`, and click. `wmii`, however, does provide the class
and instance names of clients in their props file:

    % wmiir read /client/sel/prop
    XTerm:xterm:/home/kris/wmii/-kris

You can obtain size information about a client by reading the
index file of a given view.

    % wmiir read /tag/sel/index

### How do I set a background image?
Use third party tools like `wmsetbg` (from WindowMaker), `qiv`,
`feh`, `xv`, `xloadimage`, `bsetbg` (from `blackbox`), etc. You
can do this from your `~/.xinitrc`, or your `rc.wmii` or
`wmiirc` files.

### How do I define clients to be floating _and_ having a certain tag?
You simply write a rule into your `/tagrules` file:

    /Psi.*/ -> ~+psi

### Why doesn't `UTF-8` work?
Set a Unicode(ISO-10646)-capable font in your `wmiirc`, by changing `WMII_FONT` to something like

    -*-courier-*-r-*-*-12-*-*-*-*-*-iso10646-*

### How do I enable sequential shortcuts (like in ratpoison)? <small>or</small>
### How to combine wmii with (x)emacs? The shortcuts collide!
Some applications make extensive use of the Alt key. The
preferred solution is to use the Windows, Apple, or Penguin key
in its place. It's assigned the identifier `Mod4` on most
systems. Set the following in `rc.wmii.local` or `wmiirc`:

    MODKEY=Mod4

Alternatively, you can use key chains, so you're required to
press a certain key combination before wmii accepts its
shortcuts:

    MODKEY=Control-i,

With `xev` and `xmodmap`, it is possible to find other suitable keybindings.

### How do I resize and move windows with the mouse?
    $MODKEY+LeftMouse moves a window.
    $MODKEY+RightMouse resizes a window.

