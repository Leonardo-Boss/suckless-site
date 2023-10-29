bulkill
=======

Description
-----------

Built-in dwm provides `MOD+Shift+c` to close current window.

We add:

* `MOD+Ctrl+c` to directly close all windows in current tag, but except current window.
* `MOD+Ctrl+Shift+c` to directly close all windows in current tag, include current window.

Download
--------

* `safe`: will not change original `dwm.c` file. We add a standalone `bulkill.c` to achieve the goal, but code will be slightly redundant.
* Without `safe`: Directly integrate into default `killclient` function in `dwm.c`, less code redundancy.
* `systray`: will be compatible with `systray` patch, but you should patch the `systray` first, then patch ours.

Recommend:

* If you are a newbie and you afraid the forthcoming patch might mess things up, use `safe` version.
* If you pursue ultimate clean code, use the non-`safe` version.

* [dwm-bulkill-20231029-9f88553.diff](dwm-bulkill-20231029-9f88553.diff)
* [dwm-bulkill-safe-20231029-9f88553.diff](dwm-bulkill-safe-20231029-9f88553.diff)
* [dwm-bulkill-systray-20231029-9f88553.diff](dwm-bulkill-systray-20231029-9f88553.diff)
* [dwm-bulkill-systray-safe-20231029-9f88553.diff](dwm-bulkill-systray-safe-20231029-9f88553.diff)

References
----------

* https://www.reddit.com/r/dwm/comments/rybfeu/kill_all_windows_in_a_workspace_same_tag


Authors
-------

* Songli Yu - <www.songli.yu@gmail.com>
