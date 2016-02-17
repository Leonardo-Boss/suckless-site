Simple Monitors
===

Description
---

These are just very simple monitors for the dwm status bar.

Battery
---

Your battery may be called something different, so check /proc/acpi for its name. Also, change 89000 to whatever the capacity is for your battery.
This returns the remaining battery power as a percentage.

        $(echo $(awk '/rem/ { print $3/89000 }' /proc/acpi/battery/BAT0/state| hoc| cut -c3,4)%

hoc comes from plan9port or 9base.

Ram used
---

Return the amount of ram used, in megabytes.

        $(free -m |awk '/cache:/ { print $3"M" }')

Temperature
---

Returns the temperature of the cpu, in celcius.

	$(awk '{ print $2 }' /proc/acpi/thermal_zone/THM0/temperature)C

Volume
---

	amixer get Front | tail -n1 | awk '{ print $5 }' | tr -d []

Change "Front" to your audio device

I told you they were simple.
