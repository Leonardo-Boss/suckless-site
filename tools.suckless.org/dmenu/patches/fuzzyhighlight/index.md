fuzzyhighlight
==============

Description
-----------
This patch make it so that fuzzy matches gets highlighted and is therefore
meant to be used together with the patch fuzzymatch.

To make this patch fully integrated with fuzzymatch and support 'case 
insensitive' features the following line must be changed:

	if (*highlight == text[i]) {

into:

	if (!fstrncmp(&(*highlight), &text[i], 1)) {

[![Screenshot dmenu with the patch](fuzzyhighlight.png)](fuzzyhighlight.png)

Download
--------
* [dmenu-fuzzyhighlight-4.9.diff](dmenu-fuzzyhighlight-4.9.diff)

This patch fixes the shift of highlighted symbols, it also supports case-insensitive 
item matching behavior.

* [dmenu-fuzzyhighlight-caseinsensitive-4.9.diff](dmenu-fuzzyhighlight-caseinsensitive-4.9.diff)

Authors
-------
* Chris Noxz - <chris@noxz.tech>
* Oleh Kopeykin - <olehkopeykin@yandex.by> (case-insensitive)
