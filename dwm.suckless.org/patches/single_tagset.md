single tagset
=============

Description
-----------

This patch addresses the multi-monitor setup. Instead of having separate tags
for every monitor there is just one list of tags for all monitors. Instead of
moving windows from one monitor to the other, the desired tag from the
other monitor can just be selected and all windows will be drawn on the
current monitor.

Several deep changes needed to be made:
1. Macro ISVISIBLE expects a second parameter, the monitor
2. Monitor->clients and Monitor->stack were moved to the global variable
   Clientlist cl. All monitors refer to this one list.
3. A new method attachclients was added. When changing between tags this
   function ensures that all clients are pointing to the right monitor.

Download
--------
Please be aware that this patch probably breaks any other patch!

Patches against different versions of dwm are available at
[dwm-clean-patches](https://github.com/jceb/dwm-clean-patches).

 * [dwm-6.1-single_tagset.diff](dwm-6.1-single_tagset.diff) (16634b) (20140209)
 * [dwm-10e232f9ace7-single_tagset.diff](dwm-10e232f9ace7-single_tagset.diff) (14748b) (20120406)
 * [dwm-6.0-single_tagset.diff](dwm-6.0-single_tagset.diff) (14417b) (20120406)

Special Version
---------------
This is a special version of the patch that was created with following patches being applied:
 * [attachabove](attachabove)
 * [float_border_color](float_border_color)
 * [focusmaster](https://raw.github.com/jceb/dwm-patches/master/patches/focusmaster.patch)
 * [moveresize](moveresize)
 * [noborder](noborder)
 * [pertag](pertag)
 * [push](push)
 * [save_floats](save_floats)
 * [statusallmons](statusallmons)
 * [swapfocus](swapfocus)
 * [tagall](tagall)
 * [zoomswap](zoomswap)

[dwm-6.1-single_tagset_all.diff](https://raw.github.com/jceb/dwm-patches/master/patches/single_tagset_all.patch)

Authors
-------
 * Jan Christoph Ebersbach - <jceb@e-jc.de>
