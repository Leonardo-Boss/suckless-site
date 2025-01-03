betterswallow
=============

Description
-----------
This patch adds "window swallowing" to DWM, similar to some existing patches,
but with a unique take on dynamic swallowing.
Unlike the existing [dynamicswallow](https://dwm.suckless.org/patches/dynamicswallow/) patch,
`betterswallow` uses PID-based swallowing and a non-standard X11 ClientMessage
for communication.

As with `dynamicswallow`, an external tool, `betterswallow`, is required
to use this feature. `betterswallow` is a separate tool that does not require
this patch but is enhanced by its presence. Without the patch, `betterswallow`
defaults to the devour mechanism, which unmaps the parent window itself.

Development of this patch should happen on the [GitHub repository](https://github.com/afishhh/better-swallow)
of `betterswallow`. If you encounter any bugs, feel free to open an issue.

Currently, only a version for DWM-6.3 exists. If you wish to update the patch to
a newer version of DWM, you can open a pull request on the `betterswallow` repository.

#### Patching

The patch requires the `Xres` library. Ensure it's included in your build environment.
Unlike `dynamicswallow`, you don’t need to worry about any IPC patches, as this
patch uses a simpler ClientMessage for registering swallowers.
If you have any patches that store geometry parameters in the `Client` struct,
ensure they are copied in the `copyclientpos` function.

#### Usage

To have any graphical program swallowed, run it as:
```bash
better-swallow <CMD>
```
This will cause any windows spawned by the command to replace the parent window.
Since `betterswallow` is quite long, I recommend creating an alias, such as `bs`.

#### Limitations

- Due to reliance on the `Xres` extension and PIDs, this will fail if the X server
is not running on the same machine as `betterswallow`, and it may add nonsensical
entries to the "swallow queue".
- If a swallowed process opens a window deeper in the process tree, it will not
be swallowed. This may be fixed in the future by traversing the entire process
chain rather than just one step up. Open an issue if you encounter this.

Download
--------
* [dwm-betterswallow-20241215-89eeca1.diff](dwm-betterswallow-20241215-89eeca1.diff) (2024-12-15)

Author
------
* Hubert Głuchowski - <fishhh@fishhh.dev>
