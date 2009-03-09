THIS WIKI
=========
This wiki is rather unusual. It currently consists of a [shell
script](http://code.suckless.org/hg/genosite/file) of less than 100 LOC and a
[mercurial](http://www.selenic.com/mercurial) repository containing the wiki
contents and keeping track of the version history and changes. All wiki pages
are written using [markdown](http://daringfireball.net/projects/markdown/)
syntax.

If you would like to contribute new content, you can clone the wiki to your
local host using the following command:

	hg clone http://www.suckless.org:8000/hg/wiki

You can make changes to the wiki, though your changes will be reviewed by the
suckless moderators before going public into the mainstream web site. Please
make sure to pull for incoming changes before you push your changes, to
minimize any problems.

	hg push

The wiki repository above is world-writable. Your changes will be visible
at the PREVIEW upstream wiki web site for upcoming changes at
<http://www.suckless.org:8000/> shortly (*within 5 minutes*). This web site
contains an additional disclaimer at the bottom that any content is not our
responsibility, and is only intended to give you an idea how your changes will
look like once they are accepted. The traffic from this URL is throttled to
*5kb/s* as well, to prevent anyone's abusing it for temporary uploads and
downloads.

Rules
-----
* If any abuse happens, we will disable the PREVIEW upstream wiki, keep this
  in mind. We kindly ask you to not destroy the way we like to collaborate
  with the community.
* Please do not add files bigger than *100kb*.
* Please do not add any binary files except screenshots or images related to our software.
  You are allowed to add your code patches to the wiki if you do not have an
  external web server to serve them to the community. The extension of patches
  should be `.diff`.
* The extension of newly created Markdown files has to be `.md`.
* Please do not add HTML files or inline JavaScript.

*Note:* We perform automatic pre-checks before the PREVIEW upstream wiki is
updated, e.g. following things will be denied:

* Files with extensions we don't accept.
* Files bigger than 100kb
* Any symbolic links, regardless where they link to

Credits
-------
Most of the look and feel of this wiki has been developed by [Marco
Squarcina](http://www.minimalblue.com).

Bugs
----
Mercurial aborts with the message "unknown bundle compression type" if you want
to push with version 0.9.1. (Maybe this affects every version before 1.0.)
If you use Debian Etch, there is a backport.
