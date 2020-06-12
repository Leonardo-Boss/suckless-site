obey all sizehints
==================

Description
-----------
This patch makes dwm obey even "soft" sizehints for new clients. Any window
that requests a specific initial size will be floated and set to that size.
Unlike with "fixed size" windows, you are able to resize and/or unfloat these
windows freely - only the initial state is affected.

This patch is honestly of limited utility since there are many clients that
will abuse it.

There is no configuration for this patch.

Download
--------
* [dwm-sizehints-6.2.diff](dwm-sizehints-6.2.diff) (12/06/2020)
* [dwm-sizehints-5.7.2.diff](dwm-sizehints-5.7.2.diff) (695B) (20091221)

Author
------
* MLquest8 (updated for 6.2) (miskuzius at gmail.com)
* Ray Kohler - ataraxia937 gmail com
