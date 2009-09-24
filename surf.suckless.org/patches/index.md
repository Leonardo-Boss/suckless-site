PATCHES
=======

diff generation
---------------
For mercurial users:

    cd surf-directory
    hg diff > surf-X.Y-yourpatchname.diff

For tarballs:

    cd modified-surf-directory/..
    diff -up original-surf-directory modified-surf-directory > surf-X.Y-yourpatchname.diff

where `X.Y` is a surf tag name or version number.


patch application
-----------------
For mercurial users:

    cd surf-directory
    hg patch path/to/patch.diff

For tarballs:

    cd surf-directory
    patch -p1 < path/to/patch.diff

