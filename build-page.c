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
#define LEN(x) (sizeof(x) / sizeof *(x))
#define TITLE_MAX 1024
#define TITLE_DEFAULT "suckless.org"
#define DIR_MAX 1024

char *html_header =
	"<!doctype html>\n"
	"<html>\n"
	"<head>\n"
	"\t<meta charset=\"utf-8\"/>\n"
	"\t<title>%s | suckless.org software that sucks less</title>\n"
	"\t<link rel=\"stylesheet\" type=\"text/css\" href=\"//suckless.org/pub/style.css\"/>\n"
	"</head>\n"
	"\n"
	"<div id=\"header\">\n"
	"\t<a href=\"//suckless.org/\"><img src=\"//suckless.org/logo.svg\"/></a>\n"
	"\t<a id=\"headerLink\" href=\"//suckless.org/\">suckless.org</a>\n"
	"\t<span id=\"headerSubtitle\">%s</span>\n"
	"</div>\n";

char *html_nav_bar =
	"\t<span class=\"right\">\n"
	"\t\t<a href=\"//dl.suckless.org\">download</a>\n"
	"\t\t<a href=\"//git.suckless.org\">source</a>\n"
	"\t</span>\n";

char *html_footer =
	"<div id=\"footer\">\n"
	"<span class=\"right\">\n"
	"&copy; 2006-2019 suckless.org community\n"
	"| <a href=\"//ev.suckless.org/impressum\">Impressum</a>\n"
	"| <a href=\"//ev.suckless.org\">e.V.</a>\n"
	"</span>\n"
	"</div>\n";

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

int
stat_isdir(const char *f)
{
	struct stat s;

	if (stat(f, &s) == -1) {
		perror(f);
		return 0;
	}
	return (s.st_mode & S_IFMT) == S_IFDIR;
}

int
stat_isfile(const char *f)
{
	struct stat s;

	if (stat(f, &s) == -1) {
		perror(f);
		return 0;
	}
	return (s.st_mode & S_IFMT) == S_IFREG;
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
oneline(char *buf, size_t bufsiz, char const *path)
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
	const char *from = "_-", *to = "  ", *s;

	for (; *name; ++name) {
		if ((s = strchr(from, *name)) != NULL)
			putchar(to[s - from]);
		else
			putchar(*name);
	}
}

void
subdir(char *newdir, size_t siz, char *base, char *add)
{
	*newdir = '\0';
	if (base) {
		strncat(newdir, base, siz - 1); newdir[siz - 1] = '\0';
		strncat(newdir, "/", siz - 1); newdir[siz - 1] = '\0';
	}
	strncat(newdir, add, siz - 1); newdir[siz - 1] = '\0';
}

void
print_header(void)
{
	char title[TITLE_MAX];

	if (oneline(title, sizeof title, ".title"))
		printf(html_header, title, title);
	else
		printf(html_header, TITLE_DEFAULT, TITLE_DEFAULT);
}

void
print_nav_bar(char *domain)
{
	struct domain *d;

	puts("<div id=\"menu\">");
	for (d = domain_list; d->dir; ++d) {
		fputs("\t<a ", stdout);
		if (strcmp(domain, d->dir) == 0)
			fputs("class=\"thisSite\" ", stdout);
		printf("href=\"//%s/\">%s</a>\n", d->dir, d->label);
	}
	fputs(html_nav_bar, stdout);
	puts("</div>");
}

int
qsort_strcmp(const void *a, const void *b)
{
	return strcmp((const char *)a, (const char *)b);
}

void
menu_panel(char *domain, char *page, char *this, int depth)
{
	DIR *dp;
	struct dirent *de;
	char newdir[PATH_MAX];
	char *d_list[DIR_MAX];
	char **d;
	size_t d_len;
	int i;

	if ((dp = opendir(this ? this : ".")) == NULL)
		die_perror("opendir: %s", this ? this : ".");

	d_len = 0;
	while (d_len + 1 < LEN(d_list) && (de = readdir(dp)))
		d_list[d_len++] = de->d_name;
	d_list[d_len] = NULL;

	qsort(d_list, d_len, sizeof *d_list, qsort_strcmp);

	for (d = d_list; *d != NULL; ++d) {
		if (**d == '.')
			continue;
		subdir(newdir, sizeof newdir, this, *d);
		if (!stat_isdir(newdir))
			continue;

		for (i = 0; i < depth + 1; ++i)
			fputs("\t", stdout);
		fputs("<li><a", stdout);
		if (page && !strncmp(newdir, page, strlen(newdir)))
			fputs(" class=\"thisPage\"", stdout);
		printf(" href=\"//%s/%s/\">", domain, newdir);
		print_name(*d);
		fputs("/</a>", stdout);
		if (page && !strncmp(newdir, page, strlen(newdir))) {
			fputs("\n", stdout);
			for (i = 0; i < depth + 2; ++i)
				fputs("\t", stdout);
			/* TODO: empty <ul></ul> is printed for subitems */
			puts("<ul>");
			menu_panel(domain, page, newdir, depth + 1);
			for (i = 0; i < depth + 2; ++i)
				fputs("\t", stdout);
			fputs("</ul>\n", stdout);
			for (i = 0; i < depth + 1; ++i)
				fputs("\t", stdout);
		}
		puts("</li>");
	}
	closedir(dp);
}

void
print_menu_panel(char *domain, char *page)
{
	fputs("<div id=\"nav\">\n\t<ul>\n\t<li><a", stdout);
	if (!page)
		fputs(" class=\"thisPage\"", stdout);
	puts(" href=\"/\">about</a></li>");
	menu_panel(domain, page, NULL, 0);
	puts("\t</ul>");
	puts("</div>");
}

void
print_content(char *domain, char *page)
{
	char index[PATH_MAX];
	char *argv[] = { CONVERTER, index, NULL };

	subdir(index, sizeof index, page, "index.md");

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
