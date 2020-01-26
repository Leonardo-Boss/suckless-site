# transfer

This patch adds a keybinding that lets you transfer the currently focused
client between the master and the stack and readjusts the nmaster variable
accordingly. For example, if you're focused on a stack client, using the
transfer function moves the client to the master area and increments
nmaster by 1. Conversely if you're focused on a master client and call
transfer, the client is moved to the stack and nmaster is decremented by 1.

## Download
* [dwm-transfer-6.2.diff](dwm-transfer-6.2.diff) (01/25/2020)

## Author
- Miles Alan (m@milesalan.com)
