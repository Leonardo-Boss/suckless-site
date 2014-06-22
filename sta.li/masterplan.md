04.04.2012

The Masterplan
==============

Building a different OS with a complete different mindset from
what is mainly used is difficult and time-consuming. To keep
the ideals of suckless in its design and principles there needs
to be a certain guideline how to accomplish sta.li.

Steps
-----

* Get a static base environment working
* Allow the emulation of the old dynamically-linked environment
* Make the installation user-friendly
* Maintain the community

1.) Get a static base environment working
-----------------------------------------

Steps in this direction have been done in the
[sabotage](https://github.com/rofl0r/sabotage),
[bootstrap](https://github.com/pikhq/bootstrap-linux) and
[morpheus](http://morpheus.2f30.org)
Linux distributions. They should serve as a base for further
a further extension to make a base environment which can be
used by the average suckless user.

2.) Allow the emulation of the old behaviour
--------------------------------------------

In this step some easy way to emulate the old dynamic linking,
which will allow to use pre-existing packages for other
distributions, is needed to be implemented.

A proposal for the emulation directory is '/emul'. All applications
running below this directory will be run in a chroot under this
path.

Linux is still struggling with Windows compatibility, which brought
really obscure design decisions to the Open Source environment. It
will take a long time to convert active developers to our principles.

3.) Make the installation user-friendly
---------------------------------------

For this step the Arch Linux way of text installation could be
simply copied. The GUI way of Ubuntu will stop people from
thinking.

4.) Maintain the community
--------------------------

Maintaining an Open Source community isn't just maintaining the
status quo. It needs templates and tutorials on how to spread
the suckless ways of thinking and being productive. The web is
not a part of this.
