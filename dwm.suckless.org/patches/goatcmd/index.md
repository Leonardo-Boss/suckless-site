goatcmd
=======

Description
-----------
Add a key binding to play goat videos on-the-fly (on-the-goat?) using
Mod1-Ctrl-Shift-g. The user running dwm must be enable to execute
`mpv "$(hurl gopher://bitreich.org/0/memecache/index.meme | grep goat | grep -E '\.(mp4|mkv|webm|avi) ' | cut -f2 -d' ' | sort -R | head -n 1)"`
without password.


Download
--------
* [dwm-goatcmd-20211013-5ed9c48.diff](dwm-goatcmd-20211013-5ed9c48.diff)

Authors
-------
* Anders Damsgaard <anders@adamsgaard.dk>
