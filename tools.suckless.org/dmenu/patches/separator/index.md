separator
=========

This patch adds `-d` and `-D` flags which separates the input into two halves.
One half will be displayed into dmenu and the other half will be printed to stdout.

The following example will split the input into two halves on the _first_
occurrence of ' ' (space).  Meaning "alpha" will be displayed on dmenu, and
"beta charlie" will be printed to stdout upon selection.

	echo "alpha beta charlie" | dmenu -d ' '

`-D` is similar but it separates the input based on the _last_ occurrence instead.

The display/print order can be reversed by appending '|' to the separator.
Example: `dmenu -D "$(printf "\t|")"` will separate on the last tab character
and display the latter half on dmenu while printing the first half upon selection.

Download
--------

* [dmenu-separator-5.2.patch](dmenu-separator-5.2.patch)

Author
------
* NRK <nrk@disroot.org>
