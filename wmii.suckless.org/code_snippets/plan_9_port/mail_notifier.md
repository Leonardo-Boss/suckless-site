Mail Notifier
=============

This script will notify you of mail by setting the urgent hint
on windows for mail folders in which you have new mail. It only
works for Maildirs, and assumes that you have a window on the
`mail` tag named for each folder you wish to check. The name
`inbox` is special, and is treated as the root folder. When
there are files in the `new` folder for a given window, its
urgent hint is set. Otherwise, it is unset.

    #!/usr/local/plan9/bin/rc
    . 9.rc

    # Configuration
    delay=5
    maildir=$home/Maildir
    # End Configuration

    echo Start mail | wmiir write /event

    {       wmiir read /event &
            while(echo Tick)
                    sleep $delay
    } | while(*=`{read}) 
            switch($1) {
            case Start
                    if(~ $2 mail)
                            exit
            case Tick
                    wmiir read /tag/mail/index |
                    while(l = `{read}) {
                            b = `{echo $l | awk -F: '{print $3}'}
                            if(~ $b inbox)
                                    b = ''
                            if(! ~ $#b 0 && test -d $maildir/.$b/new) {
                                    knot = ''
                                    if(~ `{ls -l $maildir/.$b/new | wc -l} 0)
                                            knot = Not
                                    wmiir xwrite /client/$l(2)^/ctl $knot^Urgent
                            }
                    }
            }

