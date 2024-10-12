signals
======

Description
-----------
This patch lets slstatus handle signals and uses 'turns'
to update modules in the status text.

After each interval loop, that iteration is what is used to
give a module its 'turn'. If the interval is simply 1000ms (default),
the 'turn' will effectively function as a interval for that module.

This behavior is similar to that of [dwmblocks](https://github.com/torrinfail/dwmblocks).

Download
--------
* [slstatus-signals-1.0.patch](slstatus-signals-1.0.patch)

Authors
-------
* sewn <sewn@disroot.org>
