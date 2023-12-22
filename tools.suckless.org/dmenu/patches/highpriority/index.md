highpriority
============

Description
-----------
This patch will automatically sort the search result so that high priority items are shown first.

Adds the option *[SchemeHp]* to *colors* in config.def.h and the flags *hb*, *hf*, and *hp*.

* *hb*: Background color of the high priority items
* *hf*: Foreground color of the high priority items
* *hp*: A CSV (comma-seperated list) of high priority items

[![Screenshot dmenu with highpriority patch](dmenu-highpriority.gif)](dmenu-highpriority.gif)

In this case, *chromium* is added to *hp* and it came first on search instead of *chromedriver*

Download
--------
* [dmenu-highpriority-4.9.diff](dmenu-highpriority-4.9.diff)
* [dmenu-highpriority-5.1.diff](dmenu-highpriority-5.1.diff)
* [dmenu-highpriority-e35976f.diff](dmenu-highpriority-e35976f.diff)
* [dmenu-highpriority-5.2.diff](dmenu-highpriority-5.2.diff)

Author
------
* Takase
* NRK (v5.1 and `e35976f` rebase, allocation related cleanup)
* Bhargav Das Gupta (v5.2)
