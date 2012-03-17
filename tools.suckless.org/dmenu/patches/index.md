Patches
=======

diff generation
---------------
For mercurial users:

    cd dmenu-directory
    hg diff > dmenu-X.Y-yourpatchname.diff

For tarballs:

    cd modified-dmenu-directory/..
    diff -up original-dmenu-directory modified-dmenu-directory > dmenu-X.Y-yourpatchname.diff

where `X.Y` is a dmenu tag name or version number.


patch application
-----------------
For mercurial users:

    cd dmenu-directory
    hg patch path/to/patch.diff

For tarballs:

    cd dmenu-directory
    patch -p1 < path/to/patch.diff
