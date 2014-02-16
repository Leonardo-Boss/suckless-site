Patches
=======

diff generation
---------------
For git users:

    cd tabbed-directory
    git diff > tabbed-X.Y-yourpatchname.diff

For tarballs:

    cd modified-tabbed-directory/..
    diff -up original-tabbed-directory modified-tabbed-directory > tabbed-X.Y-yourpatchname.diff

where `X.Y` is a tabbed tag name or version number.


patch application
-----------------
For git users:

    cd tabbed-directory
    git apply path/to/patch.diff

For tarballs:

    cd tabbed-directory
    patch -p1 < path/to/patch.diff

