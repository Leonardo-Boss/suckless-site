cwd
===

Description
-----------
This patch spawns new tabs in the current working directory of the currently
selected tab.

This change is meant to be used with terminal emulators like `st` or `xterm`.
The target directory is actually the cwd of the first child process (the shell).

Download
--------
* [tabbed-cwd-20230128-41e2b8f.diff](tabbed-cwd-20230128-41e2b8f.diff)

Authors
-------
* 20230128  [Casey Fitzpatrick](https://github.com/kcghost/tabbed)
