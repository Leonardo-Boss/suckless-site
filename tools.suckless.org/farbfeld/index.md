![farbfeld](farbfeld.svg)

is a lossless image format which is easy to parse, pipe and compress.
It has the following format:

| Bytes  | Description                                                |
|--------|------------------------------------------------------------|
| 8      | "farbfeld" magic value                                     |
| 4      | 32-Bit BE unsigned integer (width)                         |
| 4      | 32-Bit BE unsigned integer (height)                        |
| [2222] | 4\*16-Bit BE unsigned integers [RGBA] / pixel, row-aligned |

The RGB-data should be sRGB for best interoperability.

Dependencies
------------

* libpng
* libjpeg-turbo

Development
-----------

You can [browse](http://git.suckless.org/farbfeld) its source code repository
or get a copy using the following command:

        git clone http://git.suckless.org/farbfeld

Download
--------

* [farbfeld-1](http://dl.suckless.org/farbfeld/farbfeld-1.tar.gz) (2016-01-06)
