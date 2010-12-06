Simple Monitors
===

Description
---

These are just very simple monitors for the dwm status bar.

Battery
---

You're battery may be called something different, so check /proc/acpi for it's name. Also, change 89000 to whatever the capacity is for your battery.
This returns the remaining battery power as a percentage.

	$(echo $(cat /proc/acpi/battery/BAT0/state| grep remaining| awk '{print $3}') / 89000| hoc| cut -c3,4)%

hoc comes from plan9port or 9base.

Ram used
---

Return the amount of ram used, in megabytes.

	$(free -m | grep cache\: | awk '{ print $3 }')M

Temperature
---

Returns the temperature of the cpu, in celcius.

	$(awk '{ print $2 }' /proc/acpi/thermal_zone/THM0/temperature)C

I told you they were simple.
