Proxy Config
===========

Description
-----------

This patch allows you to specify proxy settings in your config.h file.

It supports the three proxy modes in Webkit:

* CustomProxy: specify a custom proxy URL and list of hosts to ignore.
* SystemProxy: use your desktop environment proxy settings or `http_proxy` environment variable.
* NoProxy: ensures that a proxy is never used.

Usage
-----

Once the patch is applied, modify the ProxyMode, ProxyUrl and ProxyIgnoreHosts variables as required. For example, if using a custom proxy server then the variables might be set as:

``
[ProxyIgnoreHosts]    =       { { .v = (char *[]){ "localhost","local.lan",NULL } }, },
[ProxyMode]           =       { { .i = CustomProxy }, },
[ProxyUrl]            =       { { .v = (char *) "http://proxy.local.lan:8080/"}, },
``

The default value is SystemProxy, which preserves the default behavior of surf.

Note that the SystemProxy mode will not respect your ProxyIgnoreHosts list.

FreeBSD Ports
-------------

To apply this patch to the `www/surf` port on FreeBSD, create the `files` directory within the port directory and copy the patch into it. If you have your own pre-defined `config.h` file, you can build and install the port using the using the `SURF_CONF=/path/to/surf/config.h` `make` variable. Otherwise, run `make patch` to apply the patch to the source files, edit `work/surf-VERSION/config.def.h`, set the variables as required and then build and install the port as per usual.

Download
--------

* [patch-proxyconfig-20240905.diff](patch-proxyconfig-20240905.diff)

Reference
---------

* [https://webkitgtk.org/reference/webkit2gtk/2.35.1/WebKitNetworkProxySettings.html](Webkit Network Proxy Settings Reference)
