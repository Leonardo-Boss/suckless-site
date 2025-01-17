sort_by_popularity
=============

The list of programs is sorted by popularity.

Each time you run the program, its popularity will increase by 1.

The popularity cache file is stored in: `{CACHE_PATH}/dmenu_pop.txt`.

Requirements
------------

* One of the following system env **shall** be set `XDG_CACHE_HOME` or `HOME`
* Folder `$XDG_CACHE_HOME` or `$HOME/.cache` **shall** exist

How it works
------------

The order of programs is determined by popularity.

Programs with higher popularity come first.

The order of programs with the same popularity depends on their position in the cache file.

Let's assume that we have the following programs: `A`, `B1`, `B2`, `C`

`[User input] -> [dmenu output] -> [User's choice] -> {PROGRAM: POPULARITY}`

1. ` ` -> `A`, `B1`, `B2`, `C` -> `C` -> `{}`
2. ` ` -> `C`, `B1`, `B2`, `A` -> `B2` -> `{C: 1}`
3. ` ` -> `C`, `B2`, `B1`, `A` -> ` ` -> `{C: 1, B2: 1}`
4. `B` -> `B2`, `B1` -> `B1` -> `{C: 1, B2: 1}`
5. `B` -> `B2`, `B1` -> `B1` -> `{C: 1, B2: 1, B1: 1}`
6. `B` -> `B1`, `B2` -> ` ` -> `{C: 1, B2: 1, B1: 2}`

Download
--------
* [dmenu-sort_by_popularity-20250117-86f0b51.diff](dmenu-sort_by_popularity-20250117-86f0b51.diff)

Author
------
* Wojciech Madry - <madrywojciech99@gmail.com>
