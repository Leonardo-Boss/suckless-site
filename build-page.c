#define _POSIX_C_SOURCE 200809L

#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>

#include <dirent.h>
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define CONVERTER "smu","-n"
#define LEN(x) (sizeof(x) / sizeof(x[0]))
#define TITLE_MAX 1024
#define TITLE_DEFAULT "suckless.org"
#define DIR_MAX 1024

char *html_header =
	"<!doctype html>\n"
	"<html>\n"
	"<head>\n"
	"\t<meta charset=\"utf-8\"/>\n"
	"\t<title>%1$s | suckless.org software that sucks less</title>\n"
	"\t<link rel=\"stylesheet\" type=\"text/css\" href=\"//suckless.org/pub/style.css\"/>\n"
	"</head>\n"
	"\n"
	"<div id=\"header\">\n"
	"\t<a href=\"//suckless.org/\"><img src=\"//suckless.org/logo.svg\" alt=\"\"/></a>&nbsp;\n"
	"\t<a id=\"headerLink\" href=\"//suckless.org/\">suckless.org</a>\n"
	"\t<span class=\"hidden\"> - </span>\n"
	"\t<span id=\"headerSubtitle\">%1$s</span>\n"
	"</div>\n"
	"<hr class=\"hidden\"/>\n";

char *html_nav_bar =
	"\t<span class=\"right\">\n"
	"\t\t<a href=\"//dl.suckless.org\">download</a>\n"
	"\t\t<a href=\"//git.suckless.org\">source</a>\n"
	"\t</span>\n";

char *html_footer = "</html>\n";

struct domain {
	char *label;
	char *dir;
} domain_list[] = {
	{ "home",  "suckless.org" },
	{ "dwm",   "dwm.suckless.org", },
	{ "st",    "st.suckless.org", },
	{ "core",  "core.suckless.org", },
	{ "surf",  "surf.suckless.org", },
	{ "tools", "tools.suckless.org", },
	{ "libs",  "libs.suckless.org", },
	{ "e.V.",  "ev.suckless.org" },
	{ NULL, NULL }
};

void
die_perror(char *fmt, ...)
{
	va_list ap;

	va_start(ap, fmt);
	vfprintf(stderr, fmt, ap);
	va_end(ap);
	fputs(": ", stderr);
	perror(NULL);
	exit(1);
}

void
die(char *fmt, ...)
{
	va_list ap;

	va_start(ap, fmt);
	vfprintf(stderr, fmt, ap);
	va_end(ap);
	fputc('\n', stderr);
	exit(1);
}

char *
xstrdup(const char *s)
{
	char *p = strdup(s);

	if (!p)
		die_perror("strdup");

	return p;
}

int
stat_isdir(const char *f)
{
	struct stat s;

	if (stat(f, &s) == -1) {
		perror(f);
		return 0;
	}
	return S_ISDIR(s.st_mode);
}

int
stat_isfile(const char *f)
{
	struct stat s;

	if (stat(f, &s) == -1) {
		perror(f);
		return 0;
	}
	return S_ISREG(s.st_mode);
}

int
spawn_wait(char **argv)
{
	int status;

	switch (fork()) {
	case 0:
		execvp(argv[0], argv);
		exit(126);
	case -1:
		return -1;
	}
	if (wait(&status) == -1)
		return -1;

	return WIFEXITED(status) ? 0 : -1;
}

int
oneline(char *buf, size_t bufsiz, const char *path)
{
	char *r;
	FILE *fp;

	if (!buf || bufsiz == 0)
		return 0;
	if (!(fp = fopen(path, "r"))) {
		perror(path);
		return 0;
	}

	fgets(buf, bufsiz, fp);
	if (ferror(fp))
		die_perror("fgets: %s", path);

	fclose(fp);

	for (r = buf; *r && *r != '\n'; ++r)
		;
	*r = '\0';

	return 1;
}

void
print_name(const char *name)
{
	int c;

	for (; (c = *name); ++name)
		putchar((c == '_' || c == '-') ? ' ' : c);
}

void
print_header(void)
{
	char title[TITLE_MAX];

	printf(html_header, oneline(title, sizeof(title), ".title") ?
	       title : TITLE_DEFAULT);
}

void
print_nav_bar(char *domain)
{
	struct domain *d;

	puts("<div id=\"menu\">");
	for (d = domain_list; d->dir; ++d) {
		if (strcmp(domain, d->dir) == 0)
			printf("\t<a href=\"//%s/\"><b>%s</b></a>\n",
			       d->dir, d->label);
		else
			printf("\t<a href=\"//%s/\">%s</a>\n",
			       d->dir, d->label);

	}
	fputs(html_nav_bar, stdout);
	puts("</div>");
	puts("<hr class=\"hidden\"/>");
}

int
qsort_strcmp(const void *a, const void *b)
{
	return strcmp(*(const char **)a, *(const char **)b);
}

int
last_dir(char *this)
{
	DIR *dp;
	struct dirent *de;
	char newdir[PATH_MAX];
	int dir;

	if ((dp = opendir(this ? this : ".")) == NULL)
		die_perror("opendir: %s", this ? this : ".");

	dir = 0;
	while (dir == 0 && (de = readdir(dp))) {
		if (*de->d_name == '.')
			continue;
		snprintf(newdir, sizeof(newdir), this ? "%2$s/%1$s" : "%s", de->d_name, this);
		if (!stat_isdir(newdir))
			continue;

		dir = 1;
	}
	closedir(dp);

	return !dir;
}

void
menu_panel(char *domain, char *page, char *this, int depth)
{
	DIR *dp;
	struct dirent *de;
	char newdir[PATH_MAX];
	char *d_list[DIR_MAX], *d;
	size_t d_len, l;
	int i, highlight;

	if ((dp = opendir(this ? this : ".")) == NULL)
		die_perror("opendir: %s", this ? this : ".");

	d_len = 0;
	while (d_len < LEN(d_list) && (de = readdir(dp)))
		d_list[d_len++] = xstrdup(de->d_name);
	closedir(dp);

	qsort(d_list, d_len, sizeof *d_list, qsort_strcmp);

	for (l = 0; l < d_len; free(d_list[l++])) {
		d = d_list[l];
		if (*d == '.')
			continue;
		snprintf(newdir, sizeof(newdir), this ? "%2$s/%1$s" : "%s",
		         d, this);
		if (!stat_isdir(newdir))
			continue;

		highlight = page && !strncmp(newdir, page, strlen(newdir)) &&
			strchr("/", page[strlen(newdir)]); /* / or NUL */

		for (i = 0; i < depth + 1; ++i)
			putchar('\t');
		fputs("<li>", stdout);
		if (highlight) {
			printf("<a href=\"//%s/%s/\"><b>", domain, newdir);
			print_name(d);
			fputs("/</b></a>", stdout);
		} else {
			printf("<a href=\"//%s/%s/\">", domain, newdir);
			print_name(d);
			fputs("/</a>", stdout);
		}

		if (highlight && !last_dir(newdir)) {
			putchar('\n');
			for (i = 0; i < depth + 2; ++i)
				putchar('\t');
			puts("<ul>");
			menu_panel(domain, page, newdir, depth + 1);
			for (i = 0; i < depth + 2; ++i)
				putchar('\t');
			puts("</ul>");
			for (i = 0; i < depth + 1; ++i)
				putchar('\t');
		}
		puts("</li>");
	}
}

void
print_menu_panel(char *domain, char *page)
{
	fputs("<div id=\"nav\">\n\t<ul>\n\t<li>", stdout);
	if (!page)
		puts("<a href=\"/\"><b>about</b></a></li>");
	else
		puts("<a href=\"/\">about</a></li>");
	menu_panel(domain, page, NULL, 0);
	puts("\t</ul>");
	puts("</div>");
	puts("<hr class=\"hidden\"/>");
}

void
print_content(char *domain, char *page)
{
	char index[PATH_MAX];
	char *argv[] = { CONVERTER, index, NULL };

	snprintf(index, sizeof(index), page ? "%2$s/%1$s" : "%s",
	         "index.md", page);

	puts("<div id=\"main\">\n");

	if (stat_isfile(index)) {
		fflush(stdout);
		if (spawn_wait(argv) == -1)
			die_perror("spawn: %s/%s/%s", domain, page, index);
	}
	puts("</div>\n");
}

void
print_footer(void)
{
	fputs(html_footer, stdout);
}

int
main(int argc, char *argv[])
{
	char *domain, *page;

	if (argc != 2)
		die("usage: %s directory", argv[0]);
	if ((page = strchr(argv[1], '/')))
		*page++ = '\0';
	domain = argv[1];
	if (chdir(domain) == -1)
		die_perror("chdir: %s", domain);

	print_header();
	print_nav_bar(domain);
	puts("<div id=\"content\">");
	print_menu_panel(domain, page);
	print_content(domain, page);
	puts("</div>\n");
	print_footer();

	return 0;
}
