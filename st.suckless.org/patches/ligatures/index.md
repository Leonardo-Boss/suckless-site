Ligature support
================

Description
-----------
This patch adds proper drawing of ligatures.

The code uses Harfbuzz library to transform original text of a single line to a list of glyphs with ligatures included.

Example
-------
Taken with Fira Code Regular 14pt:

[![fira_code](fira-code.png)](fira-code.png)

Notes
-----
* The patch adds additional dependency on Harfbuzz library and headers.
* Original patch was made for clean version of ST from latest master commit. It is not 100% compatible with Scrollback and Alpha patches, so I made a modified versions that you can apply on top of a Scrollback and/or Alpha patch.
* Due to some limitations in drawing engine, ligatures will break when crossing colors, font styles or selection. They will still render properly as separate symbols, just not as ligatures.

boxdraw
-------
* The original patch does not work very well with the boxdraw. Since it requires some additional changes in the code to make ligatures compatible with boxdraw, a special version of the patch was added, that you can apply on top of the boxdraw patch.
* It does not include Alpha or Scrollback patches.

Download
--------
* [st-ligatures](st-ligatures-20200406-28ad288.diff)
* [st-ligatures-scrollback](st-ligatures-scrollback-20200406-28ad288.diff)
* [st-ligatures-alpha](st-ligatures-alpha-20200406-28ad288.diff)
* [st-ligatures-alpha-scrollback](st-ligatures-alpha-scrollback-20200406-28ad288.diff)
* [st-ligatures-boxdraw](st-ligatures-boxdraw-20200407-28ad288.diff)

Authors
-------
* Alexander Rogachev - [https://github.com/cog1to](https://github.com/cog1to)
