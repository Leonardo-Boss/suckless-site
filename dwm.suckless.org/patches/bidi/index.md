Bidirectional Text
==================

Description
-----------
This patch adds proper support for Right-To-Left languages. (such as Farsi, Arabic or Hebrew)

Texts combining both RTL and LTR languages are displayed correctly. This is achieved using the GNU FriBiDi library, which is an additional dependency for this patch.

without dwm-bidi:

![dwm with no bidi](dwm-bidi-without-fix.png)

with dwm-bidi:

![dwm with bidi](dwm-bidi-fix.png)

Download
--------
* [dwm-bidi-restricted-20230512-e81f17d.diff](dwm-bidi-restricted-20230512-e81f17d.diff)
* [dwm-bidi-20220309-0386419.diff](dwm-bidi-20220309-0386419.diff)
* [dwm-bidi-20220219-302953a.diff](dwm-bidi-20220219-302953a.diff) (old)

Authors
-------
* Mahdi Mirzadeh - <https://mirzadeh.pro>
