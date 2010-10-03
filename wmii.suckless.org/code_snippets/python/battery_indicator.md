Battery Indicator
=================

This is a simple battery indicator. Depending on the value of `from_acpi`
it either uses the system command `acpi` or processes data from the `/proc`
filesystem. To use it place the following code in your `wmiirc_local.py` file.
Please note, that monitors in wmii are sorted
alphabetically by their function names, so you might want to change the name as
you see fit.

The `trem` function is a helper function used to convert seconds to the format
`hh:mm:ss`. `info_path` and `state_path` point to virtual files containing relevant
information regarding the battery.


`
###
import subprocess


from_acpi = False 
#Read battery data from 'acpi' command. 
#If set to 'False' read data from /proc filesystem
info_path = '/proc/acpi/battery/BAT0/info'
state_path = '/proc/acpi/battery/BAT0/state'
infostr = open(info_path)
statestr = open(state_path)

def trem(sec):
    """Convert number of seconds to the format hh:mm:ss"""
    h = sec / 3600
    m = (sec - h * 3600) / 60
    s = (sec - h * 3600 - m * 60)
    return '%02d:%02d:%02d' % (h, m, s)
###

@defmonitor
def indicator(self):
    if from_acpi:
        inp = subprocess.Popen(['acpi'], shell = False, stdout = subprocess.PIPE)
        out = inp.communicate()
        return wmii.cache['normcolors'], out[0][:-1]
    else:
        info_raw = infostr.readlines()
        state_raw = statestr.readlines()
        infostr.seek(0)
        statestr.seek(0)
        info_list = []
        state_list = []
        for i in info_raw:
            temp = i.split(':')
            temp = map(str.strip, temp)
            info_list.append(temp)
        for i in state_raw:
            temp = i.split(':')
            temp = map(str.strip, temp)
            state_list.append(temp)
        info = dict(info_list)
        state = dict(state_list)
        if state['charging state'] == 'charging':
            perc = float(state['remaining capacity'].split()[0])/\
                    float(info['last full capacity'].split()[0])*100
            rem = int((float(info['last full capacity'].split()[0]) - \
                    float(state['remaining capacity'].split()[0]))/\
                    float(state['present rate'].split()[0])*3600)
            res = 'Battery: Charging, %d%%, ' %perc\
                    + trem(rem) + ' remaining'
            return wmii.cache['normcolors'], str(res)
        elif state['charging state'] == 'discharging':
            perc = float(state['remaining capacity'].split()[0])/\
                    float(info['last full capacity'].split()[0])*100
            rem = int(float(state['remaining capacity'].split()[0])/\
                    float(state['present rate'].split()[0])*3600)
            return wmii.cache['normcolors'], 'Battery: Discharging, %d%%, ' %perc\
                    + trem(rem) + ' remaining'
        elif state['charging state'] == 'charged':
            return wmii.cache['normcolors'], 'Battery: Fully Charged'
        else:
            return wmii.cache['focuscolors'], 'Battery: UNRECOGNIZED STATE!!!'
`

