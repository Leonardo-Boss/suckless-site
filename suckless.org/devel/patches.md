PATCHES
=======

diff generation
---------------
For mercurial users:

    cd program-directory
    hg diff > program-X.Y-yourpatchname.diff

For tarballs:
    
    cd modified-program-directory/..
    diff -up original-program-directory modified-program-directory > program-X.Y-yourpatchname.diff

where `X.Y` is a wmii tag name or version number.

patch program
-------------
For mercurial users:
    
    cd program-directory
    hg patch path/to/patch.diff

For tarballs:

    cd program-directory
    patch -p1 < path/to/patch.diff
