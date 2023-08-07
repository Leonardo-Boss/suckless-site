Xresources
===============

Description
-----------
This patch was a port of [dmenu xresources](https://tools.suckless.org/dmenu/patches/xresources/)
for sent.

This patch adds the ability to configure sent via Xresources. At startup,
sent will read and apply the change to the applicable resource. Below are the
resources that can be changed and what they change:

- `sent.font`: font being used on sent, support multiple fonts to define the fallbacks.
- `sent.foreground`: foreground color
- `sent.background`: background color

Note: Values in Xresources will override values in config.h.

Download
--------
* [sent-xresources-20230807-fb4dab3.diff](sent-xresources-20230807-fb4dab3.diff)

Authors
-------
* Fikri Rahmat Nurhidayat <fikrirnurhidayat@gmail.com>