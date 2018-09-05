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
		printf '<li><a%s href="%s">' "$match" "//$2/$dir/"
		printf '%s/</a>' "$dir" | tr _- '  '
		if test "$match"
		then
			printf '<ul>\n'
			nav "$1" "$2/$dir"
			printf '</ul>\n'
		fi
		printf '</li>\n'
	done
}

find * -type d | while IFS='' read -r page
do
	exec >$page/index.html
	page="$page/index.md"
	this_domain="${page%%/*}"
	printf 'Generating %s\n' "$page" 1>&2

	# header
	if test -f "$page"
	then
		title=$(sed 's,^#* *,,; q' "$page")
	else
		title=$(basename "$(dirname "$page")")
	fi
	awk -v title="$title" -v subtitle="$(cat "$this_domain/title")" \
		'{ gsub("%t", title); gsub("%s", subtitle); print; }' head.html

	# navigation bar
	printf '<div id="menu">\n'
	while IFS='' read -r domain
	do
		printf '<a href="%s"' "//$domain"
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
	if test -f "$page"
	then
		smu "$page"
	else
		printf '<ul>\n'
		ls "${page%/index.md}" | while IFS='' read -r dir
		do
			path=${page%/index.md}/$dir/
			test -d "$path" || continue
			printf '<li><a href="%s">' "//$path"
			printf '%s</a></li>\n' "$dir" | tr _- '  '
		done
		printf '</ul>\n'
	fi
	printf '</div>\n\n'

	printf '</div>\n\n' # end of id="content"

	# footer
	cat foot.html
done
