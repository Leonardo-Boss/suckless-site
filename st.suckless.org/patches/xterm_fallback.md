#XTerm fallback

##Description
The patch redefines xterm and xterm-256color terminals to be aliases of st and st-256color respsectively. If the st terminfo is installed - the st terminal is used. If however it is not - the terminal falls back to the xterm terminal and thus ensures seamless operation on a remote SSH servers.

*PLEASE NOTE: This patch assumes the st is the only terminal in the system. If it is not the case however, please see alternative solution as recommended by Roberto E. Vargas Caballero (k0ga)*

##Download

* [xterm_fallback.diff](xterm_fallback.diff)

or

add the following in the .bashrc (thanks k0ga):

```bash
    alias ssh='TERM=xterm ssh'
```

##Author

[Alex Kozadaev](snobb@gmx.com)
