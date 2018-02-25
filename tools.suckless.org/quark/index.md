![quark](quark.svg)

quark is an extremely small and simple HTTP GET/HEAD-only web server.

The goal of this project is to do one thing and do it well, namely serving
static web directories and doing that right. Most other solutions either
are too complex (CGI support, dependencies on external libraries, ...) or
lack features you expect (TLS, virtual hosts, partial content, not modified
since, ...). quark tries to find a midway and just restrict itself to being
static while still offering functions you only find in more bloated solutions
and being as secure as possible (chroot, privilege dropping, strict parsers,
no malloc at runtime, pledge, ...).

Static web
----------

We believe that most of the web does not need to be dynamic and increasing
complexity on server-side applications is one of the main reasons for the
web obesity crisis.
The common approach nowadays is to do everything on the server, including
parsing requests, modifying files and databases, generating HTML and all
that using unfit languages like PHP or JavaScript, which is a security and
efficiency nightmare.

Over the years we have seen massive amounts of security holes in numerous
applications of tools commonly used for these jobs
(PHP, node.js, CGI-implementations, ...).
The reason why we are in this situation in the first place is due to the fact that
the jobs of data processing and data presentation, which should be separate,
converged together into one.

The solution is to rely on static regeneration independent from the web server,
which just serves static files. You can still implement e.g. form handlers for
dynamic content which run as their own network instance and operate independently
from the web server.
What's left is just to generate the static content using the database and repeating
this process in case the database is updated.

This way the jobs of data processing and data presentation are separate again,
with many advantages. All requests are handled with constantly low latency, with
the possibility of serving everything directly from RAM (using a ramfs). Separated
concerns make it very unattractive to attack the web server itself and the
attack surface that is left, if it is present at all, is the separate form handler,
which can be implemented in a very simple, safe and efficient manner.

In case there is an attack on this infrastructure and the attacker manages to
DoS the form handler, the serving of content is still unaffected.

Solutions
---------

* [saait](http://git.codemadness.nl/saait/log.html) site generator
* [stagit](http://git.codemadness.nl/stagit/log.html) git page generator

Development
-----------

You can [browse](//git.suckless.org/quark) the source code repository or
get a copy with the following command:

        git clone git://git.suckless.org/quark

Author
------

* Laslo Hunhold (dev@frign.de)

Please contact me when you find information that could be added to this
page.
