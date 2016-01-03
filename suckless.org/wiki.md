This wiki
=========
If you would like to contribute new content, you can clone this wiki to your
local host using the following command:

	git clone git://git.suckless.org/sites

or

	git clone http://git.suckless.org/sites

Then edit the wiki as you like. The markdown interpreter that is currently
used on the suckless.org werc instance is
[discount 2.1.3](http://www.pell.portland.or.us/~orc/Code/discount/).

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

Changes
-------
The incoming changes to the wiki are all sent to the wiki@
mailinglist. See [community](http://suckless.org/community) for how to
subscribe to this list.

Moderators
----------
If you are a moderator, you will likely need the following procedure to pull
the changes into the main repository:

	cd /var/www/sites
	sudo -u www-data git checkout .
	sudo -u www-data git pull

These commands can be found at /usr/local/bin/updatewiki for your convenience.

The checkout is needed to prevent local atime changes to stop the pull. Please
keep on using www-data, so the webserver can access everything.

For managing the patches (reject/modify etc.) of course the other git commands
apply too.

Repositories
------------

This is for moderators.

There is a script in /usr/local/bin/newrepo with the usage

	newrepo $reponame

It should be used to create new git repositories.

