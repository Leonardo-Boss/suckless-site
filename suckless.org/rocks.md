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

Compilers
---------
* [tcc](https://bellard.org/tcc/) - Tiny C Compiler [git repo](http://repo.or.cz/w/tinycc.git)

Compression
-----------
* [liblzf](http://oldhome.schmorp.de/marc/liblzf.html) - very fast, legally unencumbered compression library (dual licensed: 2-clause BSD or GPL License)
* [miniz](https://github.com/richgel999/miniz) - single C-file reimplementation of zlib (MIT License).
* [xz embedded](http://tukaani.org/xz/embedded.html) - lightweight decompressor for the xz LZMA compressor (public domain)
* [Lzip](http://lzip.nongnu.org) - Properly designed data compressor outperforming gzip and bzip2 (GPLv2+)
* [zlib](http://zlib.net/) - the "standard" compression/decompression library, quite small, used in many applications ([zlib license](http://zlib.net/zlib_license.html))
* [libz](https://sortix.org/libz/) - ABI and API compatible zlib fork with focus on correctness, proper portability, auditability, simplification and opportunities to optimize ([zlib license](http://zlib.net/zlib_license.html))

Cryptography
------------
* [libressl](http://www.libressl.org/) - LibreSSL is a version of the TLS/crypto stack forked from OpenSSL in 2014

Miscellaneous
-------------
* [ccv](https://github.com/liuliu/ccv) - C-based/Cached/Core Computer Vision Library, A Modern Computer Vision Library
* [libev](http://software.schmorp.de/pkg/libev.html) - high performance event-loop modeled after libevent but much smaller (dual licensed under 2-clause BSD and GPL)
* [mdocml](http://mdocml.bsd.lv/) - The mandoc UNIX manpage compiler toolset
* [morpheus](https://morpheus.2f30.org) - a statically linked musl based Linux distro
* [bare](https://git.uggedal.com/unmaintained/bare/) - simple distro using suckless software
* [pjsip](http://www.pjsip.org/) - open source SIP stack (GPL)
* [sdhcp](https://git.2f30.org/sdhcp/) - IPV4 DHCP client
* [termbox](https://github.com/nsf/termbox) - simple ncurses-like library for creating TUIs

Programs
========
Some programs work well with dwm. Some general rules of thumb
for judging a programs as usable are:

* The program will accept any window size
* The program consists of a single window (there are no nested windows, such as in Xpdf)

This covers most console-based programs and programs from [plan9port][].

Audio Players
-------------
* [C* Music Player](http://cmus.sourceforge.net/)
* [cplay](http://cplay.sourceforge.net/)
* [DeaDBeeF](http://deadbeef.sourceforge.net/)
* [moc](http://moc.daper.net/)
* [mpd](http://mpd.wikia.com/wiki/Music_Player_Daemon_Wiki) - A client/server based music player with console and graphical front-ends.
* [mpg123](http://www.mpg123.de/) - A console mpg player which doesn't use auto*hell, or extra libraries.
* [mpg321](http://mpg321.sourceforge.net)
* [vorbis-tools](http://www.xiph.org/) (Ogg/FLAC) - Command-line tools to play Ogg and FLAC files.
* [RSound](https://github.com/Themaister/RSound/) - Simple PCM audio server and client

BitTorrent Clients
------------------
* [btpd](https://github.com/btpd/btpd) - The BitTorrent Protocol Daemon

Feed aggregators
----------------
* [newsbeuter](http://www.newsbeuter.org/)
* [snownews](https://kiza.eu/software/snownews/) - Text mode RSS newsreader for Linux and Unix
* [sfeed](https://git.codemadness.org/sfeed/) - RSS and Atom parser + CLI programs

File browsers
-------------
* [noice](https://git.2f30.org/noice/) - Small and portable file browser
* [rover](https://github.com/lecram/rover) - Simple file browser for the terminal

File managers
-------------
* [mc](https://www.midnight-commander.org/) - Midnight Commander is a free cross-platform orthodox file manager
* [ranger](http://ranger.nongnu.org/) - ranger is a file manager with vi key bindings written in python but with an interface that rocks

Git
---
* [stagit](https://git.codemadness.org/stagit/) - static git page generator (HTML)
* [stagit-gopher](https://git.codemadness.org/stagit-gopher/) - static git page generator for gopher (geomyidae .gph pages)

IRC Clients
-----------
* [Irc](http://swtch.com/irc/)
* [irc.c from mpu](http://c9x.me/irc/) - A Minimal Curses IRC Client.
* [ii](//tools.suckless.org/ii/) - A FIFO based IRC client which is part of the suckless.org project.
* [ircc](http://www.r-36.net/src/Various/ircc.tgz) - A no-frills, ncurses free, console-based IRC client.
* [ircrc](http://plan9.bell-labs.com/sources/contrib/fgb/rc/ircrc) - An rc-based IRC client similar to ircc. Needs minor modification to run on UNIX.
* [irssi](http://www.irssi.org/)
* [sic](//tools.suckless.org/sic) - Another suckless.org IRC client. Similar to ircc.
* [quIRC](https://github.com/ec429/quIRC) - a lightweight console IRC client

Image Viewers
-------------
* [feh](http://feh.finalrewind.org/)
* [jpg/gif/bmp/png][plan9port] - Simple programs from Plan 9 to display images in no-frills windows. Included with plan9port.
* [meh](http://www.johnhawthorn.com/meh/) - image viewer using raw XLib, libjpeg, libpng and libgif
* [page][plan9port] - Plan 9's image/document viewer program. Included with plan9port.
* [qiv](http://spiegl.de/qiv/)
* [sxiv](https://github.com/muennich/sxiv) - Simple (or small or suckless) X Image Viewer. Depends on xlib and imlib2.
* [xli](http://web.aanet.com.au/gwg/xli.html)
* [xzgv](http://sourceforge.net/projects/xzgv/)
* [lel](https://git.2f30.org/lel/) - Suckless imagefile viewer (WIP)
* [imv](https://github.com/exec64/imv) - Simple X11/Wayland Image Viewer. Depends on SDL2 and FreeImage.

Instant Messaging Clients
-------------------------
* [bitlbee](http://www.bitlbee.org/main.php/news.r.html) - A program to translate IM protocols to IRC. You can now IM from your IRC client, and you don't even need to install anything.
* [CenterIM](http://www.centerim.org/index.php/Main_Page) - A centericq fork.
* [irssi-xmpp](http://cybione.org/~irssi-xmpp/)
* [mcabber](http://www.lilotux.net/~mikael/mcabber/) - A console jabber client.
* [ysm](http://ysmv7.sourceforge.net/)

Mail Clients
------------
* [Mail][plan9port] - A mail client for [acme][acme]. Included with plan9port.
* [dmc](//git.suckless.org/dmc/) - A minimalistic approach to a commandline mail client (WIP)
* [fdm](https://github.com/nicm/fdm) - fetch and deliver mail
* [isync](http://isync.sourceforge.net/) - MDA that can work better for IMAP
* [heirloom-mailx](http://heirloom.sourceforge.net/mailx.html) - A mail client based on the original Berkeley Mail 8.1 with many new features.
* [s-nail](http://sourceforge.net/projects/s-nail/) - An improved heirloom-mailx.
* [mutt](http://www.mutt.org/)
* [nmh](http://www.nongnu.org/nmh/)
* [mmh](http://marmaro.de/prog/mmh/)
* [mblaze](https://github.com/chneukirchen/mblaze) - Unix utilities to deal with Maildir

Media Players
-------------
* [mplayer](http://www.mplayerhq.hu/) (without GUI) - You know mplayer, but you may not know that it works well without the GUI.
* [mpv](http://mpv.io/) - a free, open source, and cross-platform media player
* [ffplay](https://www.ffmpeg.org/ffplay.html) - FFplay is a very simple and portable media player. It came with ffmpeg which is a mplayer dependence.

Password managers
-----------------
* [pass](http://www.passwordstore.org/) - The standard unix password manager
* [tpm](https://github.com/nmeum/tpm/) - Tiny password manager
* [spm](https://notabug.org/kl3/spm/) - Simple password manager (actively maintained fork of nmeum's tpm)

PDF Viewers
-----------
* [mupdf](http://mupdf.com/)
* [zathura](http://pwmt.org/projects/zathura/)

Shells
------
* [mksh](https://www.mirbsd.org/mksh.htm) - MirBSD Korn Shell, an actively developed free implementation of the Korn Shell programming language and a successor to the Public Domain Korn Shell (pdksh)
* [dash](http://gondor.apana.org.au/~herbert/dash/) - DASH is a POSIX-compliant implementation of /bin/sh that aims to be as small as possible. It does this without sacrificing speed where possible.

Text Editors
------------
* [acme][acme] - Rob Pike's framing text editor for Plan 9. Included in [plan9port][].
* [ired](http://www.radare.org/y/) (Minimalist hexadecimal editor and bindiffer for p9, w32 and *nix)
* [mg](https://homepage.boetes.org/software/mg/) (portable version of mg maintained by the OpenBSD team)
* [nano](https://www.nano-editor.org/) - A pico clone - this is small simple code and easy to use.
* [nvi](https://sites.google.com/a/bostic.com/keithbostic/vi) - A small, multiple file vi-alike.
* [sam](http://sam.cat-v.org/) - An editor by Rob Pike with inspiration from ed.
* [traditional vi](http://ex-vi.sourceforge.net/) - A fixed version of the original vi.
* [vim](http://www.vim.org) (With the GUI, use `:set go+=c` to kill popup dialogs)
* [vis](https://github.com/martanne/vis) - A modern, legacy free, simple yet efficient vim-like editor.
* [wily](http://www.cse.yorku.ca/~oz/wily/) - An acme clone for POSIX.
* [ed](http://swtch.com/plan9port/man/man1/ed.html) - [ED IS THE STANDARD TEXT EDITOR!](http://www.gnu.org/fun/jokes/ed-msg.html)

Utilities
---------
* [9menu](http://www.freshports.org/x11/9menu/) - A menu program based on the Blit-style menus so prevalent in Plan 9.  A take on it is included with wmii.
* [dmenu](//tools.suckless.org/dmenu/) - dmenu is a dynamic menu for X
* [slmenu](https://bitbucket.org/rafaelgg/slmenu) - Dmenu spinoff for the console
* [dvtm](http://www.brain-dump.org/projects/dvtm/) - dynamic virtual terminal manager
* [abduco](http://www.brain-dump.org/projects/abduco/) - session {at,de}tach support
* [nq](https://github.com/chneukirchen/nq) - unix command line queue utility
* [entr](http://entrproject.org/) - Run arbitrary commands when files change
* [snore](https://github.com/clamiax/snore) - Sleep with feedback

Web Browsers
------------
* [Abaco](http://lab-fgb.com/abaco/)
* [Conkeror](http://www.conkeror.org/) - A Gecko based browser, imparting it Emacs style key bindings, appearances, and behaviors.
* [Dillo](http://www.dillo.org/)
* [dwb](http://portix.bitbucket.org/dwb/) - A lightweight web browser based on WebKitGTK.
* [edbrowse](http://edbrowse.sourceforge.net/)
* [ELinks](http://elinks.or.cz/)
* [jumanji](http://pwmt.org/projects/jumanji/) - A highly customizable and functional web browser based on the libwebkit.
* [Links](http://links.twibright.com/)
* [Lynx](http://lynx.browser.org/)
* [netsurf](http://www.netsurf-browser.org/)
* [surf](//surf.suckless.org/)
* [uzbl](http://uzbl.org/) - Web interface tools which adhere to the unix philosophy.
* [Vimperator](http://www.vimperator.org/) - An extension to make Firefox keyboard friendly and Vim-like.
* [VimFX](https://addons.mozilla.org/en-US/firefox/addon/vimfx/) -
  Another extension to make Firefox Vim-like. Less invasive than
  Vimperator
* [w3m](http://w3m.sourceforge.net/)
* [xombrero](https://github.com/conformal/xombrero) - A minimalist web browser with sophisticated security features designed-in. Formerly known as "xxxterm".

X11
---
* [xclip](http://sourceforge.net/projects/xclip/) – A tool for controlling the
  X11 clipboard.
* [xdotool](http://www.semicomplete.com/projects/xdotool/) – A tool for
  scripting X11 actions.
* [xzoom](http://git.r-36.net/xzoom/) – A simple zoom application.
* [keynav](http://www.semicomplete.com/projects/keynav/) – A new way for
  keyboard selection.
* [ffcast](https://github.com/lolilolicon/FFcast2) – Simple screencasting.
* [swm](https://github.com/dcat/swm) - A simple window manager called Simple Window Manager. Floating but keyboard-accessible.
* [wmutils](https://github.com/wmutils/core) - A set of utilities for managing windows. Can be used on their own or to augment a WM itself. Support for tiling present.
* [grabc](http://www.muquit.com/muquit/software/grabc/grabc.html) - Grab the
  color of some pixel in X11.

[plan9port]: http://swtch.com/plan9port/
[acme]: http://acme.cat-v.org

Daemons
=======

This section is dedicated to Daemons that are related to the UNIX philosophy (but
don't really belong into the cool programs section which is about programs
which work well with dwm).

Web Servers
-----------
* [Nostromo](http://www.nazgul.ch/dev_nostromo.html) - nhttpd is a simple, fast and secure HTTP server
* [thttpd](http://acme.com/software/thttpd/) - Outperforms many bigger httpds. Old, still works very well!
* [mini_httpd](http://acme.com/software/mini_httpd/) - By the thttpd developers. Even smaller subset of thttpd with support for .htpasswd, CGI, dirlisting, HTTP errors and SSL, nothing more or less than that.
* [darkhttpd](https://unix4lyfe.org/darkhttpd/) - Darkhttpd is a simple, fast HTTP 1.1 web server for static content.
* [quark](//git.suckless.org/quark/) - suckless httpd, not released yet
* [shus](https://github.com/dimkr/shus) - A tiny HTTP server for static sites
* [OpenBSD httpd/relayd](https://bsd.plumbing/about.html) - Designed to combat the feature creep of modern webservers. Boasts extremely concise configuration, with sane default behavior.

Gopher Servers
--------------
* [geomyidae](http://git.r-36.net/geomyidae/) - small gopher-daemon written by 20h

Misc Daemons
------------
* [scron](https://git.2f30.org/scron/) - simple crond.
