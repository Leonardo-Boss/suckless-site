#!/bin/sh

xprop -root -notype -f WM_NAME "8u" | sed -n -r 's/WM_NAME = \"(.*)\"/\1/p'

