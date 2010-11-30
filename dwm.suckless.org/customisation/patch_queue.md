#How to maintain your own config.h as a patch queue in Mercurial

*blame [Filippo Erik Negroni](mailto:f dot e dot negroni at googlemail dot com>) about this document*

This article will explain how to maintain your own `config.h` and `config.mk` files as a set of patches in a Mercurial Queue.

##Background

When customising dwm, it is assumed the user edits `config.h` and `config.mk`.

`config.h` is not generated from `config.def.h` when running `make`. The user must copy `config.def.h` in `config.h` before `make` can build its targets.
This raises the interesting situation where our customised `config.h` does not match changes to `config.def.h` in future releases of dwm. We must therefore take care of diff'ing `config.h` and `config.def.h` manually so as to keep our customised `config.h` in sync with the project.

When building dwm, the user is expected to edit `config.mk` to customise the install location and other parameters, such as C compiler flags.
It is unfortunately suffering from the same risk of a customised `config.mk` not being in sync with the one in the main distribution. One has to remember to diff the original and customised `config.mk` to make sure the changes are in sync.

##Automating our customisations

Since *suckless.org* uses Mercurial as its source control system, it is nice to know that we can use Mercurial to manage our customisations. This makes it easy to create an incremental series of patchsets (queue) that we can also distribute to others.

An example of such queue can be found at [fnegronidwm](http://sharesource.org/project/fnegronidwm/wiki/): I created it as a Mercurial Queue repository so that I can manage the patches and keep them in sync with the main dwm distribution.

The rest of this document will explain how I created my queue for dwm.
It will hopefully help others do the same and also improve the quality of the patches by making sure that they are tagged and in sync with the main repository of dwm.

##Tutorial

###Get the original dwm

You have two options:

- download the prepackaged source tarball, currently [dwm-5.1](http://dl.suckless.org/dwm/dwm-5.1.tar.gz)

- clone the mercurial repository at `http://hg.suckless.org/dwm`

###Enable the MQ extension

In your global mercurial configuration (`~/.hgrc`), enable the MQ extension:

	[extensions]
	hgext.mq =

Verify your extension is enabled:

	$ hg help qinit

###Prepare a base mercurial repository

If you downloaded the prepackaged source tree, it is now a good time to initialize a mercurial repository:

	$ cd dwm-5.1
	$ hg init
	$ hg add

If you cloned the official repo, but prefer to work on less frequent updates, you can update your working copy to the latest stable tag:

	$ cd dwm
	$ hg up -r 5.1

###Initialize the MQ repository

From within your working copy, run the command:

	$ hg qinit -c

The `-c` option ensures that your patch series is tracked as a separate mercurial repository, should you wish to share it with others or experiment further.

###Our first patch: change install location

When trying out new software, or patching projects, I like to install it in my home directory.

So the first change I make when downloading dwm is to edit `config.mk` and change the value of `PREFIX`.

This is a perfect candidate for an MQ patch: it is a repetitive task, but the resulting config.mk might not be compatible with future releases.

So we first tell MQ we are working on a new patch:

	$ hg qnew install_location

Then we edit `config.mk` and change the value of `PREFIX`:

	PREFIX = /home/fnegroni

We then tell MQ that we have done some work on the current patch:

	$ hg qrefresh

Our base repository now includes information about our patch:

	$ hg log -r tip
	changeset:   1338:8226aced4656
	tag:         tip
	tag:         qbase
	tag:         install_location
	tag:         qtip
	parent:      1315:ce355cea9bb8
	user:        f.e.negroni
	date:        Mon Aug 18 23:24:27 2008 +0100
	summary:     [mq]: install_location

###Commit the patch to the MQ repository

Since we are happy about our first customisation, we want to commit that in our MQ repository. This way, should we corrupt anything in our working copy, we can always roll back to a known state.

The MQ repository is one level down from the base repo, so we use the special command //qcommit//:

	$ hg qcommit -m 'First patch to installation target'

###The second patch: forget about config.h

What we really want to modify when customising dwm is `config.def.h`.

`config.h` is really just a redundant dependency if using MQ to manage customisations.

Unfortunately MQ can't track renames for us, so rather than renaming `config.def.h` into `config.h`, we modify the dependency tree in `Makefile`.

	$ hg qnew configh_dep

Now MQ knows we are working on a new patch.

We modify `Makefile` so that where it reads:

	config.h:

it now reads:

	config.h: config.def.h

This will cause a new `config.h` to be produced whenever `config.def.h` is updated, either by us as a patch, or by the official repository history.

Don't forget to tell MQ we are done with the patch:

	$ hg qrefresh

Now we can test our patch: without copying `config.def.h` into `config.h`, `make` should succeed:

	$ make
	...
	creating config.h from config.def.h
	...

Let's again commit this latest patch in our MQ repository for safe keeping:

	$ hg qcommit -m 'Made config.h depend on config.def.h'

###Our first proper customisation: change the tiling factor

As a first customisation, that is something we can actually see, we will modify the original factor used when tiling windows. 

The original value is in `config.def.h`, and it is called `mfact`.

We want to change it from `0.55` to `0.5`.

First, tell MQ about it:

	$ hg qnew mfact_05

Then edit `config.def.h` so it reads:

	static float mfact = 0.5;

in place of the old value.

Tell MQ we are done with the patch and commit it to its repo:

	$ hg qrefresh
	$ hg qcommit -m 'Our mfact is now 0.5'

### List our patches

Just issue:

	$ hg qseries
	install_location
	configh_dep
	mfact_05

to see all the patches we created, and

	$ hg qapplied
	install_location
	configh_dep
	mfact_05

to see which patches are currently applied to our tree.

The order in which `qapplied` lists our patches is the order in which the patches were applied to our source tree, from top first to bottom last.

###Update to the latest dwm source

This is where MQ shines.

We now must remove all our customisations (the entire queue of applied patches). This will bring our repository (not just the working copy, but our entire history) back to where we started. To prove it, let's look at the current tip of our history:

	$ hg log -r tip
	changeset:   1340:6a95ea4eed06
	tag:         tip
	tag:         mfact_05
	tag:         qtip
	user:        f.e.negroni
	date:        Tue Aug 19 00:00:09 2008 +0100
	summary:     [mq]: mfact_05

That shows that our history has changed since we started working on our patches.

Let's remove all the applied patches:

	$ hg qpop -a
	Patch queue now empty

The tip of our history has now gone back to where we started:

	$ hg log -r tip
	changeset:   1337:c4ecef7983b8
	tag:         tip
	user:        Anselm R Garbe
	date:        Mon Aug 18 19:28:57 2008 +0100
	summary:     Martin Hurtons typo fix

To get the latest code we must remember how we obtained the code.

If we cloned the official repository and updated our working copy to tag 5.1, we can simply do:

	$ hg pull
	$ hg up -r tip

We will be informed that some files had to be updated. Remember that our patches were based on a working copy of tag 5.1

If we obtained the source from a tarball, we might need to download a more recent tarball, extract the tarball on top of our working copy and resync our repository:

	$ hg addremove
	$ hg ci -m 'synched with latest code'

###Apply our customisations again

Our customisations are not lost: they are safe in `.hg/patches`. They are just not applied to the current working copy.

To do that, issue this command:

	$ hg qpush -a

This will apply our patches, one by one, in the order they were created.

	$ hg qpush -a
	applying install_location
	applying configh_dep
	applying mfact_05
	patching file config.def.h
	Hunk #1 FAILED at 22
	1 out of 1 hunk FAILED -- saving rejects to file config.def.h.rej
	patch failed, unable to continue (try -v)
	patch failed, rejects left in working dir
	Errors during apply, please fix and refresh mfact_05

If our customisations can be applied, they will be. But as you can see, our customisation `mfact_05` did not succeed.

MQ has successfully applied `install_location` and `configh_dep`, but encountered a problem in `mfact_05`. What it is now telling us is that we can look at the conflict in `config.def.h.rej` and try and fix the problem.

This is `config.def.h.rej`:

	--- config.def.h
	+++ config.def.h
	@@ -23,7 +23,7 @@
	 };

	 /* layout(s) */
	-static float mfact      = 0.55;
	+static float mfact      = 0.5;
	 static Bool resizehints = True; /* False means respect size hints in tiled resizals */

That's the change we created and saved in our patch queue.

If we look at `config.def.h` now, we can try and fix our patch. We know from the rejects file above that `mfact` was not modified.

The section in `config.def.h` that we originally modified had work done to it between tag 5.1 and the tip. It now looks like this:

	/* layout(s) */
	static float mfact      = 0.55; /* factor of master area size [0.05..0.95] */
	static Bool resizehints = True; /* False means respect size hints in tiled resizals */

So some comments were added.

What we do now is simple: change mfact and refresh our current MQ patch. We know our current MQ patch is `mfact_05` because that's where `qpush` left off.

After changing `config.def.h`, simply do:

	$ hg qrefresh

And the patch queue is now updated.

###Patch queue history

When we refresh our patch with `qrefresh`, we do not automatically commit to our patch queue repository in `.hg/patches`.

This is where we can take advantage of MQ for our customisation.

We know that the customisations we created for dwm version 5.1 are correct. They just fail to apply to the latest source tree.

	$ cd .hg/patches
	$ hg stat
	M mfact_05
	$ hg log -r tip
	changeset:   2:d57a0f67f9a5
	tag:         tip
	user:        f.e.negroni
	date:        Tue Aug 19 00:00:20 2008 +0100
	summary:     Our mfact is now 0.5

So, we can mark that fact in our patch queue repository:

	$ hg tag 5.1
	$ hg tags
	$ hg tags
	tip                                3:c199ba305efd
	5.1                                2:d57a0f67f9a5

And now we can commit our latest `mfact_05` to our patch queue so it is safe:

	$ hg ci -m 'mfact_05 refreshed for dwm changeset:1337'
	$ hg log
	changeset:   4:b50744a3fb9e
	tag:         tip
	user:        f.e.negroni
	date:        Wed Aug 20 23:58:06 2008 +0100
	summary:     mfact_05 refreshed for dwm changeset:1337

	changeset:   3:c199ba305efd
	user:        f.e.negroni
	date:        Wed Aug 20 23:55:02 2008 +0100
	summary:     Added tag 5.1 for changeset d57a0f67f9a5

	changeset:   2:d57a0f67f9a5
	tag:         5.1
	user:        f.e.negroni
	date:        Tue Aug 19 00:00:20 2008 +0100
	summary:     Our mfact is now 0.5

	changeset:   1:dd93da2d71d3
	user:        f.e.negroni
	date:        Mon Aug 18 23:42:26 2008 +0100
	summary:     Made config.h depend on config.def.h

	changeset:   0:b0fed54a0021
	user:        f.e.negroni
	date:        Mon Aug 18 23:30:30 2008 +0100
	summary:     First patch to installation target

###Let's share our customisations with others

If anyone is interested in our customisations, they can simply clone our patch queue repository, the one in `.hg/patches`.

Since `.hg/patches` is simply another mercurial repository, we can share it in a number of ways, like exporting it or making it available through ssh or http.

The big bonus is that now, whomever clones our customisations, will receive our customisations not for just one version of dwm, but for any version that we tagged in our repository.

This is extremely helpful to make sure the correct patch is applied to the correct source.

##The End
