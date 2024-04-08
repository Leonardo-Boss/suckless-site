Multi Shapes
============

Description
-----------
The same as the [Squares patch](../squares/), but will render a shape for each character in the input.

> Instead of changing the color of the entire screen to indicate the current lock
> state, draw centered squares on each monitor and change the square colors.
> 
> This patch requires xrandr to be active and otherwise defaults to the original
> slock behavior.

Config
------
* `squareshape`: `0` for squares `1` for circles
* `squaresize`: The size of the shapes in px
* `squaregap`: The gap between the shapes

Download
--------
* [slock-multi-shapes-1.5.diff](slock-multi-shapes-1.5.diff)

Authors
-------
* Alexander Nortung <alex_nortung@live.dk>
