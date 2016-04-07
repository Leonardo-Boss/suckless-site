Patches
=======

diff generation
---------------
For git users:

    cd slock-directory
    git diff > slock-X.Y-yourpatchname.diff

For tarballs:

    cd modified-slock-directory/..
    diff -up original-slock-directory modified-slock-directory > slock-X.Y-yourpatchname.diff

where `X.Y` is a slock tag name or version number.


patch application
-----------------
For git users:

    cd slock-directory
    git apply path/to/patch.diff

For tarballs:

    cd slock-directory
    patch -p1 < path/to/patch.diff
