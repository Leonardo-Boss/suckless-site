tmenu
====
Text displayed != text output
For each line, if the delimeter character (tab by default, selectable with -d option) is present, the text before that character will be the text output, and the text after that delimiter will be the text displayed on the menu.

For example,
$ echo "~/.local/bin" "\t" "local binarys" | dmenu
will display "local binarys" in dmenu. When this option is selected, "~/.local/bin" will be output to stdout

When the delimiter character is not present, the behavior is the same as w/o this patch

Download
--------
* [dmenu-tmenu-5.2.diff](dmenu-tmenu-5.2.diff)
* [dmenu-tmenu-20240811-475d809.diff](dmenu-tmenu-20240811-475d809.diff)

Author
------
* Tim Keller <tjk@tjkeller.xyz>
* Robert Bilski - <robert at rbilski com>
