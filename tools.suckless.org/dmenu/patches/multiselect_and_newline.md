Multiselect and newline
=======================

multi-select: selecting an item and pressing return won't terminate dmenu  
newline : seperates standard outputs by newlines

These two features are enabled by -ms and -nl command line flag, they can be useful in scripts where one wishes to print several elements from a list
with new line in between.  

The code comes from a vertical patch for dmenu_3.9 wrote by Fresch, the original patch has a lot of options, I just cutted out the one I use on top of Meillo's dmenu vertical patch. (these two and xmms-like pattern matching for huge strings) 

Cutter
------
- Julien Steinhauser <[julien.steinhauser@orange.fr](mailto:julien.steinhauser@orange.fr)>

Download
--------

* [dmenu-ms_nl.diff](dmenu-ms_nl.diff)
