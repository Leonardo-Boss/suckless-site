multi-image
===========

Description
-----------
This patch allows for the use of images instead of colors

Notes
-----
Specify images by replacing the color in `config.h` with the absolute path of the image,
This can be used in conjunction with normal color values.

This patch is based on the `background-image` patch and depends on `imlib2`
Like `background-image` it renders each image per monitor so that they are all scaled properly.

Download
--------
* [slock-multi-image-1.5.diff](slock-multi-image-1.5.diff)

Authors
-------
* Drew Marino - <drewmarino25@gmail.com>
