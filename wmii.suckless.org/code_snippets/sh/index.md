Code snippets for wmii-snap
===========================

The [9P filesystem](http://en.wikipedia.org/wiki/9P) backend of wmii allows for
rich scripting possibilites, adding new features and more convenience to your
wmii. Because of the simple nature of the 9P protocol, scripting is possible in
any language, using either native 9P libraries in that language or external
tools like the supplied wmiir/[ixpc](http://libs.suckless.org/).

Feel free to add your own scripts to this page!

Most of the snippets below can be added to `~/.wmii/wmiirc_local`. Key and
event bindings should be added as in the following example, unless the snippet
specifies otherwise:
    local_events="$(cat <<'!'
    local_events() {
	sed 's/^    //' <<'!'
	Event CreateTag
                ...
        Key $MODKEY-x
                ...
    !
    }

Resize windows with the keyboard
--------------------------------
Adds a resize pseudo-mode to easily move or resize windows. M-C-r
enters resize mode, Escape exits it.

    # <h/j/k/l>   grows the window in the given direction
    # C-<h/j/k/l> shrinks the window in the given direction
    # S-<h/j/k/l> moves the window in the given direction
    Key $MODKEY-Control-r
            (
                . wmii.sh
                for i in "'' grow" "Control- grow -1" "Shift- nudge"; do
                    eval "set -- $i"; mod=$1; cmd=$2; shift 2
                    cat 's/^            /' <<!
                        Key Escape
                                exit
                        Key $mod-$LEFT
                                wmiir xwrite /tag/sel/ctl $cmd sel sel left $*
                        Key $mod-$RIGHT
                                wmiir xwrite /tag/sel/ctl $cmd sel sel right $*
                        Key $mod-$UP
                                wmiir xwrite /tag/sel/ctl $cmd sel sel up $*
                        Key $mod-$DOWN
                                wmiir xwrite /tag/sel/ctl $cmd sel sel down $*
            !
                done | wi_events
                wi_eventloop
            ) & 

