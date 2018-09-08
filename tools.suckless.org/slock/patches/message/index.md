Message
=======

Description
-----------

This patch lets you add a message to your lock screen. You can place a default message in `config.h`, and you can also pass a message with `-m message` 

So, for instance, you can run

`slock -m "Locked at  $(date "+%a %d, %H:%M:%S")"`

Or if you want a silly lockscreen

`slock -m "$(cowsay "$(fortune)")"`

Notes
-----

This adds three items to `config.h`: 

* `message` - the default message 
* `text_color` - which can be a hex color or a colorname (like "black")
* `text-size` - which must be some valid X11 dimension like "6x10" 


*A list of font sizes might be in* `/usr/share/fonts/X11/misc/`


Download
--------

* [slock-message-20180626-8384a86.diff](slock-message-20180626-8384a86.diff)

Authors
-------

* Blair Drummond - blair.robert.drummond@gmail.com
