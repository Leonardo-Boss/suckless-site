PAM auth
=========

Description
-----------

Replaces shadow support with PAM authentication support.

Change variable `pam_service` in `config.def.h` to the corresponding PAM
service.  The default configuration is for ArchLinux's `login` service.

Download
--------

* [slock-pam_auth.diff](slock-pam_auth.diff)

Authors
-------

* Jan Christoph Ebersbach <[jceb@e-jc.de](mailto:jceb@e-jc.de)>
