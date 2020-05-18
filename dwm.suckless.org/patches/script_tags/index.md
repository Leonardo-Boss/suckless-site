script_tags
=====================

Description
-----------
This patch does two things:
1) It removes the code that generates the bar, but still leaves a "toggleable" area.
2) On X events, it writes all the tag and layout information to a user defined file.

This allows any bar that reads stdin to be used in conjuction with dwm.

The patch introduces 3 variables:
barheight: sets the size of the top gap in pixels(this gap remains toggleable with the togglebar function).
sepchar: sets the character used to delimitate different workspaces(see below).
tagfile: sets the path of the file to wich the tag and layout information is written to.

The tagfile uses an easy syntax.
Each tagname is prefixed with a character discribing the state of that tag.
There are 4 different states:

state 'e': tag is empty and not focused

state 'E': tag is empty and focused

state 'o': tag is occupied and not focused

state 'O': tag is occupied and focused

The different tags with respective tag information are separated by the sepchar variable defined in config.h.

A simple example would be:
```
echo /tmp/dwm_workspaces| entr cat /tmp/dwm_workspaces | lemonbar
```

Download
-----------
*[dwm-script_tags-6.2.diff](dwm-script_tags-6.2.diff) (18.05.2020)

Authors
-----------
* David Wiedemann <david.wiedemann2[at]gmail.com>




