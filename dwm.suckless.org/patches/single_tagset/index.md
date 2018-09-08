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

* [dwm-single_tagset-20160731-56a31dc.diff](dwm-single_tagset-20160731-56a31dc.diff)
* [dwm-6.1-single_tagset.diff](dwm-6.1-single_tagset.diff) (16634b) (20140209)
* [dwm-10e232f9ace7-single_tagset.diff](dwm-10e232f9ace7-single_tagset.diff) (14748b) (20120406)
* [dwm-single_tagset-6.0.diff](dwm-single_tagset-6.0.diff) (14417b) (20120406)

Authors
-------
* Jan Christoph Ebersbach - <jceb@e-jc.de>
