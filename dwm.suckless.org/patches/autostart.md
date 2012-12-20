# autostart #

## Description ##
This patch will make dwm run "~/.dwm/autostart_blocking.sh" and "~/.dwm/autostart.sh &" (in that order) before entering the handler loop. One or both of these files can be ommited.

Be aware that dwm will not startup as long as autostart_blocking.sh is running and will stay completely unresponive until its completion. For obvious reasons it is generally a bad idea to start X-applications here :)

## Download ##
### 6.0
 * [dwm-6.0-autostart.diff](dwm-6.0-autostart.diff) (1kb) (20121220)
 * [from github](https://github.com/axelGschaider/dwm-patch-autostart.sh)

## Author ##
 * Axel Gschaider: <axel.gschaider@gmail.com>

