Memory Usage Indicator
======================

This is a simple memory usage indicator based on information obtainable from
the `free` system command.

It was written to work with wmii-3.9 and higher. To use it you have to put it 
in your `wmiirc_local.py` file. Please note, that monitors in wmii are sorted
alphabetically by their function names, so you might want to change the name as
you see fit.

    ###
    import subprocess
    ###

    @defmonitor
    def fmem(self):
	inp = subprocess.Popen(['free'], shell = False, stdout = subprocess.PIPE)
	out = inp.communicate()[0].splitlines()	
	ram = int(out[2].split()[2])/1024
	maxram = int(out[1].split()[1])/1024
	swap = int(out[3].split()[2])/1024
	maxswap = int(out[3].split()[1])/1024
	return wmii.cache['normcolors'], 'RAM: ' + str(ram) + '/' + str(maxram) +\
		' MB' + ' | SWAP: ' + str(swap) + '/' + str(maxswap) + ' MB'

