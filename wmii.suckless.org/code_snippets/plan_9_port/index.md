Code snippets for wmii-snap
===========================

The [9P filesystem](http://en.wikipedia.org/wiki/9P) backend of wmii allows for
rich scripting possibilites, adding new features and more convenience to your
wmii. Because of the simple nature of the 9P protocol, scripting is possible in
any language, using either native 9P libraries in that language or external
tools like the supplied wmiir/[ixpc](http://libs.suckless.org/).

Feel free to add your own scripts to this page!

The snippets that are in `rc` syntax should be added to your `rc.wmii.local`
file.

See this sample `rc.wmii.local`: [(3.6)](http://sqweek.dnsdojo.org/wmii/rc.wmii.local-3.6) [(newer snapshots)](http://sqweek.dnsdojo.org/wmii/rc.wmii.local-20080520)

Cycle Views
-----------
    fn next_tag {
        awk -v curtag'='`{wmiir read /tag/sel/ctl | sed 1q} '
                NR==1 {first = $0}
                $0==curtag { if(getline) print $0; else print first; exit }'
    }
    fn Key-$MODKEY-n {
            wmiir xwrite /ctl view `{ read_tags | next_tag}
    }
    fn Key-$MODKEY-b {
            wmiir xwrite /ctl view `{ read_tags | tail -r | next_tag}
    }

Resize windows with the keyboard
--------------------------------
Adds a resize pseudo-mode to easily move or resize windows. M-C-r
enters resize mode, Escape exits it.

    # <h/j/k/l>   grows the window in the given direction
    # C-<h/j/k/l> shrinks the window in the given direction
    # S-<h/j/k/l> moves the window in the given direction
    fn Key-$mod-Control-r {
        @{
            . wmii.rc $"*

            fn mode {
                mod=$1; cmd=$2; shift 2
                eval '
                    fn Key-$mod^$left  {' wmiir xwrite /tag/sel/ctl $cmd sel sel left  $"* '}
                    fn Key-$mod^$right {' wmiir xwrite /tag/sel/ctl $cmd sel sel right $"* '}
                    fn Key-$mod^$up    {' wmiir xwrite /tag/sel/ctl $cmd sel sel up    $"* '}
                    fn Key-$mod^$down  {' wmiir xwrite /tag/sel/ctl $cmd sel sel down  $"* '}'}
            mode ''         grow
            mode Control-   grow -1
            mode Shift-     nudge

            fn Key-Escape { wi_cleankeys; exit }

            wi_eventloop
        }&}

Tag selected client and jump to new view
----------------------------------------
If tagged with multiple tags, it will jump to the last view of the set.

    fn Key-MODKEY-Control-t {
            newtag=`{wi_tags | wi_menu}
            wmiir xwrite /client/sel/tags $newtag
            newtag=`{echo $newtag | sed 's/.*\+//; s/-.*//'}
            wmiir xwrite /ctl view $newtag
    }

Switch to named view by number
-----------------------------

This allows to switch to a view with its position number, regardless of the view's name.

    fn keynum {
            echo `{echo $1 | sed 's/.*-//'}
    }
    fn tagnum {
            echo `{read_tags | sed -n $1^p}
    }

    for(i in `{seq 0 9}) {
            fn Key-$MODKEY-$i {
                    wmiir xwrite /ctl view `{tagnum `{keynum $1}}
            }
            fn Key-Shift-$MODKEY-$i {
                    wmiir xwrite /client/sel/tags `{tagnum `{keynum $1}}
            }
    }

Tag addition and subtraction using tag+ and tag-
------------------------------------------------

If you tend to rely on wimenu's completion for retagging, it can be annoying that + or - prefix
renders it useless. This snippet allows you to append the + or -, rather than prepending
it. Prepending still works as before.

    fn Key-$MODKEY-Shift-t {
            tag=`{wi_tags | wimenu | sed 's/(.*)([+\-])$/\2\1/'}
            wmiir xwrite /client/`{wmiir read /client/sel/ctl | sed 1q}^/tags $tag
    }

Retag all clients in a view
---------------------------
    fn clients_on {
        wmiir read /tag/$1/index | awk '!/^#/ { print $2 }'
    }

    fn Key-$MODKEY-r {
            target=`{wi_tags | wimenu}
            for(c in `{clients_on sel}){
                    wmiir xwrite /client/$c/tags -sel+$target
            }
            wmiir xwrite /ctl view $target
    }

Cycle trough tags starting with a specific character
----------------------------------------------------

(No tested, but might work)
Add a event in wmiirc that calls the following code.
If you have 3 tags named plan9, planner and plant: by calling the script you will cycle between the 3.
(Note: it does not work with capitals)

      count=1
      fn TagCycle {
          inputtag=$1
          currenttag=`{wmiir read /tag/sel/ctl | awk '{ print substr($2, 1, 1); exit }'}
          if(~ $currenttag $inputtag) {
              count=`{expr $count + 1}
              maxcount=`{wi_tags | grep '^'$inputtag | wc -l}
              if (test $count -gt $maxcount)
                  count=1
          }
          if not
              count=1
          gototag=`{wi_tags | grep '^'$inputtag | sed -n $count^p}
          wmiir xwrite /ctl view $gototag
      }

To easily add the entire alphabet in the bound buttons you can use this code.
Add this to your rc.wmii BEFORE the other keys (you still want your other old keys to work right ?):

      # Tag cycle
      key $MODKEY-A-^(a b c d e f g h i j k l m n o p q r s t u v w x y z) || fn $key  {
          TagCycle $1}

