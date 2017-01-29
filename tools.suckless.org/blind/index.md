![blind](blind.svg)

blind is a collection of command line video editing utilities.

Video format
------------

blind uses a raw video format with a simple container. A
file begins with an plain-text line, containing the
number of frames, the width, the height, and the pixel
format, all separated by a single regular blank space,
without and leading or tailing white space. After this
line, which ends with an LF, there is a NUL-byte
followed by the 4 characters “uivf” (unportable, interim
video format). This head is followed by the video
frame-by-frame with row-major frames. Pixels are
independently encoded, and are encoded unscaled CIE XYZ
with non-premultiplied alpha and without any
transfer-function, with values stored in native `double`s.
This colour model and space is the only option at the
moment, but the container format is designed so this can
be changed in the future.

Unscaled CIE XYZ was choosen because it gives good
performance for most operations. Most videos use Y'UV;
this format has good performance for converting to sRGB
and is has good subsampling quality, but it is not a
good for editing. `double`s are used instead of `float`s
because has higher precision: 52 instead of 23
fraction-bits. However, `float`s have
[much better](http://www.tomshardware.com/reviews/geforce-gtx-titan-gk110-review,3438-3.html)
performance than `double`, so support for in may be
added in the future.

FAQ
---

### Doesn't raw video takes up a lot of space?

Yes it does, a 4-channel pixel encoded with `double`
takes 32 bytes. A 1280-by-720 frame with this pixel format
takes 29.4912 MB (SI), which means you can only fit almost
3391 frames in 100 GB, which is about 113 seconds or 1:53
minutes with a framerate of 30 fps. Therefore, you
probably do not want to store anything in this format
unless you know you have room for it, or if it is very
small segment of your video, which unfortunely becomes a
bit of a problem when reversing a video. However, when
possible, feed the resulting video directly to
`blind-to-video` to convert it into a compressed,
lossless video format, if the video is not too large, you
can choose to compress it with bzip2 instead.

### Does it support farbfeld?

Of course. If you want to use farbfeld, you can use
the `-f` flag for `blind-to-image` and `blind-from-image`,
this will cause the programs to convert directly to
or from farbfeld without using `convert(1)`.

### For what kind of video editing is blind designed?

It is designed for composing new videos. It is not
designed for making small changes as this can probably
be done faster with a graphical video editor or with
ffmpeg which would also be much faster.

### Creating videos without graphics, are you insane?

Yes, but see the rationale below!

### Why doesn't blind use sRGB?

If I tell you I use CIE XYZ, you will only have two
questions: “how are values stored?” and “is Y scaled
to [0, 100] or [0, 1]?” When I tell you I use sRGB
your have more questions: “do you support out-of-gamut
colours?”, “how are values stored?”, “which scale
do you use?”, and “is the transfer-function applied?”

CIE XYZ also has the advantage of having the brightness
encoded in one of its parameters, Y, which means that
operations that want to deal with brightness only or
chroma only does not need to do any conversions.

### Why does blind use CIE XYZ instead of CIE L\*a\*b\*?

Because CIE L\*a\*b\* is not linear, meaning that it
requires unnecessary calculations when working with
the colours.

### Why does blind use CIE XYZ instead of Y'UV or YUV?

Because Y'UV, which most videos use (for legacy
reasons, namely that of black-and-white television)
is not linear it has the same disadvantages as
CIE L\*a\*b\*. Y'UV does not have its transfer-function
applied directly to it's parameters, instead it is a
linear transformation if the sRGB with its
transfer-function applied. This means that no performance
is gained during convertion to or from cooked video
formates by using YUV. CIE XYZ also has the advantage
that it is well-known and has a one-step conversion
to almost all colour models. It also have the advantages
that it's parameters are named X, Y, Z, which makes it
very easy to choose parameter when storing points
instead of colours in a video.

### Doesn't blind have any audio support?

No, it is not clear that there is actually a need for
this. There are good tools for editing audio, and
ffmpeg can be used be used to extract the audio streams
from a video or add it to a video.

Rationale
---------

* It's source control friendly and it's easy for a user to
  resolve merge conflicts and identify changes.

* Rendering can take a very long time. With this approach,
  the user can use Make to only rerender parts that have
  been changes.

* It's possible to distribute the rendering to multiple
  computers, without any built in functionality for this,
  for example using a distributed Make.

* Parallelism is added for free.

* No room for buggy GUIs, which currently is a problem on
  the large video editors for Linux.

* Less chance that the user makes a change by mistake
  without noticing it, such as moving a clip in the editor
  by mistake instead of for example resizing.

* Even old, crappy computers can be used for large projects.

* Very easy to utilise command line image editors for modify
  frames, or to add your own tools for custom effects.

Development
-----------

You can browse its [source code repository](http://git.suckless.org/blind)
or get a copy using git with the following command:

	git clone http://git.suckless.org/blind

Download
--------

* [blind-1.0](http://dl.suckless.org/tools/blind-1.0.tar.gz) (2017-01-22)

Dependencies
------------

* [ffmpeg](https://www.ffmpeg.org/) - for converting from or to other video formats.

* [imagemagick](https://www.imagemagick.org/) - for converting regular images to frames.

Author
------

* Mattias Andrée (maandree@kth.se)
