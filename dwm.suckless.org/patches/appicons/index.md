appicons
========

![App Icons Screenshot](example.png)

Description
-----------
Adds support for app icons that can replace the tag indicator and tag name.
This feature is configurable through an additional option in `rules`.

Icons should work out of the box. Emojis require a special font like
[Noto Color Emoji](https://fonts.google.com/noto/specimen/Noto+Color+Emoji).

When one or more app icons are present in a tag, the tag name will be enclosed
by the outer separators (`outer_separator_beg` and `outer_separator_end`).
Additionally, the icons within the tag will be separated by `inner_separator`.

Each tag can display a maximum of `truncate_icons_after` icons, after which the
`truncate_symbol` will be shown.

**Inspiration:** [XMonad's DynamicIcons](https://hackage.haskell.org/package/xmonad-contrib-0.18.1/docs/XMonad-Hooks-DynamicIcons.html)

Download
--------
* [dwm-appicons-6.5.diff](dwm-appicons-6.5.diff) (2025-01-04)

Author
------
* Rumen Mitov - <rumen.valmitov@gmail.com>
