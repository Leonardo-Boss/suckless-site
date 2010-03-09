# USELESS GAP

## Description

This patch adds useless gap between windows and removes everything (gap and border) in monocle mode for aesthetic purpose. 
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

 * [dwm-uselessgap-5.8.diff](dwm-uselessgap-5.8.diff) (0.7K) (20100308)
   
	Fix floating clients bug and remove all borders in monocle mode.
 
 * [dwm-gap-5.7.2.diff](dwm-gap-5.7.2.diff) (0.7K) (20091215)

## Author

 * Jerome Andrieux - <jerome@gcu.info>
