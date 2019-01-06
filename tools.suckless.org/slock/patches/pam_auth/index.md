PAM auth
========

Description
-----------
Replaces shadow support with PAM authentication support.

Change variable `pam_service` in `config.def.h` to the corresponding PAM
service. The default configuration is for ArchLinux's `login` service.

Download
--------
* [slock-pam\_auth-20161126-9909280.diff](slock-pam_auth-20161126-9909280.diff)
* [slock-pam\_auth-20161026-5974695.diff](slock-pam_auth-20161026-5974695.diff)
* [slock-pam\_auth-20160909-a7619f7.diff](slock-pam_auth-20160909-a7619f7.diff)
* [slock-pam\_auth.diff](slock-pam_auth.diff)

Authors
-------
* Jan Christoph Ebersbach <[jceb@e-jc.de](mailto:jceb@e-jc.de)>
