Irssi Message Notifier
======================

This script notifies you, by setting the Urgent hint on your irssi window, of
messages with your nick, or in channels you care about. It can optionally
display the messages on the bar. You'll need to set the title of the window
running irssi to 'irssi' for this to work. I use `label`(1) from plan9port.

See also the [../python/irssi_notifier](python version).

This portion goes in your rc.wmii.local, or can be modified to run standalone:

    showmessage=false # true, false

    fn isirssi { ~ `{wmiir read /client/$"*/label} irssi }
    fn clients { wmiir ls /client | sed 's,/,,; /^sel$/d' }

    fn Event-IRCMessage {
            if(! isirssi sel) {
                    for(c in `{clients})
                            if(isirssi $c)
                                    wmiir xwrite /client/$c/ctl Urgent
                    if($showmessage) {
                            shift 2
                            echo $WMII_NORMCOLORS $* | wmiir create /rbar/0status
                    }
            }
    }

    fn Event-ClientFocus {
            if(isirssi $1)
                    wmiir xwrite /client/$1/ctl NotUrgent
    }

This portion is a perl script for irssi. It should go in `~/.irssi/scripts`,
and can be loaded with `/script load notify`, or autoloaded by symlinking it
into `~/.irssi/scripts/autorun`. The irssi `notify_channels` setting takes a
list of channels to always notify you of messages to, or '*' to notify you for
all channels.

    # ---------------------------------------------------------------------------
    # "THE BEER-WARE LICENSE" (Revision 42):
    # <maglione.k@gmail.com> wrote this file. As long as you retain this notice you
    # can do whatever you want with this stuff. If we meet some day, and you think
    # this stuff is worth it, you can buy me a beer in return.       Kris Maglione
    # ---------------------------------------------------------------------------
    # <phk@FreeBSD.ORG> wrote this license.  As long as you retain this notice you
    # can do whatever you want with this stuff. If we meet some day, and you think
    # this stuff is worth it, you can buy me a beer in return.   Poul-Henning Kamp
    # ---------------------------------------------------------------------------

    use strict;

    our $VERSION = '20091030';
    our %IRSSI   = (
            authors     => 'Kris Maglione',
            contact     => 'maglione.k@gmail.com',
            name        => 'notify',
            description => 'Writes certain messages to the wmii event FIFO',
            license     => 'BEER-WARE',
            url         => '',
            changed     => $VERSION,
            modules     => '',
    );

    use Irssi;
    use Fcntl;

    sub should_notify ($);

    sub message_handler {
            my ($server, $mesg, $nick, $address, $target) = @_;
            my $mynick = $server->{nick};

            if (not defined $target
            or should_notify($target)
            or $mesg =~ /\b$mynick\b/) {
                    $mesg =~ s/\n/\\n/g;
                    $target = ($target ? " in $target" : "");

                    open my $fifo, '| wmiir write /event' or return;
                    print $fifo "IRCMessage from $nick$target: $mesg\n";
                    close $fifo;
            }
    }

    sub should_notify ($) {
            my $target = shift;
            my @notifies = split /,\s*/, Irssi::settings_get_str('notify_channels');

            return 1 if grep { $_ eq "*" || $_ eq $target } @notifies;
            0;
    }

    Irssi::signal_add('message private', 'message_handler');
    Irssi::signal_add('message public',  'message_handler');
    Irssi::settings_add_str('misc', 'notify_channels', '');

You can also set the label as required, if you so choose, from the IRSSI
plugin as so:

    open my $tty, '>', '/dev/tty';
    print $tty "\033]0;irssi\007";

