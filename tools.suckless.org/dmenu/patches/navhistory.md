# navhistory

## Description

This patch provides dmenu the ability for history navigation similar to that
of bash. Press alt+p for the previous history and alt+n for the next.

## Configuration

Set the maximum number of histories with a new variable 'maxhist' in config.h.
By default, it only records a new history if it is not the same as the last one.
To change this behaviour, set 'histnodup' to 0 in config.h.

## Download

* [dmenu-4.6-navhistory.diff](dmenu-4.6-navhistory.diff) (4677b) (20160404)

## Author
* phi <crispyforg@163.com>
