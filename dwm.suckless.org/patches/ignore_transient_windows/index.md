Ignore Transient Windows
========================

Description
-----------
This fix issues working with Jetbrains applications and the UE4 Editor.

Also, not sure if needed but add the following for some java applications before launching dwm:

export _JAVA_AWT_WM_NONREPARENTING=1
export AWT_TOOLKIT=MToolkit
wmname LG3D

The real authors of this patch are Ar4m1d and bakkeby from reddit, I just put it on a patch to share it to anyone who find it useful:
https://www.reddit.com/r/suckless/comments/k67tso/dwm_webstormjetbrains_webstorm_window_becomes/

Download
--------
* [dwm-ignore_transient_windows-20211114-a786211.diff](dwm-ignore_transient_windows-20211114-a786211.diff)

Authors
-------
* Ar4m1d and bakkeby from reddit
* Jesús Mastache Caballero <BrunoCooper17@outlook.com>