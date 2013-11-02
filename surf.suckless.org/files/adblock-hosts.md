Adblocking using /etc/hosts
===========================

Adblocking is a non-trivial task, but there are trivial solutions.

1.) Install hosts-gen from http://git.r-36.net/hosts-gen/

	% git clone http://git.r-36.net/hosts-gen
	% cd hosts-gen
	% sudo make install

        # Make sure all your custom configuration from your current /etc/hosts is
        # preserved in a file in /etc/hosts.d. The files have to begin with a
        # number, a minus and then the name.

	% sudo hosts-gen

2.) Install the zerohosts script.

	# In the above directory.
	% sudo cp examples/gethostszero /bin
	% sudo chmod 775 /bin/gethostszero
	% sudo /bin/gethostszero
	% sudo hosts-gen 

Now the /etc/hosts with the zero hosts is ready and will be used in any
further started application.

The gethostszero file can of course be reused to more easier create the
/etc/hosts file. A cronjob can be used to update the file and run hosts-gen
again.

Author
------

* Christoph Lohmann < 20h (at) r-36 (dot) net >

