#!/bin/sh -e

# Generate a static website out of:
# - ./**.md - the markdown files.  Must be "*/index.md"
# - ./title - the title of the website
# - ./domains - file with one domain per line (corresponding to ./<domain>/)
# - ./*/title - one file per subdirectory with the subtitle
# - ./head.html - content added at the top,
# - ./foot.html - content added at the bottom,
# - ./links.html - content added at the right side of the navigation bar,

#1 current page
#2 directory to list
nav() {
	ls "$2" | while read dir
	do
		test -d "$2/$dir" || continue
		test -z "${1##$2/$dir/*?}" && match=' class="thisPage"' || match=
		printf '<li><a%s href="%s">' "$match" "$2/$dir"
		printf %s "$dir" | tr _- '  '
		printf '/</a>'
		if test "$match"
		then
			printf '<ul>\n'
			nav "$1" "$2/$dir"
			printf '</ul>\n'
		fi
		printf '</li>\n'
	done
}

find * -name '*.md' | while IFS='' read -r page
do
	this_domain="${page%%/*}"
	printf 'Generating %s\n' "$page" 1>&2
	exec >${page%.md}.html

	# header
	title=$(sed 's,^#* *,,; q' "$page")
	awk -v title="$title" -v subtitle="$(cat "$this_domain/title")" \
		'{ gsub("%t", title); gsub("%s", subtitle); print; }' head.html

	# navigation bar
	printf '<div id="menu">\n'
	while IFS='' read -r domain
	do
		printf '<a href="%s"' "//${page%.md}.html"
		test "$this_domain" = "$domain" && printf ' class="thisSite"'
		printf '">%s</a>\n' "${domain%%.*}"
	done <domains
	cat links.html
	printf '</div>\n\n'

	printf '<div id="content">\n\n'

	# left navigation panel
	printf '<div id="nav">\n<ul><li><a'
	test "${page%/*}" = "$this_domain"  && printf ' class="thisPage"'
	printf ' href="/">about</a></li>'
	nav "$page" "$this_domain"
	printf '</ul></div>\n\n'

	# main
	printf '<div id="main">\n'
	smu "$page"
	printf '</div>\n\n'

	printf '</div>\n\n' # end of id="content"

	# footer
	cat foot.html
done
