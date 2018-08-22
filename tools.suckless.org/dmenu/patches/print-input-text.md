Print Input Text
================

Description
-----------

This simple patch adds a flag (`-t`) that makes return key print input text
instead of printing selection. The flag `-t` basically swaps the functions
of Return and Shift+Return.

The default dmenu behaviour makes sense when selecting from given options, but
it becomes annoying when you want to input a text different than the given
options. For example when entering a uri in surf, it will reload the page
unless you use Shift (i.e. trying to go to suckless.org when you are on
surf.suckless.org).


Usage in Surf
-------------

Simply add the `-t` flag to the dmenu command in the SETPROP function of surf's
config.def.h. Now the url bar will behave like in all other browsers.


Download
--------

* [dmenu-printinputtext-4.8.diff](dmenu-printinputtext-4.8.diff)

Author
------

* efe - efe@efe.kim
