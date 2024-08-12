Passthrough
===========

Description
-----------
Adds a new table to `config.def.h` that allows you to specify binds that are
allowed to pass through slock.

Important! Much like the `mediakeys` patch, dwm will require a small patch to
get this working. From `mediakeys`:

If you are using dwm for key bindings, in your `dwm.c` file, go to the
`setup` function to the line with `wa.event_mask =` and add `|KeyPressMask`

```c
	wa.event_mask = SubstructureRedirectMask|SubstructureNotifyMask
		|ButtonPressMask|PointerMotionMask|EnterWindowMask
		|LeaveWindowMask|StructureNotifyMask|PropertyChangeMask|KeyPressMask;
```


Download
--------
* [slock-passthrough-20240812-809d3c0.diff](slock-passthrough-20240812-809d3c0.diff)


Authors
-------
* Catboomer <catb00mer@proton.me>
