FAQ
===

Why yet another image format?
-----------------------------
Current image formats have integrated compression, making it complicated to
read the image data. One is forced to use complex libraries like libpng,
libjpeg, libjpeg-turbo, giflib and others, read the documentation and write a
lot of boilerplate in order to get started.

Farbfeld leaves this behind and is designed to be as simple as possible,
leaving the task of compression to external tools. The simple design, which was
the primary objective, implicitly leads to the very good compression
characteristics, as it often happens when you go with the UNIX philosophy.
Reading farbfeld images doesn't require any special libraries. The tools are
just a toolbox to make it easy to convert between common image formats and
farbfeld.

How does it work?
-----------------
In Farbfeld, pattern resolution is not done while converting, but while
compressing the image. For example, farbfeld always stores the alpha-channel,
even if the image doesn't have alpha-variation. This may sound like a big waste
at first, but as soon as you compress an image of this kind, the
compression-algorithm (e.g. bz2) recognizes the pattern that every 48 bits the
16 bits store the same information. And the compression-algorithms get better
and better at this.

Same applies to the idea of having 16 bits per channel. It sounds excessive,
but if you for instance only have a greyscale image, the R, G and B channels
will store the same value, which is recognized by the compression algorithm
easily.

This effectively leads to filesizes you'd normally only reach with paletted
images, and in some cases bz2 even beats png's compression, for instance when
you're dealing with grayscale data, line drawings, decals and even photographs.

Why use 16-Bits-per-channel all the time? Isn't this a total waste?
-------------------------------------------------------------------
Not when you take compression into account. To make this clearer, assume a
paletted image with 5 colors and no transparency. So the data is only a set of
regular chunks (color1, ..., color5) in a certain order. Compression algorithms
have been designed to recognize those chunks and can even look at how these
chunks interact.

Local tests have shown that farbfeld easily beats paletted PNG-images. Try for
yourself and look at the bzipped results! There is no need for special
grayscale, palette, RGB, 1-, 2-, 4-, 8-, 16-Bit subformats. Just use 16-Bit
RGBA all the time and let compression take care of the rest.

Which compression should I use?
-------------------------------
bzip2 is recommended, which is widely available (anybody has it) and gives good
results. As time will move forward and new algorithms hit the market, this
recommendation might be rethought.

What about NetPBM?
------------------
NetPBM is considered to be the most simple format around, however, there's much
room for improvement. In fact, it doesn't help that the format is subdivided
into Portable BitMaps, Portable GrayMaps and Portable PixMaps. It's not helpful
when a manpage can't give a simple overview of a format in a few sentences.

NetPBM's big vice is that it has originally been developed to be hand-written
and passed around as plain text. A binary format exists, but still handling
optional comments in the header, base 10 ASCII width and height values,
arbitrary whitespace inside the data and out-of-band image size and color depth
is too painful for the sane user.

Judging from the usage of the format considering how long it's been around,
it's no surprise it never really took off. Additionally, functionality like
alpha channels and 16-Bit color depth can only be achieved via extensions. Due
to it being a textual format it also lacks the desired compression
characteristics.

The question you have to ask yourself is: Can I read in a format without
consulting the manpages? If your answer is yes, then the format is simple
enough. In this regard, NetPBM can be considered to be a failed format.
