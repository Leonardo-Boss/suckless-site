Stuff that rocks
================

Libraries
=========
This section is for small, usable development libraries, which can be used for
writing software that sucks less.
These should preferrably be under the MIT/X consortium or BSD licenses, WTFPL,
or public domain, or alternatively LGPL, because it makes them legally
compatible with other suckless projects. 

libc implementations
--------------------
* [musl](http://www.musl-libc.org/) - standard C library that attempts to be even smaller than uClibc
* [uClibc](http://www.uclibc.org/) - strives to be a minimalist C library suitable for embedded computing
* See also: [embedded libc comparison](http://www.etalabs.net/compare_libcs.html)

Compression
-----------
* [liblzf](http://oldhome.schmorp.de/marc/liblzf.html) - very fast, legally unencumbered compression library (dual licensed: 2-clause BSD or GPL License)
* [xz embedded](http://tukaani.org/xz/embedded.html) - lightweight decompressor for the xz LZMA compressor (public domain)
* [zlib](http://zlib.net/) - the "standard" compression/decompression library, quite small, used in many applications ([zlib license](http://zlib.net/zlib_license.html))
* [miniz](http://code.google.com/p/miniz/) - single C-file reimplementation of zlib, public domain.

Cryptography
------------
* [polarssl](https://polarssl.org/) - lightweight SSL/TLS implementation (GPL with [exceptions](https://polarssl.org/foss-license-exception))
* [(C)yassl](http://www.yassl.com/yaSSL/Home.html) - portable RTOS-targeted embedded SSL library - licensed under both the GPLv2 as well as standard commercial licensing

Miscellaneous
-------------
* [pjsip](http://www.pjsip.org/) - open source SIP stack (GPL)
* [libev](http://software.schmorp.de/pkg/libev.html) - high performance event-loop modeled after libevent but much smaller (dual licensed under 2-clause BSD and GPL)
* [termbox](https://github.com/nsf/termbox) - simple ncurses-like library for creating TUIs
* [ccv](https://github.com/liuliu/ccv) - C-based/Cached/Core Computer Vision Library, A Modern Computer Vision Library

Programs
========
Some programs work well with dwm. Some general rules of thumb
for judging a programs as usable are:

* The program will accept any window size
* The program consists of a single window (there are no nested windows, such as in Xpdf)

This covers most console-based programs and programs from [plan9port][].

Accounting
----------
* [Ledger](http://ledger-cli.org/)

Audio Players
-------------
* [C* Music Player](http://cmus.sourceforge.net/)
* [DeaDBeeF](http://deadbeef.sourceforge.net/)
* [cplay](http://cplay.sourceforge.net/)
* [moc](http://moc.daper.net/)
* [mpd](http://mpd.wikia.com/wiki/Music_Player_Daemon_Wiki) - A client/server based music player with console and graphical front-ends.
* [mpg123](http://www.mpg123.de/) - A console mpg player which doesn't use auto*hell, or extra libraries.
* [mpg321](http://mpg321.sourceforge.net)
* [vorbis-tools](http://www.xiph.org/) (Ogg/FLAC) - Command-line tools to play Ogg and FLAC files.

BitTorrent Clients
------------------
* [btpd](https://github.com/btpd/btpd) - The BitTorrent Protocol Daemon

Feed aggregators
----------------
* [newsbeuter](http://www.newsbeuter.org/)

IRC Clients
-----------
* [Irc](http://swtch.com/irc/)
* [acme:SAC](http://caerwyn.com/acme/index.html)
* [ii](http://tools.suckless.org/ii/) - A FIFO based IRC client which is part of the suckless.org project.
* [ircc](http://www.r-36.net/src/Various/ircc.tgz) - A no-frills, ncurses free, console-based IRC client.
* [ircrc](http://plan9.bell-labs.com/sources/contrib/fgb/rc/ircrc) - An rc-based IRC client similar to ircc. Needs minor modification to run on UNIX.
* [irssi](http://www.irssi.org/)
* [sic](http://tools.suckless.org/sic) - Another suckless.org IRC client. Similar to ircc.
* [quIRC](https://github.com/ec429/quIRC) - a lightweight console IRC client

Image Viewers
-------------
* [feh](http://feh.finalrewind.org/)
* [jpg/gif/bmp/png][plan9port] - Simple programs from Plan 9 to display images in no-frills windows. Included with plan9port.
* [meh](http://www.johnhawthorn.com/meh/) - image viewer using raw XLib, libjpeg, libpng and libgif
* [page][plan9port] - Plan 9's image/document viewer program. Included with plan9port.
* [qiv](http://www.klografx.net/qiv/)
* [sxiv](https://github.com/muennich/sxiv) - Simple (or small or suckless) X Image Viewer. Depends on xlib and imlib2.
* [xli](http://web.aanet.com.au/gwg/xli.html)
* [xzgv](http://sourceforge.net/projects/xzgv/)

Instant Messaging Clients
-------------------------
* [bitlbee](http://www.bitlbee.org/main.php/news.r.html) - A program to translate IM protocols to IRC. You can now IM from your IRC client, and you don't even need to install anything.
* [centericq](http://konst.org.ua/centericq/)
* [CenterIM](http://www.centerim.org/index.php/Main_Page) - A centericq fork.
* [climm](http://www.climm.org/)
* [irssi-xmpp](http://cybione.org/~irssi-xmpp/)
* [mcabber](http://www.lilotux.net/~mikael/mcabber/) - A console jabber client.
* [ysm](http://ysmv7.sourceforge.net/)

Mail Clients
------------
* [Mail][plan9port] - A mail client for [acme][acme]. Included with plan9port.
* [dmc](http://git.suckless.org/dmc/) - A minimalistic approach to a commandline mail client (WIP)
* [fdm](http://fdm.sourceforge.net/) - MDA
* [heirloom-mailx](http://heirloom.sourceforge.net/mailx.html) - A mail client based on the original Berkeley Mail 8.1 with many new features.
* [mutt](http://www.mutt.org/)
* [nmh](http://www.nongnu.org/nmh/)

Media Players
-------------
* [mplayer](http://www.mplayerhq.hu/) (without GUI) - You know mplayer, but you may not know that it works well without the GUI.

PDF Viewers
-----------
* [mupdf](http://mupdf.com/)
* [zathura](http://pwmt.org/projects/zathura/)

Text Editors
------------
* [acme][acme] - Rob Pike's framing text editor for Plan 9. Included in [plan9port][].
* [ired](http://www.radare.org/y/) (Minimalist hexadecimal editor and bindiffer for p9, w32 and *nix)
* [nvi](https://sites.google.com/a/bostic.com/keithbostic/vi) - A small, multiple file vi-alike.
* [sam](http://sam.cat-v.org/) - An editor by Rob Pike with inspiration from ed.
* [traditional vi](http://ex-vi.sourceforge.net/) - A fixed version of the original vi.
* [vim](http://www.vim.org) (With the GUI, use `:set go+=c` to kill popup dialogs)
* [wily](http://www.cse.yorku.ca/~oz/wily/) - An acme clone for POSIX.
* [ed](http://swtch.com/plan9port/man/man1/ed.html) - [ED IS THE STANDARD TEXT EDITOR!](http://www.gnu.org/fun/jokes/ed-msg.html)

Utilities
---------
* [9menu](http://www.freshports.org/x11/9menu/) - A menu program based on the Blit-style menus so prevalent in Plan 9.  A take on it is included with wmii.
* [dmenu](/programs/dmenu.html) - Obvious
* [slmenu](https://bitbucket.org/rafaelgg/slmenu) - Dmenu spinoff for the console

Web Browsers
------------
* [Abaco](http://lab-fgb.com/abaco/)
* [Conkeror](http://www.conkeror.org/) - A Gecko based browser, imparting it Emacs style key bindings, appearances, and behaviors.
* [Dillo](http://www.dillo.org/)
* [dwb](http://portix.bitbucket.org/dwb/) - A lightweight web browser based on the webkit.
* [edbrowse](http://edbrowse.sourceforge.net/)
* [ELinks](http://elinks.or.cz/)
* [jumanji](http://pwmt.org/projects/jumanji/) - A highly customizable and functional web browser based on the libwebkit.
* [Links](http://links.twibright.com/)
* [Lynx](http://lynx.isc.org/)
* [netsurf](http://www.netsurf-browser.org/)
* [surf](http://surf.suckless.org/)
* [uzbl](http://uzbl.org/) - Web interface tools which adhere to the unix philosophy.
* [Vimperator](http://www.vimperator.org/) - An extension to make Firefox keyboard friendly and Vim-like.
* [VimFX](https://addons.mozilla.org/en-US/firefox/addon/vimfx/) -
  Another extension to make Firefox Vim-like. Less invasive than
  Vimperator
* [w3m](http://w3m.sourceforge.net/)
* [xombrero](https://opensource.conformal.com/wiki/xombrero) - A minimalist web browser with sophisticated security features designed-in. Formerly known as [xxxterm](https://opensource.conformal.com/wiki/xxxterm)

X11
---
* [xdotool](http://www.semicomplete.com/projects/xdotool/) – A tool for
  scripting X11 actions.
* [xzoom](http://git.r-36.net/xzoom/) – A simple zoom application.
* [xclip](http://sourceforge.net/projects/xclip/) – A tool for controlling the
  X11 clipboard.
* [keynav](http://www.semicomplete.com/projects/keynav/) – A new way for
  keyboard selection.
* [ffcast](https://github.com/lolilolicon/FFcast2) – Simple screencasting.

[plan9port]: http://swtch.com/plan9port/
[acme]: http://acme.cat-v.org


Daemons
=======

This section is dedicated to Daemons that are related to the UNIX philosophy (but
don't really belong into the cool programs section which is about programs
which work well with dwm).

Web Servers
-----------
* [Nostromo](http://www.nazgul.ch/dev_nostromo.html)
* [thttpd](http://acme.com/software/thttpd/) - Outperforms many bigger httpds. Old, still works very well!
* [mini_httpd](http://acme.com/software/mini_httpd/) - By the thttpd developers. Even smaller subset of thttpd with support for .htpasswd, CGI, dirlisting, HTTP errors and SSL, nothing more or less than that.
* See also: our very own [quark](http://git.suckless.org/quark/) which has not yet been released

Gopher Servers
--------------
* [geomyidae](http://www.r-36.net/src/geomyidae/) - small gopher-daemon written by 20h

