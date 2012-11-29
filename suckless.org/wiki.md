This wiki
=========
If you would like to contribute new content, you can clone this wiki to your
local host using the following command:

	git clone git://git.suckless.org/sites

To push your changes to the queue for the review by the suckless moderators,
use:

	git push

The review of your changes might take one day, due to the different timezones
we all live in.

Please make sure to pull for incoming changes before you push your changes, to
minimize problems.

The wiki repository above is world-writable.

Be careful, that only push changes using the git:// protocol. It is possible
to checkout the source over http:// but not to push changes using it.

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
