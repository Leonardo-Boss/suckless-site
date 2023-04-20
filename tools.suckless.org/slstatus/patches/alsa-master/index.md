alsa-master
===========

Description
-----------
This patch adds a function to find the audio state (in percentage or as MUTE) 
of the Master ALSA device using a pipe stream to the command-line mixer for 
ALSA, amixer. It is simple and does not add additional compilation flags or 
require use of a /dev/mixer file. The output string will include the % char 
if the Master interface is on.

Download
--------
* [slstatus-alsa-master-20230420-84a2f11.diff](slstatus-alsa-master-20230420-84a2f11.diff)

Authors
-------
* William Rabbermann <willrabbermann@gmail.com>
