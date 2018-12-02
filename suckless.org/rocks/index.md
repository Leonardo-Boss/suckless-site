Stuff that rocks
================

Libraries
---------
This section is for small, usable development libraries, which can be used for
writing software that sucks less.
These should preferably be under the MIT/X consortium or BSD licenses, WTFPL,
or public domain, or alternatively LGPL, because it makes them legally
compatible with other suckless projects.

### Libc Implementations

* [musl](http://www.musl-libc.org/) - standard C library that attempts to be even smaller than uClibc.
  See also: [embedded libc comparison](http://www.etalabs.net/compare_libcs.html)
* [uClibc](https://uclibc.org/) - strives to be a minimalist C library suitable for embedded computing.


### Compilers

* [tcc](https://bellard.org/tcc/) - Tiny C Compiler [git repo](http://repo.or.cz/w/tinycc.git)

### Compression

* [liblzf](http://oldhome.schmorp.de/marc/liblzf.html) - very fast, legally unencumbered compression library.
* [miniz](https://github.com/richgel999/miniz) - single C-file reimplementation of zlib (MIT License).
* [xz embedded](https://tukaani.org/xz/embedded.html) - lightweight decompressor for the xz LZMA compressor (public domain).
* [Lzip](http://lzip.nongnu.org) - Properly designed data compressor outperforming gzip and bzip2 (GPLv2+).
* [zlib](http://zlib.net/) - the "standard" compression/decompression library, quite small, used in many applications ([zlib license](http://zlib.net/zlib_license.html)).
* [libz](https://sortix.org/libz/) - ABI and API compatible zlib fork with focus on correctness,
  proper portability, auditability, simplification and opportunities to optimize ([zlib license](http://zlib.net/zlib_license.html)).

### Cryptography

* [LibreSSL](https://www.libressl.org/) - LibreSSL is a version of the TLS/crypto stack forked from OpenSSL in 2014.

### Miscellaneous

* [ccv](http://libccv.org/) - C-based/Cached/Core Computer Vision Library, A Modern Computer Vision Library.
* [libev](http://software.schmorp.de/pkg/libev.html) - high performance event-loop modelled after libevent but much smaller
  (dual licensed under 2-clause BSD and GPL).
* [mandoc](http://mandoc.bsd.lv/) - The mandoc UNIX manpage compiler toolset.
* [pjsip](http://www.pjsip.org/) - open source SIP stack (GPL).
* [sdhcp](https://git.2f30.org/sdhcp/) - IPv4 DHCP client.
* [termbox](https://github.com/nsf/termbox) - simple ncurses-like library for creating TUIs.

### Distros

* [bare](https://git.uggedal.com/unmaintained/bare/) - simple distro using suckless software.
* [morpheus](https://morpheus.2f30.org) - a statically linked musl based Linux distro. Unmaintained currently.

Programs
--------
Some programs work well with dwm. Some general rule of thumb for judging if a
program is usable are:

* The program will accept any window size.
* The program consists of a single window (there are no nested windows, such as in Xpdf).

This covers most console-based programs and programs from [plan9port][].

### Audio Players

* [C* Music Player](https://cmus.github.io/) - A ncurses music player that can be controlled with an UNIX socket.
* [cplay](http://cplay.sourceforge.net/)
* [DeaDBeeF](http://deadbeef.sourceforge.net/)
* [moc](http://moc.daper.net/)
* [mpd](https://www.musicpd.org/) - A client/server based music player with console and graphical front-ends.
* [mpg123](http://www.mpg123.de/) - A console mpg player which doesn't use auto*hell, or extra libraries.
* [mpg321](http://mpg321.sourceforge.net) - command-line mp3 player.
* [vorbis-tools](https://www.xiph.org/) (Ogg/FLAC) - Command-line tools to play Ogg and FLAC files.
* [RSound](https://github.com/Themaister/RSound/) - Simple PCM audio server and client.

### BitTorrent clients

* [btpd](https://github.com/btpd/btpd) - The BitTorrent Protocol Daemon.

### Feed aggregators

* [newsboat](https://newsboat.org/) - RSS/Atom feed reader for text terminals (updated fork of [newsbeuter](https://www.newsbeuter.org/)).
* [snownews](https://github.com/kouya/snownews/) - Text mode RSS newsreader for Linux and Unix.
* [sfeed](https://git.codemadness.org/sfeed/) - RSS and Atom parser + CLI programs.

### File browsers

* [noice](https://git.2f30.org/noice/) - Small and portable file browser.
* [nnn](https://github.com/jarun/nnn) - Noice is Not Noice, a fork of noice with more features.
* [rover](https://lecram.github.io/p/rover/) - Simple file browser for the terminal.

### File managers

* [mc](https://midnight-commander.org/) - Midnight Commander is a free cross-platform orthodox file manager.
* [ranger](https://ranger.github.io/) - ranger is a file manager with vi key bindings written in python but with an interface that rocks.

### Git

* [stagit](https://git.codemadness.org/stagit/) - static git page generator (HTML).
* [stagit-gopher](https://git.codemadness.org/stagit-gopher/) - static git page generator for gopher (geomyidae .gph pages).

### IRC clients

* [Irc](https://swtch.com/irc/) - IRC client for ACME.
* [irc.c from mpu](https://c9x.me/irc/) - A Minimal Curses IRC Client.
* [ii](//tools.suckless.org/ii/) - A FIFO based IRC client which is part of the suckless.org project.
* [ircrc](http://plan9.bell-labs.com/sources/contrib/fgb/rc/ircrc) - An rc-based IRC client similar to ircc. Needs minor modification to run on UNIX.
* [irssi](https://irssi.org/) - Text-mode IRC client.
* [sic](//tools.suckless.org/sic/) - Another suckless.org IRC client. Similar to ircc.
* [quIRC](https://github.com/ec429/quIRC) - a lightweight console IRC client.

### Image viewers

* [feh](https://feh.finalrewind.org/) - A highly customizable image viewer that can also set a desktop background image.
* [jpg/gif/bmp/png][plan9port] - Simple programs from Plan 9 to display images in no-frills windows. Included with plan9port.
* [meh](https://www.johnhawthorn.com/meh/) - image viewer using raw XLib, libjpeg, libpng and libgif.
* [page][plan9port] - Plan 9's image/document viewer program. Included with plan9port.
* [qiv](http://spiegl.de/qiv/)
* [sxiv](https://github.com/muennich/sxiv) - Simple (or small or suckless) X Image Viewer. Depends on xlib and imlib2.
* [xli](http://web.aanet.com.au/gwg/xli.html)
* [xzgv](http://sourceforge.net/projects/xzgv/)
* [lel](https://git.2f30.org/lel/) - Suckless imagefile viewer (WIP)
* [imv](https://github.com/exec64/imv) - Simple X11/Wayland Image Viewer. Depends on SDL2 and FreeImage.

### Instant-Messaging clients

* [bitlbee](https://www.bitlbee.org/main.php/news.r.html) - A program to translate IM protocols to IRC.
* [CenterIM](http://www.centerim.org/index.php/Main_Page) - A centericq fork.
* [irssi-xmpp](http://cybione.org/~irssi-xmpp/) - An irssi plugin to connect to the Jabber network.
* [mcabber](http://mcabber.com/) - A console jabber client.
* [ysm](http://ysmv7.sourceforge.net/) - A console-based ICQ client.

### Mail clients

* [Mail][plan9port] - A mail client for [acme][]. Included with plan9port.
* [dmc](//git.suckless.org/dmc/) - A minimalistic approach to a command-line mail client (WIP)
* [fdm](https://github.com/nicm/fdm) - fetch and deliver mail
* [isync](http://isync.sourceforge.net/) - MDA that can work better for IMAP
* [heirloom-mailx](http://heirloom.sourceforge.net/mailx.html) - A mail client based on the original Berkeley Mail 8.1 with many new features.
* [s-nail](https://www.sdaoden.eu/code.html) - An improved heirloom-mailx.
* [mutt](http://www.mutt.org/) - An ncurses mail client for fetching, reading and sending email.
* [nmh](http://www.nongnu.org/nmh/)
* [mmh](http://marmaro.de/prog/mmh/)
* [mblaze](https://github.com/chneukirchen/mblaze) - Unix utilities to deal with Maildir
* [mpop](https://marlam.de/mpop/) - a POP3 mail client. It is much [faster and simpler than fetchmail](https://marlam.de/mpop/documentation).

### Media players

* [mplayer](http://www.mplayerhq.hu/design7/news.html) (without GUI) - You know mplayer, but you may not know that it works well without the GUI.
* [mpv](https://mpv.io/) - a free, open source and cross-platform media player.
* [ffplay](https://www.ffmpeg.org/ffplay.html) - FFplay is a very simple and portable media player. It came with ffmpeg which is a mplayer dependence.

### Password managers

* [pass](https://www.passwordstore.org/) - The standard unix password manager.
* [tpm](https://github.com/nmeum/tpm/) - Tiny password manager.
* [spm](https://notabug.org/kl3/spm/) - Simple password manager (actively maintained fork of nmeum's tpm).

### PDF viewers

* [mupdf](https://mupdf.com/) - a lightweight PDF viewer written in C. It supports PDF, XPS, EPUB, XHTML, CBZ, PNG, JPEG, GIF and TIFF.
* [zathura](https://pwmt.org/projects/zathura/) - an extensible document viewer/shell which can support CBZ, DJVU, PS, EPUB (with mupdf) and PDF (with mupdf or poppler).

### Shells

* [dash](http://gondor.apana.org.au/~herbert/dash/) - DASH is a POSIX-compliant implementation of /bin/sh that aims to be as small as possible.
* [mksh](https://www.mirbsd.org/mksh.htm) - MirBSD Korn Shell, an actively developed free implementation of the Korn Shell programming language and a successor to the Public Domain Korn Shell (pdksh).

### Text editors

* [acme][] - Rob Pike's framing text editor for Plan 9. Included in [plan9port][].
* [ired](http://www.radare.org/r/) (Minimalist hexadecimal editor and bindiffer for p9, w32 and *nix)
* [mg](https://homepage.boetes.org/software/mg/) (portable version of mg maintained by the OpenBSD team)
* [nano](https://www.nano-editor.org/) - A pico clone - this is small simple code and easy to use.
* [mle](https://github.com/adsr/mle) - A small, flexible console text editor.
* [nvi](https://sites.google.com/a/bostic.com/keithbostic/vi) - A small, multiple file vi-alike.
* [sam](http://sam.cat-v.org/) - An editor by Rob Pike with inspiration from ed.
* [traditional vi](http://ex-vi.sourceforge.net/) - A fixed version of the original vi.
* [vim](https://www.vim.org) (With the GUI, use `:set go+=c` to kill popup dialogs). It can be compiled to be as minimal as possible (see vim-tiny in Debian repos).
* [vis](https://github.com/martanne/vis) - A modern, legacy free, simple yet efficient vim-like editor.
* [wily](http://www.cse.yorku.ca/~oz/wily/) - An acme clone for POSIX.
* [ed](https://9fans.github.io/plan9port/man/man1/ed.html) - [ED IS THE STANDARD TEXT EDITOR!](https://www.gnu.org/fun/jokes/ed-msg.html)

### Utilities

* [9menu](https://github.com/arnoldrobbins/9menu/) - A menu program based on the Blit-style menus so prevalent in Plan 9.  A take on it is included with wmii.
* [dmenu](//tools.suckless.org/dmenu/) - dmenu is a dynamic menu for X
* [slmenu](https://bitbucket.org/rafaelgg/slmenu) - Dmenu spinoff for the console
* [dvtm](http://www.brain-dump.org/projects/dvtm/) - dynamic virtual terminal manager
* [abduco](http://www.brain-dump.org/projects/abduco/) - session {at,de}tach support
* [nq](https://github.com/chneukirchen/nq) - unix command line queue utility
* [entr](http://entrproject.org/) - Run arbitrary commands when files change
* [snore](https://github.com/clamiax/snore) - Sleep with feedback

### Web browsers

* [Abaco](http://lab-fgb.com/abaco/)
* [Conkeror](http://www.conkeror.org/) - A Gecko based browser, with Emacs-style key bindings, appearances and behaviors.
* [Dillo](https://www.dillo.org/) - Blazingly fast graphical browser with basic CSS support.
* [edbrowse](http://edbrowse.org/) - ed-alike webbrowser. Unfortunately it is not the standard web browser.
* [ELinks](http://elinks.or.cz/) -  Feature-rich fork of Links, but without the graphical mode.
* [Links](http://links.twibright.com/) - A text-based browser that also has a simple graphical mode.
* [Lynx](http://lynx.invisible-island.net/) - text-mode web browser, supports the Gopher protocol.
* [netsurf](http://www.netsurf-browser.org/) - Very fast graphical browser with custom engine that has near-perfect CSS support.
* [surf](//surf.suckless.org/) - WebKit2 browser that can be embedded into other applications and uses dmenu as the address bar.
* [Tridactyl](https://github.com/cmcaine/tridactyl) - A WebExtension that tries to make Firefox Vim like. Unlike many similar extensions it works with firefox 57+
* [uzbl](https://www.uzbl.org/) - Web interface tools which adhere to the unix philosophy.
* [Vimperator](http://vimperator.org/) - An extension to make Firefox keyboard friendly and Vim-like. (Doesn't work with Firefox 57+).
* [VimFX](https://addons.mozilla.org/en-US/firefox/addon/vimfx/) -
  Another extension to make Firefox Vim-like. Less invasive than
  Vimperator (Doesn't work with Firefox 57+)
* [w3m](http://w3m.sourceforge.net/) - Text-based browser which can view images in terminal.

### X11

* [xclip](https://github.com/astrand/xclip) - A tool for controlling the
  X11 clipboard.
* [xdotool](http://www.semicomplete.com/projects/xdotool/) - A tool for
  scripting X11 actions.
* [xzoom](http://git.r-36.net/xzoom/) - A simple zoom application.
* [keynav](http://www.semicomplete.com/projects/keynav/) - A new way for
  keyboard selection.
* [ffcast](https://github.com/lolilolicon/FFcast) - Simple screencasting.
* [wmutils](https://github.com/wmutils/core) - A set of utilities for managing windows. Can be used on their own or to augment a WM itself. Support for tiling present.
* [grabc](http://www.muquit.com/muquit/software/grabc/grabc.html) - Grab the
  color of some pixel in X11.

[plan9port]: https://9fans.github.io/plan9port/
[acme]: http://acme.cat-v.org

Daemons
-------

This section is dedicated to daemons that are related to the UNIX philosophy (but
don't really belong into the cool programs section which is about programs
which work well with dwm).

### Web Servers

* [quark](//tools.suckless.org/quark/) - suckless simple static web server.
* [OpenBSD httpd/relayd](https://bsd.plumbing/) - Designed to combat the feature creep of modern webservers. Boasts concise configuration, with sane defaults.
* [darkhttpd](https://unix4lyfe.org/darkhttpd/) - Darkhttpd is a simple, fast HTTP 1.1 web server for static content.
* [thttpd](http://acme.com/software/thttpd/) - Outperforms many bigger httpds. Old, still works very well!
* [mini_httpd](http://acme.com/software/mini_httpd/) - By the thttpd developers.
  Even smaller subset of thttpd with support for .htpasswd, CGI, dirlisting, HTTP errors and SSL, nothing more or less than that.
* [shus](https://github.com/dimkr/shus) - A tiny HTTP server for static sites.

### Gopher clients

* [sacc](gopher://bitreich.org/1/releases/sacc) - terminal gopher client by [quinq](//suckless.org/people/quinq/).

### Gopher servers

* [geomyidae](http://git.r-36.net/geomyidae/) - small gopher-daemon written by [20h](//suckless.org/people/20h/).

### Misc daemons

* [scron](https://git.2f30.org/scron/) - simple crond.
