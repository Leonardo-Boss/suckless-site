Irssi Message Notifier
======================

An IRC notifier based on the [../plan9port/irssi_notifier](plan9port version).

This script notifies you when messages containing your nick, private
messages, or messages in certain important channels, arrive in
irssi.

First, create `~/.wmii/plugins/irc_notify.py` with the following
contents:

    from wmiirc import *
    from pygmi import *

    def isirssi(client):
        return Client(client).label == 'irssi'

    def irc_message(whom, message):
        if isirssi('sel'):
            return
        for c in Client.all():
            if isirssi(c):
                c.urgent = True
                notice.show('IRC: %s %s' % (whom, message))
                return

    events.bind({
        Match('ClientFocus', _): lambda e, c: isirssi(c) and setattr(Client(c), 'urgent', False),
        'IRCMessage': lambda s: irc_message(*s.split(' ', 2)[1:]),
    })

This portion is a perl script for irssi. It should go in
`~/.irssi/scripts`, and can be loaded with `/script load notify`, or
autoloaded by symlinking it into `~/.irssi/scripts/autorun`. The
irssi `notify_channels` setting takes a list of channels to always
notify you of messages to, or '*' to notify you for all channels.

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

    open my $tty, '>', '/dev/tty';
    print $tty "\033]0;irssi\007";
    close $tty;

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

