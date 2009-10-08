SIMPLE_BOOKMARKING
==================

Description
-----------

This script assumes the simpliest surf usage, which probably won't be yours,
change this script to fit your needs.

Make sure surf is launched with something like that :
surf -x >> ~/.surf/id

bookmarkurl :

file=~/.surf/bookmarks
surfid=`head -n 1 ~/.surf/id`
url=`xprop -id $surfid | grep URL | awk '{print $3}' | sed 's/\"/\ /g'`
title=`xprop -id $surfid | grep WM_ICON_NAME\(STRING\) | cut -c 24-`
echo -e `echo -e $url $title | dmenu` >> $file
 

to add tags, when dmenu displays, simply tab, space and write your tag

loadbookmark :
(needs a vertical patch on dmenu for convenience, choose the one you like,
Meillo's is the lightweight, Fresch's is the full featured)

url=`cat ~/.surf/bookmarks | dmenu -i -b -l 10 | awk '{print $1}'`
xprop -id `head -n 1 ~/.surf/id` -f _SURF_URL 8s -set _SURF_URL $url

To make dmenu display bookmark with a tag only, add a grep part in the
first line and launch this script with the tag as argument.
 
Author
------
- Julien Steinhauser <[julien.steinhauser@orange.fr](mailto:julien.steinhauser@orange.fr)>
