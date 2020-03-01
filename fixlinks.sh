#!/bin/sh

HEAD() { url=${1:?}
	curl --connect-timeout 10 --insecure -sIL "$url"
}

resolve() { url=${1:?}
	HEAD "$url" \
	| awk -v url="$url" '
		{ gsub("\r", "") }
		tolower($1) == "location:" { url=$2 }
		$1 ~ "^HTTP/" && $2 == "200" { print url; exit }
	'
}

sed_escape_left() { exp=${1:?}
	echo "$exp" | sed 's/[^^]/[&]/g; s/\^/\\^/'
}

sed_escape_right() { exp=${1:?}
	echo "$exp" | sed 's/[&/]/\\&/g'
}

fix_url() { file=${1:?} url=${2:?}
	new=$(resolve "$url")

	if [ -z "$new" ]; then
		echo "$url"
		return 0
	fi

	if [ "$url" = "$new" ]; then
		return 0
	fi

	old=$(sed_escape_left "$url")
	new=$(sed_escape_right "$new")
	sed -i "s/$old/$new/" "$file"
}

http_to_https() { file=${1:?} url=${2:?}
	case "$url" in
	(http://*)
		old=$(sed_escape_left "$url")
		new=$(sed_escape_right "https://${url#http://}")
		sed -i "s/$old/$new/" "$file"
		;;
	esac
}

https_to_http() { file=${1:?} url=${2:?}
	case "$url" in
	(https://*)
		if ! HEAD "$url" >/dev/null; then
			old=$(sed_escape_left "$url")
			new=$(sed_escape_right "http://${url#https://}")
			sed -i "s/$old/$new/" "$file"
		fi
		;;
	esac
}

fix_file() { file=${1:?}
	./md-printlinks <"$file" \
	| grep // \
	| sed 's,^//,https://,' \
	| while read url; do
		case url in (*bell-labs*) continue ;; esac
		http_to_https "$file" "$url"
		https_to_http "$file" "$url"
		fix_url "$file" "$url"
	done
}

for file in "$@"; do
	fix_file "$file"
done
