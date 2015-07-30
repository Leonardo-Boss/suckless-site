attachaside
===========

Description
-----------
`attachaside` makes the new client get attached and focused in the stacking
area instead of always becoming the new master. It's basically an
[attachabove](attachabove) mod.

	Original behaviour :
	+-----------------+-------+
	|                 |       |
	|                 |   P   |
	|                 |       |
	|        N        +-------|
	|                 |       |
	|                 |       |
	|                 |       |
	+-----------------+-------+


	New Behaviour :
	+-----------------+-------+
	|                 |       |
	|                 |   N   |
	|                 |       |
	|        P        +-------+
	|                 |       |
	|                 |       |
	|                 |       |
	+-----------------+-------+


	+-----------------+-------+
	|                 |       |
	|                 |   P   |
	|                 |       |
	|                 +-------+
	|                 |       |
	|                 |   N   |
	|                 |       |
	+-----------------+-------+

Download
--------

### Version updated to work with tags

The original version of attachaside does does not attach to the stack when
windows are spawned on a tag that is not currently focused. This version is
improved to also attach to the stack on unfocused tags.

* [dwm-6.1-attachaside-tagfix.diff](dwm-6.1-attachaside-tagfix.diff) (2.9K) (20150729)

### Original

* [dwm-6.0-attachaside.diff](dwm-6.0-attachaside.diff) (1,6K) (20140412)
* [dwm-5.7.2-attachaside.diff](dwm-5.7.2-attachaside.diff) (1.1K) (20091215)
* [dwm-5.6.1-attachaside.diff](dwm-5.6.1-attachaside.diff) (1.1K) (20090915)

Authors
-------
* Jerome Andrieux - `<jerome at gcu dot info>`
* Version updated to work with tags by [Chris Down](https://chrisdown.name)
  (cdown) <chris@chrisdown.name>
* Update to 6.0 by Vladimir Seleznev - `<me at wladmis dot org>`
