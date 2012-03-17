sandy
=====
sandy is an ncurses text editor with an easy-to-read, hackable C source. Sandy tries to maximize screen estate, minimize the SLOC used and not get in your way too much. It can somehow be controlled using a named pipe that lives in /tmp and all preferences and keybindings are to be chosen at compile time.

Features / Non-features
-----------------------
* Unlimited undo
* Regex search
* Simple, almost modeless keybindings
* Selection-based operation
* Very simple commands read from a named pipe
* Very basic, regex-based syntax colouring
* Xterm-like mouse support
* X11 integration is achieved through external tools such as [xsel](http://www.kfish.org/software/xsel/) and [dmenu](http://tools.suckless.org/dmenu/)
* Lacks many text processing facilities that can be easily achieved by piping text through an external command

Development
-----------
You can [browse](http://hg.suckless.org/sandy) the source code repository or get a copy using [Mercurial](http://www.selenic.com/mercurial/) with the following command:

        hg clone http://hg.suckless.org/sandy

