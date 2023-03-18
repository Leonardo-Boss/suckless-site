tidy
======

Description
-----------
This patch introduces an easy way of reducing the amount of programs that are searched
through and shown in dmenu by using $DMENU_PATH as the primary source of programs and $PATH
as a fallback in case $DMENU_PATH is not configured. To configure the new environment variable
put something like the following into your ~/.xinitirc for example:

    export DMENU_PATH="/home/${USER}/.local/bin"

Please note, that even if you have $DMENU_PATH configured, programs must still be available
in $PATH! A sensible way to achieve this would be via symlinks for example:

    ln -s /usr/bin/<program> ~/.local/bin/.

Please also note, that this patch also gets rid of caching any applications, since I
don't see any reason for it to be kept, especially since we are trying to tidy up.

Download
--------
* [dmenu-tidy-20230318-dfbbf7f.diff](dmenu-tidy-20230318-dfbbf7f.diff)

Authors
-------
* Phillip Tischler <ptgit@protonmail.com>
