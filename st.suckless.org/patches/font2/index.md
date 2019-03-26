font2
=====

Description
-----------
This patch allows to add spare font besides default. Some glyphs can be
not present in default font. For this glyphs st uses font-config and try
to find them in font cache first. This patch append font defined in
`font2` variable to the beginning of font cache.

Download
--------
* [st-font2-20190326-f64c2f8.diff](st-font2-20190326-f64c2f8.diff)

Authors
-------
* Kirill Bugaev <kirill.bugaev87@gmail.com>
