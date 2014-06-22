nametag
=======

Description
-----------

This patch allows you to change the names of dwm's tags while it's running. By default there is a 16 byte limit on tag names, and it uses dmenu to prompt for tag names. The 6.1 patch is for the current tip (cdec9782a1789bd5c3a84772fd59abb9da288597). It works with 6.0 but you should add -D_POSIX_C_SOURCE=2 to CPPFLAGS or you will get implicit delcaration warnings for popen and pclose.

The `prepend` version prepends the tag name with a short string which is used as a format string for `sprintf` which gets the tag number as the argument. By default a tag name "foo" given to tag 5 will become tag "5:foo". 

Download
--------

* [dwm-6.1-nametag.diff](dwm-6.1-nametag.diff) (2.3k) (20131002)
* [dwm-6.1-nametag-prepend.diff](dwm-6.1-nametag-prepend.diff) (2525b) (20140607)
* [dwm-5.7.2-nametag.diff](dwm-5.7.2-nametag.diff) (2.5k) (20091029)

Author
------

* Evan Gates (emg) <[evan.gates@gmail.com](mailto:evan.gates@gmail.com)>
* prepend version by [Ondřej Grover](mailto:ondrej.grover@gmail.com)
