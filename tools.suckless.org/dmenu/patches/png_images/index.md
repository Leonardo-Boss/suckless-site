png images
==========

Description
-----------
Preview PNG images using [libspng](https://libspng.org/).

Lines like `PNG_IMAGE:/path/to/image.png` will be replaced with a preview of
the given image file. The prefix (`PNG_IMAGE:`) can be changed via the `-ip`
flag. An empty prefix string is possible, too.

The image preview is taken from the top left corner of the image. For vertical
menus, the height is limited to _N_ pixels provided via `-is N` or the height
of two text lines otherwise. For horizontal menus, the preview height equals
the bar height. The image width is limited to _N_ pixels provided via `-is N`
or the height of eight text lines otherwise.

Example
-------

Select a [greenclip](https://github.com/erebe/greenclip) clipboard entry with
image previews:

    greenclip print | grep . \
      | sed -E 's|^(image/png  )(.*)|\1/tmp/greenclip/\2.png|' \
      | ./dmenu -i -fn 'monospace:size=14' -ip 'image/png  ' -p clipboard -l 23 -is 120 \
      | sed -E 's|^(image/png  )/tmp/greenclip/(-?[0-9]+)\.png$|\1\2|' \
      | xargs -r -d'\n' -I '{}' greenclip print '{}'

![dmenu png images screenshot](https://maximilian-schillinger.de/img/screenshot_dmenu_libspng.png)

Download
--------
* [dmenu-png-images-5.3.diff](dmenu-png-images-5.3.diff) (2024-11-04) ([mirror @ sr.ht](https://git.sr.ht/~maxgyver83/dmenu/tree/image-support-libspng))

Authors
-------
* Max Schillinger - <maxschillinger@web.de>
