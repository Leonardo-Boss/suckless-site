# obey all sizehints

## Description

This patch makes dwm obey even "soft" sizehints for new clients.
Any window that requests a specific initial size will be floated and set to that size.
Unlike with "fixed size" windows, you are able to resize and/or unfloat these windows freely - only the initial state is affected.

This patch is honestly of limited utility since there are many clients that will abuse it.

There is no configuration for this patch.

## Download

 * [dwm-5.7.2-sizehints.diff](dwm-5.7.2-sizehints.diff) (695B) (20091221)

## Author

 * Ray Kohler - ataraxia937 gmail com
