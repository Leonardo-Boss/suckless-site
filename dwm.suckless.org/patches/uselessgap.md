# useless gap

## Description

For aesthetic purposes, this patch:

- adds "useless gaps" around windows
- removes everything (gaps and borders) when in monocle mode for aesthetic purpose.

The size of the gap is configured in `config.h`:

```
static const unsigned int gappx     = 6;        /* gap pixel between windows */
```

## Example

No gaps:

```
+-----------------+-------+
|                 |       |
|                 |       |
|                 |       |
|                 +-------|
|                 |       |
|                 |       |
|                 |       |
+-----------------+-------+
```

With gaps around windows:

```
+---------------------------+
|+----------------++-------+|
||                ||       ||
||                ||       ||
||                ||       ||
||                |+-------+|
||                |+-------+|
||                ||       ||
||                ||       ||
||                ||       ||
|+----------------++-------+|
+---------------------------+
```

NB: there are some alternatives in the patches section, adding gaps between
windows, but not between windows and the screen borders, only in the default
tile mode...

## Download

 * [dwm-6.1-uselessgap.diff](dwm-6.1-uselessgap.diff) (4K) (20150815), now supports nmaster.
 * [dwm-5.9-uselessgap.diff](dwm-5.9-uselessgap.diff) (1.8k) (20110107 updated. Thanks Jordan for your bug report)
   
	Update to use the new resizeclient() function instead of resize()
 
 * [dwm-uselessgap-5.8.diff](historical/dwm-uselessgap-5.8.diff) (1.7k) (20100225 updated. Thanks Guillaume for your bug report)
   
	Fix floating clients bug and remove all borders in monocle mode.
 
 * [dwm-gap-5.7.2.diff](historical/dwm-gap-5.7.2.diff) (0.7k) (20091215)

## Author

 * Jerome Andrieux - <jerome@gcu.info>
