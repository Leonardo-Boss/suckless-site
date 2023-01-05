leakedip
====

Description
-----------
This patch adds a new function - `leaked_ip`, which prints a public IP address that an Internet server sees when a user contacts it.

The function works by querying a third party service, namely *ip-api.com*, to return back the IP address seen in a query packet. It's different from builtin `ipv4` and `ipv6` functions, whose work is just showing IP addresses bound to a local interface, which often differs from the identity seen by the Internet.

Note also that by default `ip-api.com` limits the rate of queries to **45** by the time of writing the patch, so the variable `interval` probably should be adjusted accordingly.

**CAUTION!!!** Queries are sent unencrypted through `HTTP` protocol, because this service states that a user need to pay money for the benefit of *SSL* encryption.

Download
--------
  * [slstatus-leakedip-20230105-c919def.diff](slstatus-leakedip-20230105-c919def.diff)
  
Authors
-------
  * Matvey Kiselyov <mathway.home@gmail.com>
