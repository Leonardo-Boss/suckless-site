This wiki
=========
If you would like to contribute new content, you can clone this wiki to your
local host using the following command:

	hg clone http://hg.suckless.org/sites

You can make changes to the wiki, though your changes will be reviewed by the
suckless moderators before going public into the mainstream web site. Please
make sure to pull for incoming changes before you push your changes, to
minimize any problems.

	hg push

The wiki repository above is world-writable.

Rules
-----
* If any abuse happens, we will disable world-writable access. Keep this in mind!
  We kindly ask you to not destroy the way we like to collaborate
  with the community.
* Please do not add files bigger than *100kb*.
* Please do not add any binary files except screenshots or images related to our software.
  You are allowed to add your code patches to the wiki if you do not have an
  external web server to serve them to the community. The extension of patches
  should be `.diff`.
* The extension of newly created Markdown files has to be `.md`.
* Please do not add HTML files or inline JavaScript.

Bugs
----
Mercurial aborts with the message "unknown bundle compression type" if you want
to push with version 0.9.1. (Maybe this affects every version before 1.0.)
If you use Debian Etch, there is a backport.
