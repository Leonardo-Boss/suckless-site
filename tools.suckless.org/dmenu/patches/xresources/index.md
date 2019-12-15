xresources
==========

Description
-----------
This patch was origionally made by Michał Lemke has been slightly modified to
work with dmenu 4.9.

This patch adds the ability to configure st via Xresources. At startup, st will
read and apply the change to the applicable resource. Below are the resources
that can be changed and what they change:

- dmenu.font          : font or font set
- dmenu.background    : normal background color
- dmenu.foreground    : normal foreground color
- dmenu.selbackground : selected background color
- dmenu.selforeground : selected foreground color

Download
--------
* [dmenu-xresources-4.9.diff](dmenu-xresources-4.9.diff)

Authors
-------
* Michał Lemke - @melek on [Bitbucket](https://bitbucket.org/melek/dmenu2/)
* Pratik Bhusal - dmenu-xresources-4.9 port
