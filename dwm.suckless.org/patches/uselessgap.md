# USELESS GAP

## Description

This patch adds useless gap between windows, for aesthetic purpose. 
I happen to find it easier on the eyes ...
The size of the gap is configured in config.def.h.

## Example

	Original look :
	+-----------------+-------+
	|                 |       |
	|                 |       |
	|                 |       |
	|                 +-------|
	|                 |       |
	|                 |       |
	|                 |       |
	+-----------------+-------+


	New look :
	+----------------++-------+
	|                ||       |
	|                ||   N   |
	|                ||       |
	|                |+-------+
	|                |+-------+
	|                ||       |
	|                ||       |
	|                ||       |
	+----------------++-------+

## Download

 * [dwm-gap-5.7.2.diff](dwm-gap-5.7.2.diff) (0.7K) (20091215)

## Author

 * Jerome Andrieux - <jerome@gcu.info>
