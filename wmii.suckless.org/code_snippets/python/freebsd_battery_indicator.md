FreeBSD Battery Indicator
=========================

This is a battery indicator written specifically for FreeBSD. FreeBSD has a simple command 'acpiconf -i <battery_name>', which neatly returns all relevant information. The monitor below simply parses the output and returns a compact selection of crucial data.



     ###
     import commands
     bat = 'BAT0'
     ###

     @defmonitor
     def bsdbattery(self):
     	 a = commands.getoutput('acpiconf -i' + bat).splitlines()
	 b = dict([[i for i in j.split('\t') if i is not ''] for j in a])
    	 return wmii.cache['normcolors'], 'Status: ' + b['State:'] +\
         	'Capacity: ' + b['Remaining capacity:'] + ' ' +\
        	'Time remaining: ' + b['Remaining time:']