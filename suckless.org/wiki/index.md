This wiki
=========
If you would like to contribute new content, you can clone this wiki to your
local host using the following command:

	git clone git://git.suckless.org/sites

or

	git clone https://git.suckless.org/sites

Then edit the wiki as you like. The markdown interpreter that is currently
used on the suckless.org werc instance is
[smu](https://github.com/Gottox/smu).

For adding new files, after you created them, use:

	git add $filename

When you are finished, commit your changes with:

	git commit -a

There you enter some meaningful commit message and end the editor.

To push your changes to the queue for the review by the suckless moderators,
use:

	git push

The review of your changes might take one day, due to the different timezones
we all live in.

__Please make sure to update for incoming changes using »git pull«, before you
push changes, to minimize merge problems.__

The wiki repository above is world-writable.

Rules
-----
* If any abuse happens, we will disable world-writable access. Keep this in
  mind! We kindly ask you to not destroy the way we like to collaborate with
  the community.
* Please do not add files bigger than *100kb*.
* Please do not add unscaled large images.
* Please do not add any binary files except screenshots or images related to
  our software. The patches should be hosted in the repository itself.
* The extension of newly created Markdown files has to be `.md`.
* Inline HTML, HTML files or inline JavaScript is not allowed and not supported.
* There are some dialects of Markdown, please don't use too "advanced" features.

Review markdown
---------------
A quick way to check what output will be generated on the site is to do:

	smu -n < index.md | lynx -stdin

Changes
-------
The incoming changes to the wiki are all sent to the wiki@
mailinglist. See [community](//suckless.org/community/) for how to
subscribe to this list.

Moderators
----------
If you are a moderator, you will likely need the following procedure to pull
the changes into the main repository:

	see /git/scripts/updatewiki.sh

This script makes sure the changes are pulled in with the correct permissions.

Repositories
------------

This is for moderators.

To create a new repository just git init --bare and symlink the git hooks (see
the hooks/ directory in other projects).
