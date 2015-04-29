Patches
=======

diff generation
---------------
For git users:

    cd sic-directory
    git diff > sic-X.Y-yourpatchname.diff

For tarballs:

    cd modified-sic-directory/..
    diff -up original-sic-directory modified-sic-directory > sic-X.Y-yourpatchname.diff

where `X.Y` is an sic tag name or version number.


patch application
-----------------
For git users:

    cd sic-directory
    git apply path/to/patch.diff

For tarballs:

    cd sic-directory
    patch -p1 < path/to/patch.diff
