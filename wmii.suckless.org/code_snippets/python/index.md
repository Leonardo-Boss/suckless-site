Code snippets for the Python wmiirc
===================================

To use these code snippets, simply add them to a file called
`wmiirc_local.py` somewhere in your `$WMII_CONFPATH` (usually
`~/.wmii`).  Alternatively, you can add them to any file whose
name ends in `.py` under `~/.wmii/plugins/`

Automatically enter and leave pass-through mode for a specific tag
------------------------------------------------------------------
I use this for testing wmii under Xephyr or Xembed, but it's
also for VNC and NX sessions. This specific configuration adds a
key binding M-x which will switch to and from the 'x' tag. When
the 'x' tag is active, all key bindings other than M-x will be
disabled, and will pass through to the active application.

    tags.ignore.add('x')
    keys.bind('main',   { '%(mod)s-x': lambda k: tags.select('x') })
    keys.bind('xembed', { '%(mod)s-x': lambda k: tags.select(tags.PREV) })
    bind_events({
        Match('FocusTag', 'x'):   lambda *a: setattr(keys, 'mode', 'xembed'),
        Match('UnfocusTag', 'x'): lambda *a: setattr(keys, 'mode', 'main'),
    })

