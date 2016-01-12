![farbfeld](farbfeld.svg)

farbfeld is a lossless image format which is easy to parse, pipe and
compress.
It has the following format:

| Bytes  | Description                                                |
|--------|------------------------------------------------------------|
| 8      | "farbfeld" magic value                                     |
| 4      | 32-Bit BE unsigned integer (width)                         |
| 4      | 32-Bit BE unsigned integer (height)                        |
| [2222] | 4⋅16-Bit BE unsigned integers [RGBA] / pixel, row-aligned  |

The RGB-data should be sRGB for best interoperability.

Examples
--------

Convert image.png to a farbfeld, run it through a filter and write the
result to image-filtered.png:

   png2ff < image.png | filter | ff2png > image-filtered.png

[Here](invert.c) you can find an example for such a filter which inverts
the colors. Notice that there are no dependencies on external libraries.
A hypothetical farbfeld-library would hardly exceed the size of
the given filter example.


Store image.png as a compressed farbfeld:

   png2ff < image.png | bzip2 > image.ff.bz2

Access a compressed farbfeld as a png:

   bunzip2 < image.ff.bz2 | ff2png {> image.png, | feh -, ...}

Handle arbitrary image data using 2ff(1), which falls
back to imagemagick's convert(1) for unknown image types:

   2ff < image | filter | ff2png > image-filtered.png

FAQ
---

### Why yet another image format?

Current image formats have integrated compression,
making it complicated to read the image data.
One is forced to use complex libraries like libpng,
libjpeg, libjpeg-turbo, giflib and others, read the
documentation and write a lot of boilerplate in order
to get started.

Farbfeld leaves this behind and is designed to be as
simple as possible, leaving the task of compression
to external tools.
The simple design, which was the primary objective,
implicitly leads to the very good compression
characteristics, as it often happens when you go with
the UNIX philosophy.
Reading farbfeld images doesn't require any special
libraries. The tools are just a toolbox
to make it easy to convert between common image formats
and farbfeld.

### How does it work?

In Farbfeld, pattern resolution is not done while
converting, but while compressing the image.
For example, farbfeld always stores the alpha-channel,
even if the image doesn't have alpha-variation.
This may sound like a big waste at first, but as
soon as you compress an image of this kind, the
compression-algorithm (e.g. bz2) recognizes the
pattern that every 48 bits the 16 bits store the
same information.
And the compression-algorithms get better and better
at this.

Same applies to the idea of having 16 bits per channel.
It sounds excessive, but if you for instance only have
a greyscale image, the R, G and B channels will store
the same value, which is recognized by the compression
algorithm easily.

This effectively leads to filesizes you'd normally only
reach with paletted images, and in some cases bz2 even
beats png's compression, for instance when you're dealing
with grayscale data, line drawings, decals and even
photographs.

### Which compression should I use?

bzip2 is recommended, which is widely available (anybody has it)
and gives good results. As time will move forward and new
algorithms hit the market, this recommendation might be rethought.

### Why use 16-Bits-per-channel all the time? Isn't this a total waste?

Not when you take compression into account. To make this
clearer, assume a paletted image with 5 colors and no
transparency. So the data is only a set of regular chunks
(color1, ..., color5) in a certain order.
Compression algorithms have been designed to recognize those
chunks and can even look at how these chunks interact.

Local tests has shown that farbfeld easily beats paletted
PNG-images. Try for yourself and look at the bzipped results!
There is no need for special grayscale, palette, RGB, 1-, 2-,
4-, 8-, 16-Bit subformats.
Just use 16-Bit RGBA all the time and let compression take
care of the rest.

### Why is there no support for color spaces (Adobe RGB, ...)?

The most widely-used color space is sRGB. It has its
drawbacks, but there are
[excellent](http://www.kenrockwell.com/tech/adobe-rgb.htm)
[ressources](http://www.kenrockwell.com/tech/color-management/is-for-wimps.htm)
explaining why you probably won't need Adobe RGB and other color spaces
anyway. Additionally, AdobeRGB is very difficult to process and if you
make one tiny mistake in your pipeline, you'll end up with very
dull colors (which is because Adobe RGB just stretches the RGB
values non-linearily).

Most displays and printers are calibrated for sRGB. The author has yet
to see an example of an image which looked any different in the
print depending on if it had been processed in a sRGB or Adobe RGB
pipeline. Also, for smoother gradients, sRGB actually is better
because for the same color depth the sRGB colors lie closer to
each other. However, this is minor due to the fact that you can
easily ramp up bit-depth. However, it helps you realize that
Adobe RGB is just a tool like any other and it has no magic
properties.

Given most people don't even know what this stuff is all about
anyway and unknowingly use sRGB, why not appease the 99%?
The 1% wanting to use AdobeRGB is not forbidden to use it in
farbfeld, nobody is stopping you. You just have to make it clear
in your data interchange, which is not problematic given that
you have to be very careful building your AdobeRGB-pipeline in
the first place anyway.
There are exotic color spaces which try to fix some limitations of the
sRGB color space, but it doesn't look like they'll catch on in
the near future.

Dependencies
------------

* [libpng](http://www.libpng.org/pub/png/libpng.html)
* [libjpeg-turbo](http://libjpeg-turbo.virtualgl.org/)

Development
-----------

You can [browse](http://git.suckless.org/farbfeld) its source code repository
or get a copy using the following command:

        git clone http://git.suckless.org/farbfeld

Download
--------

* [farbfeld-1](http://dl.suckless.org/farbfeld/farbfeld-1.tar.gz) (2016-01-06)
