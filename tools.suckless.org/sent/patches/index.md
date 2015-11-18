Patches
=======

diff generation
---------------
For git users:

    cd sent-directory
    git diff > sent-X.Y-yourpatchname.diff

For tarballs:

    cd modified-sent-directory/..
    diff -up original-sent-directory modified-sent-directory > sent-X.Y-yourpatchname.diff

where `X.Y` is a sent tag name or version number.


patch application
-----------------
For git users:

    cd sent-directory
    git apply path/to/patch.diff

For tarballs:

    cd sent-directory
    patch -p1 < path/to/patch.diff
