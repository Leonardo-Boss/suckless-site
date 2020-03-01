Stuff that rocks
================
Software on this page should have ideas similar to the suckless
[philosophy](//suckless.org/philosophy/). The software must be FOSS licensed.

Libraries
---------
This section is for small, usable development libraries, which can be used for
writing software that sucks less. These should preferably be under the MIT/X
consortium or BSD licenses, WTFPL, or public domain, or alternatively LGPL,
because it makes them legally compatible with other suckless projects.

### Libc Implementations

* [musl](https://www.musl-libc.org/) - standard C library that attempts to be even smaller than uClibc.
  See also: [embedded libc comparison](https://www.etalabs.net/compare_libcs.html)
* [uClibc](https://uclibc.org/) - strives to be a minimalist C library suitable for embedded computing.

### Compilers

* [cproc](https://git.sr.ht/~mcf/cproc) - frontend for C11 for QBE.
* [qbe](https://c9x.me/compile/) - compiler backend targetting x64.
* [scc](https://www.simple-cc.org/) - Simple C Compiler.
* [tcc](https://bellard.org/tcc/) - Tiny C Compiler [git repo](https://repo.or.cz/w/tinycc.git)

### Compression

* [liblzf](https://oldhome.schmorp.de/marc/liblzf.html) - very fast, legally unencumbered compression library.
* [libz](http://sortix.org/libz/) - ABI and API compatible zlib fork with focus on correctness, proper portability, auditability, simplification and opportunities to optimize ([zlib license](https://zlib.net/zlib_license.html)).
* [Lzip](http://lzip.nongnu.org/) - Properly designed data compressor outperforming gzip and bzip2 (GPLv2+).
* [miniz](https://github.com/richgel999/miniz) - single C-file reimplementation of zlib (MIT License).
* [xz embedded](https://tukaani.org/xz/embedded.html) - lightweight decompressor for the xz LZMA compressor (public domain).
* [zlib](https://zlib.net/) - the "standard" compression/decompression library, quite small, used in many applications ([zlib license](https://zlib.net/zlib_license.html)).

### Cryptography

* [LibreSSL](https://www.libressl.org/) - LibreSSL is a version of the TLS/crypto stack forked from OpenSSL in 2014.

### Miscellaneous

* [baresip](https://github.com/alfredh/baresip) - barebone SIP stack (BSD licence).
* [ccv](https://libccv.org/) - C-based/Cached/Core Computer Vision Library, A Modern Computer Vision Library.
* [libev](https://software.schmorp.de/pkg/libev.html) - high performance event-loop modelled after libevent but much smaller (dual licensed under 2-clause BSD and GPL).
* [mandoc](https://mandoc.bsd.lv/) - The mandoc UNIX manpage compiler toolset.
* [pjsip](https://www.pjsip.org/) - open-source SIP stack (GPL).
* [raycastlib](https://gitlab.com/drummyfish/raycastlib) - Single-header public domain C raycasting renderer with no dependencies, using only integer math.
* [sdhcp](https://git.2f30.org/sdhcp/) - IPv4 DHCP client.
* [small3dlib](https://gitlab.com/drummyfish/small3dlib) - Single-header public domain C software 3D renderer with no dependencies, using only integer math.
* [termbox](https://github.com/nsf/termbox) - simple ncurses-like library for creating TUIs.

### Distros

* [bare](https://web.archive.org/web/20171022112729/https://git.uggedal.com/unmaintained/bare/) - A simple distro using suckless software.
* [morpheus](https://morpheus.2f30.org) - A statically linked musl-based Linux distro. Unmaintained currently.

Programs
--------

Some programs work well with dwm. Some general rule of thumb for judging if a
program is usable are:

* The program will accept any window size.
* The program consists of a single window (there are no nested windows, such as in Xpdf).

This covers most console-based programs and programs from
[plan9port](https://9fans.github.io/plan9port/).

### Audio Players

* [C* Music Player](https://cmus.github.io/) - aka cmus, a ncurses music player that can be controlled with an UNIX socket.
* [moc](https://moc.daper.net/) - console audio player for Linux/UNIX.
* [mpd](https://www.musicpd.org/) - A client/server based music player with console and graphical front-ends.
* [mpg123](https://www.mpg123.de/) - A console MPG player which doesn't use auto*hell or extra libraries.
* [mpg321](https://mpg321.sourceforge.net) - A command-line MP3 player.
* [vorbis-tools](https://www.xiph.org/) (Ogg/FLAC) - Command-line tools to play Ogg and FLAC files.

### BitTorrent clients

* [btpd](https://github.com/btpd/btpd) - The BitTorrent Protocol Daemon.

### Feed aggregators / newsreaders

* [sfeed](https://git.codemadness.org/sfeed/) - RSS and Atom parser + CLI programs.
* [snownews](https://github.com/kouya/snownews/) - Text mode RSS newsreader for Linux and Unix.
* [zs](https://r-36.net/scm/zs/) - Zeitungsschau RSS to email converter.

### File managers

* [lf](https://github.com/gokcehan/lf) - ranger-like file manager written in Go (WIP but usable).
* [mc](https://midnight-commander.org/) - Midnight Commander is a free cross-platform orthodox file manager.
* [nnn](https://github.com/jarun/nnn) - Noice is Not Noice, a fork of noice with more features.
* [noice](https://git.2f30.org/noice/) - Small and portable file browser.
* [ranger](https://ranger.github.io/) - ranger is a file manager with vi key bindings written in python but with an interface that rocks.
* [rover](https://lecram.github.io/p/rover/) - Simple file browser for the terminal.

### Git

* [stagit](https://git.codemadness.org/stagit/) - static git page generator (HTML).
* [stagit-gopher](https://git.codemadness.org/stagit-gopher/) - static git page generator for gopher (geomyidae .gph pages).

### Gopher clients

* [Lynx](https://lynx.invisible-island.net/) - text-mode web browser, supports the Gopher protocol.
* [sacc](gopher://bitreich.org/1/releases/sacc) - terminal gopher client by [quinq](//suckless.org/people/quinq/).

### IRC clients

* [hii](https://github.com/nmeum/hii) - A file-based IRC client, inspired by ii, with a focus on easing [frontend development](https://github.com/nmeum/insomnia)
* [ii](//tools.suckless.org/ii/) - A FIFO based IRC client which is part of the suckless.org project.
* [irc.c from mpu](https://c9x.me/irc/) - A minimal curses IRC client.
* [Irc](https://swtch.com/irc/) - IRC client for ACME.
* [ircrc](http://plan9.bell-labs.com/sources/contrib/fgb/rc/ircrc) - An rc-based IRC client similar to ircc. Needs minor modification to run on UNIX.
* [irssi](https://irssi.org/) - Text-mode IRC client.
* [jj](https://github.com/aaronNGi/jj) - A rework of ii that offloads all the IRC protocol parsing to an awk script, permitting triggers.
* [quIRC](https://github.com/ec429/quIRC) - a lightweight console IRC client.
* [sic](//tools.suckless.org/sic/) - Another suckless.org IRC client. Similar to ircc.

### Image viewers

* [feh](https://feh.finalrewind.org/) - A highly customizable image viewer that can also set a desktop background image.
* [imv](https://github.com/exec64/imv) - Simple X11/Wayland Image Viewer. Depends on SDL2 and FreeImage.
* [jpg/gif/bmp/png](https://9fans.github.io/plan9port/) - Simple programs from Plan 9 to display images in no-frills windows. Included with [plan9port](https://9fans.github.io/plan9port/).
* [meh](https://www.johnhawthorn.com/meh/) - image viewer using raw XLib, libjpeg, libpng and libgif.
* [page](https://9fans.github.io/plan9port/man/man1/page.html) - Plan 9's image/document viewer program. Included with [plan9port](https://9fans.github.io/plan9port/).
* [qiv](https://spiegl.de/qiv/) - Quick Image Viewer.
* [sxiv](https://github.com/muennich/sxiv) - Simple (or small or suckless) X Image Viewer. Depends on xlib and imlib2.
* [xli](http://web.aanet.com.au/gwg/xli.html)
* [xzgv](https://sourceforge.net/projects/xzgv/)

### Instant-Messaging clients

* [bitlbee](https://www.bitlbee.org/main.php/news.r.html) - A program to translate IM protocols to IRC.
* [CenterIM](https://www.centerim.org/index.php/Main_Page) - A centericq fork.
* [irssi-xmpp](https://github.com/cdidier/irssi-xmpp) - An irssi plugin to connect to the Jabber network.
* [mcabber](https://mcabber.com/) - A console jabber client.
* [ysm](http://ysmv7.sourceforge.net/) - A console-based ICQ client.

### Mail clients

* [fdm](https://github.com/nicm/fdm) - fetch and deliver mail.
* [heirloom-mailx](http://heirloom.sourceforge.net/mailx.html) - A mail client based on the original Berkeley Mail 8.1 with many new features.
* [isync](http://isync.sourceforge.net/) - MDA that can work better for IMAP, also known as mbsync.
* [mblaze](https://github.com/leahneukirchen/mblaze) - UNIX utilities to deal with Maildir.
* [mmh](https://marmaro.de/prog/mmh/) - Meillo's mail handler (mmh), a fork of nmh.
* [mpop](https://marlam.de/mpop/) - a POP3 mail client. It is much [faster and simpler than fetchmail](https://marlam.de/mpop/documentation/).
* [mutt](https://www.mutt.org/) - A ncurses mail client for fetching, reading and sending email.
* [nmh](https://www.nongnu.org/nmh/) - Message Handling System.
* [plan9port/Mail](https://9fans.github.io/usr/local/plan9/mail/) - A mail client for acme. Included with [plan9port](https://9fans.github.io/plan9port/).
* [s-nail](https://www.sdaoden.eu/code.html) - An improved heirloom-mailx.

### Media players

* [ffplay](https://www.ffmpeg.org/ffplay.html) - FFplay is a very simple and portable media player. It came with ffmpeg which depends on mplayer.
* [mplayer](https://www.mplayerhq.hu/design7/news.html)
* [mpv](https://mpv.io/) - a free, open-source and cross-platform media player.

### Password managers

* [pass](https://www.passwordstore.org/) - "The standard UNIX password manager".
* [spm](https://notabug.org/kl3/spm/) - Simple password manager (actively maintained fork of nmeum's tpm).
* [tpm](https://github.com/nmeum/tpm/) - Tiny password manager.

### PDF viewers

* [mupdf](https://mupdf.com/) - a lightweight PDF viewer written in C. It supports PDF, XPS, EPUB, XHTML, CBZ, PNG, JPEG, GIF and TIFF.
* [zathura](https://pwmt.org/projects/zathura/) - an extensible document viewer/shell which can support CBZ, DJVU, PS, EPUB (with mupdf) and PDF (with mupdf or poppler).

### Shells

* [dash](http://gondor.apana.org.au/~herbert/dash/) - DASH is a POSIX-compliant implementation of /bin/sh that aims to be as small as possible.
* [mksh](https://www.mirbsd.org/mksh.htm) - MirBSD Korn Shell, an actively developed free implementation of the Korn Shell programming language
  and a successor to the Public Domain Korn Shell (pdksh).

### Text editors

* [acme](https://acme.cat-v.org) - Rob Pike's framing text editor for Plan 9. Included in [plan9port](https://9fans.github.io/plan9port/).
* [ed](https://9fans.github.io/plan9port/man/man1/ed.html) - [ED IS THE STANDARD TEXT EDITOR!](https://www.gnu.org/fun/jokes/ed-msg.html)
* [ired](https://www.radare.org/r/) - A minimalist hexadecimal editor and bindiffer for p9, w32 and *nix.
* [mg](https://homepage.boetes.org/software/mg/) - A portable version of mg maintained by the OpenBSD team.
* [mle](https://github.com/adsr/mle) - A small, flexible console text editor.
* [nano](https://www.nano-editor.org/) - A pico clone - this is small simple code and easy to use.
* [nvi](https://sites.google.com/a/bostic.com/keithbostic/vi) - A small, multiple file vi-alike.
* [sam](https://sam.cat-v.org/) - An editor by Rob Pike with inspiration from ed.
* [traditional vi](http://ex-vi.sourceforge.net/) - A fixed version of the original vi.
* [vim](https://www.vim.org) (With the GUI, use `:set go+=c` to kill popup dialogs). It can be compiled to be as minimal as possible (see vim-tiny in Debian repos).
* [vis](https://github.com/martanne/vis) - A modern, legacy free, simple yet efficient vim-like editor.
* [wily](https://www.cse.yorku.ca/~oz/wily/) - An acme clone for POSIX.

### Text processing

* [json2tsv](https://codemadness.org/json2tsv.html) - a JSON to TAB-Separated Value (TSV) converter (and parser code).

### Utilities / miscellaneous

* [abduco](https://www.brain-dump.org/projects/abduco/) - session {at,de}tach support.
* [dvtm](https://www.brain-dump.org/projects/dvtm/) - dynamic virtual terminal manager.
* [entr](https://entrproject.org/) - Run arbitrary commands when files change.
* [nq](https://github.com/leahneukirchen/nq) - UNIX command line queue utility.
* [slmenu](http://bitbucket.org/rafaelgg/slmenu) - Dmenu spinoff for the console.
* [snore](https://github.com/clamiax/snore) - Sleep with feedback.

### Web browsers

* [Abaco](http://lab-fgb.com/abaco/)
  Another extension to make Firefox Vim-like. Less invasive than
* [Conkeror](http://www.conkeror.org/) - A Gecko based browser, with Emacs-style key bindings, appearances and behaviors.
* [Dillo](https://www.dillo.org/) - Blazingly fast graphical browser with basic CSS support.
* [edbrowse](https://edbrowse.org/) - ed-alike webbrowser. Unfortunately it is not the standard web browser.
* [ELinks](https://elinks.or.cz/) -  Feature-rich fork of Links, but without the graphical mode.
* [Links](https://links.twibright.com/) - A text-based browser that also has a simple graphical mode.
* [Lynx](https://lynx.invisible-island.net/) - text-mode web browser, supports the Gopher protocol.
* [netsurf](https://www.netsurf-browser.org/) - Very fast graphical browser with custom engine that has near-perfect CSS support.
* [surf](//surf.suckless.org/) - WebKit2 browser that can be embedded into other applications and uses dmenu as the address bar.
* [Tridactyl](https://github.com/tridactyl/tridactyl) - A WebExtension that tries to make Firefox Vim like. Unlike many similar extensions it works with firefox 57+.
* [uzbl](https://www.uzbl.org/) - Web interface tools which adhere to the UNIX philosophy.
* [VimFX](https://addons.mozilla.org/en-US/firefox/addon/vimfx/) -
  Vimperator (Doesn't work with Firefox 57+)
* [Vimperator](https://vimperator.org/) - An extension to make Firefox keyboard friendly and Vim-like. (Doesn't work with Firefox 57+).
* [w3m](https://w3m.sourceforge.net/) - Text-based browser which can view images in the terminal (X11 hack).

### X11

* [9menu](https://github.com/arnoldrobbins/9menu/) - A menu program based on the Blit-style menus so prevalent in Plan 9.
* [dmenu](//tools.suckless.org/dmenu/) - dmenu is a dynamic menu for X.
* [ffcast](https://github.com/lolilolicon/FFcast) - Simple screencasting.
* [grabc](https://www.muquit.com/muquit/software/grabc/grabc.html) - Grab the color of some pixel in X11.
* [keynav](https://www.semicomplete.com/projects/keynav/) - A new way for keyboard selection.
* [wmutils](https://github.com/wmutils/core) - A set of utilities for managing windows. Can be used on their own or to augment a WM itself. Support for tiling present.
* [xbanish](https://github.com/jcs/xbanish) - Hide the cursor while typing.
* [xclip](https://github.com/astrand/xclip) - A tool for controlling the X11 clipboard.
* [xdotool](https://www.semicomplete.com/projects/xdotool/) - A tool for scripting X11 actions.
* [xzoom](https://r-36.net/scm/xzoom/) - A simple zoom application.

Daemons
-------
This section is dedicated to daemons that are related to the UNIX philosophy.

### Web Servers

* [darkhttpd](https://unix4lyfe.org/darkhttpd/) - Darkhttpd is a simple, fast HTTP 1.1 web server for static content.
* [merecat](https://github.com/troglobit/merecat/) - thttpd with vhost support.
* [mini_httpd](https://acme.com/software/mini_httpd/) - By the thttpd developers.  Even smaller subset of thttpd with support for .htpasswd, CGI, dirlisting, HTTP errors and SSL, nothing more or less than that.
* [OpenBSD httpd/relayd](https://bsd.plumbing/) - Designed to combat the feature creep of modern webservers. Boasts concise configuration, with sane defaults.
* [quark](//tools.suckless.org/quark/) - suckless simple static web server.
* [thttpd](https://acme.com/software/thttpd/) - Outperforms many bigger httpds. Old, still works very well!

### Gopher servers

* [geomyidae](https://r-36.net/scm/geomyidae/) - small gopher-daemon written by [20h](//suckless.org/people/20h/).

### Misc daemons

* [scron](https://git.2f30.org/scron/) - simple crond.
