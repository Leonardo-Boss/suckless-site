# betterswallow

## Description

This patch adds "window swallowing" to dwm, as a few existing patches already do,
but with another take on dynamic swallowing. In contrast to the existing
[dynamicswallow](https://dwm.suckless.org/patches/dynamicswallow/) patch,
`betterswallow` uses PID-based swallowing and a non-standard X11 ClientMessage
for communication. As with `dynamicswallow`, an external tool `better-swallow`
is required to use it. `better-swallow` is a separate tool that does not
*require* this patch but is only enhanced by its presence, without the patch
it falls back to the devour mechanism of unmapping the parent window itself.

Development of this patch should only happen on the
[GitHub repository](https://github.com/afishhh/better-swallow) of
`better-swallow`, if you find any bugs feel free to open an issue.

Currently only a version for dwm-6.3 exists, if you wish to update the patch to
a newer version of DWM you can open a pull request to the `better-swallow`
repository.

## Download

- [dwm-betterswallow-20241215-89eeca1.diff](dwm-betterswallow-20241215-89eeca1.diff)
- [better-swallow](https://github.com/afishhh/better-swallow)

## Patching

The patch requires the `Xres` library, make sure you have it in your build environment.

Unlike `dynamicswallow` you don't have to worry about any IPC patches, because
this patch uses the simpler method of a ClientMessage for registering swallowers.

If you have any patches that store geometry parameters in the `Client` struct,
make sure they're copied in the `copyclientpos` function.

## Usage

Run any graphical program you want to be swallowed as
`better-swallow <CMD>`, this will cause any windows it spawns to replace the
parent window.

Since `better-swallow` is a pretty long name I recommend creating an alias such as
`bs`.

## Limitations

- Due to the reliance on the `Xres` extension and PIDs, this will fail if the X server
is not running on the same machine as `better-swallow` and possibly add nonsensical
entries to the "swallow queue".
- If a swallowed process opens the window deeper in the process tree it will not get
swallowed. This may be fixed in the future by traversing the whole process chain
instead of just one step up. Open an issue if you actually encounter this.

## Author
- Hubert Głuchowski (<fishhh@fishhh.dev>)
