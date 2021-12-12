tagspawn
========

Description
-----------
This patch allows you to define an array of commands corresponding to your tags
which can be spawned 

It is similar to the default\_tag\_apps patch, but is different (better?) in a few ways:
* tagspawn lets you define commands with multiple arguments, as its command
  format is the same as the spawn function
* if multiple tags are selected, tagspawn will run each corresponding command,
  while default\_tag\_apps will only execute the command corresponding to the
  most recently selected tag

Usage
-----
* Merge patch
* If not starting fresh remember to merge changes from config.def.h to config.h 
* Update tagcommands array in config.h to include your commands
* If desired change keybinding for tagspawn command. Default is mod+ctrl+return 

Download
--------
* [dwm-tagspawn-6.2.diff](dwm-tagspawn-6.2.diff) (dwm 6.2)

Authors
-------
* Sage Raflik - neonfuz@gmail.com
